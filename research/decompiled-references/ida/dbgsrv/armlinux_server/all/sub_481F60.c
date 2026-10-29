/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_481F60
// Address: 0x0000000000481F60

//----- (0000000000481F60) ----------------------------------------------------
__int64 __fastcall sub_481F60(void **a1, __int64 *a2, const char *a3)
{
  _QWORD *v6; // x0
  __int64 v7; // x20
  __int64 v8; // x22
  unsigned __int64 v9; // x19
  __int64 v10; // x22
  char *v11; // x0
  __int64 v12; // x2
  void **v13; // x19
  __int64 v14; // x21
  size_t v15; // x21
  void *v16; // x23
  __int64 v17; // x23
  void *v18; // x0
  size_t v19; // x25
  unsigned __int64 v20; // x27
  void *v21; // x21
  __int64 v22; // x23
  unsigned __int64 v23; // x21
  void *v24; // x0
  __int64 v25; // x21
  size_t v26; // x21
  void *v27; // x27
  size_t v28; // x25
  unsigned __int64 v29; // x23
  __int64 v30; // x27
  void *v31; // x0
  const void **v32; // x21
  __int64 v33; // x3
  const void **v34; // x3
  const void **v35; // x20
  const void *v36; // x1
  unsigned __int64 v37; // x3
  void *v38; // x1
  const void *v39; // x22
  size_t v40; // x22
  unsigned __int64 v41; // x19
  size_t v42; // x27
  unsigned __int64 v43; // x25
  void *v44; // x0
  void *v45; // x4
  void *v46; // x2
  char *v47; // x1
  unsigned __int64 v48; // x21
  __int64 v49; // x19
  __int64 v50; // x20
  void *v51; // x0
  char *v52; // x1
  _BYTE *v54; // x0
  void *ptr; // [xsp+78h] [xbp-38h] BYREF
  unsigned __int64 v56; // [xsp+80h] [xbp-30h]
  unsigned __int64 v57; // [xsp+88h] [xbp-28h]
  _BYTE *v58; // [xsp+90h] [xbp-20h] BYREF
  unsigned __int64 v59; // [xsp+98h] [xbp-18h]
  unsigned __int64 v60; // [xsp+A0h] [xbp-10h]
  __int64 v61; // [xsp+A8h] [xbp-8h]

  ptr = nullptr;
  v56 = 0;
  v57 = 0;
  if ( a3 )
  {
    ptr = sub_491288((__int64)&ptr, nullptr, 1u, 0x18u);
    v6 = (char *)ptr + 24 * v56;
    *v6 = 0;
    v6[1] = 0;
    v6[2] = 0;
    ++v56;
    sub_40CD68((__int64)v6, "-O%s", a3);
    v7 = *a2;
    v8 = a2[1];
    v9 = v56;
    v10 = v7 + 48 * v8;
    if ( v7 != v10 )
    {
      while ( 1 )
      {
LABEL_5:
        v11 = (char *)ptr;
        if ( v9 + 1 > v57 )
        {
          v11 = (char *)sub_491288((__int64)&ptr, ptr, v9 + 1, 0x18u);
          v9 = v56;
          ptr = v11;
        }
        v12 = 3 * v9;
        v13 = (void **)&v11[24 * v9];
        *(_QWORD *)&v11[8 * v12] = 0;
        v13[1] = nullptr;
        v13[2] = nullptr;
        ++v56;
        v14 = *(_QWORD *)(v7 + 8);
        if ( !v14 )
          goto LABEL_12;
        v15 = v14 - 1;
        if ( !v15 )
          goto LABEL_12;
        v16 = v13[1];
        if ( v16 )
        {
          v17 = (__int64)v16 - 1;
          v18 = *v13;
          v19 = v15 + v17;
          v20 = v15 + v17 + 1;
          if ( v15 + v17 != -1 )
            goto LABEL_41;
        }
        else
        {
          v19 = v15;
          v17 = 0;
          v20 = v15 + 1;
          v18 = *v13;
          if ( v15 != -1 )
          {
LABEL_41:
            v18 = sub_491288((__int64)v13, v18, v20, 1u);
            *v13 = v18;
          }
        }
        v13[1] = (void *)v20;
        *((_BYTE *)v18 + v19) = 0;
        memcpy((char *)*v13 + v17, *(const void **)v7, v15);
LABEL_12:
        if ( *(_QWORD *)(v7 + 32) <= 1u )
        {
LABEL_4:
          v7 += 48;
          v9 = v56;
          if ( v10 == v7 )
            break;
        }
        else
        {
          v21 = v13[1];
          if ( v21 )
          {
            v22 = (__int64)v21 - 1;
            v23 = (unsigned __int64)v21 + 1;
            v24 = *v13;
            if ( v23 > (unsigned __int64)v13[2] )
              goto LABEL_39;
          }
          else
          {
            v23 = 2;
            v22 = 0;
            v24 = *v13;
            if ( (unsigned __int64)v13[2] < 2 )
            {
LABEL_39:
              v24 = sub_491288((__int64)v13, v24, v23, 1u);
              *v13 = v24;
            }
          }
          v13[1] = (void *)v23;
          *((_BYTE *)v24 + v22) = 61;
          *((_BYTE *)*v13 + v22 + 1) = 0;
          v25 = *(_QWORD *)(v7 + 32);
          if ( !v25 )
            goto LABEL_4;
          v26 = v25 - 1;
          if ( !v26 )
            goto LABEL_4;
          v27 = v13[1];
          if ( v27 )
          {
            v30 = (__int64)v27 - 1;
            v28 = v26 + v30;
            v31 = *v13;
            v29 = v26 + v30 + 1;
            if ( v29 > (unsigned __int64)v13[2] )
            {
LABEL_43:
              v31 = sub_491288((__int64)v13, v31, v29, 1u);
              *v13 = v31;
            }
          }
          else
          {
            v28 = v26;
            v29 = v26 + 1;
            v30 = 0;
            v31 = *v13;
            if ( v26 + 1 > (unsigned __int64)v13[2] )
              goto LABEL_43;
          }
          v13[1] = (void *)v29;
          *((_BYTE *)v31 + v28) = 0;
          v7 += 48;
          memcpy((char *)*v13 + v30, *(const void **)(v7 - 24), v26);
          v9 = v56;
          if ( v10 == v7 )
            break;
        }
      }
    }
    v58 = nullptr;
    v59 = 0;
    v60 = 0;
    if ( v9 )
    {
      v32 = (const void **)ptr;
      v33 = 3 * v9--;
      v34 = (const void **)((char *)ptr + 8 * v33);
      if ( ptr != v34 )
      {
        v35 = (const void **)ptr;
        do
        {
          v36 = v35[1];
          v35 += 3;
          if ( v36 )
            v9 = (unsigned __int64)v36 + v9 - 1;
        }
        while ( v34 != v35 );
        v37 = 0;
        v38 = nullptr;
        if ( !v9 )
        {
          while ( 1 )
          {
LABEL_35:
            if ( v9 > 1 )
            {
              if ( v9 + 1 > v37 )
              {
                v38 = sub_491288((__int64)&v58, v38, v9 + 1, 1u);
                v58 = v38;
              }
              v59 = v9 + 1;
              *((_BYTE *)v38 + v9) = 0;
              v58[v9 - 1] = asc_4B3398[0];
              v38 = v58;
              v9 = v59;
              v37 = v60;
            }
            v39 = v32[1];
            if ( !v39 )
              goto LABEL_34;
            v40 = (size_t)v39 - 1;
            if ( !v40 )
              goto LABEL_34;
            if ( v9 )
            {
              v41 = v9 - 1;
              v42 = v40 + v41;
              v43 = v40 + v41 + 1;
              if ( v43 > v37 )
                goto LABEL_59;
            }
            else
            {
              v42 = v40;
              v41 = 0;
              v43 = v40 + 1;
              if ( v40 + 1 > v37 )
              {
LABEL_59:
                v38 = sub_491288((__int64)&v58, v38, v43, 1u);
                v58 = v38;
              }
            }
            v59 = v43;
            *((_BYTE *)v38 + v42) = 0;
            memcpy(&v58[v41], *v32, v40);
            v38 = v58;
            v9 = v59;
            v37 = v60;
LABEL_34:
            v32 += 3;
            if ( v35 == v32 )
              goto LABEL_46;
          }
        }
        goto LABEL_60;
      }
      if ( v9 )
      {
LABEL_60:
        v54 = sub_491288((__int64)&v58, nullptr, v9, 1u);
        v32 = (const void **)ptr;
        v58 = v54;
        v38 = v54;
        v9 = v59;
        v37 = v60;
        v35 = (const void **)((char *)ptr + 24 * v56);
        if ( ptr != v35 )
          goto LABEL_35;
        goto LABEL_46;
      }
    }
    v37 = 0;
    v38 = nullptr;
    goto LABEL_46;
  }
  v7 = *a2;
  v10 = *a2 + 48 * a2[1];
  if ( v10 != *a2 )
  {
    v9 = 0;
    goto LABEL_5;
  }
  v37 = 0;
  v9 = 0;
  v38 = nullptr;
LABEL_46:
  v45 = a1[1];
  v58 = *a1;
  v44 = v58;
  v59 = (unsigned __int64)v45;
  v46 = a1[2];
  *a1 = v38;
  a1[1] = (void *)v9;
  a1[2] = (void *)v37;
  v60 = (unsigned __int64)v46;
  if ( v44 )
  {
    v59 = 0;
    j__free(v44);
  }
  v47 = (char *)ptr;
  if ( ptr )
  {
    v48 = v56;
    if ( v56 )
    {
      v49 = 0;
      v50 = 0;
      do
      {
        v51 = *(void **)&v47[v49];
        v52 = &v47[v49];
        if ( v51 )
        {
          *((_QWORD *)v52 + 1) = 0;
          j__free(v51);
        }
        ++v50;
        v49 += 24;
        v47 = (char *)ptr;
      }
      while ( v48 != v50 );
    }
    v56 = 0;
    j__free(v47);
  }
  return v61 ^ _stack_chk_guard;
}
