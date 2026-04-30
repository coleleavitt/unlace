__int64 __fastcall sub_218F00(
        __int64 a1,
        __int64 *a2,
        int *a3,
        __int64 *a4,
        __m128 a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  __int64 v12; // r15
  __int64 v15; // rdi
  int v17; // eax
  unsigned __int8 v18; // dl
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdx
  __int64 v22; // rax
  __int64 v23; // r12
  __int64 v24; // rdi
  int v25; // r12d
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __m128 v30; // xmm4
  __m128 v31; // xmm5
  unsigned int v32; // r12d
  __int64 v34; // rdi
  __int64 v35; // rdx
  __int64 v36; // rax
  unsigned int v37; // eax
  const char *v38; // rax
  char v39; // [rsp+0h] [rbp-58h]
  char *v40; // [rsp+8h] [rbp-50h] BYREF
  char v41; // [rsp+13h] [rbp-45h] BYREF
  _BYTE v42[4]; // [rsp+14h] [rbp-44h] BYREF
  unsigned __int64 v43; // [rsp+18h] [rbp-40h]

  v12 = 1;
  v15 = *a2;
  v43 = __readfsqword(0x28u);
  LOBYTE(v40) = 0;
  qlread(v15, &v40, 1);
  v41 = (char)v40;
  if ( (char)v40 < 0 )
  {
    v34 = *a2;
    if ( (~(_BYTE)v40 & 0xC0) != 0 )
    {
      v12 = 2;
      qlread(v34, v42, 1);
    }
    else
    {
      v12 = 4;
      v35 = 3;
      if ( (~(_BYTE)v40 & 0xE0) == 0 )
      {
        v12 = 5;
        v35 = 4;
      }
      qlread(v34, v42, v35);
    }
  }
  v40 = &v41;
  v17 = unpack_dd(&v40, &v42[v12 - 1]);
  if ( v17 <= 0 )
    goto LABEL_13;
  *a3 = v17;
  v18 = *(_BYTE *)a1;
  if ( *(_BYTE *)a1 <= 2u )
  {
    *a3 = v17 + 1;
    v18 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 == 1 )
    {
      v20 = getinf(93);
      goto LABEL_6;
    }
  }
  if ( v18 <= 7u )
  {
    v20 = (unsigned int)sub_217810(a2);
    if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) != (unsigned int)v20 )
      goto LABEL_6;
LABEL_24:
    v20 = -1;
    goto LABEL_6;
  }
  v19 = (unsigned int)sub_217810(a2);
  v20 = v19 | (sub_217810(a2) << 32);
  if ( *(_QWORD *)(*(_QWORD *)(a1 + 120) + 16LL) == v20 )
    goto LABEL_24;
LABEL_6:
  v21 = *(_QWORD *)(a1 + 8);
  *(_QWORD *)(a1 + 16) = v20;
  *(_QWORD *)(v21 + 232) = v20;
  if ( *(_BYTE *)a1 > 1u )
  {
    v22 = getinf(93);
    v23 = *(_QWORD *)(a1 + 16);
    if ( (unsigned __int64)(v23 - 1) <= 0xFFFFFFFFFFFFFFFDLL && v23 != v22 )
    {
      v36 = getinf(93);
      v37 = rebase_program(v23 - v36, 8);
      if ( v37 )
      {
        if ( a4 )
        {
          v38 = (const char *)move_segm_strerror(v37);
          sub_169A50(a4, (__int64)"Failed to rebase program: %s\n", v38);
        }
        return 0;
      }
    }
  }
  v24 = *a2;
  LOBYTE(v40) = 0;
  qlread(v24, &v40, 1);
  v25 = (unsigned __int8)v40;
  if ( v25 != (unsigned int)getinf(3) )
    sub_169700(
      (int)"Warning: the current processor flags and the flags of the trace differ\n",
      (__int64)&v40,
      v26,
      v27,
      v28,
      v29,
      a5,
      a6,
      a7,
      a8,
      v30,
      v31,
      a11,
      a12,
      v39);
  v32 = sub_2178F0(
          *(double *)a5.m128_u64,
          a6,
          a7,
          a8,
          *(double *)v30.m128_u64,
          *(double *)v31.m128_u64,
          a11,
          a12,
          a1,
          a2);
  if ( !(_BYTE)v32 )
  {
LABEL_13:
    if ( a4 )
      sub_20B400(a4, "illegal trace data");
    return 0;
  }
  sub_217AF0(a1, a2);
  return v32;
}
