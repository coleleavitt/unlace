__int64 __fastcall sub_13C9570(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, char a6)
{
  __int64 v6; // rax
  __int64 v7; // r12
  __int64 v8; // rbp
  __int64 v9; // r9
  _BYTE *v10; // r15
  unsigned __int8 v11; // al
  char v12; // dl
  unsigned __int8 v13; // r14
  __int64 result; // rax
  __int64 v15; // rax
  char v16; // dl
  void *v17; // rdi
  __int64 v18; // [rsp+8h] [rbp-1D0h]
  _QWORD *v23; // [rsp+38h] [rbp-1A0h]
  __int64 v24; // [rsp+40h] [rbp-198h] BYREF
  __int64 v25; // [rsp+48h] [rbp-190h]
  const char *v26; // [rsp+50h] [rbp-188h]
  __int16 v27; // [rsp+60h] [rbp-178h]
  _BYTE v28[32]; // [rsp+70h] [rbp-168h] BYREF
  __int16 v29; // [rsp+90h] [rbp-148h]
  _BYTE v30[32]; // [rsp+A0h] [rbp-138h] BYREF
  __int16 v31; // [rsp+C0h] [rbp-118h]
  __int64 v32[4]; // [rsp+D0h] [rbp-108h] BYREF
  __int16 v33; // [rsp+F0h] [rbp-E8h]
  void *ptr; // [rsp+100h] [rbp-D8h] BYREF
  __m128i si128; // [rsp+108h] [rbp-D0h]
  _BYTE v36[192]; // [rsp+118h] [rbp-C0h] BYREF

  v6 = a1[6];
  v7 = (a1[7] - v6) >> 4;
  if ( !v7 )
    return 0;
  v8 = 0;
  while ( 1 )
  {
    v9 = 16 * v8;
    v10 = (_BYTE *)(v6 + 16 * v8);
    v11 = v10[8];
    v12 = (v11 >> 3) & 3;
    if ( v12 == 1 )
    {
      ptr = v36;
      si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
      sub_A1FE50(&ptr, (_BYTE *)(*(_QWORD *)v10 + 32LL), (_BYTE *)(*(_QWORD *)v10 + 32LL + **(_QWORD **)v10));
      v33 = 257;
      v24 = a4;
      v31 = 257;
      v25 = a5;
      v29 = 257;
      v27 = 773;
      v26 = ".framework";
      sub_228A3B0(&ptr, &v24, v28, v30, v32);
      sub_FD9440((__int64)v32, a1[5], (char *)ptr, si128.m128i_u64[0], 1);
      v15 = sub_A05D80(v32);
      if ( v16 )
      {
        v23 = (_QWORD *)v15;
        sub_A04D70(v32);
        if ( v23 )
        {
          result = sub_13C83B0((__int64)a1, a2, a3, v23, (v10[8] & 7) != 0, v9);
          if ( result )
          {
            v17 = ptr;
            if ( ptr == v36 )
              return result;
            goto LABEL_27;
          }
        }
      }
      else
      {
        sub_A04D70(v32);
      }
      if ( ptr != v36 )
        free(ptr);
      v11 = v10[8];
      v12 = (v11 >> 3) & 3;
    }
    if ( v12 )
      goto LABEL_15;
    v13 = (v11 & 7) != 0;
    if ( (unsigned int)sub_13C7770((__int64)a1, *(_QWORD **)v10, v13, 0, a5, v9) == 1 )
    {
      result = sub_14075F0(a1 + 79, a2, a3);
      if ( result )
        return result;
    }
    ptr = v36;
    si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D40);
    if ( (v10[8] & 0x18) != 0 )
      BUG();
    sub_A1FE50(&ptr, (_BYTE *)(*(_QWORD *)v10 + 32LL), (_BYTE *)(*(_QWORD *)v10 + 32LL + **(_QWORD **)v10));
    v33 = 257;
    v31 = 257;
    v24 = a2;
    v29 = 257;
    v27 = 261;
    v25 = a3;
    sub_228A3B0(&ptr, &v24, v28, v30, v32);
    if ( (unsigned int)sub_13C7A10((__int64)a1, (char *)ptr, si128.m128i_u64[0], v13, 0) == 1 )
    {
      result = sub_14075F0(a1 + 79, a2, a3);
      if ( result )
        break;
    }
    if ( (*(_BYTE *)(*a1 + 626) & 0x10) != 0 && (v10[8] & 0x20) == 0 )
    {
      if ( a6 )
        sub_13C8C60(a1, (__int64)v10);
      result = sub_14075F0(a1 + 79, a2, a3);
      if ( result )
        break;
    }
    if ( ptr != v36 )
      free(ptr);
LABEL_15:
    if ( v7 == ++v8 )
      return 0;
    v6 = a1[6];
  }
  v17 = ptr;
  if ( ptr != v36 )
  {
LABEL_27:
    v18 = result;
    free(v17);
    return v18;
  }
  return result;
}
