/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: parse_command_line
// Address: 0x00000000000B1BF0

//----- (00000000000B1BF0) ----------------------------------------------------
__int64 __fastcall parse_command_line(__int64 a1, char **a2, char *a3, char a4)
{
  char *v4; // r14
  char *v7; // rbx
  __int64 v8; // r13
  __int64 v9; // rbx
  int v10; // ecx
  char *v11; // rdi
  char *v12; // rax
  char *v13; // rbp
  char v14; // r15
  char v15; // bl
  char *v16; // r14
  char *v17; // r13
  void *v18; // rax
  _QWORD *v19; // rax
  __int64 v20; // rcx
  __int128 v21; // xmm0
  void *v22; // rdx
  char *v23; // r12
  int v24; // eax
  int v25; // eax
  char *v26; // rbx
  int v27; // eax
  void *v28; // rax
  void *v29; // rcx
  unsigned __int64 v30; // rdx
  char *v31; // rbp
  char *v32; // rbp
  __int128 v33; // xmm0
  unsigned __int64 v34; // rax
  char v35; // bl
  int v36; // eax
  __int64 v37; // rcx
  char *v38; // rax
  char *v39; // rbp
  void *v40; // rax
  __int64 v41; // rcx
  char *v42; // rbp
  void *v43; // rax
  char *v44; // rbx
  char v45; // al
  __int64 v46; // rcx
  __int128 v47; // xmm0
  void *v48; // rdx
  void *v49; // rdi
  __int64 *v50; // r15
  __int64 v51; // rcx
  _QWORD *v52; // rax
  __int64 v53; // rcx
  __int128 v54; // xmm0
  int v56; // [rsp+8h] [rbp-E0h]
  bool v57; // [rsp+Ch] [rbp-DCh]
  __int64 v58; // [rsp+10h] [rbp-D8h]
  int v59; // [rsp+1Ch] [rbp-CCh]
  __int64 v60; // [rsp+20h] [rbp-C8h]
  int v61; // [rsp+30h] [rbp-B8h]
  int v62; // [rsp+38h] [rbp-B0h]
  void *v63[3]; // [rsp+40h] [rbp-A8h] BYREF
  void *v64; // [rsp+58h] [rbp-90h] BYREF
  __int128 v65; // [rsp+60h] [rbp-88h]
  void *ptr[2]; // [rsp+70h] [rbp-78h] BYREF
  unsigned __int64 v67; // [rsp+80h] [rbp-68h]
  unsigned __int128 v68; // [rsp+90h] [rbp-58h]
  unsigned __int64 v69; // [rsp+A0h] [rbp-48h]
  unsigned __int64 v70; // [rsp+B0h] [rbp-38h]

  v70 = __readfsqword(0x28u);
  if ( !a3 )
    return 0;
  memset(v63, 0, sizeof(v63));
  v62 = (int)a3;
  v7 = skip_spaces(a3);
  LOBYTE(v4) = *v7;
  if ( !*v7 )
    goto LABEL_105;
  v57 = (a4 & 4) != 0;
  v8 = 0;
  do
  {
    v23 = v7 + 1;
    if ( (_BYTE)v4 == 39 || (_BYTE)v4 == 34 )
    {
      if ( (_BYTE)v8 == (_BYTE)v4 && (_BYTE)v8 )
      {
        v35 = *v23;
        if ( *v23 >= 0 )
        {
          v36 = isspace((unsigned __int8)*v23);
          if ( !v35 || v36 )
          {
            v37 = *(_QWORD *)(a1 + 8);
            if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v37 + 1) )
            {
              v38 = *(char **)a1;
            }
            else
            {
              v38 = (char *)qvector_reserve(a1, *(char **)a1, v37 + 1, 0x18u);
              *(_QWORD *)a1 = v38;
              v37 = *(_QWORD *)(a1 + 8);
            }
            v46 = 3 * v37;
            *(_OWORD *)&v38[8 * v46] = 0;
            *(_QWORD *)&v38[8 * v46 + 16] = 0;
            ++*(_QWORD *)(a1 + 8);
            v47 = *(_OWORD *)&v38[8 * v46];
            v48 = *(void **)&v38[8 * v46 + 16];
            *(void **)&v38[8 * v46] = v63[0];
            *(void **)&v38[8 * v46 + 8] = v63[1];
            *(void **)&v38[8 * v46 + 16] = v63[2];
            *(_OWORD *)v63 = v47;
            v63[2] = v48;
            v57 = 0;
          }
        }
        v23 = skip_spaces(v23);
LABEL_103:
        v8 = 0;
        goto LABEL_104;
      }
      if ( !(_BYTE)v8 )
      {
        v8 = (unsigned int)v4;
        goto LABEL_104;
      }
      goto LABEL_83;
    }
    if ( (_BYTE)v8 )
      goto LABEL_69;
    if ( (char)v4 >= 0 )
    {
      if ( isspace((unsigned __int8)v4) )
      {
        v41 = *(_QWORD *)(a1 + 8);
        if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v41 + 1) )
        {
          v19 = *(_QWORD **)a1;
        }
        else
        {
          v19 = qvector_reserve(a1, *(char **)a1, v41 + 1, 0x18u);
          *(_QWORD *)a1 = v19;
          v41 = *(_QWORD *)(a1 + 8);
        }
        v20 = 3 * v41;
        *(_OWORD *)&v19[v20] = 0;
        v19[v20 + 2] = 0;
        ++*(_QWORD *)(a1 + 8);
        v21 = *(_OWORD *)&v19[v20];
        v22 = (void *)v19[v20 + 2];
        v19[v20] = v63[0];
        v19[v20 + 1] = v63[1];
        v19[v20 + 2] = v63[2];
        *(_OWORD *)v63 = v21;
        v63[2] = v22;
        v23 = skip_spaces(v7 + 1);
        v8 = 0;
        v57 = 0;
        goto LABEL_104;
      }
LABEL_69:
      if ( (_BYTE)v8 != 39 && (_BYTE)v4 == 92 )
      {
        LOBYTE(v4) = v7[1];
        v23 = v7 + 2;
        if ( (_BYTE)v4 != 34 && (_BYTE)v4 != 92 )
        {
          v39 = (char *)v63[1] - 1;
          if ( !v63[1] )
            v39 = nullptr;
          v40 = v63[0];
          if ( v63[2] < v39 + 2 )
          {
            v40 = qvector_reserve((__int64)v63, (char *)v63[0], (unsigned __int64)(v39 + 2), 1u);
            v63[0] = v40;
          }
          v63[1] = v39 + 2;
          v39[(_QWORD)v40] = 92;
          *((_BYTE *)v63[0] + (unsigned __int64)v39 + 1) = 0;
          if ( !(_BYTE)v4 )
            break;
        }
      }
    }
LABEL_83:
    v42 = (char *)v63[1] - 1;
    if ( !v63[1] )
      v42 = nullptr;
    v43 = v63[0];
    if ( v63[2] < v42 + 2 )
    {
      v43 = qvector_reserve((__int64)v63, (char *)v63[0], (unsigned __int64)(v42 + 2), 1u);
      v63[0] = v43;
    }
    v63[1] = v42 + 2;
    v42[(_QWORD)v43] = (char)v4;
    *((_BYTE *)v63[0] + (unsigned __int64)v42 + 1) = 0;
    if ( (unsigned __int8)v8 | v57 || ((unsigned __int8)v4 | 2) != 0x3E )
      goto LABEL_104;
    v44 = (char *)v63[1] - 1;
    if ( !v63[1] )
      v44 = nullptr;
    if ( !a2 || (unsigned __int64)v44 > 2 || v63[1] < (char *)&dword_0 + 2 )
      goto LABEL_103;
    v45 = *((_BYTE *)v63[0] + (unsigned __int64)v63[1] - 2);
    if ( v45 == 62 )
    {
      if ( (_DWORD)v44 == 2 )
      {
        v24 = *(unsigned __int8 *)v63[0];
        if ( (v24 & 0x80u) != 0 || (unsigned int)(v24 - 48) >= 0xA )
          goto LABEL_103;
        v60 = v8;
        LODWORD(v4) = (char)v24 - 48;
        v11 = v23 + 1;
        v25 = 0;
        if ( *v23 != 62 )
          v11 = v23;
        if ( (_DWORD)v4 == -1 )
          goto LABEL_103;
        LOBYTE(v25) = *v23 == 62;
        v10 = 4 * v25 + 2;
      }
      else
      {
        if ( (_DWORD)v44 != 1 )
          goto LABEL_103;
        v60 = v8;
        v11 = v23 + 1;
        v10 = 4 * (*v23 == 62) + 2;
        if ( *v23 != 62 )
          v11 = v23;
        LODWORD(v4) = 1;
      }
    }
    else
    {
      LODWORD(v4) = 0;
      if ( (_DWORD)v44 != 1 )
        goto LABEL_103;
      v60 = v8;
      v10 = 1;
      v11 = v23;
      if ( v45 != 60 )
        goto LABEL_103;
    }
    v59 = v10;
    v58 = a1;
    *(_OWORD *)ptr = 0;
    v67 = 0;
    v12 = skip_spaces(v11);
    v13 = v12;
    v14 = *v12;
    v61 = (int)v44;
    if ( !*v12 )
    {
      v26 = v12;
      a1 = v58;
      if ( ptr[1] >= (char *)&dword_0 + 2 )
        goto LABEL_49;
      goto LABEL_47;
    }
    if ( v14 != 34 && v14 != 39 )
    {
      v26 = v12;
      while ( 1 )
      {
        if ( v14 < 0 )
        {
          if ( ((unsigned __int8)v14 | 2) == 0x3E )
            goto LABEL_40;
        }
        else
        {
          v27 = isspace((unsigned __int8)v14);
          if ( ((unsigned __int8)v14 | 2) == 0x3E || v27 )
          {
LABEL_40:
            if ( v26 <= v13 )
            {
              a1 = v58;
            }
            else
            {
              sub_4ABC0((__int64)&v64, v13, v26 - v13);
              a1 = v58;
              v28 = v64;
              v29 = (void *)v65;
              v68 = __PAIR128__(v65, (unsigned __int64)v64);
              v64 = nullptr;
              v30 = *((_QWORD *)&v65 + 1);
              v69 = *((_QWORD *)&v65 + 1);
              v65 = 0;
              if ( !ptr[0] )
              {
                ptr[0] = v28;
                ptr[1] = v29;
                v67 = v30;
                if ( (unsigned __int64)v29 >= 2 )
                  goto LABEL_49;
                goto LABEL_47;
              }
              ptr[1] = nullptr;
              qfree(ptr[0]);
              *(_OWORD *)ptr = v68;
              v67 = v69;
              if ( v64 )
              {
                *(_QWORD *)&v65 = 0;
                qfree(v64);
                v64 = nullptr;
                *((_QWORD *)&v65 + 1) = 0;
                if ( ptr[1] >= (char *)&dword_0 + 2 )
                  goto LABEL_49;
                goto LABEL_47;
              }
            }
            if ( ptr[1] >= (char *)&dword_0 + 2 )
              goto LABEL_49;
LABEL_47:
            v4 = nullptr;
            goto LABEL_50;
          }
        }
        v14 = *++v26;
        if ( !v14 )
          goto LABEL_40;
      }
    }
    v56 = (int)v4;
    while ( 1 )
    {
      v15 = v13[1];
      if ( v15 != 92 )
        break;
      v15 = v13[2];
      v31 = v13 + 2;
      v16 = v31;
      if ( !v15 )
        goto LABEL_30;
LABEL_17:
      v17 = (char *)ptr[1] - 1;
      if ( !ptr[1] )
        v17 = nullptr;
      v18 = ptr[0];
      if ( v67 < (unsigned __int64)(v17 + 2) )
      {
        v18 = qvector_reserve((__int64)ptr, (char *)ptr[0], (unsigned __int64)(v17 + 2), 1u);
        ptr[0] = v18;
      }
      ptr[1] = v17 + 2;
      v17[(_QWORD)v18] = v15;
      *((_BYTE *)ptr[0] + (unsigned __int64)v17 + 1) = 0;
      v13 = v16;
    }
    v16 = v13 + 1;
    if ( v15 )
    {
      if ( v15 == v14 )
      {
        v31 = v13 + 2;
        goto LABEL_48;
      }
      goto LABEL_17;
    }
    v31 = v13 + 1;
LABEL_30:
    ptr[1] = nullptr;
LABEL_48:
    a1 = v58;
    LODWORD(v4) = v56;
    v59 += 8;
    v26 = v31;
    if ( ptr[1] < (char *)&dword_0 + 2 )
      goto LABEL_47;
LABEL_49:
    v32 = sub_B4300(a2);
    v33 = *(_OWORD *)(v32 + 8);
    v34 = *((_QWORD *)v32 + 3);
    *((void **)v32 + 1) = ptr[0];
    *((void **)v32 + 2) = ptr[1];
    *((_QWORD *)v32 + 3) = v67;
    *(_OWORD *)ptr = v33;
    v67 = v34;
    *((_DWORD *)v32 + 8) = v59;
    *(_DWORD *)v32 = (_DWORD)v4;
    v4 = skip_spaces(v26);
    *((_DWORD *)v32 + 9) = (_DWORD)v23 - v61 - v62;
    *((_DWORD *)v32 + 10) = (_DWORD)v4 - ((_DWORD)v23 - v61);
LABEL_50:
    if ( ptr[0] )
    {
      ptr[1] = nullptr;
      qfree(ptr[0]);
      ptr[0] = nullptr;
      v67 = 0;
    }
    if ( v4 )
    {
      v63[1] = nullptr;
      v23 = v4;
    }
    v8 = v60;
LABEL_104:
    LOBYTE(v4) = *v23;
    v7 = v23;
  }
  while ( *v23 );
LABEL_105:
  if ( v63[1] > (char *)&dword_0 + 1 )
  {
    v51 = *(_QWORD *)(a1 + 8);
    if ( *(_QWORD *)(a1 + 16) >= (unsigned __int64)(v51 + 1) )
    {
      v52 = *(_QWORD **)a1;
    }
    else
    {
      v52 = qvector_reserve(a1, *(char **)a1, v51 + 1, 0x18u);
      *(_QWORD *)a1 = v52;
      v51 = *(_QWORD *)(a1 + 8);
    }
    v50 = (__int64 *)(a1 + 8);
    v53 = 3 * v51;
    *(_OWORD *)&v52[v53] = 0;
    v52[v53 + 2] = 0;
    ++*v50;
    v49 = (void *)v52[v53];
    v54 = *(_OWORD *)&v52[v53 + 1];
    v52[v53] = v63[0];
    v52[v53 + 1] = v63[1];
    v52[v53 + 2] = v63[2];
    v63[0] = v49;
    *(_OWORD *)&v63[1] = v54;
  }
  else
  {
    v49 = v63[0];
    v50 = (__int64 *)(a1 + 8);
  }
  v9 = *v50;
  if ( v49 )
  {
    v63[1] = nullptr;
    qfree(v49);
    v63[0] = nullptr;
    v63[2] = nullptr;
  }
  return v9;
}
// B1E31: conditional instruction was optimized away because r15.1 is in (==22|==27)
// B20F9: variable 'v4' is possibly undefined
// 0: using guessed type int dword_0;
