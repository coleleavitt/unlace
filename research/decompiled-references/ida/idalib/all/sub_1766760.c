__int64 __fastcall sub_1766760(__int64 *a1, __int64 a2)
{
  unsigned __int16 *v2; // r13
  unsigned __int16 *v3; // r15
  __int64 v4; // rax
  __int64 result; // rax
  __int64 v6; // rbp
  unsigned __int64 *v7; // r14
  __m128 v8; // xmm0
  unsigned __int64 v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rdx
  char v14; // cl
  __int64 v15; // rax
  __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  __int64 v18; // r12
  unsigned __int64 v19; // rbp
  int v20; // r13d
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  int v24; // eax
  __int64 v25; // [rsp+8h] [rbp-E0h]
  unsigned __int64 *v26; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v27; // [rsp+18h] [rbp-D0h]
  __m128 *v28; // [rsp+20h] [rbp-C8h]
  char v29; // [rsp+2Fh] [rbp-B9h]
  _QWORD *v30; // [rsp+30h] [rbp-B8h]
  __int64 v31; // [rsp+38h] [rbp-B0h]
  __m128 v32; // [rsp+40h] [rbp-A8h] BYREF
  int v33; // [rsp+50h] [rbp-98h] BYREF
  unsigned __int16 *v34; // [rsp+58h] [rbp-90h]
  unsigned __int16 *v35; // [rsp+60h] [rbp-88h]
  __int64 v36; // [rsp+68h] [rbp-80h] BYREF
  void *ptr; // [rsp+70h] [rbp-78h] BYREF
  __int64 v38; // [rsp+78h] [rbp-70h]
  _BYTE v39[16]; // [rsp+80h] [rbp-68h] BYREF
  __m128 v40; // [rsp+90h] [rbp-58h] BYREF
  unsigned __int64 v41; // [rsp+A8h] [rbp-40h]

  sub_C93B20((__int64)&v33, a2);
  v2 = v34;
  v3 = v35;
  v4 = sub_175B800(a1, v34);
  if ( v4 == 1 )
    return 1;
  v6 = v4;
  v27 = sub_175B800(a1, v3);
  if ( v27 == 1 )
    return 1;
  v7 = (unsigned __int64 *)&v32;
  v29 = 0;
  ptr = v39;
  v8 = _mm_loadh_ps((const double *)&v36);
  v38 = 0x200000000LL;
  v26 = (unsigned __int64 *)&v33;
  v28 = &v40;
  v32 = v8;
  do
  {
    v9 = sub_BFB900(*v7);
    if ( (*(_WORD *)v9 & 0x1FF) == 0x5B )
    {
      v10 = (_QWORD *)sub_BFB900(*(_QWORD *)(v9 + 32));
      if ( (*(_WORD *)v10 & 0x1FF) == 0x47 )
      {
        v11 = v10[2];
        if ( (*(_BYTE *)(v11 + 28) & 0x7Fu) - 35 > 3 )
        {
          if ( (*v10 & 0x200000LL) != 0 )
            v11 = v10[2 * ((*v10 & 0x80000LL) != 0) + 4];
          v30 = v10;
          v31 = v11;
          sub_C93B20((__int64)v28, a2);
          v12 = sub_17473B0((__int64)a1, v31);
          if ( !v12 )
          {
            result = 1;
            goto LABEL_24;
          }
          if ( (*v30 & 0x200000LL) != 0 )
            v13 = v30[2 * ((*v30 & 0x80000LL) != 0) + 4];
          else
            v13 = v30[2];
          v14 = v29;
          if ( v12 != v13 )
            v14 = 1;
          v15 = v12 | 3;
          v40.m128_u64[0] = v15;
          v29 = v14;
          v16 = (unsigned int)v38;
          v17 = (unsigned int)v38 + 1LL;
          if ( v17 > HIDWORD(v38) )
          {
            v30 = (_QWORD *)v15;
            sub_2237220(&ptr, v39, v17, 8);
            v16 = (unsigned int)v38;
            v15 = (__int64)v30;
          }
          *((_QWORD *)ptr + v16) = v15;
          LODWORD(v38) = v38 + 1;
        }
      }
    }
    ++v7;
  }
  while ( v7 != v26 );
  v18 = *a1;
  v19 = v6 & 0xFFFFFFFFFFFFFFFELL;
  if ( *(_DWORD *)(*a1 + 12632)
    || v29
    || v2 != (unsigned __int16 *)v19
    || v3 != (unsigned __int16 *)(v27 & 0xFFFFFFFFFFFFFFFELL) )
  {
    v26 = (unsigned __int64 *)(v27 & 0xFFFFFFFFFFFFFFFELL);
    v20 = v33;
    sub_C93B20((__int64)v28, a2);
    v24 = sub_C00A40(v41, a2, v21, v22, v23);
    result = sub_1C07820(v18, v24, v20, (unsigned int)&ptr, v19, (unsigned int)v27 & 0xFFFFFFFE, 0, 1, 0);
  }
  else
  {
    v26 = (unsigned __int64 *)v3;
    v40 = _mm_loadh_ps((const double *)&v26);
    sub_1912220(v18, a2, 0, v28, 2);
    result = a2;
  }
LABEL_24:
  if ( ptr != v39 )
  {
    v25 = result;
    free(ptr);
    return v25;
  }
  return result;
}
