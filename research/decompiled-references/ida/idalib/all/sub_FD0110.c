_BYTE *__fastcall sub_FD0110(__int64 a1, unsigned int a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  int v7; // ebp
  __int64 v8; // rdi
  char v9; // r13
  bool v10; // bl
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // r15
  __int64 v16; // rax
  __int64 v17; // r14
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rdi
  char v23; // al
  char v24; // al
  char v25; // al
  char v26; // al
  __int64 v27; // rdx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // r15
  unsigned int v31; // esi
  __int64 v32; // rcx
  __int64 v33; // r10
  unsigned int v34; // r9d
  __int64 v35; // rax
  int v36; // edi
  _BYTE *result; // rax
  void *v38; // rax
  int v39; // edx
  const void *v40; // rsi
  unsigned int v41; // esi
  unsigned int v42; // edx
  __int64 v43; // rax
  int v44; // ecx
  char v45; // al
  __int64 v46; // rdx
  unsigned __int64 v47; // rcx
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // r11d
  int v51; // r11d
  __int64 v52; // r9
  __int64 v53; // rdx
  int v54; // edi
  int v55; // esi
  int v56; // r14d
  __int64 v57; // r9
  int v58; // r11d
  int v59; // r11d
  __int64 v60; // r9
  __int64 v61; // rdx
  int v62; // esi
  int v63; // r10d
  __int64 v64; // r8
  int v65; // eax
  int v66; // r11d
  __int64 v67; // r10
  int v68; // ecx
  int v69; // r10d
  int v70; // [rsp+0h] [rbp-58h]
  char v71; // [rsp+6h] [rbp-52h]
  char v72; // [rsp+7h] [rbp-51h]
  int v73; // [rsp+8h] [rbp-50h]
  int v74; // [rsp+14h] [rbp-44h] BYREF
  __int64 v75[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = a2;
  v8 = *(_QWORD *)(a1 + 152);
  v70 = a4;
  if ( (_BYTE)a3 != 3 )
  {
    v9 = 1;
    v10 = (_DWORD)a4 != 0;
    v71 = a3 & 7;
    v72 = 0;
    if ( (*(_BYTE *)sub_FCE460(v8, a2, a3, (unsigned int)a4, a5, a6) & 0x20) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 152);
      if ( !v70 )
        goto LABEL_4;
      goto LABEL_13;
    }
LABEL_17:
    v9 = v10;
    v15 = *(_QWORD *)(a1 + 152);
    if ( !v70 )
      goto LABEL_4;
    goto LABEL_13;
  }
  if ( !(_DWORD)a4 )
  {
    v45 = *(_BYTE *)sub_FCE460(v8, a2, a3, a4, a5, a6) & 7;
    if ( v45 == 4 )
    {
      v71 = 4;
      v72 = 1;
    }
    else
    {
      LOBYTE(v46) = v45 == 5;
      v72 = v45 == 5;
      v47 = (unsigned int)(2 * v46 + 3);
      v71 = 2 * (v45 == 5) + 3;
    }
    v10 = 0;
    if ( (*(_BYTE *)sub_FCE460(*(_QWORD *)(a1 + 152), a2, v46, v47, v48, v49) & 0x20) != 0 )
    {
      v15 = *(_QWORD *)(a1 + 152);
      v10 = 0;
      v9 = 1;
      goto LABEL_4;
    }
    goto LABEL_17;
  }
  if ( (*(_BYTE *)sub_FCE460(v8, a2, a3, a4, a5, a6) & 0x20) == 0 )
  {
    v71 = 3;
    v10 = 1;
    v72 = 0;
    goto LABEL_17;
  }
  v71 = 3;
  v10 = 1;
  v15 = *(_QWORD *)(a1 + 152);
  v9 = 1;
  v72 = 0;
LABEL_13:
  if ( *(_DWORD *)(a1 + 160) != v70 )
    goto LABEL_5;
LABEL_4:
  if ( !v15 )
  {
LABEL_5:
    v16 = operator new(0x38u);
    *(_QWORD *)(v16 + 16) = 0;
    v17 = v16;
    *(_QWORD *)(v16 + 24) = 0;
    *(_DWORD *)(v16 + 32) = 0;
    operator delete(0, 0, 4);
    v22 = *(unsigned int *)(v15 + 16);
    *(_DWORD *)(v17 + 32) = v22;
    if ( (_DWORD)v22 )
    {
      v38 = (void *)sub_22300B0(8 * v22, 4, v18, v19, v20, v21);
      v39 = *(_DWORD *)(v15 + 8);
      *(_QWORD *)(v17 + 16) = v38;
      v40 = *(const void **)v15;
      *(_DWORD *)(v17 + 24) = v39;
      *(_DWORD *)(v17 + 28) = *(_DWORD *)(v15 + 12);
      memcpy(v38, v40, 8LL * *(unsigned int *)(v17 + 32));
    }
    else
    {
      *(_QWORD *)(v17 + 16) = 0;
      *(_QWORD *)(v17 + 24) = 0;
    }
    v23 = *(_BYTE *)(v15 + 24) & 1 | *(_BYTE *)(v17 + 40) & 0xFE;
    *(_BYTE *)(v17 + 40) = v23;
    v24 = *(_BYTE *)(v15 + 24) & 2 | v23 & 0xFD;
    *(_BYTE *)(v17 + 40) = v24;
    v25 = *(_BYTE *)(v15 + 24) & 4 | v24 & 0xFB;
    *(_BYTE *)(v17 + 40) = v25;
    v26 = *(_BYTE *)(v15 + 24) & 8 | v25 & 0xF7;
    *(_BYTE *)(v17 + 40) = v26;
    *(_BYTE *)(v17 + 40) = *(_BYTE *)(v15 + 24) & 0x10 | v26 & 0xEF;
    *(_BYTE *)(v17 + 41) = *(_BYTE *)(v15 + 25);
    *(_QWORD *)(v17 + 48) = *(_QWORD *)(v15 + 32);
    std::__detail::_List_node_base::_M_hook(
      (std::__detail::_List_node_base *)v17,
      (std::__detail::_List_node_base *)(a1 + 72));
    v30 = *(_QWORD *)(a1 + 80);
    ++*(_QWORD *)(a1 + 88);
    v31 = *(_DWORD *)(v30 + 32);
    v32 = v30 + 16;
    if ( !v31 )
      goto LABEL_26;
    v33 = *(_QWORD *)(v30 + 16);
    v27 = (unsigned int)(37 * v7);
    v34 = (v31 - 1) & (37 * v7);
    v35 = v33 + 8LL * v34;
    v36 = *(_DWORD *)v35;
    if ( v7 == *(_DWORD *)v35 )
    {
LABEL_9:
      *(_BYTE *)(v35 + 4) = (v10 << 6)
                          | v71 & 7
                          | *(_BYTE *)(v35 + 4) & 8
                          | 8
                          | (16 * v10) & 0x3F
                          | (32 * v9) & 0x3F
                          | (v72 << 7);
      return (_BYTE *)sub_FCFEB0(a1 + 96, *(_QWORD *)(a1 + 64), v70, v32);
    }
    v56 = 1;
    v28 = 0;
    if ( v36 != -1 )
    {
      do
      {
        if ( !v28 && v36 == -2 )
          v28 = v35;
        v65 = v56++;
        v34 = (v31 - 1) & (v65 + v34);
        v35 = v33 + 8LL * v34;
        v36 = *(_DWORD *)v35;
        if ( v7 == *(_DWORD *)v35 )
          goto LABEL_9;
      }
      while ( v36 != -1 );
      if ( v28 )
        v35 = v28;
    }
    v29 = 3 * v31;
    v54 = *(_DWORD *)(v30 + 24) + 1;
    if ( 4 * v54 < (unsigned int)v29 )
    {
      v57 = v31 - *(_DWORD *)(v30 + 28) - v54;
      if ( (unsigned int)v57 > v31 >> 3 )
      {
LABEL_28:
        *(_DWORD *)(v30 + 24) = v54;
        if ( *(_DWORD *)v35 != -1 )
          --*(_DWORD *)(v30 + 28);
        *(_DWORD *)v35 = v7;
        *(_BYTE *)(v35 + 4) = 0;
        goto LABEL_9;
      }
      v73 = 37 * v7;
      sub_FCFAB0(v30 + 16, v31, v27, v32, v28, v57);
      v58 = *(_DWORD *)(v30 + 32);
      if ( v58 )
      {
        v59 = v58 - 1;
        v60 = *(_QWORD *)(v30 + 16);
        LODWORD(v61) = v59 & v73;
        v54 = *(_DWORD *)(v30 + 24) + 1;
        v35 = v60 + 8LL * (v59 & (unsigned int)v73);
        v62 = *(_DWORD *)v35;
        v32 = *(_QWORD *)(a1 + 80) + 16LL;
        if ( v7 != *(_DWORD *)v35 )
        {
          v63 = 1;
          v64 = 0;
          if ( v62 != -1 )
          {
            while ( 1 )
            {
              if ( v62 == -2 && !v64 )
                v64 = v35;
              v61 = v59 & (unsigned int)(v61 + v63);
              v35 = v60 + 8 * v61;
              v62 = *(_DWORD *)v35;
              if ( v7 == *(_DWORD *)v35 )
                break;
              if ( v62 == -1 )
                goto LABEL_48;
              ++v63;
            }
          }
        }
        goto LABEL_28;
      }
    }
    else
    {
LABEL_26:
      sub_FCFAB0(v30 + 16, 2 * v31, v27, v32, v28, v29);
      v50 = *(_DWORD *)(v30 + 32);
      if ( v50 )
      {
        v51 = v50 - 1;
        v52 = *(_QWORD *)(v30 + 16);
        LODWORD(v53) = v51 & (37 * v7);
        v54 = *(_DWORD *)(v30 + 24) + 1;
        v35 = v52 + 8LL * (unsigned int)v53;
        v32 = *(_QWORD *)(a1 + 80) + 16LL;
        v55 = *(_DWORD *)v35;
        if ( v7 != *(_DWORD *)v35 )
        {
          v69 = 1;
          v64 = 0;
          if ( v55 != -1 )
          {
            while ( 1 )
            {
              if ( v55 == -2 && !v64 )
                v64 = v35;
              v53 = v51 & (unsigned int)(v53 + v69);
              v35 = v52 + 8 * v53;
              v55 = *(_DWORD *)v35;
              if ( v7 == *(_DWORD *)v35 )
                break;
              if ( v55 == -1 )
              {
LABEL_48:
                if ( v64 )
                  v35 = v64;
                goto LABEL_28;
              }
              ++v69;
            }
          }
        }
        goto LABEL_28;
      }
    }
    ++*(_DWORD *)(v30 + 24);
    BUG();
  }
  v41 = *(_DWORD *)(v15 + 16);
  v74 = v7;
  if ( !v41 )
  {
    v75[0] = 0;
    goto LABEL_32;
  }
  v13 = v41 - 1;
  v42 = v13 & (37 * v7);
  v43 = *(_QWORD *)v15 + 8LL * v42;
  v44 = *(_DWORD *)v43;
  if ( v7 != *(_DWORD *)v43 )
  {
    v66 = 1;
    v67 = 0;
    if ( v44 != -1 )
    {
      while ( 1 )
      {
        if ( v44 == -2 && !v67 )
          v67 = v43;
        v14 = (unsigned int)(v66 + 1);
        v42 = v13 & (v66 + v42);
        v43 = *(_QWORD *)v15 + 8LL * v42;
        v44 = *(_DWORD *)v43;
        if ( v7 == *(_DWORD *)v43 )
          goto LABEL_21;
        if ( v44 == -1 )
        {
          if ( v67 )
            v43 = v67;
          break;
        }
        ++v66;
      }
    }
    v68 = *(_DWORD *)(v15 + 8);
    v75[0] = v43;
    v11 = (unsigned int)(v68 + 1);
    v12 = 3 * v41;
    if ( 4 * (int)v11 < (unsigned int)v12 )
    {
      v12 = v41 - *(_DWORD *)(v15 + 12) - (unsigned int)v11;
      if ( (unsigned int)v12 > v41 >> 3 )
        goto LABEL_34;
      goto LABEL_33;
    }
LABEL_32:
    v41 *= 2;
LABEL_33:
    sub_FCFAB0(v15, v41, v11, v12, v13, v14);
    sub_FCA3B0((__int64 *)v15, &v74, v75);
    v7 = v74;
    LODWORD(v11) = *(_DWORD *)(v15 + 8) + 1;
    v43 = v75[0];
LABEL_34:
    *(_DWORD *)(v15 + 8) = v11;
    if ( *(_DWORD *)v43 != -1 )
      --*(_DWORD *)(v15 + 12);
    *(_DWORD *)v43 = v7;
    *(_BYTE *)(v43 + 4) = 0;
  }
LABEL_21:
  result = (_BYTE *)(v43 + 4);
  *result = (v10 << 6) | v71 & 7 | *result & 8 | 8 | (16 * v10) & 0x3F | (32 * v9) & 0x3F | (v72 << 7);
  return result;
}
