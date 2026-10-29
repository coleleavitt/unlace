__int64 __fastcall sub_1115A90(__int64 a1, __int64 a2, _DWORD *a3, _QWORD *a4)
{
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  _QWORD *v7; // rbx
  _QWORD *v8; // r14
  __int64 v9; // r15
  __int64 v10; // rax
  const char *v11; // rdi
  size_t v12; // rax
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rdi
  _BYTE *v16; // rdi
  unsigned __int64 v17; // rdx
  __int64 v18; // rbx
  _BYTE *v19; // rax
  size_t v20; // rdx
  unsigned __int64 v21; // rax
  unsigned __int16 *v22; // rdx
  int v24; // eax
  int v25; // edx
  unsigned int v26; // ecx
  bool v27; // si
  char *v28; // rsi
  _BYTE *v29; // rax
  __int64 v30; // rdx
  size_t v31; // rdx
  _QWORD *v32; // [rsp+0h] [rbp-B8h] BYREF
  _DWORD *v33; // [rsp+8h] [rbp-B0h]
  const char *v34; // [rsp+10h] [rbp-A8h] BYREF
  unsigned __int64 v35; // [rsp+18h] [rbp-A0h]
  void *dest; // [rsp+20h] [rbp-98h] BYREF
  __m128 v37; // [rsp+28h] [rbp-90h] BYREF
  const char *v38; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int64 v39; // [rsp+48h] [rbp-70h]
  const char *v40; // [rsp+50h] [rbp-68h]
  unsigned __int64 v41; // [rsp+58h] [rbp-60h]
  void *src; // [rsp+60h] [rbp-58h] BYREF
  size_t n; // [rsp+68h] [rbp-50h]
  _QWORD v44[9]; // [rsp+70h] [rbp-48h] BYREF

  v33 = a3;
  v32 = a4;
  dest = &v37.m128_u16[4];
  v37.m128_u64[0] = 0;
  v37.m128_i8[8] = 0;
  LODWORD(src) = 2323;
  v5 = sub_2193060(a2, &src, 1);
  v6 = *(_QWORD *)(a2 + 8);
  v7 = (_QWORD *)(v6 + 8LL * (unsigned int)v5);
  v8 = (_QWORD *)(v6 + 8 * HIDWORD(v5));
  if ( v7 == v8 )
    goto LABEL_5;
  while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2323) )
  {
    if ( v8 == ++v7 )
      goto LABEL_5;
  }
  if ( v8 == v7 )
  {
LABEL_5:
    *v32 = 0;
    goto LABEL_27;
  }
  do
  {
    v9 = *v7;
    v10 = *(_QWORD *)(*v7 + 16LL);
    if ( !v10 )
      v10 = *v7;
    ++v7;
    *(_BYTE *)(v10 + 44) |= 1u;
    if ( v7 == v8 )
      break;
    while ( !*v7 || !(unsigned __int8)sub_2195AD0(*v7, 2323) )
    {
      if ( v8 == ++v7 )
        goto LABEL_13;
    }
  }
  while ( v8 != v7 );
LABEL_13:
  *v32 = v9;
  v11 = **(const char ***)(v9 + 48);
  v12 = 0;
  v34 = v11;
  if ( v11 )
    v12 = strlen(v11);
  v35 = v12;
  v13 = sub_2222D70(&v34, "+", 1, 0);
  if ( v13 == -1 )
  {
    v40 = nullptr;
    v41 = 0;
    v38 = v34;
    v39 = v35;
  }
  else
  {
    v14 = v13 + 1;
    if ( v13 + 1 > v35 )
    {
      v14 = v35;
      v15 = 0;
    }
    else
    {
      v15 = v35 - v14;
    }
    v41 = v15;
    if ( v13 > v35 )
      v13 = v35;
    v38 = v34;
    v39 = v13;
    v40 = &v34[v14];
  }
  sub_2222710(&src, &v38);
  v16 = dest;
  if ( src == v44 )
  {
    v31 = n;
    if ( n )
    {
      if ( n == 1 )
        *(_BYTE *)dest = v44[0];
      else
        memcpy(dest, src, n);
      v31 = n;
      v16 = dest;
    }
    v37.m128_u64[0] = v31;
    v16[v31] = 0;
    v16 = src;
    goto LABEL_25;
  }
  if ( dest == &v37.m128_u16[4] )
  {
    v32 = (_QWORD *)v44[0];
    dest = src;
    v37 = _mm_loadh_ps((const double *)&v32);
  }
  else
  {
    v32 = (_QWORD *)v44[0];
    v17 = v37.m128_u64[1];
    dest = src;
    v37 = _mm_loadh_ps((const double *)&v32);
    if ( v16 )
    {
      src = v16;
      v44[0] = v17;
      goto LABEL_25;
    }
  }
  v16 = v44;
  src = v44;
LABEL_25:
  n = 0;
  *v16 = 0;
  if ( src != v44 )
    operator delete(src);
LABEL_27:
  v18 = a1 + 16;
  v19 = (_BYTE *)sub_2274880(dest, v37.m128_u64[0]);
  sub_978080(&dest, 0, v37.m128_u64[0], v19, v20);
  if ( !sub_990D60((__int64)&dest, "native") )
  {
    v29 = (_BYTE *)sub_227F670();
    *(_QWORD *)a1 = v18;
    sub_11144E0((_QWORD *)a1, v29, (__int64)&v29[v30]);
    goto LABEL_46;
  }
  v21 = v37.m128_u64[0];
  if ( v37.m128_u64[0] )
  {
    v22 = (unsigned __int16 *)dest;
    *(_QWORD *)a1 = v18;
    if ( v22 == &v37.m128_u16[4] )
    {
      *(__m128i *)(a1 + 16) = _mm_load_si128((const __m128i *)&v37.m128_u16[4]);
    }
    else
    {
      *(_QWORD *)a1 = v22;
      *(_QWORD *)(a1 + 16) = v37.m128_u64[1];
    }
    *(_QWORD *)(a1 + 8) = v21;
    return a1;
  }
  v24 = v33[11];
  if ( (v24 & 0xFFFFFFF7) != 1 )
  {
    v26 = v24 - 27;
    v27 = v24 == 5;
    if ( (unsigned int)(v24 - 27) > 4 && v24 != 5 )
      goto LABEL_57;
    LODWORD(v32) = v33[12];
    if ( (unsigned int)((_DWORD)v32 - 31) <= 1 )
      goto LABEL_37;
    if ( v24 != 31 )
    {
LABEL_57:
      v25 = v33[8];
      if ( v25 != 3 )
        goto LABEL_40;
      if ( v33[9] != 35 )
      {
        if ( v26 <= 3 || v24 == 5 )
        {
          v28 = "apple-a7";
LABEL_44:
          *(_QWORD *)a1 = v18;
          sub_11144E0((_QWORD *)a1, v28, (__int64)(v28 + 8));
          goto LABEL_46;
        }
        goto LABEL_61;
      }
    }
LABEL_67:
    *(_QWORD *)a1 = v18;
    strcpy((char *)(a1 + 16), "apple-a12");
    *(_QWORD *)(a1 + 8) = 9;
    goto LABEL_46;
  }
LABEL_37:
  v25 = v33[8];
  if ( v25 != 3 )
  {
    if ( v24 != 31 )
    {
      v26 = v24 - 27;
      v27 = v24 == 5;
LABEL_40:
      if ( v27 || (v24 & 0xFFFFFFF7) == 1 || v26 <= 3 )
      {
        v28 = "apple-s4";
        if ( v25 != 5 )
          v28 = "apple-a7";
        goto LABEL_44;
      }
LABEL_61:
      *(_QWORD *)a1 = v18;
      *(_DWORD *)(a1 + 16) = 1701733735;
      *(_WORD *)(a1 + 20) = 26994;
      *(_BYTE *)(a1 + 22) = 99;
      *(_QWORD *)(a1 + 8) = 7;
      *(_BYTE *)(a1 + 23) = 0;
      goto LABEL_46;
    }
    goto LABEL_67;
  }
  *(_QWORD *)a1 = v18;
  strcpy((char *)(a1 + 16), "apple-m1");
  *(_QWORD *)(a1 + 8) = 8;
LABEL_46:
  if ( dest != &v37.m128_u16[4] )
    operator delete(dest);
  return a1;
}

