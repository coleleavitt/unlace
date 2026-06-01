__int64 __fastcall sub_225E590(__int64 a1)
{
  __int64 v2; // r15
  unsigned int v3; // eax
  unsigned int v4; // r14d
  __m128i *v5; // rdi
  __int64 v7; // rax
  int v8; // ecx
  _BYTE *v9; // rsi
  __int64 v10; // rdx
  __int64 v11; // rax
  __m128i *v12; // rdi
  int v13; // [rsp+Ch] [rbp-BCh]
  __int64 v14; // [rsp+10h] [rbp-B8h] BYREF
  volatile signed __int32 *v15; // [rsp+18h] [rbp-B0h]
  char v16; // [rsp+20h] [rbp-A8h]
  __m128i *v17; // [rsp+30h] [rbp-98h] BYREF
  __int64 v18; // [rsp+38h] [rbp-90h]
  __m128i v19; // [rsp+40h] [rbp-88h] BYREF
  void *v20; // [rsp+50h] [rbp-78h] BYREF
  __int64 v21; // [rsp+58h] [rbp-70h]
  __m128i v22; // [rsp+60h] [rbp-68h] BYREF
  int v23; // [rsp+70h] [rbp-58h]
  int v24; // [rsp+74h] [rbp-54h]
  int v25; // [rsp+78h] [rbp-50h]
  char v26; // [rsp+80h] [rbp-48h]

  v2 = a1 + 8;
  v3 = sub_228C920(*(_QWORD *)(a1 + 48));
  v14 = 0;
  v4 = v3;
  v16 = 1;
  v15 = nullptr;
  if ( sub_12E96C0((__int64 *)(a1 + 48), &v14) )
  {
    v24 = 0;
    v22.m128i_i8[0] = 0;
    v20 = &v22;
    v21 = 0;
    v23 = 9;
    sub_A0AAD0(v2, &v20);
    v5 = (__m128i *)v20;
    *(_DWORD *)(a1 + 40) = v23;
    if ( v5 == &v22 )
      goto LABEL_4;
    goto LABEL_3;
  }
  v7 = *(_QWORD *)(a1 + 48);
  v8 = *(_DWORD *)(v7 + 40);
  if ( v8 == 9 )
  {
    sub_228CE30(&v20, v7 + 8);
    v8 = 9;
    if ( (v26 & 1) == 0 )
      v8 = v25;
    v7 = *(_QWORD *)(a1 + 48);
  }
  v9 = *(_BYTE **)(v7 + 8);
  v13 = v8;
  v10 = (__int64)&v9[*(_QWORD *)(v7 + 16)];
  v17 = &v19;
  sub_2259C30(&v17, v9, v10);
  v20 = &v22;
  if ( v17 == &v19 )
  {
    v22 = _mm_load_si128(&v19);
  }
  else
  {
    v20 = v17;
    v22.m128i_i64[0] = v19.m128i_i64[0];
  }
  v11 = v18;
  v19.m128i_i8[0] = 0;
  v18 = 0;
  v21 = v11;
  v17 = &v19;
  v23 = v13;
  sub_A0AAD0(v2, &v20);
  v12 = (__m128i *)v20;
  *(_DWORD *)(a1 + 40) = v23;
  if ( v12 != &v22 )
    operator delete(v12);
  v5 = v17;
  if ( v17 != &v19 )
LABEL_3:
    operator delete(v5);
LABEL_4:
  if ( v15 )
    sub_4343A0(v15);
  return v4;
}
