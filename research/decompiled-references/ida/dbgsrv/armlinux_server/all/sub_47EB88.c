/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_47EB88
// Address: 0x000000000047EB88

//----- (000000000047EB88) ----------------------------------------------------
_QWORD *__fastcall sub_47EB88(__int64 a1, char *s, _QWORD *a3)
{
  size_t v6; // x0
  size_t v7; // x23
  size_t v8; // x22
  _QWORD *v9; // x23
  _QWORD *v10; // x0
  _QWORD *v11; // x19
  __int64 v12; // x2
  const char *v13; // x0
  size_t v14; // x26
  unsigned __int64 v15; // x0
  const char *v17; // x22
  const char *v18; // x0
  __int64 v19; // x19
  char *v20; // x0
  int v21; // w0
  __int64 v22; // x22
  _QWORD *v23; // x0
  _QWORD *v24; // x19
  __int64 v25; // x2
  const char *v26; // x0
  const char *v27; // x1
  _QWORD *v28; // x20
  _QWORD *v29; // x27
  _QWORD *v30; // x0
  const char **v31; // x25
  size_t v32; // x26
  _QWORD *v33; // x19
  __int64 v34; // x1
  _QWORD *v35; // x25
  _QWORD *v36; // x2
  int v37; // w0
  __int64 v38; // x1
  _QWORD *v39; // x0
  void *v40; // x0
  void *v41; // x1
  void *v42; // x0
  __int64 v43; // x1
  _QWORD *v44; // x0
  __int64 v45; // x1
  __int64 v46; // x28
  char *v47; // x2
  unsigned int v48; // w27
  unsigned __int64 v49; // x19
  unsigned __int64 v50; // x26
  unsigned __int8 *v51; // x22
  int v52; // w0
  const char *v54; // x0
  const char *v55; // x1
  unsigned int v56; // w0
  _QWORD *v57; // [xsp+68h] [xbp-78h]
  __int64 v58; // [xsp+70h] [xbp-70h]
  unsigned __int64 v59[2]; // [xsp+88h] [xbp-58h] BYREF
  void *ptr; // [xsp+98h] [xbp-48h] BYREF
  size_t v61; // [xsp+A0h] [xbp-40h]
  __int64 v62; // [xsp+A8h] [xbp-38h]
  void *v63; // [xsp+B0h] [xbp-30h] BYREF
  __int64 v64; // [xsp+B8h] [xbp-28h]
  __int64 v65; // [xsp+C0h] [xbp-20h]
  __int64 v66; // [xsp+C8h] [xbp-18h]
  int v67; // [xsp+D0h] [xbp-10h]

  ptr = nullptr;
  v61 = 0;
  v62 = 0;
  if ( s )
  {
    v6 = strlen(s);
    v7 = v6 + 1;
    v8 = v6;
    ptr = sub_491288((__int64)&ptr, nullptr, v6 + 1, 1u);
    v61 = v7;
    memmove(ptr, s, v8);
    *((_BYTE *)ptr + v8) = 0;
  }
  while ( 1 )
  {
    v9 = (_QWORD *)(a1 + 280);
    v10 = sub_47E230(*(_QWORD **)(a1 + 288), (_QWORD *)(a1 + 280), (__int64)&ptr);
    v11 = v10;
    if ( (_QWORD *)(a1 + 280) == v10 )
      break;
    v12 = v10[5];
    v13 = (const char *)ptr;
    v14 = v61;
    if ( !v61 )
      v13 = (const char *)&qword_4B2D48;
    if ( v12 )
    {
      if ( strcmp(v13, (const char *)v11[4]) < 0 )
        goto LABEL_15;
    }
    else if ( strcmp(v13, (const char *)&qword_4B2D48) < 0 )
    {
      goto LABEL_15;
    }
    v15 = v11[7];
    if ( v15 == -1 )
    {
      a3 = nullptr;
      goto LABEL_11;
    }
    if ( v15 < *(_QWORD *)(a1 + 256) )
    {
      a3 = *(_QWORD **)(*(_QWORD *)(a1 + 248) + 8 * v15);
      goto LABEL_11;
    }
    if ( !under_debugger )
      sub_492270(1472);
    __break(0x3E8u);
  }
  v14 = v61;
LABEL_15:
  v17 = (const char *)&qword_4B2D48;
  v18 = "Adlam";
  v19 = 1;
  if ( v14 )
    v17 = (const char *)ptr;
  while ( 1 )
  {
    if ( !strcmp(v18, v17) )
    {
      v63 = nullptr;
      v64 = 0;
      v65 = 0;
      v66 = 0;
      v67 = -1;
      if ( (unsigned __int8)sub_47E5A8((__int64)&v63, v19) )
      {
        a3 = sub_491248(40);
        *a3 = 0;
        a3[1] = 0;
        a3[2] = 0;
        a3[3] = 0;
        *((_DWORD *)a3 + 8) = -1;
        v43 = *(_QWORD *)(a1 + 256);
        if ( (unsigned __int64)(v43 + 1) > *(_QWORD *)(a1 + 264) )
        {
          v44 = sub_491288(a1 + 248, *(void **)(a1 + 248), v43 + 1, 8u);
          *(_QWORD *)(a1 + 248) = v44;
          v43 = *(_QWORD *)(a1 + 256);
        }
        else
        {
          v44 = *(_QWORD **)(a1 + 248);
        }
        v44[v43] = a3;
        v45 = v64;
        v58 = v64;
        ++*(_QWORD *)(a1 + 256);
        v20 = (char *)v63;
        if ( v45 )
        {
          v46 = 0;
          do
          {
            v47 = &v20[16 * (int)v46];
            v48 = *((_QWORD *)v47 + 1);
            if ( (unsigned int)*(_QWORD *)v47 < v48 )
            {
              v49 = (unsigned int)*(_QWORD *)v47;
              v50 = (unsigned int)*(_QWORD *)v47 + 1 - v49;
              v51 = (unsigned __int8 *)qword_4CA1E8 + 4 * v49 + 2;
              do
              {
                if ( (unsigned int)v49 <= 0x7F )
                  v52 = *v51;
                else
                  v52 = (unsigned __int8)((unsigned int)sub_47E110(v49) >> 16);
                if ( (v52 & 0xFFFFFFFD) == 9 || v52 == 7 )
                {
                  v59[0] = v49;
                  v59[1] = v50 + v49;
                  sub_497350((__int64)a3, v59);
                }
                ++v49;
                v51 += 4;
              }
              while ( v48 > (unsigned int)v49 );
              v20 = (char *)v63;
            }
            ++v46;
          }
          while ( v58 != v46 );
        }
      }
      else
      {
        v20 = (char *)v63;
        a3 = nullptr;
      }
      if ( v20 )
      {
        v64 = 0;
        j__free(v20);
      }
      goto LABEL_34;
    }
    if ( ++v19 == 328 )
      break;
    v18 = off_51BD70[v19];
  }
  if ( !a3 )
  {
    v22 = -1;
    goto LABEL_36;
  }
  v63 = nullptr;
  v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = -1;
  v21 = ((__int64 (__fastcall *)(void **, const char *))a3)(&v63, v17);
  a3 = nullptr;
  if ( !v21 )
  {
    a3 = sub_491248(40);
    *a3 = 0;
    a3[1] = 0;
    a3[2] = 0;
    a3[3] = 0;
    *((_DWORD *)a3 + 8) = -1;
    v38 = *(_QWORD *)(a1 + 256);
    if ( (unsigned __int64)(v38 + 1) > *(_QWORD *)(a1 + 264) )
    {
      v39 = sub_491288(a1 + 248, *(void **)(a1 + 248), v38 + 1, 8u);
      *(_QWORD *)(a1 + 248) = v39;
      v38 = *(_QWORD *)(a1 + 256);
    }
    else
    {
      v39 = *(_QWORD **)(a1 + 248);
    }
    v39[v38] = a3;
    ++*(_QWORD *)(a1 + 256);
    sub_49A3D8((__int64)a3, (__int64)&v63);
  }
  if ( v63 )
  {
    v64 = 0;
    j__free(v63);
  }
LABEL_34:
  v22 = -1;
  if ( a3 )
    v22 = *(_QWORD *)(a1 + 256) - 1LL;
LABEL_36:
  v23 = sub_47E230(*(_QWORD **)(a1 + 288), (_QWORD *)(a1 + 280), (__int64)&ptr);
  v24 = v23;
  if ( v9 == v23 )
    goto LABEL_43;
  v25 = v23[5];
  v26 = (const char *)ptr;
  v27 = (const char *)&qword_4B2D48;
  if ( !v61 )
    v26 = (const char *)&qword_4B2D48;
  if ( v25 )
    v27 = (const char *)v24[4];
  if ( strcmp(v26, v27) < 0 )
  {
LABEL_43:
    v28 = (_QWORD *)(a1 + 272);
    v29 = v24;
    v30 = sub_49E050(0x40u);
    v31 = (const char **)(v30 + 4);
    v32 = v61;
    v30[4] = 0;
    v33 = v30;
    v30[5] = 0;
    v30[6] = 0;
    if ( v32 )
    {
      v40 = sub_491248(v32);
      v41 = ptr;
      v33[4] = v40;
      v31[2] = (const char *)v32;
      memcpy(v40, v41, v32);
      v33[5] = v32;
    }
    v31[3] = nullptr;
    v35 = sub_47E998(v28, v29, v31);
    v36 = (_QWORD *)v34;
    if ( v34 )
    {
      v37 = v9 == (_QWORD *)v34;
      if ( v35 )
        v37 = 1;
      if ( !v37 )
      {
        if ( v33[5] )
          v54 = (const char *)v33[4];
        else
          v54 = (const char *)&qword_4B2D48;
        if ( *(_QWORD *)(v34 + 40) )
          v55 = *(const char **)(v34 + 32);
        else
          v55 = (const char *)&qword_4B2D48;
        v57 = v36;
        v56 = strcmp(v54, v55);
        v36 = v57;
        v37 = v56 >> 31;
      }
      sub_49F830(v37, (__int64)v33, v36, v9);
      ++v28[5];
      v33[7] = v22;
    }
    else
    {
      v42 = (void *)v33[4];
      if ( v42 )
      {
        v33[5] = 0;
        j__free(v42);
      }
      j__free_0(v33);
      v35[7] = v22;
    }
  }
  else
  {
    v24[7] = v22;
  }
LABEL_11:
  if ( ptr )
  {
    v61 = 0;
    j__free(ptr);
  }
  return a3;
}
// 47EB88: could not find valid save-restore pair for x26
// 47EE4C: variable 'v34' is possibly undefined
// 4B2D48: using guessed type __int64 qword_4B2D48;
// 4CA1E8: using guessed type __int64 qword_4CA1E8[512];
// 51BD70: using guessed type char *off_51BD70[2];
// 52451C: using guessed type char under_debugger;
