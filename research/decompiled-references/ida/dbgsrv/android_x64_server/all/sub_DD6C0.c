/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DD6C0
// Address: 0x00000000000DD6C0

//----- (00000000000DD6C0) ----------------------------------------------------
char *__fastcall sub_DD6C0(__int64 a1)
{
  char *v1; // rax
  char *v2; // rcx
  unsigned __int64 v3; // rdx
  char v4; // bp
  char v5; // dl
  char *v6; // rax
  __int64 v7; // r15
  char *v8; // r14
  _QWORD *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rbp
  __int64 v12; // rcx
  _QWORD *v13; // rax
  _QWORD *v14; // rdx
  char *v15; // rax
  char *v16; // rax
  char *v17; // r12
  __int64 v18; // r15
  _QWORD *v19; // rax
  _QWORD *v20; // rbx
  __int64 v21; // rbp
  _QWORD *v22; // r15
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // rdx
  bool v26; // zf
  _QWORD *v27; // rbx
  __int64 v28; // rcx
  _QWORD *v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rbx
  __int64 v32; // rcx
  _QWORD *v33; // rax
  _QWORD *v34; // rdx
  _QWORD *v35; // rax
  char **v36; // rcx
  char *v37; // rax
  char *v38; // rax
  _QWORD *v39; // rbx
  __int64 v40; // rcx
  _QWORD *v41; // rax
  _QWORD *v42; // rdx
  char *v43; // rax
  _QWORD *v44; // rax
  _QWORD *v45; // rbp
  _QWORD *v46; // rbx
  __int64 v47; // rcx
  _QWORD *v48; // rax
  _QWORD *v49; // rdx
  char *v50; // rax
  char *v51; // rbp
  _QWORD *v52; // rbx
  __int64 v53; // rcx
  _QWORD *v54; // rax
  _QWORD *v55; // rdx
  __int64 (__fastcall **v56)(); // r12
  char *v57; // rax
  char *v58; // rax
  __int64 v59; // rbx
  __int64 (__fastcall **v60)(); // r15
  _QWORD *v61; // rax
  _QWORD *v62; // r12
  _QWORD *v63; // rbp
  __int64 v64; // rcx
  _QWORD *v65; // rax
  _QWORD *v66; // rdx
  _QWORD *v67; // rbp
  __int64 v68; // rcx
  _QWORD *v69; // rax
  _QWORD *v70; // rdx
  char *v71; // rax
  char *v72; // rbx
  _QWORD *v73; // rbp
  __int64 v74; // rcx
  _QWORD *v75; // rax
  _QWORD *v76; // rdx
  char v78; // [rsp+0h] [rbp-38h]
  __int64 v79; // [rsp+0h] [rbp-38h]

  v1 = *(char **)a1;
  v2 = *(char **)(a1 + 8);
  v3 = (unsigned __int64)&v2[-*(_QWORD *)a1];
  if ( v3 < 3 )
  {
    if ( v3 != 2 )
    {
      v4 = 0;
      goto LABEL_46;
    }
LABEL_13:
    v5 = *v1;
    goto LABEL_14;
  }
  v5 = *v1;
  if ( *v1 == 115 )
  {
    if ( v1[1] == 114 && v1[2] == 78 )
    {
      *(_QWORD *)a1 = v1 + 3;
      v6 = sub_E00F0((char **)a1);
      if ( v6 )
      {
        v7 = (__int64)v6;
        if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
        {
          v8 = nullptr;
          v9 = sub_D7E00((_QWORD *)a1, 0);
          if ( !v9 )
            return v8;
          v10 = v9;
          v11 = *(_QWORD **)(a1 + 4832);
          v12 = v11[1];
          if ( (unsigned __int64)(v12 + 32) < 0xFF0 )
          {
            v14 = v11 + 1;
          }
          else
          {
            v13 = (_QWORD *)operator new[](0x1000u);
            *v13 = v11;
            v13[1] = 0;
            *(_QWORD *)(a1 + 4832) = v13;
            v12 = 0;
            v14 = v13 + 1;
            v11 = v13;
          }
          *v14 = v12 + 32;
          *(_DWORD *)((char *)v11 + v12 + 24) = 16843040;
          *(_QWORD *)((char *)v11 + v12 + 16) = off_152D88;
          *(_QWORD *)((char *)v11 + v12 + 32) = v7;
          v7 = (__int64)v11 + v12 + 16;
          *(_QWORD *)((char *)v11 + v12 + 40) = v10;
        }
        v8 = nullptr;
        v56 = off_1521B8;
        while ( 1 )
        {
          v57 = *(char **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v57 == 69 )
            break;
          v58 = sub_E0570((char **)a1);
          if ( !v58 )
            return v8;
          v59 = (__int64)v58;
          if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
          {
            v79 = v7;
            v60 = v56;
            v61 = sub_D7E00((_QWORD *)a1, 0);
            if ( !v61 )
              return v8;
            v62 = v61;
            v63 = *(_QWORD **)(a1 + 4832);
            v64 = v63[1];
            if ( (unsigned __int64)(v64 + 32) < 0xFF0 )
            {
              v66 = v63 + 1;
            }
            else
            {
              v65 = (_QWORD *)operator new[](0x1000u);
              *v65 = v63;
              v65[1] = 0;
              *(_QWORD *)(a1 + 4832) = v65;
              v66 = v65 + 1;
              v64 = 0;
              v63 = v65;
            }
            *v66 = v64 + 32;
            *(_DWORD *)((char *)v63 + v64 + 24) = 16843040;
            *(_QWORD *)((char *)v63 + v64 + 16) = off_152D88;
            *(_QWORD *)((char *)v63 + v64 + 32) = v59;
            *(_QWORD *)((char *)v63 + v64 + 40) = v62;
            if ( (_QWORD *)((char *)v63 + v64) == (_QWORD *)-16LL )
              return v8;
            v59 = (__int64)v63 + v64 + 16;
            v56 = v60;
            v7 = v79;
          }
          v67 = *(_QWORD **)(a1 + 4832);
          v68 = v67[1];
          if ( (unsigned __int64)(v68 + 32) < 0xFF0 )
          {
            v70 = v67 + 1;
          }
          else
          {
            v69 = (_QWORD *)operator new[](0x1000u);
            *v69 = v67;
            v69[1] = 0;
            *(_QWORD *)(a1 + 4832) = v69;
            v70 = v69 + 1;
            v68 = 0;
            v67 = v69;
          }
          *v70 = v68 + 32;
          *(_DWORD *)((char *)v67 + v68 + 24) = 16843031;
          *(_QWORD *)((char *)v67 + v68 + 16) = v56;
          *(_QWORD *)((char *)v67 + v68 + 32) = v7;
          v7 = (__int64)v67 + v68 + 16;
          *(_QWORD *)((char *)v67 + v68 + 40) = v59;
        }
        *(_QWORD *)a1 = v57 + 1;
        v71 = sub_E0220(a1);
        if ( v71 )
        {
          v72 = v71;
          v73 = *(_QWORD **)(a1 + 4832);
          v74 = v73[1];
          if ( (unsigned __int64)(v74 + 32) < 0xFF0 )
          {
            v76 = v73 + 1;
          }
          else
          {
            v75 = (_QWORD *)operator new[](0x1000u);
            *v75 = v73;
            v75[1] = 0;
            *(_QWORD *)(a1 + 4832) = v75;
            v74 = 0;
            v76 = v75 + 1;
            v73 = v75;
          }
          *v76 = v74 + 32;
          v8 = (char *)v73 + v74 + 16;
          *(_DWORD *)((char *)v73 + v74 + 24) = 16843031;
          *(_QWORD *)v8 = v56;
          *(_QWORD *)((char *)v73 + v74 + 32) = v7;
          *(_QWORD *)((char *)v73 + v74 + 40) = v72;
          return v8;
        }
      }
      return nullptr;
    }
    goto LABEL_13;
  }
LABEL_14:
  if ( v5 == 103 && v1[1] == 115 )
  {
    v1 += 2;
    *(_QWORD *)a1 = v1;
    v4 = 1;
    if ( (unsigned __int64)(v2 - v1) < 2 || *v1 != 115 )
      goto LABEL_46;
  }
  else
  {
    v4 = 0;
    if ( *v1 != 115 )
      goto LABEL_46;
  }
  if ( v1[1] == 114 )
  {
    v15 = v1 + 2;
    *(_QWORD *)a1 = v15;
    if ( v2 == v15 || (unsigned int)(*v15 - 48) > 9 )
    {
      v43 = sub_E00F0((char **)a1);
      if ( v43 )
      {
        v18 = (__int64)v43;
        if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
        {
          v8 = nullptr;
          v44 = sub_D7E00((_QWORD *)a1, 0);
          if ( !v44 )
            return v8;
          v45 = v44;
          v46 = *(_QWORD **)(a1 + 4832);
          v47 = v46[1];
          if ( (unsigned __int64)(v47 + 32) < 0xFF0 )
          {
            v49 = v46 + 1;
          }
          else
          {
            v48 = (_QWORD *)operator new[](0x1000u);
            *v48 = v46;
            v48[1] = 0;
            *(_QWORD *)(a1 + 4832) = v48;
            v47 = 0;
            v49 = v48 + 1;
            v46 = v48;
          }
          *v49 = v47 + 32;
          *(_DWORD *)((char *)v46 + v47 + 24) = 16843040;
          *(_QWORD *)((char *)v46 + v47 + 16) = off_152D88;
          *(_QWORD *)((char *)v46 + v47 + 32) = v18;
          v18 = (__int64)v46 + v47 + 16;
          *(_QWORD *)((char *)v46 + v47 + 40) = v45;
        }
LABEL_61:
        v50 = sub_E0220(a1);
        if ( v50 )
        {
          v51 = v50;
          v52 = *(_QWORD **)(a1 + 4832);
          v53 = v52[1];
          if ( (unsigned __int64)(v53 + 32) < 0xFF0 )
          {
            v55 = v52 + 1;
          }
          else
          {
            v54 = (_QWORD *)operator new[](0x1000u);
            *v54 = v52;
            v54[1] = 0;
            *(_QWORD *)(a1 + 4832) = v54;
            v53 = 0;
            v55 = v54 + 1;
            v52 = v54;
          }
          *v55 = v53 + 32;
          v8 = (char *)v52 + v53 + 16;
          *(_DWORD *)((char *)v52 + v53 + 24) = 16843031;
          *(_QWORD *)v8 = off_1521B8;
          *(_QWORD *)((char *)v52 + v53 + 32) = v18;
          *(_QWORD *)((char *)v52 + v53 + 40) = v51;
          return v8;
        }
      }
    }
    else
    {
      v16 = sub_E0570((char **)a1);
      if ( v16 )
      {
        v17 = v16;
        v8 = nullptr;
        v18 = 0;
        v78 = v4;
        while ( 1 )
        {
          if ( *(_QWORD *)(a1 + 8) != *(_QWORD *)a1 && **(_BYTE **)a1 == 73 )
          {
            v19 = sub_D7E00((_QWORD *)a1, 0);
            if ( !v19 )
              return v8;
            v20 = v19;
            v21 = v18;
            v22 = *(_QWORD **)(a1 + 4832);
            v23 = v22[1];
            if ( (unsigned __int64)(v23 + 32) < 0xFF0 )
            {
              v25 = v22 + 1;
            }
            else
            {
              v24 = (_QWORD *)operator new[](0x1000u);
              *v24 = v22;
              v24[1] = 0;
              *(_QWORD *)(a1 + 4832) = v24;
              v25 = v24 + 1;
              v23 = 0;
              v22 = v24;
            }
            *v25 = v23 + 32;
            *(_DWORD *)((char *)v22 + v23 + 24) = 16843040;
            v26 = (_QWORD *)((char *)v22 + v23 + 16) == nullptr;
            *(_QWORD *)((char *)v22 + v23 + 16) = off_152D88;
            *(_QWORD *)((char *)v22 + v23 + 32) = v17;
            *(_QWORD *)((char *)v22 + v23 + 40) = v20;
            v17 = (char *)v22 + v23 + 16;
            v18 = v21;
            v4 = v78;
            if ( v26 )
              return v8;
          }
          if ( v18 )
            break;
          v18 = (__int64)v17;
          if ( v4 )
          {
            v31 = *(_QWORD **)(a1 + 4832);
            v32 = v31[1];
            if ( (unsigned __int64)(v32 + 32) < 0xFF0 )
            {
              v34 = v31 + 1;
            }
            else
            {
              v33 = (_QWORD *)operator new[](0x1000u);
              *v33 = v31;
              v33[1] = 0;
              *(_QWORD *)(a1 + 4832) = v33;
              v34 = v33 + 1;
              v32 = 0;
              v31 = v33;
            }
            *v34 = v32 + 32;
            v35 = (_QWORD *)((char *)v31 + v32 + 16);
            *(_DWORD *)((char *)v31 + v32 + 24) = 16843041;
            *v35 = off_152378;
            v36 = (char **)((char *)v31 + v32 + 32);
            goto LABEL_40;
          }
LABEL_41:
          v37 = *(char **)a1;
          if ( *(_QWORD *)a1 != *(_QWORD *)(a1 + 8) && *v37 == 69 )
          {
            *(_QWORD *)a1 = v37 + 1;
            goto LABEL_61;
          }
          v17 = sub_E0570((char **)a1);
          if ( !v17 )
            return v8;
        }
        v27 = *(_QWORD **)(a1 + 4832);
        v28 = v27[1];
        if ( (unsigned __int64)(v28 + 32) < 0xFF0 )
        {
          v30 = v27 + 1;
        }
        else
        {
          v29 = (_QWORD *)operator new[](0x1000u);
          *v29 = v27;
          v29[1] = 0;
          *(_QWORD *)(a1 + 4832) = v29;
          v30 = v29 + 1;
          v28 = 0;
          v27 = v29;
        }
        *v30 = v28 + 32;
        v35 = (_QWORD *)((char *)v27 + v28 + 16);
        *(_DWORD *)((char *)v27 + v28 + 24) = 16843031;
        *v35 = off_1521B8;
        *(_QWORD *)((char *)v27 + v28 + 32) = v18;
        v36 = (char **)((char *)v27 + v28 + 40);
LABEL_40:
        *v36 = v17;
        v18 = (__int64)v35;
        goto LABEL_41;
      }
    }
    return nullptr;
  }
LABEL_46:
  v38 = sub_E0220(a1);
  if ( !v38 )
    return nullptr;
  v8 = v38;
  if ( v4 )
  {
    v39 = *(_QWORD **)(a1 + 4832);
    v40 = v39[1];
    if ( (unsigned __int64)(v40 + 32) < 0xFF0 )
    {
      v42 = v39 + 1;
    }
    else
    {
      v41 = (_QWORD *)operator new[](0x1000u);
      *v41 = v39;
      v41[1] = 0;
      *(_QWORD *)(a1 + 4832) = v41;
      v40 = 0;
      v42 = v41 + 1;
      v39 = v41;
    }
    *v42 = v40 + 32;
    *(_DWORD *)((char *)v39 + v40 + 24) = 16843041;
    *(_QWORD *)((char *)v39 + v40 + 16) = off_152378;
    *(_QWORD *)((char *)v39 + v40 + 32) = v8;
    return (char *)v39 + v40 + 16;
  }
  return v8;
}
// 1521B8: using guessed type __int64 (__fastcall *off_1521B8[7])();
// 152378: using guessed type __int64 (__fastcall *off_152378[7])();
// 152D88: using guessed type __int64 (__fastcall *off_152D88[7])();
