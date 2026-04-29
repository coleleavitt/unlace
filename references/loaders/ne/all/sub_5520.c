__int64 __fastcall sub_5520(__int64 a1, __int64 a2)
{
  unsigned __int16 *v3; // r13
  __int64 v4; // r9
  __int64 v5; // rax
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // r14
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 result; // rax
  int v13; // eax
  __int64 v14; // r13
  int v15; // r8d
  unsigned __int64 v16; // r15
  const char *v17; // rax
  char v18; // dl
  int v19; // eax
  char v20; // si
  char *v21; // rdx
  const char *v22; // rax
  unsigned __int64 v23; // rdi
  char *v24; // r14
  char v25; // dl
  __int64 v26; // rcx
  _BYTE *v27; // rsi
  __int64 v28; // rsi
  _BYTE *v29; // r13
  _BYTE *v30; // rdx
  __int64 v31; // rsi
  const char *v32; // rax
  char v33; // dl
  _BYTE *v34; // rax
  _BYTE *v35; // rdx
  _BYTE *v36; // rcx
  char *v37; // rax
  const char *v38; // rax
  char v39; // cl
  const char *v40; // rax
  char v41; // cl
  const char *v42; // rcx
  char v43; // al
  __int16 v44; // [rsp+Eh] [rbp-57Ah]
  __int64 v45; // [rsp+10h] [rbp-578h]
  unsigned __int64 v46; // [rsp+18h] [rbp-570h]
  __int64 v48; // [rsp+38h] [rbp-550h]
  int v49; // [rsp+40h] [rbp-548h]
  int v50; // [rsp+44h] [rbp-544h]
  unsigned __int16 *v51; // [rsp+48h] [rbp-540h]
  __int16 v52; // [rsp+5Eh] [rbp-52Ah] BYREF
  unsigned __int64 v53; // [rsp+60h] [rbp-528h] BYREF
  _WORD v54[2]; // [rsp+6Ch] [rbp-51Ch] BYREF
  unsigned __int16 v55; // [rsp+70h] [rbp-518h]
  __int16 v56; // [rsp+72h] [rbp-516h]
  unsigned __int16 v57; // [rsp+78h] [rbp-510h] BYREF
  unsigned __int16 v58; // [rsp+7Ah] [rbp-50Eh] BYREF
  _OWORD v59[2]; // [rsp+80h] [rbp-508h] BYREF
  __int64 v60; // [rsp+A0h] [rbp-4E8h]
  __int64 v61; // [rsp+A8h] [rbp-4E0h]
  __int64 v62; // [rsp+B0h] [rbp-4D8h]
  __int128 v63; // [rsp+B8h] [rbp-4D0h]
  __int128 v64; // [rsp+C8h] [rbp-4C0h]
  __int128 v65; // [rsp+D8h] [rbp-4B0h]
  __int128 v66; // [rsp+E8h] [rbp-4A0h]
  __int128 v67; // [rsp+F8h] [rbp-490h]
  __int128 v68; // [rsp+108h] [rbp-480h]
  __int128 v69; // [rsp+118h] [rbp-470h]
  __int128 v70; // [rsp+128h] [rbp-460h]
  unsigned __int64 v71; // [rsp+138h] [rbp-450h]
  char v72[1023]; // [rsp+140h] [rbp-448h] BYREF
  char v73; // [rsp+53Fh] [rbp-49h] BYREF
  _BYTE v74[8]; // [rsp+540h] [rbp-48h] BYREF
  unsigned __int64 v75; // [rsp+548h] [rbp-40h]

  v3 = &v57;
  v75 = __readfsqword(0x28u);
  qlseek(a1, a2, 0);
  lread(a1, &v52, 2);
  v49 = 0;
  v4 = qlseek(a1, 0, 1);
LABEL_2:
  while ( 2 )
  {
    qlseek(a1, v4, 0);
    lread(a1, v3, 2);
    if ( v57 )
    {
      lread(a1, &v58, 6);
      memset(v59, 0, sizeof(v59));
      v71 = 0xFFFFFFFF00000000LL;
      v60 = 0;
      v62 = 0;
      v61 = 515;
      v63 = -1;
      v64 = -1;
      v65 = -1;
      v66 = -1;
      v67 = -1;
      v68 = -1;
      v69 = -1;
      v70 = -1;
      v5 = qlseek(a1, 0, 1);
      v4 = v5;
      if ( !v58 )
        continue;
      v45 = v5;
      v44 = 0;
      v51 = v3;
      while ( 1 )
      {
        qlseek(a1, v45, 0);
        lread(a1, v54, 12);
        v6 = (unsigned __int64)v54[0] << v52;
        v7 = (unsigned __int64)v54[1] << v52;
        v8 = v49++;
        v46 = v6;
        qsnprintf(v72, 1024, "res%03d", v8);
        result = sub_3480((unsigned __int64 *)v59, (__int64)v72, v7, v9, v10, v11);
        if ( !(_DWORD)result )
          return result;
        v45 = qlseek(a1, 0, 1);
        sub_40F0((unsigned __int64 *)v59, a1, v6, (__int64)v72, (__int64)"RESOURCE", v7, 0);
        v13 = qsnprintf(v72, 1024, "Resource, type (%04X): ", v57);
        v14 = v57;
        v15 = v13;
        v16 = (unsigned __int64)&v72[v13];
        if ( (v57 & 0x8000u) == 0 )
        {
          v50 = v13;
          v31 = a2 + v57;
          v48 = qlseek(a1, 0, 1);
          qlseek(a1, v31, 0);
          v53 = 0;
          lread(a1, &v53, 1);
          if ( v16 >= (unsigned __int64)v74 )
          {
            if ( !under_debugger )
              goto LABEL_85;
            goto LABEL_93;
          }
          v32 = "User defined '";
          if ( v50 == 1023 )
          {
LABEL_79:
            *(_BYTE *)v16 = 0;
            v34 = (_BYTE *)(&dword_0 + 1);
          }
          else
          {
            while ( 1 )
            {
              v33 = *v32++;
              *(_BYTE *)v16 = v33;
              if ( !v33 )
                break;
              if ( (char *)++v16 == &v73 )
                goto LABEL_79;
            }
            v34 = &v74[-v16];
          }
          v35 = (_BYTE *)v53;
          if ( v53 >= (unsigned __int64)v34 )
          {
            v53 = (unsigned __int64)v34;
            v35 = v34;
          }
          lread(a1, v16, v35);
          v36 = (_BYTE *)(v16 + v53);
          if ( v16 + v53 >= (unsigned __int64)v74 )
            goto LABEL_90;
          v37 = v36 + 1;
          *v36 = 39;
          if ( v36 + 1 >= v74 )
          {
            v73 = 0;
            v37 = &v73;
          }
          *v37 = 0;
          qlseek(a1, v48, 0);
        }
        else
        {
          LOWORD(v14) = v57 + 0x7FFF;
          switch ( v14 )
          {
            case 0LL:
              v17 = "Cursor";
              break;
            case 1LL:
              v17 = "Bitmap";
              break;
            case 2LL:
              v17 = "Icon";
              break;
            case 3LL:
              v17 = "Menu";
              break;
            case 4LL:
              v17 = "Dialog box";
              break;
            case 5LL:
              v17 = "String table";
              break;
            case 6LL:
              v17 = "Font directory";
              break;
            case 7LL:
              v17 = "Font component";
              break;
            case 8LL:
              v17 = "Accelerator table";
              break;
            case 9LL:
              v17 = "Resource data";
              break;
            case 11LL:
              v17 = "Cursor directory";
              break;
            case 13LL:
              v17 = "Icon directory";
              break;
            case 14LL:
              v17 = "Name table";
              break;
            case 15LL:
              v17 = "Version info";
              break;
            default:
              v17 = "Unknown";
              break;
          }
          if ( v16 >= (unsigned __int64)v74 )
          {
LABEL_92:
            if ( under_debugger )
              goto LABEL_93;
            do
            {
LABEL_85:
              interr(520);
LABEL_86:
              ;
            }
            while ( !under_debugger );
LABEL_93:
            BUG();
          }
          if ( v15 == 1023 )
          {
LABEL_65:
            *(_BYTE *)v16 = 0;
          }
          else
          {
            while ( 1 )
            {
              v18 = *v17++;
              *(_BYTE *)v16 = v18;
              if ( !v18 )
                break;
              if ( (char *)++v16 == &v73 )
                goto LABEL_65;
            }
          }
        }
        sub_2D70(*(__int64 *)&v59[0], 1u, (__int64)"%s", v72);
        sub_2D70(*(__int64 *)&v59[0], 1u, (__int64)"File offset      : %04llXh  Length: %04llXh", v46, v7);
        v19 = qsnprintf(v72, 1024, "Attributes (%04X):", v55);
        v20 = v55;
        v21 = &v72[v19];
        if ( (v55 & 0x10) != 0 )
        {
          if ( v21 >= v74 )
          {
            if ( under_debugger )
              goto LABEL_93;
            goto LABEL_85;
          }
          v42 = " Movable";
          if ( v19 == 1023 )
          {
LABEL_76:
            *v21 = 0;
          }
          else
          {
            while ( 1 )
            {
              v43 = *v42++;
              *v21 = v43;
              if ( !v43 )
                break;
              if ( ++v21 == &v73 )
                goto LABEL_76;
            }
          }
        }
        if ( (v20 & 0x20) == 0 )
          goto LABEL_16;
        if ( v21 >= v74 )
          goto LABEL_86;
        v40 = " Pure";
        if ( v21 != &v73 )
          break;
LABEL_70:
        v73 = 0;
        if ( (v20 & 0x40) != 0 )
          v73 = 0;
LABEL_17:
        sub_2D70(*(__int64 *)&v59[0], 1u, (__int64)"%s", v72);
        v22 = "Resource ID      : ";
        v23 = (unsigned __int64)v72;
        do
        {
          v25 = *v22++;
          *(_BYTE *)v23 = v25;
          if ( !v25 )
          {
            v26 = (unsigned __int16)v56;
            v27 = &v74[-v23];
            if ( v56 < 0 )
              goto LABEL_78;
            if ( v23 < (unsigned __int64)v74 )
            {
              v24 = (char *)(v23 + 1);
              *(_BYTE *)v23 = 39;
              v28 = v26 + a2;
              if ( v23 + 1 >= (unsigned __int64)v74 )
              {
                v24 = &v73;
                goto LABEL_42;
              }
              qlseek(a1, v28, 0);
              v29 = (_BYTE *)(v74 - v24);
              if ( v74 != v24 )
              {
LABEL_43:
                v53 = 0;
                lread(a1, &v53, 1);
                v30 = (_BYTE *)v53;
                if ( v53 )
                {
                  if ( (unsigned __int64)v29 < v53 )
                  {
                    v53 = (unsigned __int64)v29;
                    v30 = v29;
                  }
                  lread(a1, v24, v30);
                  v24[v53] = 0;
                }
              }
              qstrncat(v24, "'", v29);
              goto LABEL_25;
            }
LABEL_90:
            if ( !under_debugger )
              interr(518);
            goto LABEL_93;
          }
          ++v23;
          v24 = &v73;
        }
        while ( (char *)v23 != &v73 );
        LOWORD(v26) = v56;
        v73 = 0;
        if ( v56 >= 0 )
        {
          v28 = (unsigned __int16)v56 + a2;
LABEL_42:
          v73 = 0;
          v29 = (_BYTE *)(&dword_0 + 1);
          qlseek(a1, v28, 0);
          goto LABEL_43;
        }
        v27 = (_BYTE *)(&dword_0 + 1);
LABEL_78:
        qsnprintf(v23, v27, "%d", v26 & 0x7FFF);
LABEL_25:
        sub_2D70(*(__int64 *)&v59[0], 1u, (__int64)"%s", v72);
        if ( (unsigned __int16)++v44 >= v58 )
        {
          v4 = v45;
          v3 = v51;
          goto LABEL_2;
        }
      }
      while ( 1 )
      {
        v41 = *v40++;
        *v21 = v41;
        if ( !v41 )
          break;
        if ( ++v21 == &v73 )
          goto LABEL_70;
      }
LABEL_16:
      if ( (v20 & 0x40) != 0 )
      {
        if ( v21 >= v74 )
          goto LABEL_92;
        if ( v21 == &v73 )
        {
LABEL_64:
          v73 = 0;
        }
        else
        {
          v38 = " Preloaded";
          while ( 1 )
          {
            v39 = *v38++;
            *v21 = v39;
            if ( !v39 )
              break;
            if ( ++v21 == &v73 )
              goto LABEL_64;
          }
        }
      }
      goto LABEL_17;
    }
    return 1;
  }
}
