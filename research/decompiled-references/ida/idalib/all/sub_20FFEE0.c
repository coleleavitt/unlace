__int64 __fastcall sub_20FFEE0(__int64 a1, __int64 a2, unsigned int a3, __int64 *a4, __int64 *a5, char a6, __int128 a7)
{
  __int64 v8; // r13
  unsigned __int64 v11; // rax
  __int64 *v12; // r15
  __int64 *v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdx
  _DWORD *v16; // rax
  _DWORD *v17; // r9
  __int64 v18; // r13
  __int64 result; // rax
  __int64 v20; // rdi
  int v21; // r15d
  __int64 v22; // rax
  __m128i v23; // xmm0
  __int64 v24; // rdx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 *v27; // [rsp+8h] [rbp-90h]
  _QWORD v28[4]; // [rsp+10h] [rbp-88h] BYREF
  _QWORD v29[2]; // [rsp+30h] [rbp-68h] BYREF
  int v30; // [rsp+40h] [rbp-58h]
  __int16 v31; // [rsp+50h] [rbp-48h]

  v8 = a3 - 1;
  sub_20FFD30((__int64)v28, a1, a4, a5);
  v11 = *(unsigned int *)(a1 + 72);
  v12 = (__int64 *)v28[1];
  v13 = (__int64 *)v28[0];
  if ( (unsigned int)v8 < (unsigned int)v11 || (v14 = a3, a3 == v11) )
  {
LABEL_13:
    v15 = *(_QWORD *)(a1 + 64);
    if ( !v12 )
      goto LABEL_10;
    goto LABEL_14;
  }
  if ( a3 < v11 )
  {
    *(_DWORD *)(a1 + 72) = a3;
    goto LABEL_13;
  }
  if ( a3 > (unsigned __int64)*(unsigned int *)(a1 + 76) )
  {
    v27 = (__int64 *)v28[0];
    sub_2237220(a1 + 64, a1 + 80, a3, 32);
    v11 = *(unsigned int *)(a1 + 72);
    v13 = v27;
    v14 = a3;
  }
  v15 = *(_QWORD *)(a1 + 64);
  v16 = (_DWORD *)(v15 + 32 * v11);
  v17 = (_DWORD *)(v15 + 32 * v14);
  if ( v16 != v17 )
  {
    do
    {
      *v16 = 0;
      v16 += 8;
      *((_BYTE *)v16 - 28) = 0;
      *((_BYTE *)v16 - 27) = 0;
      *((_QWORD *)v16 - 3) = 0;
      *((_QWORD *)v16 - 2) = 0;
      *((_QWORD *)v16 - 1) = 0;
    }
    while ( v17 != v16 );
    v15 = *(_QWORD *)(a1 + 64);
  }
  *(_DWORD *)(a1 + 72) = a3;
  if ( !v12 )
  {
LABEL_10:
    v18 = 32 * v8;
    result = 0;
    v13 = (__int64 *)"<stdin>";
    v12 = (_QWORD *)&byte_7;
    if ( *(_BYTE *)(v15 + v18 + 4) )
      return result;
LABEL_15:
    sub_20FFD30((__int64)v29, a1, v13, v12);
    v20 = *(_QWORD *)(a2 + 8);
    v21 = v30;
    v29[0] = "checksum_offset";
    v31 = 259;
    v22 = sub_21085E0(v20, v29, 0);
    v23 = _mm_loadu_si128((const __m128i *)&a7);
    v24 = v18 + *(_QWORD *)(a1 + 64);
    *(_QWORD *)(v24 + 24) = v22;
    v25 = *(_QWORD *)(a1 + 64);
    *(_DWORD *)v24 = v21;
    v26 = v18 + v25;
    *(_BYTE *)(v26 + 4) = 1;
    *(__m128i *)(v26 + 8) = v23;
    *(_BYTE *)(*(_QWORD *)(a1 + 64) + v18 + 5) = a6;
    return 1;
  }
LABEL_14:
  v18 = 32 * v8;
  result = 0;
  if ( !*(_BYTE *)(v15 + v18 + 4) )
    goto LABEL_15;
  return result;
}
