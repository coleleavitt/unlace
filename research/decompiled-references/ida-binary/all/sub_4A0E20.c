__int64 __fastcall sub_4A0E20(
        __int64 a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        __m128 a5,
        double a6,
        double a7,
        __m128 a8,
        __m128 a9)
{
  __int64 v9; // r13
  __int64 v11; // rbp
  void *v13; // rdi
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __m128 v18; // xmm4
  __m128 v19; // xmm5
  __int64 v20; // rbp
  __int64 v21; // r15
  unsigned __int64 v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rsi
  __int64 v25; // rdi
  unsigned __int64 v26; // [rsp+8h] [rbp-50h] BYREF
  unsigned __int64 *v27[9]; // [rsp+10h] [rbp-48h] BYREF

  v9 = a1 + 2160;
  v27[1] = (unsigned __int64 *)__readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 2012) & 8) == 0 )
  {
    v11 = *(_QWORD *)(a1 + 2176);
    while ( v11 )
    {
      sub_49CFE0(*(_QWORD **)(v11 + 24));
      v13 = (void *)v11;
      v11 = *(_QWORD *)(v11 + 16);
      operator delete(v13, 0x30u);
    }
    v9 = a1 + 2160;
    *(_QWORD *)(a1 + 2176) = 0;
    *(_QWORD *)(a1 + 2184) = a1 + 2168;
    *(_QWORD *)(a1 + 2192) = a1 + 2168;
    *(_QWORD *)(a1 + 2200) = 0;
    v14 = sub_4A0DB0(a1);
    v20 = v14;
    if ( v14 )
    {
      v21 = 0;
      v9 = a1 + 2160;
      do
      {
        v22 = sub_4A0960(a1, v21, 0, a2, a3, a4, a5, v18, v19, a8, a9, v15, v16, v17);
        v26 = v22;
        if ( v22 != -1 )
        {
          v23 = *(_QWORD **)(a1 + 2176);
          v24 = (_QWORD *)(a1 + 2168);
          if ( !v23 )
            goto LABEL_15;
          do
          {
            while ( 1 )
            {
              v25 = v23[2];
              v15 = v23[3];
              if ( v23[4] < v22 )
                break;
              v24 = v23;
              v23 = (_QWORD *)v23[2];
              if ( !v25 )
                goto LABEL_13;
            }
            v23 = (_QWORD *)v23[3];
          }
          while ( v15 );
LABEL_13:
          if ( v24 == (_QWORD *)(a1 + 2168) || v22 < v24[4] )
          {
LABEL_15:
            v27[0] = &v26;
            v24 = sub_49B770((_QWORD *)(a1 + 2160), v24, v27);
          }
          v24[5] = v21;
        }
        ++v21;
      }
      while ( v20 != v21 );
    }
    *(_DWORD *)(a1 + 2012) |= 8u;
  }
  return v9;
}
