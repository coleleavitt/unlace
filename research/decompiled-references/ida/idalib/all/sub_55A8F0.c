__int64 __fastcall sub_55A8F0(__int64 a1, __int64 a2, _QWORD *a3)
{
  const char *v3; // rax
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // r14
  __int64 v9; // rsi
  unsigned __int64 v10; // r15
  size_t v11; // r13
  __int64 v12; // r12
  size_t v13; // r14
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 v16; // rax
  void *src; // [rsp+0h] [rbp-50h] BYREF
  __int128 v18; // [rsp+8h] [rbp-48h]
  unsigned __int64 v19; // [rsp+18h] [rbp-38h]

  v3 = haystack;
  v19 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a3[3] )
    v3 = (const char *)a3[2];
  print_tinfo(a1, 0, 0, 0, 2064, (_DWORD)a3 + 64, (__int64)v3, 0);
  if ( a3[9] )
  {
    src = nullptr;
    v18 = 0;
    value_repr_t__print_(a3 + 9, &src, 1);
    v6 = *(_QWORD *)(a1 + 8);
    v7 = 2;
    v8 = v6;
    if ( v6 )
    {
      v7 = v6 + 1;
      v9 = *(_QWORD *)a1;
      v8 = v6 - 1;
      if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v6 + 1) )
        goto LABEL_7;
    }
    else
    {
      v9 = *(_QWORD *)a1;
      if ( *(_QWORD *)(a1 + 16) >= 2u )
        goto LABEL_7;
    }
    v15 = qvector_reserve(a1, v9, v7, 1);
    *(_QWORD *)a1 = v15;
    v9 = v15;
LABEL_7:
    *(_QWORD *)(a1 + 8) = v7;
    *(_BYTE *)(v9 + v8) = 32;
    *(_BYTE *)(*(_QWORD *)a1 + v8 + 1) = 0;
    v10 = v18;
    if ( (_QWORD)v18 )
    {
      v11 = v18 - 1;
      if ( (_QWORD)v18 != 1 )
      {
        v12 = *(_QWORD *)(a1 + 8);
        v13 = v18 - 1;
        if ( v12 )
        {
          --v12;
          v13 = v11 + v12;
          v10 = v18 + v12;
        }
        v14 = *(_QWORD *)a1;
        if ( *(_QWORD *)(a1 + 16) < v10 )
        {
          v16 = qvector_reserve(a1, v14, v10, 1);
          *(_QWORD *)a1 = v16;
          v14 = v16;
        }
        *(_QWORD *)(a1 + 8) = v10;
        *(_BYTE *)(v14 + v13) = 0;
        memcpy((void *)(v12 + *(_QWORD *)a1), src, v11);
      }
    }
    if ( src )
    {
      *(_QWORD *)&v18 = 0;
      qfree(src);
    }
  }
  return a1;
}
