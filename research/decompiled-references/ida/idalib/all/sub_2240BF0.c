void __fastcall sub_2240BF0(const char ***a1, const char ***a2, const char ***a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  size_t v5; // rdx
  __int64 v6; // rax
  const char ***v7; // rbx
  const char ***v8; // r13
  const char ***i; // r12
  const char ***v10; // r14
  const char ***v11; // rbp
  const char ***v12; // rbp
  const char **v13; // r14
  const char **v14; // r15
  int v15; // eax
  signed __int64 v16; // r15
  char *v17; // rbx
  const char ***v18; // rax
  const char ***v19; // r14
  const char **v20; // r15
  const char **v21; // r13
  int v22; // eax
  const char ***v23; // r13
  __int64 v24; // rax
  const char ***v25; // rbx
  const char ***v26; // r15
  const char ***v27; // r14
  const char ***v28; // rbp
  const char ***v29; // rdx
  const char ***v30; // r14
  const char **v31; // rbx
  const char **v32; // r12
  unsigned int v33; // eax
  unsigned int v34; // eax
  unsigned int v35; // eax
  size_t v36; // r8
  char *v37; // r13
  signed __int64 v38; // r15
  void *v39; // rdi
  const char ***v40; // r14
  const char ***v41; // rbp
  const char **v42; // r12
  const char **v43; // r15
  int v44; // eax
  const char ***v45; // [rsp+8h] [rbp-90h]
  __int64 v46; // [rsp+18h] [rbp-80h]
  __int64 v47; // [rsp+18h] [rbp-80h]
  const char ***v48; // [rsp+20h] [rbp-78h]
  const char ***v49; // [rsp+20h] [rbp-78h]
  __int64 v50; // [rsp+20h] [rbp-78h]
  __int64 v51; // [rsp+28h] [rbp-70h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+30h] [rbp-68h]
  const char ***v54; // [rsp+30h] [rbp-68h]
  size_t v55; // [rsp+30h] [rbp-68h]
  __int64 v56; // [rsp+38h] [rbp-60h]
  const char ***src; // [rsp+40h] [rbp-58h]

  v3 = (char *)a2 - (char *)a1;
  v56 = a2 - a1;
  v45 = (const char ***)((char *)a3 + (char *)a2 - (char *)a1);
  if ( (char *)a2 - (char *)a1 <= 48 )
  {
    sub_2240A50(a1, a2);
  }
  else
  {
    src = a1;
    do
    {
      sub_2240A50(a1, a1 + 7);
      a1 += 7;
    }
    while ( (char *)a2 - (char *)a1 > 48 );
    sub_2240A50(a1, a2);
    if ( v3 > 56 )
    {
      v4 = 7;
      do
      {
        v5 = (char *)a2 - (char *)src;
        v46 = 2 * v4;
        v6 = a2 - src;
        if ( 2 * v4 > v6 )
        {
          v7 = a3;
          v11 = src;
        }
        else
        {
          v7 = a3;
          v53 = v4;
          v51 = 2 * v4;
          v8 = &src[v4];
          for ( i = src; ; i = v11 )
          {
            v10 = v8;
            v11 = &i[v51];
            if ( &i[v51] != v8 )
            {
              v48 = &i[v51];
              v12 = v8;
              do
              {
                v13 = *i;
                v14 = *v12;
                v15 = strcmp(**v12, **i);
                if ( !v15 )
                {
                  v15 = strcmp(v14[1], v13[1]);
                  if ( !v15 )
                    v15 = strcmp(v14[2], v13[2]);
                }
                if ( v15 < 0 )
                {
                  *v7 = v14;
                  ++v12;
                  ++v7;
                  if ( v8 == i )
                    goto LABEL_17;
                }
                else
                {
                  ++i;
                  *v7++ = v13;
                  if ( v8 == i )
                  {
LABEL_17:
                    v10 = v12;
                    v16 = 0;
                    v11 = v48;
                    goto LABEL_20;
                  }
                }
              }
              while ( v48 != v12 );
              v10 = v12;
              v11 = v48;
            }
            v16 = (char *)v8 - (char *)i;
            memmove(v7, i, (char *)v8 - (char *)i);
LABEL_20:
            v17 = (char *)v7 + v16;
            if ( v10 != v11 )
              memmove(v17, v10, (char *)v11 - (char *)v10);
            v7 = (const char ***)&v17[(char *)v11 - (char *)v10];
            v8 = (const char ***)((char *)v8 + v51 * 8);
            v5 = (char *)a2 - (char *)v11;
            v6 = a2 - v11;
            if ( v46 > v6 )
              break;
          }
          v4 = v53;
        }
        if ( v6 > v4 )
          v6 = v4;
        v18 = &v11[v6];
        v49 = v18;
        if ( v18 == v11 )
        {
          v19 = v11;
LABEL_38:
          if ( v19 != a2 )
          {
            v4 *= 4;
            memmove((char *)v7 + (char *)v49 - (char *)v11, v19, v5);
            if ( v56 < v4 )
              goto LABEL_40;
            goto LABEL_43;
          }
        }
        else
        {
          v19 = v18;
          while ( v19 != a2 )
          {
            v20 = *v11;
            v21 = *v19;
            v22 = strcmp(**v19, **v11);
            if ( !v22 )
            {
              v22 = strcmp(v21[1], v20[1]);
              if ( !v22 )
                v22 = strcmp(v21[2], v20[2]);
            }
            if ( v22 < 0 )
            {
              *v7 = v21;
              ++v19;
              ++v7;
              if ( v49 == v11 )
                goto LABEL_37;
            }
            else
            {
              ++v11;
              *v7++ = v20;
              if ( v49 == v11 )
              {
LABEL_37:
                v5 = (char *)a2 - (char *)v19;
                goto LABEL_38;
              }
            }
          }
          memmove(v7, v11, (char *)v49 - (char *)v11);
        }
        v4 *= 4;
        if ( v56 < v4 )
        {
LABEL_40:
          v23 = src;
          v24 = v56;
          v25 = a3;
          goto LABEL_60;
        }
LABEL_43:
        v26 = a3;
        v23 = src;
        v52 = v4;
        v50 = 8 * v4;
        v27 = &a3[v46];
        v25 = &a3[v4];
        if ( v25 != v27 )
        {
LABEL_44:
          v28 = v27;
          v29 = v27;
          v30 = v25;
          do
          {
            while ( 1 )
            {
              v31 = *v28;
              v32 = *v26;
              v54 = v29;
              v33 = strcmp(**v28, **v26);
              v29 = v54;
              if ( v33 || (v33 = strcmp(v31[1], v32[1]), v29 = v54, v33) )
              {
                v35 = v33 >> 31;
              }
              else
              {
                v34 = strcmp(v31[2], v32[2]);
                v29 = v54;
                v35 = v34 >> 31;
              }
              if ( !(_BYTE)v35 )
                break;
              ++v28;
              *v23++ = v31;
              if ( v30 == v28 || v26 == v29 )
                goto LABEL_51;
            }
            ++v26;
            *v23++ = v32;
          }
          while ( v26 != v29 && v30 != v28 );
LABEL_51:
          v25 = v30;
          v27 = v29;
          v36 = (char *)v29 - (char *)v26;
          if ( v29 != v26 )
          {
LABEL_52:
            v55 = v36;
            memmove(v23, v26, v36);
            v36 = v55;
          }
          v37 = (char *)v23 + v36;
          v38 = (char *)v25 - (char *)v28;
          if ( v25 != v28 )
          {
            v39 = v37;
            v23 = (const char ***)&v37[v38];
            memmove(v39, v28, (char *)v25 - (char *)v28);
            v27 = (const char ***)((char *)v27 + v50);
            v24 = v45 - v25;
            if ( v52 > v24 )
            {
              v4 = v52;
              goto LABEL_60;
            }
            goto LABEL_55;
          }
          goto LABEL_58;
        }
        while ( 1 )
        {
          v28 = v27;
          v36 = (char *)v27 - (char *)v26;
          if ( v27 != v26 )
            goto LABEL_52;
          v37 = (char *)v23 + v36;
          v28 = v27;
          v38 = 0;
LABEL_58:
          v23 = (const char ***)&v37[v38];
          v27 = (const char ***)((char *)v27 + v50);
          v24 = v45 - v28;
          if ( v52 > v24 )
            break;
LABEL_55:
          v26 = v25;
          v25 = (const char ***)((char *)v25 + v50);
          if ( v25 != v27 )
            goto LABEL_44;
        }
        v4 = v52;
        v25 = v28;
LABEL_60:
        if ( v46 <= v24 )
          v24 = v46;
        v40 = &v25[v24];
        v41 = v40;
        if ( v40 != v25 && v45 != v40 )
        {
          v47 = v4;
          do
          {
            while ( 1 )
            {
              v42 = *v41;
              v43 = *v25;
              v44 = strcmp(**v41, **v25);
              if ( !v44 )
              {
                v44 = strcmp(v42[1], v43[1]);
                if ( !v44 )
                  v44 = strcmp(v42[2], v43[2]);
              }
              if ( v44 >= 0 )
                break;
              *v23 = v42;
              ++v41;
              ++v23;
              if ( v45 == v41 || v40 == v25 )
                goto LABEL_71;
            }
            ++v25;
            *v23++ = v43;
          }
          while ( v40 != v25 && v45 != v41 );
LABEL_71:
          v4 = v47;
        }
        if ( v40 != v25 )
          memmove(v23, v25, (char *)v40 - (char *)v25);
        if ( v45 != v41 )
          memmove((char *)v23 + (char *)v40 - (char *)v25, v41, (char *)v45 - (char *)v41);
      }
      while ( v56 > v4 );
    }
  }
}
