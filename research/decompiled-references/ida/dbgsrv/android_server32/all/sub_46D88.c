/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46D88
// Address: 0x00046D88

//----- (00046D88) --------------------------------------------------------
int __fastcall sub_46D88(_DWORD *a1, const char *a2, int a3, int a4, unsigned __int8 *a5, int a6, int a7)
{
  _DWORD *v10; // r0
  int v11; // r1
  _DWORD *v12; // r0
  void **v14; // r6
  unsigned __int8 *v15; // r4
  int v16; // r7
  int v17; // r0
  size_t v18; // r4
  unsigned int v19; // r6
  _DWORD *v20; // r2
  void *v21; // r0
  _DWORD *v22; // r5
  char *v23; // r2
  int v24; // r0
  char *v25; // r2
  size_t v26; // r4
  _DWORD *v27; // r2
  int v28; // r0
  int v29; // r5
  unsigned int v30; // r6
  _BYTE *v31; // r0
  char *v32; // r4
  int v33; // r4
  _DWORD *v34; // r2
  int v35; // r0
  int v36; // r5
  unsigned int v37; // r6
  _BYTE *v38; // r0
  void *v39; // r0
  const char *v40; // r1
  size_t v41; // r2
  size_t v42; // r3
  _DWORD *v43; // r2
  int v44; // r0
  int v45; // r5
  size_t v46; // r7
  unsigned int v47; // r6
  _BYTE *v48; // r0
  double v50; // [sp+4h] [bp-84h]
  int v51; // [sp+Ch] [bp-7Ch]
  size_t v52; // [sp+Ch] [bp-7Ch]
  void **v53; // [sp+20h] [bp-68h]
  unsigned __int8 v54[8]; // [sp+24h] [bp-64h] BYREF
  void *v55; // [sp+2Ch] [bp-5Ch]
  int v56; // [sp+30h] [bp-58h]
  int v57; // [sp+34h] [bp-54h]
  int v58; // [sp+38h] [bp-50h]
  unsigned __int8 v59[8]; // [sp+3Ch] [bp-4Ch] BYREF
  char *s; // [sp+44h] [bp-44h]
  unsigned int v61; // [sp+48h] [bp-40h]
  int v62; // [sp+4Ch] [bp-3Ch]
  int v63; // [sp+50h] [bp-38h]
  unsigned __int8 v64[8]; // [sp+54h] [bp-34h] BYREF
  void *v65; // [sp+5Ch] [bp-2Ch]
  int v66; // [sp+60h] [bp-28h]
  int v67; // [sp+64h] [bp-24h]
  int v68; // [sp+68h] [bp-20h]
  unsigned __int8 v69[8]; // [sp+6Ch] [bp-1Ch] BYREF
  char *v70; // [sp+74h] [bp-14h]
  int v71; // [sp+78h] [bp-10h]
  int v72; // [sp+7Ch] [bp-Ch]
  int v73; // [sp+80h] [bp-8h]

  v10 = a1 + 9;
  v11 = a1[10];
  if ( a1[11] >= (unsigned int)(v11 + 1) )
  {
    v12 = (_DWORD *)*v10;
  }
  else
  {
    v12 = qvector_reserve((int)v10, (void *)a1[9], v11 + 1, 4u);
    a1[9] = v12;
    v11 = a1[10];
  }
  v12[v11] = 0;
  v53 = (void **)a1;
  ++a1[10];
  if ( a4 >= 1 )
  {
    do
    {
      sub_3DC40((int)(v53 + 3), a5);
      --a4;
      a5 += 24;
    }
    while ( a4 );
  }
  v14 = v53;
  v15 = (unsigned __int8 *)a6;
  v16 = sub_47A68(v53, a6, a2);
  if ( !v16 )
  {
    if ( !a7 )
      goto LABEL_78;
    v51 = (int)v53[3] + 24 * (_DWORD)v53[4] - 24;
    v17 = _strlen_chk("Runtime error", 14);
    LODWORD(v50) = 0;
    if ( v17 )
    {
      v18 = v17;
      v19 = v17 + 1;
      v20 = (_DWORD *)a7;
      if ( *(_DWORD *)(a7 + 8) >= (unsigned int)(v17 + 1) )
      {
        v21 = *(void **)a7;
      }
      else
      {
        v21 = qvector_reserve(a7, *(void **)a7, v19, 1u);
        v20 = (_DWORD *)a7;
        *(_DWORD *)a7 = v21;
      }
      v20[1] = v19;
      v22 = v20;
      memmove(v21, "Runtime error", v18);
      *(_BYTE *)(*v22 + v18) = 0;
    }
    else
    {
      *(_DWORD *)(a7 + 4) = 0;
    }
    v69[0] = 2;
    v73 = 0;
    v72 = 0;
    v71 = 0;
    v70 = nullptr;
    v64[0] = 2;
    v68 = 0;
    v67 = 0;
    v66 = 0;
    v65 = nullptr;
    get_idcv_attr((int)v64, v51, "line", 0);
    HIDWORD(v50) = 0;
    get_idcv_attr((int)v69, v51, "file", 0);
    if ( v64[0] == 2 && (int)v65 >= 1 && v69[0] == 7 )
    {
      if ( v71 )
        v23 = v70;
      else
        v23 = &byte_B3CBE;
      if ( !*v23 )
        v23 = "<unknown>";
      sub_28C8C(a7, " on %s:%d", v23, v65);
      goto LABEL_39;
    }
    v59[0] = 2;
    v63 = 0;
    v62 = 0;
    v61 = 0;
    s = nullptr;
    get_idcv_attr((int)v59, v51, "func", 0);
    v24 = v59[0];
    if ( v59[0] == 7 )
    {
      if ( v61 < 2 )
      {
LABEL_36:
        if ( s )
        {
          v61 = 0;
          qfree(s);
          v62 = 0;
          s = nullptr;
        }
LABEL_39:
        v26 = _strlen_chk(": ", 3);
        v27 = (_DWORD *)a7;
        v28 = *(_DWORD *)(a7 + 4);
        v29 = v28 - 1;
        if ( !v28 )
          v29 = 0;
        v30 = v29 + v26 + 1;
        if ( *(_DWORD *)(a7 + 8) >= v30 )
        {
          v31 = *(_BYTE **)a7;
        }
        else
        {
          v31 = qvector_reserve(a7, *(void **)a7, v29 + v26 + 1, 1u);
          v27 = (_DWORD *)a7;
          *(_DWORD *)a7 = v31;
        }
        v27[1] = v30;
        v31[v29 + v26] = BYTE4(v50);
        memmove((void *)(*v27 + v29), ": ", v26);
        v59[0] = 2;
        v63 = HIDWORD(v50);
        v62 = HIDWORD(v50);
        v61 = HIDWORD(v50);
        s = (char *)HIDWORD(v50);
        get_idcv_attr((int)v59, v51, "description", SHIDWORD(v50));
        if ( v59[0] == 7 )
        {
          if ( v61 )
          {
            v32 = s;
            v14 = v53;
            v16 = LODWORD(v50);
            if ( !s )
            {
LABEL_62:
              if ( v59[0] == 5 )
              {
                sub_448A0((int)s, v59);
                v15 = (unsigned __int8 *)a6;
              }
              else
              {
                v15 = (unsigned __int8 *)a6;
                if ( v59[0] == 7 && s )
                {
                  v61 = HIDWORD(v50);
                  qfree(s);
                  v62 = 0;
                  s = nullptr;
                }
              }
              if ( v64[0] == 5 )
              {
                sub_448A0((int)v65, v64);
              }
              else if ( v64[0] == 7 && v65 )
              {
                v66 = HIDWORD(v50);
                qfree(v65);
                v67 = 0;
                v65 = nullptr;
              }
              if ( v69[0] == 5 )
              {
                sub_448A0((int)v70, v69);
              }
              else if ( v69[0] == 7 && v70 )
              {
                v71 = HIDWORD(v50);
                qfree(v70);
                v72 = 0;
                v70 = nullptr;
                if ( !v15 )
                  goto LABEL_80;
LABEL_79:
                sub_4AA10((int *)v14 + 3, v15);
                goto LABEL_80;
              }
LABEL_78:
              if ( !v15 )
                goto LABEL_80;
              goto LABEL_79;
            }
          }
          else
          {
            v32 = &byte_B3CBE;
          }
          v42 = strlen(v32);
          v43 = (_DWORD *)a7;
          v44 = *(_DWORD *)(a7 + 4);
          v45 = v44 - 1;
          if ( !v44 )
            v45 = 0;
          v46 = v45 + v42;
          v47 = v45 + v42 + 1;
          if ( *(_DWORD *)(a7 + 8) >= v47 )
          {
            v48 = *(_BYTE **)a7;
          }
          else
          {
            v52 = v42;
            v48 = qvector_reserve(a7, *(void **)a7, v47, 1u);
            v43 = (_DWORD *)a7;
            *(_DWORD *)a7 = v48;
            v42 = v52;
          }
          v43[1] = v47;
          v48[v46] = BYTE4(v50);
          v39 = (void *)(*v43 + v45);
          v40 = v32;
          v41 = v42;
        }
        else
        {
          v33 = _strlen_chk("Unhandled exception", 20);
          v34 = (_DWORD *)a7;
          v35 = *(_DWORD *)(a7 + 4);
          v36 = v35 - 1;
          if ( !v35 )
            v36 = 0;
          v37 = v36 + v33 + 1;
          if ( *(_DWORD *)(a7 + 8) >= v37 )
          {
            v38 = *(_BYTE **)a7;
          }
          else
          {
            v38 = qvector_reserve(a7, *(void **)a7, v36 + v33 + 1, 1u);
            v34 = (_DWORD *)a7;
            *(_DWORD *)a7 = v38;
          }
          v34[1] = v37;
          v38[v36 + v33] = BYTE4(v50);
          v39 = (void *)(*v34 + v36);
          v40 = "Unhandled exception";
          v41 = v33;
        }
        memmove(v39, v40, v41);
        v14 = v53;
        v16 = LODWORD(v50);
        goto LABEL_62;
      }
      v54[0] = 2;
      v58 = 0;
      v57 = 0;
      v56 = 0;
      v55 = nullptr;
      get_idcv_attr((int)v54, v51, "pc", 0);
      if ( v61 )
        v25 = s;
      else
        v25 = &byte_B3CBE;
      sub_28C8C(a7, " at %s+0x%a", v25, v50);
      if ( v54[0] == 5 )
      {
        sub_448A0((int)v55, v54);
      }
      else if ( v54[0] == 7 && v55 )
      {
        v56 = 0;
        qfree(v55);
        v57 = 0;
        v55 = nullptr;
      }
      v24 = v59[0];
    }
    if ( v24 == 5 )
    {
      sub_448A0((int)s, v59);
      goto LABEL_39;
    }
    if ( v24 != 7 )
      goto LABEL_39;
    goto LABEL_36;
  }
LABEL_80:
  if ( *((_BYTE *)v14[1] + 72) )
  {
    callui(24, 10, 0);
    *((_BYTE *)v14[1] + 72) = 0;
  }
  return v16;
}
// 46FC4: variable 'v50' is possibly undefined
// 19388: using guessed type int __fastcall _strlen_chk(_DWORD, _DWORD);
// B3CBE: using guessed type char byte_B3CBE;
// DE268: using guessed type int (__fastcall *callui)(_DWORD, _DWORD, _DWORD);
