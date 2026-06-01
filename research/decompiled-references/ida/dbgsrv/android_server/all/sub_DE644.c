/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DE644
// Address: 0x00000000000DE644

//----- (00000000000DE644) ----------------------------------------------------
char *__fastcall sub_DE644(__int64 a1, char a2)
{
  _BYTE *v2; // x8
  _BYTE *v3; // x9
  _BYTE *v6; // x8
  void **v7; // x27
  char *result; // x0
  _BYTE *v9; // x22
  _BYTE *v10; // x24
  _BYTE *v11; // x8
  char *v12; // x8
  char *v13; // x23
  _BYTE *v14; // x24
  signed __int64 v15; // x26
  char *v16; // x25
  __int64 v17; // x23
  _BYTE *v18; // x8
  char *v19; // x0
  _BYTE *v20; // x9
  __int64 v21; // x23
  _BYTE *v22; // x0
  __int64 *v23; // x9
  __int64 v24; // x11
  __int64 v25; // x10
  __int64 *v26; // x8
  _BYTE *v27; // x24
  signed __int64 v28; // x26
  char *v29; // x25
  char *v30; // x0
  char *v31; // x0
  _QWORD *v32; // x26
  __int64 *v33; // x24
  __int64 v34; // x25
  __int64 v35; // x8
  _QWORD *v36; // x9
  _QWORD *v37; // x0
  __int64 v38; // x8
  __int64 *v39; // x9
  __int64 v40; // t1
  __int64 v41; // x8
  __int64 *v42; // x9
  __int64 v43; // t1
  __int64 v44; // x8
  __int64 v45; // t1
  __int64 *v46; // x8
  _BYTE *v47; // x24
  size_t v48; // x26
  __int64 v49; // x28
  __int64 v50; // x27
  char *v51; // x25
  char *v52; // x0
  char *v53; // x9
  _QWORD *v54; // x23
  __int64 v55; // x9
  __int64 v56; // x10
  const void *v57; // x21
  __int64 v58; // x8
  _QWORD *v59; // x9
  signed __int64 v60; // x20
  unsigned __int64 v61; // x22
  _QWORD *v62; // x0
  char *v63; // x22
  _BYTE *v64; // x8
  _QWORD *v65; // x0
  __int64 v66; // x10
  _QWORD *v67; // x8
  __int64 v68; // x9
  __int64 v69; // x20
  _QWORD *v70; // x0
  __int64 v71; // [xsp+0h] [xbp-E0h]
  _BYTE *v72; // [xsp+10h] [xbp-D0h]
  __int64 v73; // [xsp+18h] [xbp-C8h]
  void **v74; // [xsp+20h] [xbp-C0h]
  void *src; // [xsp+30h] [xbp-B0h]
  _BYTE *v76; // [xsp+38h] [xbp-A8h]
  __int64 *v77; // [xsp+40h] [xbp-A0h]
  _BYTE v78[64]; // [xsp+48h] [xbp-98h] BYREF
  __int64 v79; // [xsp+88h] [xbp-58h] BYREF

  v79 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v2 = *(_BYTE **)a1;
  v3 = *(_BYTE **)(a1 + 8);
  if ( *(_BYTE **)a1 == v3 || *v2 != 73 )
    return nullptr;
  v6 = v2 + 1;
  *(_QWORD *)a1 = v6;
  v7 = (void **)(a1 + 584);
  if ( (a2 & 1) != 0 )
    *(_QWORD *)(a1 + 584) = *(_QWORD *)(a1 + 576);
  v9 = (_BYTE *)(a1 + 600);
  v73 = a1 + 664;
  v74 = (void **)(a1 + 584);
  v72 = (_BYTE *)(a1 + 40);
  v71 = (__int64)(*(_QWORD *)(a1 + 24) - *(_QWORD *)(a1 + 16)) >> 3;
  if ( v6 != v3 )
    goto LABEL_68;
  do
  {
    do
    {
      if ( (a2 & 1) != 0 )
      {
        src = v78;
        v76 = v78;
        v77 = &v79;
        v10 = *(_BYTE **)(a1 + 576);
        if ( v10 == v9 )
        {
          v17 = (_BYTE *)*v7 - v10;
          v18 = v78;
          if ( *v7 != v10 )
          {
            memcpy(v78, (const void *)(a1 + 600), (_BYTE *)*v7 - v10);
            v18 = &v78[v17 & 0xFFFFFFFFFFFFFFF8LL];
          }
          v76 = v18;
          *v7 = v10;
        }
        else
        {
          v11 = *(_BYTE **)(a1 + 584);
          src = *(void **)(a1 + 576);
          v76 = v11;
          v77 = *(__int64 **)(a1 + 592);
          *(_QWORD *)(a1 + 576) = v9;
          *(_QWORD *)(a1 + 584) = v9;
          *(_QWORD *)(a1 + 592) = v73;
        }
        v19 = sub_DDA28(a1);
        v20 = src;
        v21 = (__int64)v19;
        v22 = *(_BYTE **)(a1 + 576);
        if ( src == v78 )
        {
          if ( v22 == v9 )
          {
            v64 = v78;
          }
          else
          {
            free(v22);
            *(_QWORD *)(a1 + 576) = v9;
            *(_QWORD *)(a1 + 584) = v9;
            v22 = (_BYTE *)(a1 + 600);
            *(_QWORD *)(a1 + 592) = v73;
            v64 = src;
            v20 = src;
          }
          if ( v76 == v20 )
          {
            v25 = 0;
            v24 = a1 + 600;
          }
          else
          {
            memmove(v22, v64, v76 - v20);
            v64 = src;
            v24 = *(_QWORD *)(a1 + 576);
            v25 = v76 - (_BYTE *)src;
            v20 = src;
          }
          *v7 = (void *)(v24 + v25);
          v76 = v20;
          if ( !v21 )
            goto LABEL_74;
        }
        else
        {
          *(_QWORD *)(a1 + 576) = src;
          if ( v22 == v9 )
          {
            *(_QWORD *)(a1 + 584) = v76;
            *(_QWORD *)(a1 + 592) = v77;
            src = v78;
            v76 = v78;
            v77 = &v79;
            if ( !v21 )
              return nullptr;
          }
          else
          {
            v23 = *(__int64 **)(a1 + 592);
            *(_QWORD *)(a1 + 584) = v76;
            *(_QWORD *)(a1 + 592) = v77;
            v77 = v23;
            src = v22;
            v76 = v22;
            if ( !v21 )
            {
              v64 = v22;
LABEL_74:
              if ( v64 != v78 )
                free(v64);
              return nullptr;
            }
          }
        }
        v26 = *(__int64 **)(a1 + 24);
        if ( v26 == *(__int64 **)(a1 + 32) )
        {
          v27 = *(_BYTE **)(a1 + 16);
          v28 = (char *)v26 - v27;
          if ( v72 == v27 )
          {
            v31 = (char *)malloc(2 * v28);
            v29 = v31;
            if ( v28 )
              memmove(v31, v27, v28);
          }
          else
          {
            v29 = (char *)realloc(*(void **)(a1 + 16), 2 * ((char *)v26 - v27));
          }
          v26 = (__int64 *)&v29[8 * (v28 >> 3)];
          *(_QWORD *)(a1 + 16) = v29;
          *(_QWORD *)(a1 + 24) = v26;
          v7 = v74;
          *(_QWORD *)(a1 + 32) = &v29[8 * (v28 >> 2)];
        }
        *(_QWORD *)(a1 + 24) = v26 + 1;
        *v26 = v21;
        if ( *(_BYTE *)(v21 + 8) == 28 )
        {
          v32 = *(_QWORD **)(a1 + 4832);
          v33 = *(__int64 **)(v21 + 16);
          v34 = *(_QWORD *)(v21 + 24);
          v36 = v32 + 1;
          v35 = v32[1];
          if ( (unsigned __int64)(v35 + 32) >= 0xFF0 )
          {
            v37 = (_QWORD *)operator new[](0x1000u);
            v35 = 0;
            *v37 = v32;
            v37[1] = 0;
            v36 = v37 + 1;
            v32 = v37;
            *(_QWORD *)(a1 + 4832) = v37;
          }
          *v36 = v35 + 32;
          *(_QWORD *)((char *)v32 + v35 + 16) = off_162B28;
          v21 = (__int64)v32 + v35 + 16;
          *(_DWORD *)(v21 + 8) = 33686043;
          *(_QWORD *)(v21 + 16) = v33;
          *(_QWORD *)(v21 + 24) = v34;
          if ( v34 )
          {
            v38 = 8 * v34;
            v39 = v33;
            while ( 1 )
            {
              v40 = *v39++;
              if ( *(_BYTE *)(v40 + 10) != 1 )
                break;
              v38 -= 8;
              if ( !v38 )
                goto LABEL_49;
            }
          }
          else
          {
LABEL_49:
            *(_BYTE *)(v21 + 10) = 1;
          }
          if ( v34 )
          {
            v41 = 8 * v34;
            v42 = v33;
            while ( 1 )
            {
              v43 = *v42++;
              if ( *(_BYTE *)(v43 + 11) != 1 )
                break;
              v41 -= 8;
              if ( !v41 )
                goto LABEL_54;
            }
          }
          else
          {
LABEL_54:
            *(_BYTE *)(v21 + 11) = 1;
          }
          if ( v34 )
          {
            v44 = 8 * v34;
            while ( 1 )
            {
              v45 = *v33++;
              if ( *(_BYTE *)(v45 + 9) != 1 )
                break;
              v44 -= 8;
              if ( !v44 )
                goto LABEL_59;
            }
          }
          else
          {
LABEL_59:
            *(_BYTE *)(v21 + 9) = 1;
          }
        }
        v46 = *(__int64 **)(a1 + 584);
        if ( v46 == *(__int64 **)(a1 + 592) )
        {
          v47 = *(_BYTE **)(a1 + 576);
          v48 = (char *)v46 - v47;
          v49 = ((char *)v46 - v47) >> 3;
          v50 = ((char *)v46 - v47) >> 2;
          if ( v9 == v47 )
          {
            v52 = (char *)malloc(2 * ((char *)v46 - v47));
            v51 = v52;
            if ( v48 )
              memmove(v52, v47, v48);
          }
          else
          {
            v51 = (char *)realloc(*(void **)(a1 + 576), 2 * ((char *)v46 - v47));
          }
          v53 = &v51[8 * v50];
          v7 = v74;
          v46 = (__int64 *)&v51[8 * v49];
          *(_QWORD *)(a1 + 576) = v51;
          *(_QWORD *)(a1 + 584) = v46;
          *(_QWORD *)(a1 + 592) = v53;
        }
        *v7 = v46 + 1;
        *v46 = v21;
        if ( src != v78 )
          free(src);
      }
      else
      {
        result = sub_DDA28(a1);
        if ( !result )
          return result;
        v12 = *(char **)(a1 + 24);
        v13 = result;
        if ( v12 == *(char **)(a1 + 32) )
        {
          v14 = *(_BYTE **)(a1 + 16);
          v15 = v12 - v14;
          if ( v72 == v14 )
          {
            v30 = (char *)malloc(2 * v15);
            v16 = v30;
            if ( v15 )
              memmove(v30, v14, v15);
          }
          else
          {
            v16 = (char *)realloc(*(void **)(a1 + 16), 2 * (v12 - v14));
          }
          v12 = &v16[8 * (v15 >> 3)];
          *(_QWORD *)(a1 + 16) = v16;
          *(_QWORD *)(a1 + 24) = v12;
          v7 = v74;
          *(_QWORD *)(a1 + 32) = &v16[8 * (v15 >> 2)];
        }
        *(_QWORD *)(a1 + 24) = v12 + 8;
        *(_QWORD *)v12 = v13;
      }
      v6 = *(_BYTE **)a1;
    }
    while ( *(_QWORD *)a1 == *(_QWORD *)(a1 + 8) );
LABEL_68:
    ;
  }
  while ( *v6 != 69 );
  v54 = *(_QWORD **)(a1 + 4832);
  v55 = *(_QWORD *)(a1 + 16);
  v56 = *(_QWORD *)(a1 + 24);
  *(_QWORD *)a1 = v6 + 1;
  v57 = (const void *)(v55 + 8 * v71);
  v59 = v54 + 1;
  v58 = v54[1];
  v60 = v56 - (_QWORD)v57;
  v61 = ((_DWORD)v56 - (_DWORD)v57 + 15) & 0xFFFFFFF0;
  if ( v61 + v58 >= 0xFF0 )
  {
    if ( v61 >= 0xFF1 )
    {
      v62 = (_QWORD *)operator new[](v61 + 16);
      v63 = (char *)(v62 + 2);
      *v62 = *v54;
      v62[1] = 0;
      *v54 = v62;
      if ( !v60 )
        goto LABEL_80;
      goto LABEL_79;
    }
    v65 = (_QWORD *)operator new[](0x1000u);
    v58 = 0;
    *v65 = v54;
    v65[1] = 0;
    v59 = v65 + 1;
    v54 = v65;
    *(_QWORD *)(a1 + 4832) = v65;
  }
  v66 = v58 + v61;
  v63 = (char *)v54 + v58 + 16;
  *v59 = v66;
  if ( v60 )
  {
LABEL_79:
    memmove(v63, v57, v60);
    v54 = *(_QWORD **)(a1 + 4832);
    v57 = (const void *)(*(_QWORD *)(a1 + 16) + 8 * v71);
  }
LABEL_80:
  *(_QWORD *)(a1 + 24) = v57;
  v67 = v54 + 1;
  v68 = v54[1];
  v69 = v60 >> 3;
  if ( (unsigned __int64)(v68 + 32) >= 0xFF0 )
  {
    v70 = (_QWORD *)operator new[](0x1000u);
    v68 = 0;
    *v70 = v54;
    v70[1] = 0;
    v67 = v70 + 1;
    v54 = v70;
    *(_QWORD *)(a1 + 4832) = v70;
  }
  *v67 = v68 + 32;
  *(_QWORD *)((char *)v54 + v68 + 16) = off_162B98;
  result = (char *)v54 + v68 + 16;
  *((_DWORD *)result + 2) = 16843038;
  *((_QWORD *)result + 2) = v63;
  *((_QWORD *)result + 3) = v69;
  return result;
}
// 162B28: using guessed type __int64 (__fastcall *off_162B28[7])();
// 162B98: using guessed type __int64 (__fastcall *off_162B98[7])();
