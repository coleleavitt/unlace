__int64 *__fastcall sub_47AC60(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rdx
  __int64 *result; // rax
  char **v5; // rbp
  char **v6; // r15
  char *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rdx
  char **v10; // r14
  char **v11; // rbp
  __int64 *v12; // r15
  char *v13; // rbx
  __int64 v14; // rdx
  char **v15; // rbx
  char **v16; // r14
  char *v17; // r12
  __int64 v18; // rdx
  char **v19; // r12
  char **v20; // r15
  char **v21; // r13
  char *v22; // rbp
  __int64 v23; // rdx
  char **v24; // r12
  __int64 v25; // rdx
  char **v26; // r15
  __int64 *v27; // r12
  char *v28; // rbp
  __int64 v29; // rdx
  char **v30; // r14
  __int64 v31; // rdx
  char **v32; // rbp
  __int64 *v33; // r15
  char *v34; // r12
  __int64 v35; // rax
  char **v36; // r12
  char **v37; // rax
  char **v38; // rbx
  __int64 *v39; // rbp
  char **v40; // r15
  char *v41; // r13
  __int64 v42; // rdx
  char **v43; // rax
  __int64 v44; // rdx
  char **v45; // rbx
  char **v46; // r14
  __int64 *v47; // r12
  char *v48; // r13
  __int64 v49; // rax
  __int64 *v50; // r13
  __int64 *v51; // rbp
  __int64 v52; // rsi
  __int64 *v53; // [rsp+0h] [rbp-A8h]
  __int64 *v54; // [rsp+0h] [rbp-A8h]
  char **v55; // [rsp+0h] [rbp-A8h]
  char **v56; // [rsp+8h] [rbp-A0h]
  char **v57; // [rsp+10h] [rbp-98h]
  char **v58; // [rsp+18h] [rbp-90h]
  char **v59; // [rsp+20h] [rbp-88h]
  char **v60; // [rsp+28h] [rbp-80h]
  char **v61; // [rsp+30h] [rbp-78h]
  char **v62; // [rsp+38h] [rbp-70h]
  char **v63; // [rsp+40h] [rbp-68h]
  char **v65; // [rsp+50h] [rbp-58h]
  char **v66; // [rsp+58h] [rbp-50h]
  char **v67; // [rsp+60h] [rbp-48h]
  char **v68; // [rsp+68h] [rbp-40h]

  sub_47AAE0(a1, (char *)a2);
  v3 = *(_QWORD *)(a2 + 8);
  result = *(__int64 **)(v3 + 32);
  v5 = (char **)&result[*(_QWORD *)(v3 + 40)];
  if ( result != (__int64 *)v5 )
  {
    v6 = *(char ***)(v3 + 32);
LABEL_3:
    v7 = *v6;
    result = *((__int64 **)*v6 + 1);
    if ( (result[6] & 1) == 0 )
      goto LABEL_4;
    sub_47AAE0(*a3, *v6);
    v8 = *((_QWORD *)v7 + 1);
    result = *(__int64 **)(v8 + 32);
    v9 = *(_QWORD *)(v8 + 40);
    if ( result == &result[v9] )
      goto LABEL_4;
    v67 = v5;
    v10 = (char **)result;
    v11 = (char **)&result[v9];
    v68 = v6;
    v12 = a3;
    while ( 1 )
    {
      v13 = *v10;
      result = *((__int64 **)*v10 + 1);
      if ( (result[6] & 1) != 0 )
      {
        sub_47AAE0(*v12, *v10);
        v14 = *((_QWORD *)v13 + 1);
        result = *(__int64 **)(v14 + 32);
        v15 = (char **)&result[*(_QWORD *)(v14 + 40)];
        if ( result != (__int64 *)v15 )
          break;
      }
LABEL_9:
      if ( v11 == ++v10 )
      {
        v5 = v67;
        v6 = v68;
LABEL_4:
        if ( v5 == ++v6 )
          return result;
        goto LABEL_3;
      }
    }
    v65 = v11;
    v66 = v10;
    v16 = *(char ***)(v14 + 32);
    result = v12;
    while ( 1 )
    {
      v17 = *v16;
      if ( (*(_BYTE *)(*((_QWORD *)*v16 + 1) + 48LL) & 1) != 0 )
      {
        v53 = result;
        sub_47AAE0(*result, *v16);
        v18 = *((_QWORD *)v17 + 1);
        result = v53;
        v19 = *(char ***)(v18 + 32);
        v20 = &v19[*(_QWORD *)(v18 + 40)];
        if ( v19 != v20 )
          break;
      }
LABEL_14:
      if ( v15 == ++v16 )
      {
        v11 = v65;
        v10 = v66;
        v12 = result;
        goto LABEL_9;
      }
    }
    v62 = v15;
    v21 = *(char ***)(v18 + 32);
    v63 = v16;
    while ( 1 )
    {
      v22 = *v21;
      if ( (*(_BYTE *)(*((_QWORD *)*v21 + 1) + 48LL) & 1) != 0 )
      {
        v54 = result;
        sub_47AAE0(*result, *v21);
        v23 = *((_QWORD *)v22 + 1);
        result = v54;
        v24 = *(char ***)(v23 + 32);
        v25 = *(_QWORD *)(v23 + 40);
        if ( v24 != &v24[v25] )
          break;
      }
LABEL_19:
      if ( v20 == ++v21 )
      {
        v15 = v62;
        v16 = v63;
        goto LABEL_14;
      }
    }
    v55 = &v24[v25];
    v61 = v21;
    v60 = v20;
    v26 = v24;
    v27 = result;
    while ( 1 )
    {
      v28 = *v26;
      if ( (*(_BYTE *)(*((_QWORD *)*v26 + 1) + 48LL) & 1) != 0 )
      {
        sub_47AAE0(*v27, *v26);
        v29 = *((_QWORD *)v28 + 1);
        v30 = *(char ***)(v29 + 32);
        v31 = *(_QWORD *)(v29 + 40);
        if ( v30 != &v30[v31] )
          break;
      }
LABEL_24:
      if ( v55 == ++v26 )
      {
        v20 = v60;
        v21 = v61;
        result = v27;
        goto LABEL_19;
      }
    }
    v59 = v26;
    v32 = &v30[v31];
    v33 = v27;
    while ( 1 )
    {
      v34 = *v30;
      if ( (*(_BYTE *)(*((_QWORD *)*v30 + 1) + 48LL) & 1) != 0 )
      {
        sub_47AAE0(*v33, *v30);
        v35 = *((_QWORD *)v34 + 1);
        v36 = *(char ***)(v35 + 32);
        v37 = &v36[*(_QWORD *)(v35 + 40)];
        if ( v36 != v37 )
          break;
      }
LABEL_29:
      if ( v32 == ++v30 )
      {
        v27 = v33;
        v26 = v59;
        goto LABEL_24;
      }
    }
    v58 = v32;
    v38 = v37;
    v39 = v33;
    v40 = v30;
    while ( 1 )
    {
      v41 = *v36;
      if ( (*(_BYTE *)(*((_QWORD *)*v36 + 1) + 48LL) & 1) != 0 )
      {
        sub_47AAE0(*v39, *v36);
        v42 = *((_QWORD *)v41 + 1);
        v43 = *(char ***)(v42 + 32);
        v44 = *(_QWORD *)(v42 + 40);
        if ( v43 != &v43[v44] )
          break;
      }
LABEL_34:
      if ( v38 == ++v36 )
      {
        v30 = v40;
        v33 = v39;
        v32 = v58;
        goto LABEL_29;
      }
    }
    v56 = v38;
    v45 = &v43[v44];
    v46 = v43;
    v57 = v36;
    v47 = v39;
    while ( 1 )
    {
      v48 = *v46;
      if ( (*(_BYTE *)(*((_QWORD *)*v46 + 1) + 48LL) & 1) != 0 )
      {
        sub_47AAE0(*v47, *v46);
        v49 = *((_QWORD *)v48 + 1);
        v50 = *(__int64 **)(v49 + 32);
        v51 = &v50[*(_QWORD *)(v49 + 40)];
        if ( v50 != v51 )
        {
          v52 = *v50;
          if ( (*(_BYTE *)(*(_QWORD *)(*v50 + 8) + 48LL) & 1) != 0 )
            goto LABEL_45;
          while ( v51 != ++v50 )
          {
            v52 = *v50;
            if ( (*(_BYTE *)(*(_QWORD *)(*v50 + 8) + 48LL) & 1) != 0 )
LABEL_45:
              sub_47AC60(*v47, v52, v47);
          }
        }
      }
      if ( v45 == ++v46 )
      {
        v39 = v47;
        v38 = v56;
        v36 = v57;
        goto LABEL_34;
      }
    }
  }
  return result;
}
