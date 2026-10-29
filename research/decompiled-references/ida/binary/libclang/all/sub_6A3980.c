__int64 __fastcall sub_6A3980(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  unsigned __int64 v7; // rsi
  unsigned __int64 v9; // rsi
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rsi
  unsigned __int8 v15; // dl
  char v16; // al
  int v17; // esi
  int v18; // ecx
  int v19; // edx
  __int64 v20; // rax
  __int64 v21; // r8
  unsigned __int8 v22; // r14
  int v23; // r15d
  int v24; // ecx
  int v25; // edx
  unsigned __int8 v26; // dl
  unsigned __int8 v27; // al
  unsigned __int8 v28; // si
  __int64 v29; // rax
  int v30; // r14d
  __int64 v31; // r15
  int v32; // esi
  int v33; // edx
  unsigned __int8 v34; // dl
  unsigned __int8 v35; // al
  unsigned __int8 v36; // di
  unsigned __int8 v37; // al
  int v38; // edx
  char v39; // cl
  int v40; // eax
  int v41; // r15d
  int v42; // esi
  int v43; // edx
  unsigned __int8 v44; // dl
  unsigned __int8 v45; // al
  unsigned __int8 v46; // di
  unsigned __int8 v47; // al
  unsigned __int8 v48; // cl
  unsigned __int8 v49; // di
  unsigned __int8 v50; // si
  char v51; // dl
  unsigned int v52; // edx
  int v53; // eax
  unsigned __int64 v54; // rsi
  unsigned __int8 v55; // al
  int v56; // edx
  char v57; // cl
  int v58; // eax
  __int64 v59; // [rsp+0h] [rbp-48h]
  unsigned __int8 v60; // [rsp+0h] [rbp-48h]
  unsigned __int8 v61; // [rsp+0h] [rbp-48h]
  __int64 v62; // [rsp+8h] [rbp-40h]
  __int64 v63; // [rsp+8h] [rbp-40h]
  int v64; // [rsp+8h] [rbp-40h]

  v3 = 22;
  switch ( *(_DWORD *)a2 )
  {
    case 7:
      v9 = *(_QWORD *)(a2 + 8);
      if ( v9 <= 3 )
        return v3;
      v10 = v9 & 3;
      if ( (v9 & 3) == 0 )
      {
        v54 = v9 & 0xFFFFFFFFFFFFFFFCLL;
        goto LABEL_119;
      }
      if ( v10 == 2 )
      {
        v55 = sub_77A150(a1, v9 & 0xFFFFFFFFFFFFFFFCLL, a3);
        goto LABEL_120;
      }
      if ( v10 != 1 )
        return 18;
      v11 = v9 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (*(_WORD *)(v9 & 0xFFFFFFFFFFFFFFFCLL) & 0x1FF) != 0x31 )
        return 18;
      v12 = *(_QWORD *)(v11 + 16);
      if ( (v12 & 4) == 0 || !(unsigned int)sub_7A7340(v12 & 0xFFFFFFFFFFFFFFF8LL) )
        return 18;
      v13 = *(_QWORD *)(v11 + 16);
      if ( (v13 & 4) != 0 )
        v14 = *(_QWORD *)((v13 & 0xFFFFFFFFFFFFFFF8LL) + 48);
      else
        v14 = 0;
      v15 = sub_78C840(a1, v14, a3);
      v16 = (v15 >> 3) & 3;
      v17 = v15 & 7;
      if ( (_BYTE)v17 == 4 )
      {
        v18 = 6;
      }
      else
      {
        v18 = v15 & 7;
        v17 = 6;
      }
      if ( (unsigned __int8)v18 <= (unsigned __int8)v17 )
        v17 = v18;
      v3 = v17 | 0x10;
      if ( v16 != 3 )
      {
        v19 = v15 & 0x20;
        if ( v16 != 2 || (_BYTE)v19 )
          return v19 | v17 & 0xFFFFFFC7 | (8 * (v16 & 3));
      }
      return v3;
    case 9:
      v20 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v20 )
      {
        v21 = 0;
        v22 = 2;
        v23 = 6;
        v62 = 56 * v20;
        while ( 1 )
        {
          v59 = v21;
          v26 = sub_6A3980(a1, *(_QWORD *)(a2 + 8) + v21, a3);
          v27 = v23;
          v24 = v26 & 7;
          v28 = (v26 >> 3) & 3;
          if ( (_BYTE)v24 == 4 )
          {
            if ( (unsigned __int8)(v23 - 2) > 1u )
              goto LABEL_35;
          }
          else
          {
            if ( (_BYTE)v23 != 4 )
            {
              if ( (unsigned __int8)v24 > (unsigned __int8)v23 )
                v24 = v23;
              v3 = v24 | v3 & 0xFFFFFFF8;
              v23 = v24 & 7;
              if ( v22 >= v28 )
              {
                v25 = v26 & 0x20;
                if ( v28 != v22 || (_BYTE)v25 )
                {
LABEL_30:
                  v22 = v28;
                  v3 = v25 | (8 * (v28 & 3)) | v3 & 0xFFFFFFC7;
                }
              }
              if ( (_BYTE)v24 == 2 )
                goto LABEL_104;
              goto LABEL_32;
            }
            v27 = v26 & 7;
            if ( (unsigned __int8)(v24 - 2) > 1u )
            {
LABEL_35:
              LOBYTE(v24) = 4;
              if ( v27 <= 4u )
                LOBYTE(v24) = v27;
              v23 = v24 & 7;
              v3 = v23 | v3 & 0xFFFFFFF8;
              if ( v22 >= v28 )
              {
                v25 = v26 & 0x20;
                if ( v28 != v22 || (_BYTE)v25 )
                  goto LABEL_30;
              }
              goto LABEL_32;
            }
          }
          v3 = v3 & 0xFFFFFFF8 | 1;
          if ( v22 >= v28 )
          {
            v25 = v26 & 0x20;
            if ( v28 != v22 || (_BYTE)v25 )
            {
              LOBYTE(v24) = 1;
              v23 = 1;
              goto LABEL_30;
            }
          }
          v23 = 1;
          LOBYTE(v24) = 1;
LABEL_32:
          v21 = v59 + 56;
          if ( v59 + 56 == v62 )
          {
LABEL_104:
            v20 = *(unsigned int *)(a2 + 16);
            goto LABEL_105;
          }
        }
      }
      v22 = 2;
      LOBYTE(v24) = 6;
LABEL_105:
      v61 = v24;
      if ( *(_DWORD *)(a2 + 20) == (_DWORD)v20 )
        return v3;
      v47 = sub_6A3980(a1, *(_QWORD *)(a2 + 8) + 56 * v20, a3);
      v48 = v61;
      v49 = v47 & 7;
      v50 = (v47 >> 3) & 3;
      if ( (v47 & 7) == 4 )
      {
        v49 = v61;
      }
      else if ( v61 != 4 )
      {
        goto LABEL_108;
      }
      v51 = 1;
      if ( (unsigned __int8)(v49 - 2) <= 1u )
        goto LABEL_111;
      v48 = 4;
LABEL_108:
      if ( v49 <= v48 )
        v48 = v49;
      v51 = v48 & 7;
LABEL_111:
      v52 = v3 & 0xFFFFFFF8 | v51 & 7;
      v3 = v52;
      if ( v22 >= v50 )
      {
        v53 = v47 & 0x20;
        if ( v50 != v22 || (_BYTE)v53 )
          return v53 | (8 * (v50 & 3)) | v52 & 0xFFFFFFC7;
      }
      return v3;
    case 0xA:
      v29 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v29 )
      {
        v60 = 2;
        v30 = 6;
        v31 = 0;
        v63 = 56 * v29;
        while ( 1 )
        {
          v34 = sub_6A3980(a1, v31 + *(_QWORD *)(a2 + 8), a3);
          v35 = v30;
          v32 = v34 & 7;
          v36 = (v34 >> 3) & 3;
          if ( (_BYTE)v32 == 4 )
          {
            if ( (unsigned __int8)(v30 - 2) > 1u )
              goto LABEL_54;
          }
          else
          {
            if ( (_BYTE)v30 != 4 )
            {
              if ( (unsigned __int8)v32 > (unsigned __int8)v30 )
                v32 = v30;
              v3 = v32 | v3 & 0xFFFFFFF8;
              v30 = v32 & 7;
              if ( v60 >= v36 )
              {
                v33 = v34 & 0x20;
                if ( v60 != v36 || (_BYTE)v33 )
                {
LABEL_49:
                  v60 = v36;
                  v3 = v33 | (8 * (v36 & 3)) | v3 & 0xFFFFFFC7;
                }
              }
              if ( (_BYTE)v32 == 2 )
                goto LABEL_80;
              goto LABEL_51;
            }
            v35 = v34 & 7;
            if ( (unsigned __int8)(v32 - 2) > 1u )
            {
LABEL_54:
              LOBYTE(v32) = 4;
              if ( v35 <= 4u )
                LOBYTE(v32) = v35;
              v30 = v32 & 7;
              v3 = v30 | v3 & 0xFFFFFFF8;
              if ( v60 >= v36 )
              {
                v33 = v34 & 0x20;
                if ( v33 || v60 != v36 )
                  goto LABEL_49;
              }
              goto LABEL_51;
            }
          }
          v3 = v3 & 0xFFFFFFF8 | 1;
          if ( v60 >= v36 )
          {
            v33 = v34 & 0x20;
            if ( v60 != v36 || (_BYTE)v33 )
            {
              v30 = 1;
              LOBYTE(v32) = 1;
              goto LABEL_49;
            }
          }
          v30 = 1;
LABEL_51:
          v31 += 56;
          if ( v63 == v31 )
            goto LABEL_80;
        }
      }
      v60 = 2;
      v30 = 6;
LABEL_80:
      v41 = 0;
      v64 = *(_DWORD *)(a2 + 20);
      if ( v64 )
      {
        do
        {
          v44 = sub_6A3980(a1, *(_QWORD *)(a2 + 8) + 56LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v41), a3);
          v45 = v30;
          v42 = v44 & 7;
          v46 = (v44 >> 3) & 3;
          if ( (_BYTE)v42 == 4 )
          {
            if ( (unsigned __int8)(v30 - 2) > 1u )
              goto LABEL_93;
          }
          else
          {
            if ( (_BYTE)v30 != 4 )
            {
              if ( (unsigned __int8)v42 > (unsigned __int8)v30 )
                v42 = v30;
              v3 = v42 | v3 & 0xFFFFFFF8;
              v30 = v42 & 7;
              if ( v60 >= v46 )
              {
                v43 = v44 & 0x20;
                if ( v46 != v60 || (_BYTE)v43 )
                {
LABEL_88:
                  v60 = v46;
                  v3 = v43 | (8 * (v46 & 3)) | v3 & 0xFFFFFFC7;
                }
              }
              if ( (_BYTE)v42 == 2 )
                return v3;
              goto LABEL_90;
            }
            v45 = v44 & 7;
            if ( (unsigned __int8)(v42 - 2) > 1u )
            {
LABEL_93:
              LOBYTE(v42) = 4;
              if ( v45 <= 4u )
                LOBYTE(v42) = v45;
              v30 = v42 & 7;
              v3 = v30 | v3 & 0xFFFFFFF8;
              if ( v60 >= v46 )
              {
                v43 = v44 & 0x20;
                if ( v46 != v60 || (_BYTE)v43 )
                  goto LABEL_88;
              }
              goto LABEL_90;
            }
          }
          v3 = v3 & 0xFFFFFFF8 | 1;
          if ( v60 >= v46 )
          {
            v43 = v44 & 0x20;
            if ( v46 != v60 || (_BYTE)v43 )
            {
              v30 = 1;
              LOBYTE(v42) = 1;
              goto LABEL_88;
            }
          }
          v30 = 1;
LABEL_90:
          ++v41;
        }
        while ( v41 != v64 );
      }
      return v3;
    case 0xB:
      if ( *(_QWORD *)(a2 + 8) )
      {
        v37 = sub_6A3980(a1, *(_QWORD *)(a2 + 16), a3);
        v38 = 6;
        v39 = (v37 >> 3) & 3;
        if ( (v37 & 7) != 7 )
          v38 = v37 & 7;
        if ( (v37 & 7) == 4 )
          v38 = 4;
        v3 = v38 | 0x10;
        if ( v39 != 3 )
        {
          v40 = v37 & 0x20;
          if ( v39 != 2 || (_BYTE)v40 )
            return v40 | (8 * (v39 & 3)) | v38 & 0xFFFFFFE7;
        }
      }
      return v3;
    case 0xC:
      v7 = *(_QWORD *)(a2 + 8);
      if ( v7 > 7 )
      {
        v54 = v7 & 0xFFFFFFFFFFFFFFF8LL;
LABEL_119:
        v55 = sub_78C840(a1, v54, a3);
LABEL_120:
        v56 = 6;
        v57 = (v55 >> 3) & 3;
        if ( (v55 & 7) != 7 )
          v56 = v55 & 7;
        if ( (v55 & 7) == 4 )
          v56 = 4;
        v3 = v56 | 0x10;
        if ( v57 != 3 )
        {
          v58 = v55 & 0x20;
          if ( v57 != 2 || (_BYTE)v58 )
            return v58 | (8 * (v57 & 3)) | v56 & 0xFFFFFFE7;
        }
      }
      return v3;
    case 0xD:
      return 18;
    default:
      return v3;
  }
}

