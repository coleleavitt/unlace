__int64 __fastcall sub_154F090(
        __m128i *a1,
        int a2,
        int a3,
        int a4,
        __int32 *a5,
        __int64 *a6,
        __m128i a7,
        __m128 a8,
        unsigned int a9)
{
  __int64 v9; // rax
  __int64 v10; // r10
  __int64 v11; // r12
  _BYTE *v12; // r13
  _BYTE *v13; // rbx
  _BYTE *v14; // rdi
  int v16; // [rsp+8h] [rbp-1B8h] BYREF
  __int64 v17; // [rsp+10h] [rbp-1B0h]
  int v18; // [rsp+18h] [rbp-1A8h]
  int v19; // [rsp+1Ch] [rbp-1A4h]
  char v20; // [rsp+20h] [rbp-1A0h]
  __int64 v21; // [rsp+28h] [rbp-198h] BYREF
  __int64 v22; // [rsp+30h] [rbp-190h] BYREF
  _BYTE *v23; // [rsp+38h] [rbp-188h]
  __int64 v24; // [rsp+40h] [rbp-180h]
  _BYTE v25[320]; // [rsp+48h] [rbp-178h] BYREF
  __int64 v26; // [rsp+188h] [rbp-38h]
  char v27; // [rsp+190h] [rbp-30h]

  v9 = a1[6].m128i_i64[0];
  v18 = a3;
  v19 = a4;
  v23 = v25;
  v10 = *(_QWORD *)(v9 + 512);
  v21 = v9;
  v22 = 0;
  v24 = 0x400000000LL;
  v26 = v10;
  v27 = 0;
  v16 = 3;
  v17 = 0;
  v20 = 0;
  *(_QWORD *)(v9 + 512) = &v22;
  v11 = sub_154D400(a1, a2, (__int64)&v16, (__int64)&v21, a5, a6, a7, a8, a9);
  if ( !v27 )
  {
    sub_1818070(v21, v26, 0);
    v27 = 1;
  }
  v12 = v23;
  v13 = &v23[80 * (unsigned int)v24];
  if ( v23 != v13 )
  {
    do
    {
      v14 = v12;
      v12 += 80;
      sub_15B6850(v14);
    }
    while ( v13 != v12 );
    v13 = v23;
  }
  if ( v13 != v25 )
    free(v13);
  return v11;
}
