unsigned __int64 __fastcall sub_A2500(unsigned int *a1)
{
  unsigned int *v1; // rbx
  unsigned int v2; // eax
  unsigned int v3; // edx
  char v4; // r12
  char v5; // al
  unsigned int v6; // edx
  char v8; // dl
  signed int v9; // eax
  unsigned __int64 v10; // rsi
  __int64 v11; // rdx
  _QWORD *v12; // r15
  __int64 v13; // rsi
  unsigned __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // r14
  size_t v17; // rax
  const char *v18; // r11
  size_t v19; // r10
  __int64 v20; // rax
  void *v21; // r8
  __int64 v22; // rsi
  __int64 v23; // rax
  __int64 v24; // rcx
  __int64 v25; // r13
  int v26; // ebx
  char v27; // r15
  char v28; // r14
  _QWORD *v29; // r13
  __int64 v30; // rsi
  unsigned __int64 v31; // r12
  __int64 i; // rax
  __int64 v33; // rdx
  char v34; // cl
  bool v35; // dl
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // rsi
  unsigned __int64 v38; // rdx
  __int64 v39; // rdx
  __int64 v40; // rdi
  __int64 v41; // rax
  void *v42; // rdi
  void *v43; // rdx
  __int64 v44; // rsi
  unsigned __int64 v45; // r15
  __int64 j; // rdx
  __int64 v47; // rax
  __int64 v48; // rdx
  __int64 v49; // r14
  __int64 v50; // r13
  _QWORD *v51; // rax
  __int64 v52; // rdx
  __int64 v53; // r14
  __int64 v54; // r13
  _QWORD *v55; // rax
  __int64 v56; // rax
  size_t v57; // [rsp+0h] [rbp-E0h]
  const char *v58; // [rsp+8h] [rbp-D8h]
  int v59; // [rsp+14h] [rbp-CCh]
  const char *src; // [rsp+20h] [rbp-C0h]
  void *srcb; // [rsp+20h] [rbp-C0h]
  _BYTE *srcd; // [rsp+20h] [rbp-C0h]
  void *srcc; // [rsp+20h] [rbp-C0h]
  __int64 v65; // [rsp+28h] [rbp-B8h]
  __int64 v66; // [rsp+40h] [rbp-A0h] BYREF
  __int128 v67; // [rsp+48h] [rbp-98h]
  __int64 v68; // [rsp+58h] [rbp-88h]
  __int128 v69; // [rsp+60h] [rbp-80h]
  __int64 v70; // [rsp+70h] [rbp-70h]
  __int128 v71; // [rsp+78h] [rbp-68h]
  __int64 v72; // [rsp+88h] [rbp-58h]
  __int128 v73; // [rsp+90h] [rbp-50h]
  int v74; // [rsp+A0h] [rbp-40h]
  unsigned __int64 v75; // [rsp+A8h] [rbp-38h]

  v75 = __readfsqword(0x28u);
  v1 = a1;
  v65 = sub_C4D00(a1[4]);
  if ( !v65 )
    return v75 - __readfsqword(0x28u);
  v2 = a1[5];
  if ( v2 == 2 )
  {
    v3 = a1[6];
    v4 = *(_BYTE *)(v65 + 153);
    if ( (v4 & 2) != 0 )
      goto LABEL_17;
    if ( !v3 )
      goto LABEL_41;
    *(_DWORD *)(v65 + 160) = -1;
    v2 = a1[5];
  }
  v3 = a1[6];
  if ( v2 != 8 )
    goto LABEL_4;
  v4 = *(_BYTE *)(v65 + 153);
  if ( (v4 & 8) != 0 )
  {
LABEL_17:
    if ( v3 )
    {
      if ( v3 != 1 )
        goto LABEL_6;
LABEL_19:
      v8 = v4 & 1;
      *(_BYTE *)(v65 + 153) = v4 & 1;
      v2 = v1[5];
LABEL_20:
      v5 = v8 | v2;
      goto LABEL_7;
    }
    goto LABEL_41;
  }
  if ( v3 )
  {
    *(_DWORD *)(v65 + 164) = -1;
    v3 = a1[6];
    v2 = a1[5];
LABEL_4:
    if ( v3 )
      goto LABEL_5;
  }
LABEL_41:
  if ( !(_QWORD)xmmword_251418 )
  {
    v4 = *(_BYTE *)(v65 + 153);
    goto LABEL_6;
  }
  v25 = 0;
  v26 = 0;
  v27 = 0;
  v28 = ~(_BYTE)v2;
  do
  {
    v29 = (_QWORD *)(qword_251410 + 232 * v25);
    v30 = v29[16];
    if ( v30 )
    {
      v31 = 0;
      for ( i = 0; i != v30; ++i )
      {
        while ( 1 )
        {
          v33 = v29[15];
          v34 = *(_BYTE *)(v33 + 8 * i + 4) & v28;
          if ( !v34 )
            break;
          ++i;
          *(_BYTE *)(v33 + 8 * v31++ + 4) = v34;
          if ( v30 == i )
            goto LABEL_48;
        }
        v35 = v30 - 1 == i;
        v27 |= v35;
      }
LABEL_48:
      v36 = v29[16];
      if ( v36 != v31 )
      {
        LODWORD(v66) = -1;
        WORD2(v66) = 0;
        if ( v31 < v36 )
          goto LABEL_56;
        v37 = v29[15];
        v38 = v29[17];
        if ( (unsigned __int64)&v66 >= v37 && (unsigned __int64)&v66 < v37 + 8 * v38 )
        {
          if ( v38 < v31 )
          {
            v29[15] = qvector_reserve();
            v36 = v29[16];
          }
          if ( v36 < v31 )
          {
            do
            {
              v39 = v29[15] + 8 * v36++;
              *(_DWORD *)v39 = -1;
              *(_WORD *)(v39 + 4) = 0;
            }
            while ( v31 != v36 );
          }
LABEL_56:
          v29[16] = v31;
          goto LABEL_57;
        }
        if ( v38 < v31 )
        {
          v29[15] = qvector_reserve();
          v36 = v29[16];
        }
        if ( v36 >= v31 )
          goto LABEL_56;
        do
          *(_QWORD *)(v29[15] + 8 * v36++) = v66;
        while ( v31 != v36 );
        v29[16] = v31;
      }
    }
LABEL_57:
    if ( v27 )
    {
      v40 = v29[18];
      if ( v40 )
        sub_C6F20(v40, v29);
      v41 = v29[16];
      v29[18] = 0;
      if ( v41 )
        sub_A23A0((__int64)v29, *(_DWORD *)(v29[15] + 8 * v41 - 8));
    }
    v25 = ++v26;
  }
  while ( v26 < (unsigned __int64)xmmword_251418 );
  v1 = a1;
  v3 = a1[6];
  v2 = a1[5];
LABEL_5:
  v4 = *(_BYTE *)(v65 + 153);
  if ( v3 == 1 )
  {
    v8 = *(_BYTE *)(v65 + 153);
    if ( v2 == 1 )
      goto LABEL_20;
    goto LABEL_19;
  }
LABEL_6:
  v5 = v4 & ~(_BYTE)v2;
LABEL_7:
  *(_BYTE *)(v65 + 153) = v5;
  v6 = v1[5];
  if ( v6 == 2 || v6 == 8 )
  {
    v9 = v1[6];
    if ( !v9 )
    {
      v10 = *(_QWORD *)(v65 + 128);
      if ( v10 )
      {
        v11 = 0;
        while ( (*(_BYTE *)(*(_QWORD *)(v65 + 120) + 8 * v11 + 4) & (unsigned __int8)v1[5]) == 0 )
        {
          v11 = ++v9;
          if ( v9 >= v10 )
            goto LABEL_27;
        }
        goto LABEL_9;
      }
LABEL_27:
      sub_A0CD0((__int64)xmmword_250E60);
      v6 = v1[5];
    }
    if ( v6 == 2 && v1[6] == 1 )
    {
      v66 = 0;
      v68 = 0;
      v70 = 0;
      v72 = 0;
      v74 = 1;
      v67 = 0;
      v69 = 0;
      v71 = 0;
      v73 = 0;
      v12 = *(_QWORD **)(dbg + 40LL);
      v59 = *(_DWORD *)(dbg + 48LL);
      if ( !*v12 )
        goto LABEL_97;
      v13 = 0;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        if ( v14 < v15 + 1 )
        {
          v68 = qvector_reserve();
          v15 = v69;
          v13 = v68;
        }
        ++v12;
        v16 = v13 + 24 * v15;
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        *(_QWORD *)&v69 = v69 + 1;
        if ( *(v12 - 1) && (src = (const char *)*(v12 - 1), v17 = strlen(src), v18 = src, (v19 = v17) != 0) )
        {
          v42 = *(void **)v16;
          v43 = (void *)(v17 + 1);
          if ( *(_QWORD *)(v16 + 16) < v17 + 1 )
          {
            v57 = v17;
            v58 = src;
            srcc = (void *)(v17 + 1);
            v56 = qvector_reserve();
            *(_QWORD *)v16 = v56;
            v19 = v57;
            v42 = (void *)v56;
            v18 = v58;
            v43 = srcc;
          }
          *(_QWORD *)(v16 + 8) = v43;
          srcd = (_BYTE *)v19;
          memmove(v42, v18, v19);
          srcd[*(_QWORD *)v16] = 0;
        }
        else
        {
          *(_QWORD *)(v16 + 8) = 0;
        }
        v20 = v71;
        v21 = *(void **)v16;
        v22 = v70;
        if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v71 + 1) )
        {
          srcb = *(void **)v16;
          v70 = qvector_reserve();
          v22 = v70;
          v21 = srcb;
          v20 = v71;
        }
        *(_QWORD *)(v22 + 8 * v20) = v21;
        v23 = v71;
        v24 = v71 + 1;
        *(_QWORD *)&v71 = v71 + 1;
        if ( !*v12 )
          break;
        v14 = *((_QWORD *)&v69 + 1);
        v15 = v69;
        v13 = v68;
      }
      v44 = v70;
      if ( *((_QWORD *)&v71 + 1) < (unsigned __int64)(v23 + 2) )
      {
LABEL_97:
        v70 = qvector_reserve();
        v24 = v71;
        v44 = v70;
      }
      *(_QWORD *)(v44 + 8 * v24) = 0;
      v45 = 0;
      *(_QWORD *)&v71 = v71 + 1;
      v74 = v59;
      for ( j = dbg; v45 < *(int *)(dbg + 64LL); j = dbg )
      {
        v47 = *(_QWORD *)(j + 56) + 32LL * (int)v45;
        sub_9DBC0(
          &v66,
          *(const void **)v47,
          *(_DWORD *)(v47 + 8),
          *(_BYTE *)(v47 + 13),
          *(_BYTE *)(v47 + 12),
          *(_QWORD *)(v47 + 16),
          *(_DWORD *)(v47 + 24));
        ++v45;
      }
      sub_A1BF0();
      v48 = v72;
      if ( v72 )
      {
        v49 = v73;
        if ( (_QWORD)v73 )
        {
          v50 = 0;
          do
          {
            v51 = (_QWORD *)(v48 + 24 * v50);
            if ( *v51 )
            {
              v51[1] = 0;
              qfree();
              v48 = v72;
            }
            ++v50;
          }
          while ( v49 != v50 );
        }
        *(_QWORD *)&v73 = 0;
        qfree();
      }
      if ( v70 )
      {
        *(_QWORD *)&v71 = 0;
        qfree();
      }
      v52 = v68;
      if ( v68 )
      {
        v53 = v69;
        if ( (_QWORD)v69 )
        {
          v54 = 0;
          do
          {
            v55 = (_QWORD *)(v52 + 24 * v54);
            if ( *v55 )
            {
              v55[1] = 0;
              qfree();
              v52 = v68;
            }
            ++v54;
          }
          while ( v53 != v54 );
        }
        *(_QWORD *)&v69 = 0;
        qfree();
      }
      if ( v66 )
      {
        *(_QWORD *)&v67 = 0;
        qfree();
      }
    }
  }
LABEL_9:
  if ( *((_BYTE *)v1 + 28) && *(_BYTE *)(v65 + 153) != v4 )
    dword_251538 |= 3u;
  return v75 - __readfsqword(0x28u);
}

