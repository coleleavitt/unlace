/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100041E5C
// Address: 0x0000000100041E5C

//----- (0000000100041E5C) ----------------------------------------------------
__int64 __fastcall sub_100041E5C(__int64 a1, char **a2)
{
  char *v4; // x22
  char *v5; // x8
  char *v6; // x21
  const char *v7; // x21
  int v8; // w9
  int v9; // w8
  __int64 result; // x0
  char *i; // x8
  int v12; // w10
  __int64 v13; // x23
  int v14; // w10
  _BYTE *v15; // x8
  __int64 v16; // x22
  char *v17; // x1
  char *v18; // x8
  bool v19; // cf
  char *v20; // x8
  char *v21; // x26
  __int64 v22; // x8
  char *v23; // x1
  char *v24; // x8
  char *v25; // x8
  int v26; // w9
  int v27; // w21
  int v28; // w0
  char *v29; // x1
  int v30; // w9
  unsigned __int64 v31; // x8
  char *v32; // x9
  int v33; // w10
  __int16 v34; // w11
  char *v35; // x1
  char *v36; // x8
  char *v37; // x8
  char *v38; // x21
  char *v39; // x8
  const void *v40; // x20
  size_t v41; // x0
  size_t v42; // x22
  unsigned __int64 v43; // x23
  char v44; // w25
  void *v45; // x1
  unsigned __int64 v46; // x26
  void *v47; // x0
  char *v48; // x8
  char v49; // t1
  char *v50; // x1
  unsigned __int8 *v51; // x3
  void *v52; // [xsp+0h] [xbp-470h] BYREF
  unsigned __int64 v53; // [xsp+8h] [xbp-468h]
  unsigned __int64 v54; // [xsp+10h] [xbp-460h]
  char v55[4]; // [xsp+18h] [xbp-458h] BYREF
  int v56; // [xsp+1Ch] [xbp-454h]
  __int16 v57; // [xsp+20h] [xbp-450h]
  char v58; // [xsp+22h] [xbp-44Eh]
  __int64 v59; // [xsp+23h] [xbp-44Dh]
  int v60; // [xsp+2Ch] [xbp-444h]

  v4 = a2[1];
  if ( v4 )
    v5 = *a2;
  else
    v5 = &byte_1000A4AEC;
  if ( *v5 != 95 )
    goto LABEL_13;
  v6 = *a2;
  if ( (*a2)[1] != 95 )
    goto LABEL_13;
  if ( !v4 )
  {
    v6 = &byte_10007AE40;
LABEL_12:
    if ( !strcmp(v6, "__TIME__") )
      goto LABEL_59;
LABEL_13:
    if ( *(_BYTE *)(a1 + 84) != 1 )
      return 0;
    if ( v4 )
    {
      v7 = *a2;
      if ( !strcmp(*a2, "defined") )
      {
        v8 = 1;
LABEL_19:
        for ( i = *(char **)(a1 + 8); ; *(_QWORD *)(a1 + 8) = i )
        {
          v12 = (unsigned __int8)*i++;
          if ( (unsigned int)(v12 - 9) >= 5 && v12 != 32 )
            break;
        }
        *(_QWORD *)(a1 + 8) = i;
        v13 = (unsigned __int8)*(i - 1);
        if ( (_DWORD)v13 == 40 )
        {
          do
          {
            do
            {
              *(_QWORD *)(a1 + 8) = ++i;
              v14 = (unsigned __int8)*(i - 1);
            }
            while ( (unsigned int)(v14 - 9) < 5 );
          }
          while ( v14 == 32 );
        }
        else if ( ((v13 & 0x80) != 0 || (_DefaultRuneLocale.__runetype[v13] & 0x100) == 0)
               && (_DWORD)v13 != 36
               && (_DWORD)v13 != 95 )
        {
          return 0;
        }
        if ( !v8 )
        {
          v26 = (unsigned __int8)*(i - 1);
          if ( v26 == 60 )
          {
            v27 = 62;
          }
          else
          {
            if ( v26 != 34 )
              return 0;
            v27 = 34;
          }
          v52 = nullptr;
          v53 = 0;
          v54 = 0;
          while ( *i && *i != 41 )
          {
            *(_QWORD *)(a1 + 8) = i + 1;
            v44 = *i;
            v45 = v52;
            if ( v53 )
              v46 = v53 - 1;
            else
              v46 = 0;
            if ( v54 < v46 + 2 )
            {
              v45 = qvector_reserve(&v52, v52, v46 + 2, 1u);
              v52 = v45;
            }
            v53 = v46 + 2;
            *((_BYTE *)v45 + v46) = v44;
            *((_BYTE *)v52 + v46 + 1) = 0;
            i = *(char **)(a1 + 8);
          }
          if ( (_DWORD)v13 == 40 && (*(_QWORD *)(a1 + 8) = i + 1, *i == 41) && v53 >= 2 )
          {
            v47 = v52;
            if ( (unsigned __int8)*((char *)v52 + v53 - 2) == v27 )
            {
              sub_10004259C(&v52, 1);
              if ( v53 )
                v51 = (unsigned __int8 *)v52;
              else
                v51 = (unsigned __int8 *)&byte_10007AE40;
              a2[4] = (char *)(sub_10004261C(a1, v55, 1024, v51, v27, 0) != nullptr);
              sub_100006678(&v52);
              goto LABEL_106;
            }
          }
          else
          {
            v47 = v52;
            if ( !v52 )
              return 0;
          }
          v53 = 0;
          qfree(v47);
          return 0;
        }
        a2[1] = nullptr;
        if ( (unsigned __int64)a2[2] <= 0x3FF )
          *a2 = (char *)qvector_reserve(a2, *a2, 0x400u, 1u);
        v15 = (_BYTE *)(*(_QWORD *)(a1 + 8) - 1LL);
        *(_QWORD *)(a1 + 8) = v15;
        v16 = (char)*v15;
        if ( (v16 & 0x8000000000000000LL) == 0 && (_DefaultRuneLocale.__runetype[v16] & 0x500) != 0
          || *v15 == 95
          || *v15 == 36 )
        {
          v17 = *a2;
          v18 = a2[1];
          v19 = v18 != nullptr;
          v20 = v18 - 1;
          if ( v19 )
            v21 = v20;
          else
            v21 = nullptr;
          if ( a2[2] < v21 + 2 )
          {
            v17 = (char *)qvector_reserve(a2, v17, (unsigned __int64)(v21 + 2), 1u);
            *a2 = v17;
          }
          a2[1] = v21 + 2;
          v21[(_QWORD)v17] = v16;
          while ( 1 )
          {
            v21[(_QWORD)*a2 + 1] = 0;
            v22 = *(_QWORD *)(a1 + 8);
            *(_QWORD *)(a1 + 8) = v22 + 1;
            v16 = *(char *)(v22 + 1);
            if ( (v16 < 0 || (_DefaultRuneLocale.__runetype[v16] & 0x500) == 0)
              && *(_BYTE *)(v22 + 1) != 95
              && *(_BYTE *)(v22 + 1) != 36 )
            {
              break;
            }
            v23 = *a2;
            v24 = a2[1];
            v19 = v24 != nullptr;
            v25 = v24 - 1;
            if ( v19 )
              v21 = v25;
            else
              v21 = nullptr;
            if ( a2[2] < v21 + 2 )
            {
              v23 = (char *)qvector_reserve(a2, v23, (unsigned __int64)(v21 + 2), 1u);
              *a2 = v23;
            }
            a2[1] = v21 + 2;
            v21[(_QWORD)v23] = v16;
          }
          v15 = (_BYTE *)(v22 + 1);
          if ( (_DWORD)v13 != 40 )
            goto LABEL_100;
        }
        else if ( (_DWORD)v13 != 40 )
        {
LABEL_100:
          if ( a2[1] )
            v50 = *a2;
          else
            v50 = &byte_10007AE40;
          v39 = (char *)(sub_1000403D0(a1, v50) != nullptr);
          goto LABEL_105;
        }
        v48 = v15 + 1;
        while ( (unsigned int)(unsigned __int8)v16 - 9 < 5 || (unsigned __int8)v16 == 32 )
        {
          *(_QWORD *)(a1 + 8) = v48;
          v49 = *v48++;
          LOBYTE(v16) = v49;
        }
        *(_QWORD *)(a1 + 8) = v48;
        if ( *(v48 - 1) == 41 )
          goto LABEL_100;
        return 0;
      }
    }
    else
    {
      v7 = &byte_10007AE40;
    }
    v9 = strcmp(v7, "__has_include");
    v8 = 0;
    result = 0;
    if ( v9 )
      return result;
    goto LABEL_19;
  }
  if ( !strcmp(*a2, "__LINE__") )
  {
    v39 = (char *)*(int *)(a1 + 288);
LABEL_105:
    a2[4] = v39;
LABEL_106:
    *((_WORD *)a2 + 12) = 3;
    return 1;
  }
  if ( !strcmp(v6, "__FILE__") )
  {
    v40 = *(const void **)(a1 + 280);
    if ( v40 && (v41 = strlen((const char *)v40)) != 0 )
    {
      v42 = v41;
      v43 = v41 + 1;
      if ( (unsigned __int64)a2[2] < v41 + 1 )
      {
        v6 = (char *)qvector_reserve(a2, v6, v43, 1u);
        *a2 = v6;
      }
      a2[1] = (char *)v43;
      memmove(v6, v40, v42);
      (*a2)[v42] = 0;
    }
    else
    {
      a2[1] = nullptr;
    }
    goto LABEL_93;
  }
  if ( strcmp(v6, "__DATE__") )
    goto LABEL_12;
LABEL_59:
  v28 = time(nullptr);
  qctime((__int64)v55, 0x28u, v28);
  v29 = *a2;
  v30 = (unsigned __int8)(*a2)[2];
  a2[1] = nullptr;
  v31 = (unsigned __int64)a2[2];
  if ( v30 == 68 )
  {
    if ( v31 <= 7 )
    {
      v29 = (char *)qvector_reserve(a2, v29, 8u, 1u);
      *a2 = v29;
    }
    a2[1] = (char *)8;
    v29[7] = 0;
    v32 = *a2;
    v33 = v56;
    v34 = v57;
    v32[6] = v58;
    *((_WORD *)v32 + 2) = v34;
    *(_DWORD *)v32 = v33;
    v35 = *a2;
    v36 = a2[1];
    v19 = v36 != nullptr;
    v37 = v36 - 1;
    if ( v19 )
      v38 = v37;
    else
      v38 = nullptr;
    if ( a2[2] < v38 + 5 )
    {
      v35 = (char *)qvector_reserve(a2, v35, (unsigned __int64)(v38 + 5), 1u);
      *a2 = v35;
    }
    a2[1] = v38 + 5;
    v38[(_QWORD)v35 + 4] = 0;
    *(_DWORD *)&v38[(_QWORD)*a2] = v60;
  }
  else
  {
    if ( v31 <= 8 )
    {
      v29 = (char *)qvector_reserve(a2, v29, 9u, 1u);
      *a2 = v29;
    }
    a2[1] = (char *)9;
    v29[8] = 0;
    *(_QWORD *)*a2 = v59;
  }
LABEL_93:
  *((_WORD *)a2 + 12) = 4;
  *((_BYTE *)a2 + 40) = 0;
  return 1;
}
// 10007AE40: using guessed type char byte_10007AE40;
// 1000A4AEC: using guessed type char byte_1000A4AEC;
