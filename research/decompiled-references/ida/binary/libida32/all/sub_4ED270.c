void __fastcall sub_4ED270(__int64 *a1, __int64 a2, __int64 a3, unsigned int a4, unsigned int a5, unsigned int a6)
{
  char v9; // bp
  __int64 v10; // rbx
  __int64 v11; // rdx
  __int64 v13; // rdx
  __int64 v14; // rsi
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  __int64 v18; // rdx
  void *v19; // rdi
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int **v23; // rax
  __int64 v24; // rax
  _BYTE v25[5]; // [rsp+13h] [rbp-45h] BYREF
  _QWORD v26[8]; // [rsp+18h] [rbp-40h] BYREF

  v9 = a2;
  v10 = a4;
  v11 = *((unsigned int *)a1 + 29);
  v26[0] = __readfsqword(0x28u);
  if ( (_DWORD)v11 || (unsigned __int8)must_journal(a1, a2, v11) )
  {
    v13 = a1[1];
    v14 = *a1;
    a1[10] = v13;
    if ( a1[2] < (unsigned __int64)(v13 + 1) )
    {
      v24 = qvector_reserve(a1, v14, v13 + 1, 1);
      v13 = a1[1];
      *a1 = v24;
      v14 = v24;
    }
    *(_BYTE *)(v14 + v13) = v9;
    ++a1[1];
    v15 = pack_dd(v25, v26, (unsigned int)v10) - (_QWORD)v25;
    if ( v15 )
      sub_4EC4D0(a1, v25, v15);
    v16 = pack_dd(v25, v26, a5) - (_QWORD)v25;
    if ( v16 )
      sub_4EC4D0(a1, v25, v16);
    v17 = pack_dd(v25, v26, a6) - (_QWORD)v25;
    if ( v17 )
      sub_4EC4D0(a1, v25, v17);
    if ( !*((_DWORD *)a1 + 29) )
    {
      v18 = a1[1];
      if ( v18 )
      {
        add_undo_record(*((unsigned int *)a1 + 28), *a1, v18);
        v19 = (void *)*a1;
        if ( *a1 )
        {
          a1[1] = 0;
          qfree(v19);
          *a1 = 0;
          a1[2] = 0;
        }
        a1[10] = -1;
      }
    }
    v20 = *(__int64 **)(a3 + 24);
    v21 = v20[1];
    v22 = *v20;
    if ( (unsigned int)v10 >= (unsigned int)v21 )
      v23 = (unsigned int **)(16 * v21 + v22);
    else
      v23 = (unsigned int **)(16 * v10 + v22);
    sub_4EC340(a1 + 3, **v23);
  }
}

