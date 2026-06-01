unsigned __int64 __fastcall sub_504990(__int64 *a1, _QWORD *a2, char a3, char a4)
{
  __int64 v7; // rdx
  __int64 v9; // rdx
  __int64 v10; // rsi
  size_t v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  __int64 v18; // rdx
  int v19; // eax
  void *v20; // rdi
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  _BYTE v25[10]; // [rsp+Eh] [rbp-3Ah] BYREF
  unsigned __int64 v26[6]; // [rsp+18h] [rbp-30h] BYREF

  v7 = *((unsigned int *)a1 + 29);
  v26[0] = __readfsqword(0x28u);
  if ( (_DWORD)v7 || (unsigned __int8)must_journal(a1, a2, v7) )
  {
    v9 = a1[1];
    v10 = *a1;
    a1[10] = v9;
    if ( a1[2] < (unsigned __int64)(v9 + 1) )
    {
      v24 = qvector_reserve(a1, v10, v9 + 1, 1);
      v9 = a1[1];
      *a1 = v24;
      v10 = v24;
    }
    *(_BYTE *)(v10 + v9) = 5;
    ++a1[1];
    v11 = pack_dq(v25, v26, *a2) - (_QWORD)v25;
    if ( v11 )
      sub_5039B0(a1, v25, v11);
    v12 = a1[1];
    v13 = *a1;
    if ( a1[2] < (unsigned __int64)(v12 + 1) )
    {
      v23 = qvector_reserve(a1, v13, v12 + 1, 1);
      *a1 = v23;
      v13 = v23;
      v12 = a1[1];
    }
    *(_BYTE *)(v13 + v12) = a4;
    v14 = a1[1];
    v15 = *a1;
    v16 = v14 + 1;
    v17 = v14 + 2;
    a1[1] = v16;
    if ( a1[2] < v17 )
    {
      v22 = qvector_reserve(a1, v15, v17, 1);
      *a1 = v22;
      v15 = v22;
      v16 = a1[1];
    }
    *(_BYTE *)(v15 + v16) = a3;
    v18 = a1[1] + 1;
    v19 = *((_DWORD *)a1 + 29);
    a1[1] = v18;
    if ( !v19 && v18 )
    {
      add_undo_record(*((unsigned int *)a1 + 28), *a1, v18);
      v20 = (void *)*a1;
      if ( *a1 )
      {
        a1[1] = 0;
        qfree(v20);
        *a1 = 0;
        a1[2] = 0;
      }
      a1[10] = -1;
    }
  }
  return v26[0] - __readfsqword(0x28u);
}
