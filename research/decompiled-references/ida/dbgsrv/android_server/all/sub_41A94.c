/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_41A94
// Address: 0x0000000000041A94

//----- (0000000000041A94) ----------------------------------------------------
void __fastcall sub_41A94(__int64 a1, __int64 a2)
{
  char *v4; // x0
  const char *v5; // x0
  const char *v6; // x21
  __int64 v7; // x25
  _QWORD *v8; // x23
  const char *v9; // x0
  const char *v10; // x2
  char *elf_debug_file_directory; // x1
  char *v12; // x3
  char *v13; // x4
  char *v14; // x6
  const char *v15; // x0
  __int64 v16; // x22
  const char *v17; // x0
  const char *v18; // x2
  __int64 v19; // x8
  __int64 v20; // x27
  __int64 v21; // x26
  char *v22; // x23
  char *v23; // x21
  __int64 v24; // x22
  char *v25; // x0
  __int64 v26; // x8
  char *v27; // x20
  char *v28; // x25
  unsigned __int64 v29; // x8
  __int64 v30; // x12
  __int128 *v31; // x10
  char *v32; // x11
  __int64 v33; // x12
  __int128 v34; // q0
  __int128 v35; // q1
  __int64 v36; // t1
  __int64 v37; // x8
  __int64 v38; // x27
  __int64 v39; // x26
  char *v40; // x23
  char *v41; // x21
  __int64 v42; // x22
  char *v43; // x0
  __int64 v44; // x8
  char *v45; // x20
  char *v46; // x25
  unsigned __int64 v47; // x8
  __int64 v48; // x12
  __int128 *v49; // x10
  char *v50; // x11
  __int64 v51; // x12
  __int128 v52; // q0
  __int128 v53; // q1
  __int64 v54; // t1
  unsigned __int64 v55; // x21
  int v56; // w20
  void *ptr[3]; // [xsp+8h] [xbp-5A8h] BYREF
  void *v58; // [xsp+20h] [xbp-590h] BYREF
  __int64 v59; // [xsp+28h] [xbp-588h]
  __int64 v60; // [xsp+30h] [xbp-580h]
  _QWORD *v61; // [xsp+38h] [xbp-578h]
  __int64 v62; // [xsp+40h] [xbp-570h]
  _QWORD v63[2]; // [xsp+48h] [xbp-568h] BYREF
  const char *v64; // [xsp+58h] [xbp-558h]
  __int64 v65; // [xsp+60h] [xbp-550h]
  __int64 (__fastcall **v66)(); // [xsp+D8h] [xbp-4D8h] BYREF
  int v67; // [xsp+E0h] [xbp-4D0h] BYREF
  __int64 v68; // [xsp+E8h] [xbp-4C8h]
  __int64 v69; // [xsp+F0h] [xbp-4C0h]
  __int64 v70; // [xsp+F8h] [xbp-4B8h]
  __int64 v71; // [xsp+548h] [xbp-68h]

  v71 = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  if ( *(_QWORD *)(a2 + 48) )
    v4 = *(char **)(a2 + 40);
  else
    v4 = &byte_F154B;
  v5 = stristr(v4, (unsigned __int8 *)"libpthread");
  v6 = v5;
  if ( v5 )
    v7 = a1 + 1640;
  else
    v7 = a1 + 1592;
  if ( v5 )
    *(_QWORD *)(a1 + 1984) = *(_QWORD *)a2;
  if ( *(_QWORD *)a2 == -1 )
  {
    v8 = (_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 24) )
      v10 = *(const char **)(a2 + 16);
    else
      v10 = &byte_F154B;
    sub_99D18(a1, "Can't import symbols from %s: no imagebase\n", v10);
  }
  else
  {
    v67 = 49;
    v66 = off_156620;
    v68 = a1;
    v69 = a2;
    v70 = v7;
    v8 = (_QWORD *)(a2 + 24);
    if ( *(_QWORD *)(a2 + 24) )
      v9 = *(const char **)(a2 + 16);
    else
      v9 = &byte_F154B;
    sub_5991C(v9, &v66, 0);
  }
  elf_debug_file_directory = get_elf_debug_file_directory();
  if ( *(_QWORD *)(a2 + 24) )
  {
    v12 = *(char **)(a2 + 16);
    if ( *(_QWORD *)(a2 + 120) )
    {
LABEL_20:
      v13 = *(char **)(a2 + 112);
      goto LABEL_23;
    }
  }
  else
  {
    v12 = &byte_F154B;
    if ( *(_QWORD *)(a2 + 120) )
      goto LABEL_20;
  }
  v13 = &byte_F154B;
LABEL_23:
  if ( *(_QWORD *)(a2 + 96) )
    v14 = *(char **)(a2 + 88);
  else
    v14 = &byte_F154B;
  sub_42028((__int64)&v66, elf_debug_file_directory, 1, v12, v13, *(_DWORD *)(a2 + 136), v14);
  if ( (unsigned int)sub_4224C((__int64)&v66) )
  {
    v15 = *v8 ? *(const char **)(a2 + 16) : &byte_F154B;
    if ( strcmp(v15, (const char *)&v67) )
    {
      sub_99D18(a1, "load separate debug info '%s'\n", (const char *)&v67);
      v16 = *(_QWORD *)a2;
      sub_39140(&v58, (char *)&v67);
      sub_39140(ptr, "");
      sub_41888(v63, v16, 0, (__int64)&v58, (__int64)ptr);
      if ( ptr[0] )
      {
        ptr[1] = nullptr;
        qfree(ptr[0]);
        ptr[0] = nullptr;
        ptr[2] = nullptr;
      }
      if ( v58 )
      {
        v59 = 0;
        qfree(v58);
        v58 = nullptr;
        v60 = 0;
      }
      if ( v63[0] == -1 )
      {
        if ( v65 )
          v18 = v64;
        else
          v18 = &byte_F154B;
        sub_99D18(a1, "Can't import symbols from %s: no imagebase\n", v18);
      }
      else
      {
        LODWORD(v59) = 49;
        if ( v65 )
          v17 = v64;
        else
          v17 = &byte_F154B;
        v58 = off_156620;
        v60 = a1;
        v61 = v63;
        v62 = v7;
        sub_5991C(v17, &v58, 0);
      }
      sub_41960((__int64)v63);
    }
  }
  if ( v6 )
  {
    v19 = *(_QWORD *)(a1 + 1648);
    v20 = 8 * v19;
    if ( 8 * v19 )
    {
      v21 = *(_QWORD *)(a1 + 1600);
      v22 = *(char **)(a1 + 1640);
      v23 = *(char **)(a1 + 1592);
      v24 = (8 * v19) >> 3;
      if ( *(_QWORD *)(a1 + 1608) >= (unsigned __int64)(v24 + v21) )
      {
        v26 = *(_QWORD *)(a1 + 1600);
      }
      else
      {
        v25 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 1592), *(void **)(a1 + 1592), v24 + v21, 8u);
        v26 = *(_QWORD *)(a1 + 1600);
        v23 = v25;
        *(_QWORD *)(a1 + 1592) = v25;
      }
      v27 = &v23[8 * ((8 * v21) >> 3)];
      v28 = &v22[v20];
      memmove(&v27[8 * v24], v27, 8 * v26 - 8 * ((8 * v21) >> 3));
      if ( v22 != &v22[v20] )
      {
        v29 = ((unsigned __int64)(v20 - 8) >> 3) + 1;
        if ( v29 < 4 || v27 < &v22[v20] && v22 < &v23[8 * v21 + 8 + 8 * ((unsigned __int64)(v20 - 8) >> 3)] )
          goto LABEL_78;
        v30 = 8 * (v29 & 0x3FFFFFFFFFFFFFFCLL);
        v31 = (__int128 *)(v22 + 16);
        v27 += v30;
        v22 += v30;
        v32 = &v23[8 * v21 + 16];
        v33 = v29 & 0x3FFFFFFFFFFFFFFCLL;
        do
        {
          v34 = *(v31 - 1);
          v35 = *v31;
          v31 += 2;
          v33 -= 4;
          *((_OWORD *)v32 - 1) = v34;
          *(_OWORD *)v32 = v35;
          v32 += 32;
        }
        while ( v33 );
        if ( v29 != (v29 & 0x3FFFFFFFFFFFFFFCLL) )
        {
LABEL_78:
          do
          {
            v36 = *(_QWORD *)v22;
            v22 += 8;
            *(_QWORD *)v27 = v36;
            v27 += 8;
          }
          while ( v28 != v22 );
        }
      }
      *(_QWORD *)(a1 + 1600) += v24;
    }
    v37 = *(_QWORD *)(a1 + 1672);
    v38 = 8 * v37;
    if ( 8 * v37 )
    {
      v39 = *(_QWORD *)(a1 + 1624);
      v40 = *(char **)(a1 + 1664);
      v41 = *(char **)(a1 + 1616);
      v42 = (8 * v37) >> 3;
      if ( *(_QWORD *)(a1 + 1632) >= (unsigned __int64)(v42 + v39) )
      {
        v44 = *(_QWORD *)(a1 + 1624);
      }
      else
      {
        v43 = (char *)qvector_reserve((pthread_mutex_t *)(a1 + 1616), *(void **)(a1 + 1616), v42 + v39, 8u);
        v44 = *(_QWORD *)(a1 + 1624);
        v41 = v43;
        *(_QWORD *)(a1 + 1616) = v43;
      }
      v45 = &v41[8 * ((8 * v39) >> 3)];
      v46 = &v40[v38];
      memmove(&v45[8 * v42], v45, 8 * v44 - 8 * ((8 * v39) >> 3));
      if ( v40 != &v40[v38] )
      {
        v47 = ((unsigned __int64)(v38 - 8) >> 3) + 1;
        if ( v47 < 4 || v45 < &v40[v38] && v40 < &v41[8 * v39 + 8 + 8 * ((unsigned __int64)(v38 - 8) >> 3)] )
          goto LABEL_79;
        v48 = 8 * (v47 & 0x3FFFFFFFFFFFFFFCLL);
        v49 = (__int128 *)(v40 + 16);
        v45 += v48;
        v40 += v48;
        v50 = &v41[8 * v39 + 16];
        v51 = v47 & 0x3FFFFFFFFFFFFFFCLL;
        do
        {
          v52 = *(v49 - 1);
          v53 = *v49;
          v49 += 2;
          v51 -= 4;
          *((_OWORD *)v50 - 1) = v52;
          *(_OWORD *)v50 = v53;
          v50 += 32;
        }
        while ( v51 );
        if ( v47 != (v47 & 0x3FFFFFFFFFFFFFFCLL) )
        {
LABEL_79:
          do
          {
            v54 = *(_QWORD *)v40;
            v40 += 8;
            *(_QWORD *)v45 = v54;
            v45 += 8;
          }
          while ( v46 != v40 );
        }
      }
      v37 = *(_QWORD *)(a1 + 1672);
      *(_QWORD *)(a1 + 1624) += v42;
    }
    if ( v37 )
    {
      v55 = 0;
      v56 = 1;
      do
      {
        *(_QWORD *)(*(_QWORD *)(a1 + 1664) + 8 * v55) = qstrdup(*(char **)(*(_QWORD *)(a1 + 1664) + 8 * v55));
        v55 = v56++;
      }
      while ( *(_QWORD *)(a1 + 1672) > v55 );
    }
  }
  sub_42704(&v66);
}
// F154B: using guessed type char byte_F154B;
// 156620: using guessed type __int64 (__fastcall *off_156620[4])();
