__int64 __fastcall sub_5C31C0(_DWORD *a1, __int64 a2, __int64 *a3)
{
  __int64 v4; // rax
  int v5; // edx
  unsigned int v6; // r14d
  int v7; // r14d
  __int64 v8; // rax
  _QWORD *v9; // r13
  unsigned int v10; // edx
  _QWORD *v11; // rbp
  __int64 v12; // rdx
  _QWORD *v13; // r15
  _QWORD *v14; // r12
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  _OWORD *v20; // rax
  _QWORD *v21; // r13
  _OWORD *v22; // r15
  __int64 v23; // rax
  _QWORD *v24; // r12
  char *v25; // rbp
  _QWORD *v26; // rax
  unsigned __int64 v27; // rdi
  __int64 v28; // rax
  _QWORD *v29; // rdx
  _QWORD *v30; // rax
  __int64 v31; // rdx
  char *v32; // r15
  char *v33; // r12
  __int64 v34; // rdi
  __int64 v35; // [rsp+10h] [rbp-58h]
  _QWORD *v36; // [rsp+28h] [rbp-40h]

  v4 = *a3;
  *a3 = 0;
  v5 = a1[2];
  v35 = v4;
  v6 = 2 * v5;
  if ( 3 * v5 < (unsigned int)(4 * (a1[3] + a1[4])) )
  {
    v20 = (_OWORD *)sub_186B270(16LL * v6);
    v21 = v20;
    v22 = &v20[v6];
    if ( v6 )
    {
      if ( ((16 * (_BYTE)v6) & 0x10) == 0 || (*v20 = 0, ++v20, v20 != v22) )
      {
        do
        {
          *v20 = 0;
          v20 += 2;
          *(v20 - 1) = 0;
        }
        while ( v20 != v22 );
      }
    }
    v23 = (unsigned int)a1[2];
    v24 = (_QWORD *)(*(_QWORD *)a1 + 8LL);
    v25 = (char *)(*(_QWORD *)a1 + 16 * v23);
    if ( *(char **)a1 == v25 )
    {
LABEL_46:
      if ( v25 )
      {
        if ( (_DWORD)v23 )
        {
          v32 = v25;
          v33 = &v25[16 * v23];
          do
          {
            while ( 1 )
            {
              v34 = *((_QWORD *)v32 + 1);
              if ( !v34 )
                break;
              v32 += 16;
              sub_186B220((void *)(v34 - 8));
              if ( v32 == v33 )
                goto LABEL_51;
            }
            v32 += 16;
          }
          while ( v32 != v33 );
        }
LABEL_51:
        sub_186B220(v25);
      }
      *(_QWORD *)a1 = v21;
      a1[2] = v6;
      a1[4] = 0;
      goto LABEL_2;
    }
    while ( 1 )
    {
      v27 = *(v24 - 1);
      if ( v27 <= 1 )
      {
LABEL_34:
        v26 = v24 + 2;
        if ( v25 == (char *)(v24 + 1) )
          goto LABEL_45;
        goto LABEL_35;
      }
      v28 = 2LL * ((v6 - 1) & (unsigned int)sub_62A5E0(v27));
      v29 = &v21[v28];
      if ( 2LL * v6 == v28 )
      {
LABEL_56:
        if ( v21 == v29 )
        {
LABEL_68:
          sub_1872CE0("");
          sub_1873130(114, 213);
        }
        v30 = v21;
        while ( *v30 )
        {
          v30 += 2;
          if ( v29 == v30 )
            goto LABEL_68;
        }
        *v30 = *(v24 - 1);
        if ( v24 == v30 + 1 )
          goto LABEL_34;
        v31 = v30[1];
        if ( v31 )
          goto LABEL_43;
      }
      else
      {
        v30 = &v21[v28];
        while ( *v30 )
        {
          v30 += 2;
          if ( v22 == (_OWORD *)v30 )
            goto LABEL_56;
        }
        *v30 = *(v24 - 1);
        if ( v24 == v30 + 1 )
          goto LABEL_34;
        v31 = v30[1];
        if ( v31 )
        {
LABEL_43:
          v36 = v30;
          sub_186B220((void *)(v31 - 8));
          v30 = v36;
        }
      }
      v30[1] = 0;
      v30[1] = *v24;
      v26 = v24 + 2;
      *v24 = 0;
      if ( v25 == (char *)(v24 + 1) )
      {
LABEL_45:
        v23 = (unsigned int)a1[2];
        v25 = *(char **)a1;
        goto LABEL_46;
      }
LABEL_35:
      v24 = v26;
    }
  }
LABEL_2:
  v7 = sub_62A5E0(a2);
  v8 = (unsigned int)a1[2];
  v9 = *(_QWORD **)a1;
  v10 = v8 - 1;
  v8 *= 16;
  v11 = (_QWORD *)(*(_QWORD *)a1 + v8);
  v12 = 16LL * (v7 & v10);
  v13 = (_QWORD *)(*(_QWORD *)a1 + v12);
  if ( v12 == v8 )
  {
    v14 = nullptr;
    while ( 1 )
    {
LABEL_17:
      if ( v13 == v9 )
      {
        sub_1872CE0("");
        sub_1873130(114, 405);
      }
      v18 = *v9;
      if ( *v9 <= 1u )
      {
        if ( !v18 )
        {
          if ( v14 )
            --a1[4];
          else
            v14 = v9;
          *v14 = a2;
          v19 = v14[1];
          if ( v19 )
            goto LABEL_26;
          goto LABEL_27;
        }
        v14 = v9;
      }
      else if ( v7 == (unsigned int)sub_62A5E0(v18) && a2 == *v9 )
      {
        v16 = v9[1];
        if ( v16 )
LABEL_11:
          sub_186B220((void *)(v16 - 8));
LABEL_12:
        v9[1] = v35;
        return v35;
      }
      v9 += 2;
    }
  }
  v9 = (_QWORD *)(*(_QWORD *)a1 + v12);
  v14 = nullptr;
  while ( 1 )
  {
    v15 = *v9;
    if ( *v9 <= 1u )
      break;
    if ( v7 == (unsigned int)sub_62A5E0(v15) && a2 == *v9 )
    {
      v16 = v9[1];
      if ( !v16 )
        goto LABEL_12;
      goto LABEL_11;
    }
LABEL_6:
    v9 += 2;
    if ( v11 == v9 )
    {
      v9 = *(_QWORD **)a1;
      goto LABEL_17;
    }
  }
  if ( v15 )
  {
    v14 = v9;
    goto LABEL_6;
  }
  if ( v14 )
    --a1[4];
  else
    v14 = v9;
  *v14 = a2;
  v19 = v14[1];
  if ( !v19 )
    goto LABEL_27;
LABEL_26:
  sub_186B220((void *)(v19 - 8));
LABEL_27:
  v14[1] = v35;
  ++a1[3];
  return v35;
}

