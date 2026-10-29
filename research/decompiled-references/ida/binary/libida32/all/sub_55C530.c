__int64 __fastcall sub_55C530(
        __int64 *a1,
        unsigned int a2,
        __int64 a3,
        _DWORD *a4,
        int a5,
        __int64 a6,
        int a7,
        __int64 a8,
        __int16 a9)
{
  char v10; // r15
  unsigned __int64 v13; // r8
  char *v14; // rsi
  __int64 appended; // rax
  char *v16; // r12
  __int64 v17; // r14
  unsigned __int64 v18; // rdx
  __int64 v19; // r8
  char *v20; // rsi
  char *v21; // r12
  unsigned __int64 v22; // rdx
  __int64 v23; // r8
  __int64 v24; // rsi
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // [rsp+8h] [rbp-50h]
  unsigned __int64 v31; // [rsp+8h] [rbp-50h]
  unsigned __int64 v32; // [rsp+8h] [rbp-50h]
  unsigned __int64 v33; // [rsp+8h] [rbp-50h]
  __int64 v34; // [rsp+10h] [rbp-48h]
  __int64 v35; // [rsp+10h] [rbp-48h]
  unsigned __int64 v36; // [rsp+10h] [rbp-48h]
  unsigned int v37; // [rsp+1Ch] [rbp-3Ch]

  v10 = 0;
  v13 = a1[1];
  v14 = (char *)*a1;
  if ( v13 <= 1 || (v28 = v13 - 2, v10 = v14[v13 - 2], (__int64)(v13 - 2) <= 1) )
  {
    if ( v14 )
    {
      a1[1] = 0;
      v30 = a2;
      qfree(v14);
      *a1 = 0;
      a2 = v30;
      a1[2] = 0;
    }
  }
  else
  {
    if ( a1[2] < v28 )
    {
      v37 = a2;
      v36 = a1[1];
      v33 = v13 - 2;
      v29 = qvector_reserve(a1, v14, v28, 1);
      a2 = v37;
      v13 = v36;
      *a1 = v29;
      v28 = v33;
      v14 = (char *)v29;
    }
    a1[1] = v28;
    v14[v13 - 3] = 0;
  }
  if ( (a9 & 0x200) == 0 )
    get_aflags(a2);
  appended = append_struct_fields();
  v16 = (char *)a1[1];
  v17 = appended;
  if ( v16 )
  {
    v18 = (unsigned __int64)(v16 + 1);
    v19 = a1[1];
    v20 = (char *)*a1;
    --v16;
    if ( a1[2] >= v18 )
      goto LABEL_8;
  }
  else
  {
    v20 = (char *)*a1;
    v18 = 2;
    v19 = 1;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_8;
  }
  v34 = v19;
  v31 = v18;
  v26 = qvector_reserve(a1, v20, v18, 1);
  v19 = v34;
  v18 = v31;
  *a1 = v26;
  v20 = (char *)v26;
LABEL_8:
  a1[1] = v18;
  v20[v19] = 0;
  v16[*a1] = 2;
  v21 = (char *)a1[1];
  if ( !v21 )
  {
    v24 = *a1;
    v23 = 1;
    v22 = 2;
    if ( (unsigned __int64)a1[2] >= 2 )
      goto LABEL_10;
LABEL_14:
    v35 = v23;
    v32 = v22;
    v27 = qvector_reserve(a1, v24, v22, 1);
    v23 = v35;
    v22 = v32;
    *a1 = v27;
    v24 = v27;
    goto LABEL_10;
  }
  v22 = (unsigned __int64)(v21 + 1);
  v23 = a1[1];
  v24 = *a1;
  --v21;
  if ( a1[2] < v22 )
    goto LABEL_14;
LABEL_10:
  a1[1] = v22;
  v21[v24] = v10;
  *(_BYTE *)(*a1 + v23) = 0;
  append_disp(a1, (unsigned int)(a5 + *a4), 1);
  append_disp(a1, (unsigned int)-a5, 1);
  return v17;
}

