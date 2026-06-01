__int64 __fastcall sub_575F00(
        __int64 *a1,
        __int64 a2,
        int a3,
        __m128i *a4,
        unsigned __int64 a5,
        void *a6,
        int a7,
        __int64 a8,
        __int16 a9)
{
  char v10; // r15
  unsigned __int64 v15; // r8
  char *v16; // rsi
  unsigned int v17; // eax
  __int64 appended; // rax
  char *v19; // r12
  __int64 v20; // r14
  unsigned __int64 v21; // rdx
  __int64 v22; // r8
  _BYTE *v23; // rsi
  char *v24; // r12
  unsigned __int64 v25; // rdx
  __int64 v26; // r8
  __int64 v27; // rsi
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // [rsp+8h] [rbp-50h]
  unsigned __int64 v34; // [rsp+8h] [rbp-50h]
  unsigned __int64 v35; // [rsp+8h] [rbp-50h]
  unsigned __int64 v36; // [rsp+8h] [rbp-50h]
  __int64 v37; // [rsp+10h] [rbp-48h]
  __int64 v38; // [rsp+10h] [rbp-48h]
  unsigned __int64 v39; // [rsp+10h] [rbp-48h]
  __int64 v40; // [rsp+18h] [rbp-40h]

  v10 = 0;
  v15 = a1[1];
  v16 = (char *)*a1;
  if ( v15 <= 1 || (v31 = v15 - 2, v10 = v16[v15 - 2], (__int64)(v15 - 2) <= 1) )
  {
    if ( v16 )
    {
      a1[1] = 0;
      v33 = a2;
      qfree(v16);
      *a1 = 0;
      a2 = v33;
      a1[2] = 0;
    }
  }
  else
  {
    if ( a1[2] < v31 )
    {
      v40 = a2;
      v39 = a1[1];
      v36 = v15 - 2;
      v32 = qvector_reserve(a1, v16, v31, 1);
      a2 = v40;
      v15 = v39;
      *a1 = v32;
      v31 = v36;
      v16 = (char *)v32;
    }
    a1[1] = v31;
    v16[v15 - 3] = 0;
  }
  LOBYTE(v17) = 1;
  if ( (a9 & 0x200) == 0 )
    v17 = ((unsigned int)get_aflags(a2) >> 7) & 1;
  appended = append_struct_fields(
               (__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD))a1,
               a4,
               a3,
               a6,
               a7,
               a8,
               a5,
               v17);
  v19 = (char *)a1[1];
  v20 = appended;
  if ( v19 )
  {
    v21 = (unsigned __int64)(v19 + 1);
    v22 = a1[1];
    v23 = (_BYTE *)*a1;
    --v19;
    if ( a1[2] >= v21 )
      goto LABEL_8;
  }
  else
  {
    v23 = (_BYTE *)*a1;
    v21 = 2;
    v22 = 1;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_8;
  }
  v37 = v22;
  v34 = v21;
  v29 = qvector_reserve(a1, v23, v21, 1);
  v22 = v37;
  v21 = v34;
  *a1 = v29;
  v23 = (_BYTE *)v29;
LABEL_8:
  a1[1] = v21;
  v23[v22] = 0;
  v19[*a1] = 2;
  v24 = (char *)a1[1];
  if ( !v24 )
  {
    v27 = *a1;
    v26 = 1;
    v25 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_10;
LABEL_14:
    v38 = v26;
    v35 = v25;
    v30 = qvector_reserve(a1, v27, v25, 1);
    v26 = v38;
    v25 = v35;
    *a1 = v30;
    v27 = v30;
    goto LABEL_10;
  }
  v25 = (unsigned __int64)(v24 + 1);
  v26 = a1[1];
  v27 = *a1;
  --v24;
  if ( a1[2] < v25 )
    goto LABEL_14;
LABEL_10:
  a1[1] = v25;
  v24[v27] = v10;
  *(_BYTE *)(*a1 + v26) = 0;
  append_disp(a1, a5 + a4->m128i_i64[0], 1);
  append_disp(a1, -(__int64)a5, 1);
  return v20;
}
