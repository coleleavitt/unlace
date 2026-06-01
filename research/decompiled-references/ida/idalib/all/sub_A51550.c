__int64 __fastcall sub_A51550(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  __int64 v7; // rax
  unsigned __int64 v8; // rsi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // rbx
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rsi
  unsigned __int8 v14; // al
  int v15; // esi
  char v16; // dl
  int v17; // eax
  __int64 v19; // rax
  __int64 v20; // r15
  char v21; // r8
  unsigned __int8 v22; // r14
  unsigned __int8 v23; // si
  unsigned int v24; // edx
  int v25; // eax
  unsigned __int8 v26; // al
  unsigned __int8 v27; // dl
  unsigned __int8 v28; // di
  int v29; // ebx
  unsigned __int8 v30; // al
  char v31; // dl
  int v32; // r14d
  int v33; // eax
  int v34; // eax
  __int64 v35; // rcx
  unsigned __int8 v36; // r15
  char v37; // r14
  unsigned __int8 v38; // si
  unsigned int v39; // edx
  int v40; // eax
  unsigned __int8 v41; // al
  unsigned __int8 v42; // dl
  unsigned __int8 v43; // di
  unsigned __int64 v44; // rsi
  unsigned __int8 v45; // al
  int v46; // ebx
  char v47; // dl
  int v48; // r14d
  int v49; // eax
  int v50; // eax
  int v51; // eax
  int v52; // r14d
  unsigned __int8 v53; // si
  unsigned int v54; // edx
  int v55; // eax
  unsigned __int8 v56; // al
  unsigned __int8 v57; // dl
  unsigned __int8 v58; // cl
  int v59; // eax
  unsigned __int8 v60; // al
  unsigned __int8 v61; // dl
  unsigned __int8 v62; // di
  unsigned __int8 v63; // si
  char v64; // dl
  unsigned int v65; // edx
  int v66; // eax
  int v67; // esi
  char v68; // [rsp+0h] [rbp-48h]
  __int64 v69; // [rsp+0h] [rbp-48h]
  int v70; // [rsp+0h] [rbp-48h]
  __int64 v71; // [rsp+8h] [rbp-40h]
  __int64 v72; // [rsp+8h] [rbp-40h]

  v3 = 22;
  switch ( *(_DWORD *)a2 )
  {
    case 7:
      v7 = *(_QWORD *)(a2 + 8);
      v8 = v7 & 0xFFFFFFFFFFFFFFFCLL;
      if ( (v7 & 0xFFFFFFFFFFFFFFFCLL) == 0 )
        return v3;
      if ( !v7 )
        return 18;
      if ( (v7 & 3) != 0 )
      {
        if ( (v7 & 3) == 2 )
        {
          v45 = sub_B72810(a1, v8, a3);
          goto LABEL_63;
        }
        if ( (v7 & 3) == 1 )
        {
          v9 = v7 & 0xFFFFFFFFFFFFFFFCLL;
          v10 = v9;
          if ( v9 )
          {
            if ( (*(_WORD *)v9 & 0x1FF) == 0x30 )
            {
              v11 = *(_QWORD *)(v9 + 16);
              if ( (v11 & 4) != 0 )
              {
                if ( (unsigned int)sub_B99CC0(v11 & 0xFFFFFFFFFFFFFFF8LL) )
                {
                  v12 = *(_QWORD *)(v10 + 16);
                  if ( (v12 & 4) != 0 )
                    v13 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 48);
                  else
                    v13 = 0;
                  v14 = sub_B816E0(a1, v13, a3);
                  v15 = v14 & 7;
                  v16 = (v14 >> 3) & 3;
                  if ( (v14 & 7) == 7 )
                    v15 = 6;
                  v3 = v15 | 0x10;
                  if ( v16 != 3 )
                  {
                    v17 = v14 & 0x20;
                    if ( v16 != 2 || (_BYTE)v17 )
                      return v17 | v15 & 0xFFFFFFC7 | (8 * (v16 & 3));
                  }
                  return v3;
                }
              }
            }
          }
        }
        return 18;
      }
      v45 = sub_B816E0(a1, v8, a3);
      v67 = 4;
      v47 = (v45 >> 3) & 3;
      if ( (v45 & 7) != 4 )
      {
        v67 = 6;
        if ( (v45 & 7) != 7 )
          v67 = v45 & 7;
      }
      v48 = v67 | 0x10;
      v3 = v67 | 0x10;
      if ( v47 != 3 )
        goto LABEL_67;
      return v3;
    case 9:
      v19 = *(unsigned int *)(a2 + 16);
      if ( (_DWORD)v19 )
      {
        v20 = 0;
        v21 = 6;
        v22 = 2;
        v71 = 56LL * (unsigned int)(v19 - 1);
        while ( 1 )
        {
          v68 = v21;
          v26 = sub_A51550(a1, v20 + *(_QWORD *)(a2 + 8), a3);
          v27 = v26 & 7;
          v23 = v68;
          v28 = (v26 >> 3) & 3;
          if ( (v26 & 7) == 4 )
          {
            v27 = v68;
          }
          else if ( v68 != 4 )
          {
            goto LABEL_24;
          }
          if ( (unsigned __int8)(v27 - 2) <= 1u )
          {
            v3 = v3 & 0xFFFFFFF8 | 1;
            if ( v22 >= v28 )
            {
              v50 = v26 & 0x20;
              if ( v22 != v28 || (_BYTE)v50 )
              {
                v22 = v28;
                v3 = v50 | (8 * (v28 & 3)) | v3 & 0xFFFFFFC1;
              }
            }
            goto LABEL_31;
          }
          v23 = 4;
LABEL_24:
          if ( v23 > v27 )
            v23 = v27;
          v24 = v3 & 0xFFFFFFF8 | v23 & 7;
          v3 = v24;
          if ( v22 >= v28 )
          {
            v25 = v26 & 0x20;
            if ( v22 != v28 || (v22 = v28, (_BYTE)v25) )
            {
              v22 = v28;
              v3 = v25 | (8 * (v28 & 3)) | v24 & 0xFFFFFFC7;
            }
          }
          if ( v23 == 2 )
          {
LABEL_98:
            v19 = *(unsigned int *)(a2 + 16);
            goto LABEL_99;
          }
LABEL_31:
          if ( v20 == v71 )
            goto LABEL_98;
          v20 += 56;
          v21 = v3 & 7;
        }
      }
      v22 = 2;
LABEL_99:
      if ( (_DWORD)v19 == *(_DWORD *)(a2 + 20) )
        return v3;
      v60 = sub_A51550(a1, *(_QWORD *)(a2 + 8) + 56 * v19, a3);
      v61 = v3 & 7;
      v62 = v60 & 7;
      v63 = (v60 >> 3) & 3;
      if ( (v60 & 7) == 4 )
      {
        v62 = v3 & 7;
      }
      else if ( v61 != 4 )
      {
        goto LABEL_102;
      }
      v64 = 1;
      if ( (unsigned __int8)(v62 - 2) <= 1u )
        goto LABEL_105;
      v61 = 4;
LABEL_102:
      if ( v61 > v62 )
        v61 = v62;
      v64 = v61 & 7;
LABEL_105:
      v65 = v3 & 0xFFFFFFF8 | v64 & 7;
      v3 = v65;
      if ( v63 <= v22 )
      {
        v66 = v60 & 0x20;
        if ( v63 != v22 || (_BYTE)v66 )
          return v66 | v65 & 0xFFFFFFC7 | (8 * (v63 & 3));
      }
      return v3;
    case 0xA:
      v34 = *(_DWORD *)(a2 + 16);
      if ( !v34 )
      {
        v36 = 2;
        goto LABEL_79;
      }
      v35 = 0;
      v36 = 2;
      v37 = 6;
      v72 = 56LL * (unsigned int)(v34 - 1);
      while ( 2 )
      {
        v69 = v35;
        v41 = sub_A51550(a1, *(_QWORD *)(a2 + 8) + v35, a3);
        v38 = v37;
        v42 = v41 & 7;
        v43 = (v41 >> 3) & 3;
        if ( (v41 & 7) == 4 )
        {
          v42 = v37;
        }
        else if ( v37 != 4 )
        {
          goto LABEL_48;
        }
        if ( (unsigned __int8)(v42 - 2) <= 1u )
        {
          v3 = v3 & 0xFFFFFFF8 | 1;
          if ( v43 <= v36 )
          {
            v51 = v41 & 0x20;
            if ( v43 != v36 || (_BYTE)v51 )
            {
              v36 = v43;
              v3 = v51 | (8 * (v43 & 3)) | v3 & 0xFFFFFFC1;
            }
          }
          goto LABEL_55;
        }
        v38 = 4;
LABEL_48:
        if ( v38 > v42 )
          v38 = v42;
        v39 = v3 & 0xFFFFFFF8 | v38 & 7;
        v3 = v39;
        if ( v43 <= v36 )
        {
          v40 = v41 & 0x20;
          if ( v43 != v36 || (v36 = v43, (_BYTE)v40) )
          {
            v36 = v43;
            v3 = v40 | (8 * (v43 & 3)) | v39 & 0xFFFFFFC7;
          }
        }
        if ( v38 != 2 )
        {
LABEL_55:
          if ( v72 == v69 )
            break;
          v35 = v69 + 56;
          v37 = v3 & 7;
          continue;
        }
        break;
      }
LABEL_79:
      v52 = 0;
      v70 = *(_DWORD *)(a2 + 20);
      if ( v70 )
      {
        do
        {
          v56 = sub_A51550(a1, *(_QWORD *)(a2 + 8) + 56LL * (unsigned int)(*(_DWORD *)(a2 + 16) + v52), a3);
          v53 = v3 & 7;
          v57 = v56 & 7;
          v58 = (v56 >> 3) & 3;
          if ( (v56 & 7) == 4 )
          {
            v57 = v3 & 7;
          }
          else if ( v53 != 4 )
          {
            goto LABEL_82;
          }
          if ( (unsigned __int8)(v57 - 2) <= 1u )
          {
            v3 = v3 & 0xFFFFFFF8 | 1;
            if ( v58 <= v36 )
            {
              v59 = v56 & 0x20;
              if ( v58 != v36 || (_BYTE)v59 )
              {
                v36 = v58;
                v3 = v59 | (8 * (v58 & 3)) | v3 & 0xFFFFFFC1;
              }
            }
            goto LABEL_89;
          }
          v53 = 4;
LABEL_82:
          if ( v53 > v57 )
            v53 = v57;
          v54 = v3 & 0xFFFFFFF8 | v53 & 7;
          v3 = v54;
          if ( v58 <= v36 )
          {
            v55 = v56 & 0x20;
            if ( v58 != v36 || (v36 = v58, (_BYTE)v55) )
            {
              v36 = v58;
              v3 = v55 | (8 * (v58 & 3)) | v54 & 0xFFFFFFC7;
            }
          }
          if ( v53 == 2 )
            return v3;
LABEL_89:
          ++v52;
        }
        while ( v52 != v70 );
      }
      return v3;
    case 0xB:
      if ( *(_QWORD *)(a2 + 8) )
      {
        v29 = 4;
        v30 = sub_A51550(a1, *(_QWORD *)(a2 + 16), a3);
        v31 = (v30 >> 3) & 3;
        if ( (v30 & 7) != 4 )
        {
          v29 = 6;
          if ( (v30 & 7) != 7 )
            v29 = v30 & 7;
        }
        v32 = v29 | 0x10;
        v3 = v29 | 0x10;
        if ( v31 != 3 )
        {
          v33 = v30 & 0x20;
          if ( v31 != 2 || (_BYTE)v33 )
            return v33 | v32 & 0xFFFFFFE7 | (8 * (v31 & 3));
        }
      }
      return v3;
    case 0xC:
      v44 = *(_QWORD *)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      if ( v44 )
      {
        v45 = sub_B816E0(a1, v44, a3);
LABEL_63:
        v46 = 4;
        v47 = (v45 >> 3) & 3;
        if ( (v45 & 7) != 4 )
        {
          v46 = 6;
          if ( (v45 & 7) != 7 )
            v46 = v45 & 7;
        }
        v48 = v46 | 0x10;
        v3 = v46 | 0x10;
        if ( v47 != 3 )
        {
LABEL_67:
          v49 = v45 & 0x20;
          if ( v47 != 2 || (_BYTE)v49 )
            return v49 | (8 * (v47 & 3)) | v48 & 0xFFFFFFE7;
        }
      }
      return v3;
    case 0xD:
      return 18;
    default:
      return v3;
  }
}
