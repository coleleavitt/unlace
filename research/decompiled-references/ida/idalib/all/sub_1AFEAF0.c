__int64 __fastcall sub_1AFEAF0(_QWORD *a1, unsigned int a2, __int64 a3, const void *a4, size_t a5, __int64 a6)
{
  __int64 v8; // r14
  __int64 v9; // r15
  _QWORD *v10; // rax
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r12
  __int64 v15; // rdx
  __int64 *v16; // rbx
  unsigned __int64 v17; // rbp
  bool v18; // zf
  __int64 v20; // rsi
  __int64 v21; // [rsp-8h] [rbp-40h]

  v8 = a1[68];
  v9 = sub_6F3470(a1[30] + 552LL, a4, a5);
  v10 = sub_A81910((_QWORD *)a1[31], a3, a2);
  v14 = sub_B731A0(a1[31], v8, a2, a2, v9, a3, (__int64)v10, 0);
  v15 = v21;
  if ( a6 )
  {
    v16 = *(__int64 **)a6;
    v17 = *(_QWORD *)a6 + 8LL * *(unsigned int *)(a6 + 8);
    v18 = v17 == *(_QWORD *)a6;
    if ( v17 <= *(_QWORD *)a6 )
      goto LABEL_12;
    while ( 1 )
    {
      v15 = (__int64)v16;
      while ( 1 )
      {
        v11 = *(_QWORD *)v15;
        if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) == 126 )
          break;
        v15 += 8;
        if ( v17 == v15 )
          goto LABEL_6;
      }
      if ( v17 == v15 )
        break;
      while ( 1 )
      {
LABEL_8:
        v20 = *v16;
        if ( *(_WORD *)(*v16 + 36) != 126 )
        {
          v15 = (__int64)(v16 + 1);
          do
          {
            v20 = *(_QWORD *)v15;
            v16 = (__int64 *)v15;
            v15 += 8;
          }
          while ( *(_WORD *)(v20 + 36) != 126 );
        }
        ++v16;
        sub_B8CC60(v14, v20, v15, v11, v12, v13);
        v18 = v17 == (_QWORD)v16;
        if ( v17 > (unsigned __int64)v16 )
          break;
LABEL_12:
        if ( v18 )
          goto LABEL_6;
        if ( *(_WORD *)(*(_QWORD *)v17 + 36LL) != 126 )
        {
          v15 = v17 + 8;
          while ( v16 != (__int64 *)v15 )
          {
            v11 = *(_QWORD *)v15;
            v15 += 8;
            if ( *(_WORD *)(v11 + 36) == 126 )
              goto LABEL_8;
          }
          goto LABEL_6;
        }
      }
    }
  }
LABEL_6:
  *(_BYTE *)(v14 + 29) |= 2u;
  return v14;
}
