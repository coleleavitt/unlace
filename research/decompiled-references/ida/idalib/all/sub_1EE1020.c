__int64 __fastcall sub_1EE1020(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 *v3; // r12
  __int64 v4; // rax
  char *v5; // rax
  int v6; // ebp
  int v7; // ecx
  char *v8; // rax
  int v9; // r13d
  unsigned __int64 v10; // rax
  int v11; // r8d
  unsigned int v12; // r13d
  char *v14; // r13
  __int64 v15; // rax
  size_t v16; // rax
  unsigned int v17; // eax
  __m128i v18; // xmm1
  __int64 v19; // rax
  bool v20; // zf
  __int64 v21; // rdx
  int v22; // [rsp+10h] [rbp-108h]
  int v23; // [rsp+14h] [rbp-104h]
  int v24; // [rsp+18h] [rbp-100h]
  int v25; // [rsp+1Ch] [rbp-FCh]
  unsigned __int64 v26; // [rsp+20h] [rbp-F8h]
  char *v27; // [rsp+38h] [rbp-E0h] BYREF
  __m128i v28[3]; // [rsp+40h] [rbp-D8h] BYREF
  __m128i v29; // [rsp+70h] [rbp-A8h] BYREF
  char *v30; // [rsp+80h] [rbp-98h]
  size_t v31; // [rsp+88h] [rbp-90h]
  char v32; // [rsp+90h] [rbp-88h]
  __m128i si128; // [rsp+A0h] [rbp-78h] BYREF
  char *v34; // [rsp+B0h] [rbp-68h]
  size_t v35; // [rsp+B8h] [rbp-60h]
  char v36; // [rsp+C0h] [rbp-58h]
  char *v37; // [rsp+C8h] [rbp-50h]
  int v38; // [rsp+D0h] [rbp-48h]
  __int64 *v39; // [rsp+D8h] [rbp-40h]

  v2 = *(_QWORD *)(a2 + 2584);
  if ( !v2 )
    return 0;
  v3 = (__int64 *)(v2 + 24);
  sub_1EAAD00(v28, v2 + 24, *(__int64 **)a1);
  si128 = _mm_load_si128(v28);
  v22 = sub_2287CD0(&si128, 16);
  v4 = *(unsigned int *)(*(_QWORD *)(v2 + 8) + 4LL * (v22 & (unsigned int)(*(_DWORD *)v2 - 1)));
  if ( !(_DWORD)v4 )
    return 0;
  v5 = (char *)(*(_QWORD *)(v2 + 16) + v4);
  v6 = 0;
  v27 = v5;
  v7 = *(unsigned __int16 *)v5;
  v8 = v5 + 2;
  v27 = v8;
  v23 = v7;
  if ( !v7 )
    return 0;
  while ( 1 )
  {
    v9 = *(_DWORD *)v8;
    v27 = v8 + 4;
    v10 = sub_1EA91E0(&v27);
    v11 = HIDWORD(v10) + v10;
    if ( v22 == v9 )
    {
      v24 = v10;
      v26 = HIDWORD(v10);
      v14 = v27 + 16;
      v15 = *((_QWORD *)v27 + 1);
      v25 = v11;
      v29.m128i_i64[0] = *(_QWORD *)v27;
      v29.m128i_i64[1] = v15;
      v16 = j__strlen(v27 + 16);
      v30 = v14;
      v31 = v16;
      v32 = 1;
      v17 = sub_1EC1F90(v3, (__int64)&v29, (__int64)v28);
      v11 = v25;
      v12 = v17;
      if ( (_BYTE)v17 )
        break;
    }
    v8 = &v27[v11];
    ++v6;
    v27 = v8;
    if ( v23 == v6 )
      return 0;
  }
  v18 = _mm_load_si128(&v29);
  v38 = v26;
  v39 = v3;
  v34 = v30;
  si128 = v18;
  v35 = v31;
  v37 = &v27[v24];
  v36 = v32;
  if ( v37 )
  {
    v19 = sub_1EE0AF0(v3, (__int64)&si128, (unsigned __int8 *)&v27[v24], v26);
    v20 = *(_BYTE *)(a1 + 24) == 0;
    *(_QWORD *)(a1 + 8) = v19;
    *(_QWORD *)(a1 + 16) = v21;
    if ( v20 )
      *(_BYTE *)(a1 + 24) = 1;
  }
  else
  {
    return 0;
  }
  return v12;
}
