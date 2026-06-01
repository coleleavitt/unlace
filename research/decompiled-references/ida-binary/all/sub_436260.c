__int64 __fastcall checkout_for_add_action_t__::vfunc_0(
        double a1,
        __m128 a2,
        __m128 a3,
        __m128 a4,
        double a5,
        double a6,
        __m128 a7,
        __m128 a8,
        __int64 a9,
        __int64 *a10)
{
  const char *v11; // rsi
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  __int64 v15; // r8
  __int64 v16; // r9
  __m128 v17; // xmm4
  __m128 v18; // xmm5
  __int64 v19; // rdi
  unsigned int v20; // r12d
  _QWORD *v22; // rax
  _QWORD *v23; // rbp
  __int64 v24; // r8
  __int64 v25; // r9
  __m128 v26; // xmm4
  __m128 v27; // xmm5
  __int64 (__fastcall *v28)(__int64); // rdx
  __int64 (__fastcall *v29)(__int64); // rax
  __int64 *v30; // rdi
  __int64 v31; // rax
  __int64 (*v32)(); // rdx
  unsigned int v33; // eax
  __int64 v34; // rbp
  __int64 v35; // r15
  const char **v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rax
  __int64 v39; // rbp
  __int64 v40; // rbx
  __int64 *v41; // rdx
  __int64 v42; // rdi
  __int64 *v43; // [rsp+0h] [rbp-88h]
  unsigned int v44; // [rsp+Ch] [rbp-7Ch]
  __int64 v45; // [rsp+10h] [rbp-78h] BYREF
  __int128 v46; // [rsp+18h] [rbp-70h]
  __int64 v47; // [rsp+30h] [rbp-58h] BYREF
  __int128 v48; // [rsp+38h] [rbp-50h]
  unsigned __int64 v49; // [rsp+48h] [rbp-40h]

  v49 = __readfsqword(0x28u);
  v46 = 0;
  v11 = (const char *)&v47;
  v43 = &v47;
  v45 = 0;
  v47 = 0;
  v48 = 0;
  v14 = sub_435C20(a10, (const char *)&v47, 0, 0, 0.0, a2, a3, *(double *)a4.m128_u64, a5, a6, a7, a8);
  if ( !(_BYTE)v14 )
  {
    sub_169700(
      (int)"The current operation was canceled\n",
      (__int64)&v47,
      v12,
      v13,
      v15,
      v16,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v17,
      v18,
      a7,
      a8,
      (char)&v47);
    v20 = 0;
    goto LABEL_21;
  }
  if ( !(_QWORD)v48 )
  {
    v19 = v47;
    v20 = 0;
    if ( !v47 )
      goto LABEL_4;
    goto LABEL_27;
  }
  v22 = sub_426230(a10, (const char *)&v47);
  v23 = (_QWORD *)sub_417080((__int64)v22);
  v28 = sub_415B30;
  v29 = *(__int64 (__fastcall **)(__int64))(*v23 + 312LL);
  if ( v29 == sub_415B30 )
  {
    v30 = (__int64 *)v23[1];
    if ( v30 )
    {
      v31 = *v30;
      v32 = *(__int64 (**)())(*v30 + 480);
      if ( v32 == sub_178B60 )
      {
LABEL_10:
        v11 = (const char *)&v45;
        v33 = (*(__int64 (__fastcall **)(__int64 *, __int64 *, __int64 *, __int64))(v31 + 280))(v30, &v45, &v47, 1);
        goto LABEL_11;
      }
      if ( !(unsigned __int8)v32() )
      {
        v30 = (__int64 *)v23[1];
        v31 = *v30;
        goto LABEL_10;
      }
    }
    v34 = v46;
    v44 = 52;
    if ( !(_QWORD)v46 )
    {
      v44 = 52;
      v20 = 0;
      goto LABEL_31;
    }
    goto LABEL_12;
  }
  v11 = (const char *)&v45;
  v33 = ((__int64 (__fastcall *)(_QWORD *, __int64 *, __int64 *, __int64))v29)(v23, &v45, &v47, 1);
LABEL_11:
  v34 = v46;
  v44 = v33;
  if ( !(_QWORD)v46 )
  {
    v20 = 0;
    goto LABEL_20;
  }
LABEL_12:
  v35 = 0;
  v20 = 0;
  do
  {
    while ( 1 )
    {
      v36 = (const char **)(v47 + 24 * v35);
      v37 = (__int64)v36[1];
      v11 = &s1;
      if ( !*(_DWORD *)(v45 + 4 * v35) )
        break;
      if ( v37 )
        v11 = *v36;
      set_error_string(0, v11);
      v11 = "Failed to add to vault";
      sub_416980(*(_DWORD *)(v45 + 4 * v35++), (__int64)"Failed to add to vault");
      if ( v35 == v34 )
        goto LABEL_20;
    }
    if ( v37 )
      v11 = *v36;
    sub_169700(
      (int)"ok added '%s'\n",
      (__int64)v11,
      (__int64)v28,
      v37,
      v24,
      v25,
      (__m128)0LL,
      a2,
      a3,
      a4,
      v26,
      v27,
      a7,
      a8,
      (char)v43);
    ++v35;
    v20 = v14;
  }
  while ( v35 != v34 );
LABEL_20:
  if ( v44 )
  {
LABEL_31:
    v11 = "Failed to add to vault";
    sub_416980(v44, (__int64)"Failed to add to vault");
  }
LABEL_21:
  v38 = v47;
  v19 = v47;
  if ( !v47 )
    goto LABEL_4;
  v39 = v48;
  if ( (_QWORD)v48 )
  {
    v40 = 0;
    do
    {
      v41 = (__int64 *)(v38 + 24 * v40);
      v42 = *v41;
      if ( *v41 )
      {
        v41[1] = 0;
        qfree(v42, v11);
        v38 = v47;
      }
      ++v40;
      v19 = v38;
    }
    while ( v39 != v40 );
  }
LABEL_27:
  *(_QWORD *)&v48 = 0;
  qfree(v19, v11);
LABEL_4:
  if ( v45 )
  {
    *(_QWORD *)&v46 = 0;
    qfree(v45, v11);
  }
  return v20;
}
