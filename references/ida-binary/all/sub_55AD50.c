__int64 __fastcall sub_55AD50(
        int *a1,
        const char *a2,
        double a3,
        __m128 a4,
        __m128 a5,
        __m128 a6,
        double a7,
        double a8,
        __m128 a9,
        __m128 a10)
{
  int v10; // eax
  int v11; // ecx
  __m128 v12; // xmm0
  int v13; // edx
  int v14; // eax
  int v15; // r9d
  int v16; // r8d
  const char *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __m128 v23; // xmm4
  __m128 v24; // xmm5
  const char *v25; // rsi
  __int64 license_manager; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  unsigned int v29; // ebx
  __int64 v30; // r8
  __int64 v31; // r9
  __m128 v32; // xmm4
  __m128 v33; // xmm5
  const char *v34; // rsi
  const char *v36; // rdx
  int v37; // [rsp-8h] [rbp-78h]
  __int64 v38; // [rsp-8h] [rbp-78h]
  const char *v39; // [rsp+0h] [rbp-70h] BYREF
  __int128 v40; // [rsp+8h] [rbp-68h]
  const char *v41; // [rsp+20h] [rbp-50h] BYREF
  __int128 v42; // [rsp+28h] [rbp-48h]
  const char *v43; // [rsp+40h] [rbp-30h] BYREF
  __int128 v44; // [rsp+48h] [rbp-28h]
  unsigned __int64 v45; // [rsp+58h] [rbp-18h]

  v45 = __readfsqword(0x28u);
  if ( a2 )
    sub_559430(a2, a1);
  v10 = *((unsigned __int8 *)a1 + 5);
  v11 = *((unsigned __int8 *)a1 + 1);
  v12 = 0;
  v13 = *(unsigned __int8 *)a1;
  v39 = nullptr;
  v37 = v10;
  v14 = *((unsigned __int8 *)a1 + 4);
  v41 = nullptr;
  v15 = *((unsigned __int8 *)a1 + 3);
  v16 = *((unsigned __int8 *)a1 + 2);
  v43 = nullptr;
  v40 = 0;
  v42 = 0;
  v44 = 0;
  sub_169A50((__int64 *)&v43, (__int64)"%02X-%02X%02X-%02X%02X-%02X", v13, v11, v16, v15, v14, v37);
  v17 = &s1;
  if ( (_QWORD)v44 )
    v17 = v43;
  v18 = a1[3];
  if ( (int)v18 >= 7 )
    v18 = 0;
  sub_169A50((__int64 *)&v41, (__int64)"%s (%s)", off_8A5020[v18], v17, v38);
  if ( v43 )
  {
    *(_QWORD *)&v44 = 0;
    *(double *)v12.m128_u64 = qfree(v43, "%s (%s)");
  }
  v25 = &s1;
  if ( (_QWORD)v42 )
    v25 = v41;
  sub_169700(
    (int)"Return previous borrowed license %s\n",
    (__int64)v25,
    v19,
    v20,
    v21,
    v22,
    v12,
    a4,
    a5,
    a6,
    v23,
    v24,
    a9,
    a10,
    (char)v39);
  license_manager = get_license_manager(*(double *)v12.m128_u64);
  v29 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, const char **))(*(_QWORD *)license_manager + 80LL))(
          license_manager,
          0,
          0,
          0,
          &v39);
  if ( !(_BYTE)v29 )
  {
    v36 = &s1;
    if ( (_QWORD)v40 )
    {
      v36 = v39;
      v34 = &s1;
      if ( !(_QWORD)v42 )
        goto LABEL_22;
    }
    else
    {
      v34 = &s1;
      if ( !(_QWORD)v42 )
      {
LABEL_22:
        sub_169630(
          (int)"AUTOHIDE NONE\nFailed to return the previous license '%s' (%s)",
          (__int64)&s1,
          (__int64)v36,
          v28,
          v30,
          v31,
          v12,
          a4,
          a5,
          a6,
          v32,
          v33,
          a9,
          a10,
          (char)v39);
        goto LABEL_15;
      }
    }
    v34 = v41;
    sub_169630(
      (int)"AUTOHIDE NONE\nFailed to return the previous license '%s' (%s)",
      (__int64)v41,
      (__int64)v36,
      v28,
      v30,
      v31,
      v12,
      a4,
      a5,
      a6,
      v32,
      v33,
      a9,
      a10,
      (char)v39);
    goto LABEL_15;
  }
  v34 = &s1;
  if ( (_QWORD)v42 )
    v34 = v41;
  sub_169700(
    (int)"Successfully returned %s\n",
    (__int64)v34,
    v27,
    v28,
    v30,
    v31,
    v12,
    a4,
    a5,
    a6,
    v32,
    v33,
    a9,
    a10,
    (char)v39);
LABEL_15:
  if ( v41 )
  {
    *(_QWORD *)&v42 = 0;
    *(double *)v12.m128_u64 = qfree(v41, v34);
  }
  if ( v39 )
  {
    *(_QWORD *)&v40 = 0;
    qfree(v39, v34, *(double *)v12.m128_u64);
  }
  return v29;
}
