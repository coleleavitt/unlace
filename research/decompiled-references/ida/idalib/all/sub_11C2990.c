unsigned __int64 __fastcall sub_11C2990(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        unsigned __int64 a5,
        __int64 a6)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // rdx
  unsigned __int64 result; // rax
  _QWORD *v12; // r15
  _QWORD *v13; // rbx
  __int64 v14; // r13
  __int64 v15; // r13
  __int64 v16; // rax
  _QWORD *v17; // r15
  char v18; // al
  char *v19; // rax
  const char *v20; // rbx
  __int64 v21; // rdx
  char *v22; // rsi
  char *v23; // rsi
  _QWORD *v24; // [rsp+8h] [rbp-A0h] BYREF
  __int64 v25; // [rsp+10h] [rbp-98h]
  unsigned __int64 v26; // [rsp+18h] [rbp-90h]
  __int64 v27; // [rsp+20h] [rbp-88h]
  __m128 *v28; // [rsp+28h] [rbp-80h]
  _QWORD v29[2]; // [rsp+30h] [rbp-78h] BYREF
  __m128 v30; // [rsp+40h] [rbp-68h] BYREF
  unsigned __int64 v31; // [rsp+50h] [rbp-58h]
  __int64 v32; // [rsp+58h] [rbp-50h]
  __int16 v33; // [rsp+60h] [rbp-48h]

  v25 = a2;
  v30.m128_u64[0] = __PAIR64__(a4, a3);
  v26 = a5;
  v27 = a6;
  v28 = &v30;
  v8 = sub_21B6DA0(a1, &v30, 2);
  v9 = *(_QWORD *)(a1 + 8);
  v31 = __PAIR64__(a4, a3);
  v10 = (unsigned int)v8;
  result = HIDWORD(v8);
  v12 = (_QWORD *)(v9 + 8 * v10);
  v13 = (_QWORD *)(v9 + 8 * result);
  v24 = v13;
  v30 = _mm_loadh_ps((const double *)&v24);
  if ( v12 != v13 )
  {
    while ( 1 )
    {
      v14 = *v12;
      if ( *v12 )
      {
        if ( a3 )
        {
          result = sub_21B9810(*v12, a3);
          if ( (_BYTE)result )
            break;
          if ( a4 )
          {
            result = sub_21B9810(v14, a4);
            if ( (_BYTE)result )
              break;
          }
        }
      }
      v30.m128_u64[0] = (unsigned __int64)++v12;
      if ( v13 == v12 )
        return result;
    }
    v24 = v13;
    v31 = __PAIR64__(a4, a3);
    v30 = _mm_loadh_ps((const double *)&v24);
    if ( v13 != v12 )
    {
      do
      {
        v15 = *v12;
        v16 = *(_QWORD *)(*v12 + 16LL);
        if ( !v16 )
          v16 = *v12;
        v17 = v12 + 1;
        *(_BYTE *)(v16 + 44) |= 1u;
        v30.m128_u64[0] = (unsigned __int64)v17;
        if ( v17 == v13 )
          break;
        while ( 1 )
        {
          if ( *v17 )
          {
            v24 = (_QWORD *)*v17;
            if ( (unsigned __int8)sub_21B9810(v24, a3) || a4 && (unsigned __int8)sub_21B9810(v24, a4) )
              break;
          }
          v30.m128_u64[0] = (unsigned __int64)++v17;
          if ( v13 == v17 )
            goto LABEL_18;
        }
        v12 = (_QWORD *)v30.m128_u64[0];
      }
      while ( v13 != (_QWORD *)v30.m128_u64[0] );
LABEL_18:
      v18 = sub_21B9810(v15, a3);
      v33 = 1283;
      if ( v18 )
        v19 = "+";
      else
        v19 = "-";
      v30.m128_u64[0] = (unsigned __int64)v19;
      v31 = v26;
      v32 = v27;
      v20 = (const char *)sub_10DA6C0(a1, (__int64)v28);
      v29[0] = v20;
      result = 0;
      if ( v20 )
        result = j__strlen(v20);
      v21 = v25;
      v29[1] = result;
      v22 = *(char **)(v25 + 8);
      if ( v22 == *(char **)(v25 + 16) )
      {
        return sub_1075D80(v25, v22, v29);
      }
      else
      {
        *(_QWORD *)v22 = v20;
        v23 = v22 + 16;
        *((_QWORD *)v23 - 1) = result;
        *(_QWORD *)(v21 + 8) = v23;
      }
    }
  }
  return result;
}
