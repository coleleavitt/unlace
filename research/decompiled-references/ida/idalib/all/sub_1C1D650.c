__int64 __fastcall sub_1C1D650(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __m128 a7,
        __m128 a8)
{
  char v8; // r12
  __int64 v10; // rax
  unsigned __int64 v11; // rsi
  _QWORD *v12; // r8
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned __int16 *v15; // rbp
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // r12
  unsigned __int64 v23; // r13
  _QWORD *v24; // rcx
  __int64 v25; // rax
  _QWORD *v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33[7]; // [rsp+0h] [rbp-38h] BYREF

  v8 = a4;
  v10 = *(_QWORD *)(a1 + 120);
  if ( v10 )
    goto LABEL_2;
  if ( !(unsigned __int8)sub_1C1AC60((_QWORD *)a1, a2, a7, a8, a3, a4, a5, a6) )
    return 1;
  v10 = *(_QWORD *)(a1 + 120);
  if ( v10 )
  {
LABEL_2:
    sub_18F5260(*(_QWORD *)(a1 + 8), v10, (int *)(a1 + 20), 1u, 0, 0, (__m128i)a7, *(double *)a8.m128_u64, 0, 0, 0);
    v10 = *(_QWORD *)(a1 + 120);
  }
  v11 = *(_QWORD *)(a1 + 88);
  v12 = *(_QWORD **)(a1 + 128);
  v13 = *(_QWORD *)(v11 + 8);
  v33[1] = *(_QWORD *)(a1 + 96);
  v14 = *(_QWORD *)(a1 + 8);
  v33[0] = a2;
  v15 = sub_19E1580(*(__int64 **)(v14 + 736), v11, v13, *(_DWORD *)(a1 + 20), v12, v10, a7, a8, v33, 2);
  if ( v15 != (unsigned __int16 *)((char *)&dword_0 + 1) )
  {
    if ( v8 )
    {
      v17 = sub_BFB900((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFELL);
      v22 = *(_QWORD *)(v17 + 48);
      v23 = v17;
      if ( (*(_BYTE *)(v22 + 1) & 6) != 0
        || (v26 = sub_F63270(*(_QWORD *)(*(_QWORD *)(v22 + 8) & 0xFFFFFFFFFFFFFFF0LL), v11, v18, v19, v20, v21)) == nullptr
        || sub_B9E190((__int64)v26, v11, v27, v28, v29, v30) )
      {
        if ( (*(_WORD *)v22 & 0x1FF) == 0x1A )
        {
          v24 = *(_QWORD **)(a1 + 32);
          LODWORD(v25) = 0;
          if ( v22 != *v24 )
          {
            do
              v25 = (unsigned int)(v25 + 1);
            while ( v22 != v24[v25] );
          }
          *(_DWORD *)(a1 + 16) = v25;
          *(_BYTE *)(v22 + 2) &= ~8u;
        }
        else
        {
          v22 = sub_1C160F0(a1, v22);
          v31 = *(unsigned int *)(a1 + 40);
          *(_DWORD *)(a1 + 16) = v31 - 1;
          v32 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v31 - 8);
          if ( (*(_WORD *)v32 & 0x1FF) == 0x1A )
            *(_BYTE *)(v32 + 2) &= ~8u;
        }
        *(_QWORD *)(v23 + 48) = v22;
      }
    }
  }
  return (__int64)v15;
}
