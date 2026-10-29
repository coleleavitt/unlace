/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400629B0
// Address: 0x00000001400629B0

//----- (00000001400629B0) ----------------------------------------------------
void __fastcall sub_1400629B0(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v3; // r13
  __int64 v4; // rbx
  _QWORD *v5; // r12
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  const char *v8; // r14
  size_t v9; // rax
  size_t v10; // r13
  size_t v11; // rbx
  unsigned __int64 v12; // rdx
  __int64 v13; // r12
  _QWORD *v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 *v16; // rsi
  unsigned __int64 v17; // rbx
  __int64 *v18; // r8
  _BOOL8 v19; // rdx
  _QWORD *v20; // r9
  __int64 *v21; // rax
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax
  _QWORD *v24; // rax
  unsigned __int64 v25; // rcx
  unsigned __int64 *v26; // r13
  _QWORD *v27; // rbx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // r8
  __int64 *v30; // r9
  _BOOL8 v31; // rdx
  _QWORD *v32; // r10
  __int64 *v33; // rax
  unsigned __int64 v34; // rcx
  _QWORD *v35; // rax
  unsigned __int64 v36; // rsi
  char v37; // al
  size_t v38; // rdi
  size_t v39; // rbx
  unsigned __int64 v40; // rdx
  unsigned __int64 i; // rdi
  const char *v42; // r14
  size_t v43; // rax
  size_t v44; // r12
  size_t v45; // rbx
  unsigned __int64 v46; // rdx
  __int64 v47; // rdi
  const char *v48; // rsi
  size_t v49; // rax
  size_t v50; // r14
  size_t v51; // rbx
  unsigned __int64 v52; // rdx
  size_t v53; // rsi
  size_t v54; // rbx
  unsigned __int64 v55; // rdx
  size_t v56; // rsi
  size_t v57; // rbx
  unsigned __int64 v58; // rdx
  size_t v59; // rsi
  size_t v60; // rbx
  unsigned __int64 v61; // rdx
  unsigned int v62; // r9d
  _QWORD *v63; // rax
  _BYTE *j; // rcx
  size_t v65; // rsi
  size_t v66; // rbx
  unsigned __int64 v67; // rdx
  size_t v68; // rsi
  size_t v69; // rbx
  unsigned __int64 v70; // rdx
  void *v71; // rcx
  _QWORD *v72; // rbx
  void *v73; // rcx
  void *v74; // rcx
  _QWORD *v75; // rbx
  void *v76; // rcx
  unsigned __int64 v77; // [rsp+20h] [rbp-E0h]
  void *Block; // [rsp+28h] [rbp-D8h] BYREF
  __int64 v79; // [rsp+30h] [rbp-D0h]
  __int64 v80; // [rsp+38h] [rbp-C8h]
  void *v81; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v82; // [rsp+48h] [rbp-B8h]
  __int64 v83; // [rsp+50h] [rbp-B0h]
  _QWORD *v84; // [rsp+58h] [rbp-A8h]
  __int128 v85; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v86; // [rsp+80h] [rbp-80h]
  void **v87; // [rsp+98h] [rbp-68h]
  __int64 v88; // [rsp+A0h] [rbp-60h]
  void **p_Block; // [rsp+A8h] [rbp-58h]
  __int64 v90; // [rsp+B0h] [rbp-50h]
  __int128 v91; // [rsp+C0h] [rbp-40h] BYREF
  _BYTE Src[5]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v93[3]; // [rsp+D5h] [rbp-2Bh] BYREF
  _BYTE v94[5]; // [rsp+D8h] [rbp-28h] BYREF
  _BYTE v95[3]; // [rsp+DDh] [rbp-23h] BYREF
  _BYTE v96[5]; // [rsp+E0h] [rbp-20h] BYREF
  _BYTE v97[3]; // [rsp+E5h] [rbp-1Bh] BYREF
  _BYTE v98[5]; // [rsp+E8h] [rbp-18h] BYREF
  _BYTE v99[3]; // [rsp+EDh] [rbp-13h] BYREF
  _BYTE v100[5]; // [rsp+F0h] [rbp-10h] BYREF
  _BYTE v101[3]; // [rsp+F5h] [rbp-Bh] BYREF
  _BYTE v102[10]; // [rsp+F8h] [rbp-8h] BYREF
  _BYTE v103[6]; // [rsp+102h] [rbp+2h] BYREF

  v84 = a2;
  v3 = a2[1];
  v77 = v3;
  v4 = *a2;
  v83 = *a2;
  v5 = (_QWORD *)a2[6];
  if ( v3 && v4 && v5 )
  {
    sub_140002D20(a1, 0xFFFFFF01);
    v6 = 0;
    if ( *v5 )
    {
      do
        ++v6;
      while ( v5[v6] );
    }
    sub_140002D20(a1, v6);
    v7 = 0;
    if ( v6 )
    {
      do
      {
        v8 = pNodeName;
        if ( v5[v7] )
          v8 = (const char *)v5[v7];
        v9 = strlen(v8);
        v10 = v9 + 1;
        if ( v9 != -1 )
        {
          v11 = a1[1];
          v12 = v11 + v10;
          if ( v11 + v10 < v11 )
            v12 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v12);
          memcpy((void *)(v11 + *a1), v8, v10);
        }
        ++v7;
      }
      while ( v7 < v6 );
      v3 = v77;
      v4 = v83;
    }
    v13 = 0;
    v82 = 0;
    v14 = operator new(0x30u);
    *v14 = v14;
    v14[1] = v14;
    v14[2] = v14;
    *((_WORD *)v14 + 12) = 257;
    v81 = v14;
    v15 = 0;
    if ( v3 )
    {
      v16 = (unsigned __int64 *)(v4 + 16);
      do
      {
        v17 = *v16;
        if ( *v16 )
        {
          v18 = (__int64 *)v14[1];
          v19 = 0;
          v20 = v14;
          if ( !*((_BYTE *)v18 + 25) )
          {
            v21 = (__int64 *)v14[1];
            do
            {
              v18 = v21;
              v22 = v21[4];
              if ( v22 >= v17 )
                v20 = v21;
              else
                v21 += 2;
              v19 = v22 >= *v16;
              v21 = (__int64 *)*v21;
            }
            while ( !*((_BYTE *)v21 + 25) );
          }
          *(_QWORD *)&v85 = v18;
          *((_QWORD *)&v85 + 1) = __PAIR64__(HIDWORD(v86), v19);
          if ( *((_BYTE *)v20 + 25) || v17 < v20[4] )
          {
            if ( v82 == 0x555555555555555LL )
              unknown_libname_1(0x555555555555555LL, v19);
            v87 = &v81;
            v88 = 0;
            v23 = operator new(0x30u);
            v23[4] = v17;
            v23[5] = v13;
            *v23 = v14;
            v23[1] = v14;
            v23[2] = v14;
            *((_WORD *)v23 + 12) = 0;
            v88 = 0;
            v91 = v85;
            sub_140003FC0(&v81, (__int64)&v91, (__int64)v23);
            ++v13;
            v14 = v81;
          }
        }
        ++v15;
        v16 += 4;
      }
      while ( v15 < v3 );
    }
    v79 = 0;
    v24 = operator new(0x28u);
    *v24 = v24;
    v24[1] = v24;
    v24[2] = v24;
    *((_WORD *)v24 + 12) = 257;
    Block = v24;
    sub_140002D20(a1, v13);
    v25 = 0;
    v80 = 0;
    if ( v3 )
    {
      v26 = (unsigned __int64 *)(v83 + 16);
      v27 = Block;
      v28 = v77;
      do
      {
        v29 = *v26;
        if ( *v26 )
        {
          v30 = (__int64 *)v27[1];
          v31 = 0;
          v32 = v27;
          if ( !*((_BYTE *)v30 + 25) )
          {
            v33 = (__int64 *)v27[1];
            do
            {
              v30 = v33;
              v34 = v33[4];
              if ( v34 >= v29 )
                v32 = v33;
              else
                v33 += 2;
              v31 = v34 >= *v26;
              v33 = (__int64 *)*v33;
            }
            while ( !*((_BYTE *)v33 + 25) );
            v25 = v80;
          }
          *(_QWORD *)&v86 = v30;
          DWORD2(v86) = v31;
          if ( *((_BYTE *)v32 + 25) || v29 < v32[4] )
          {
            if ( v79 == 0x666666666666666LL )
              unknown_libname_1(v25, v31);
            p_Block = &Block;
            v90 = 0;
            v35 = operator new(0x28u);
            v35[4] = *v26;
            *v35 = v27;
            v35[1] = v27;
            v35[2] = v27;
            *((_WORD *)v35 + 12) = 0;
            v90 = 0;
            v85 = v86;
            sub_140003FC0(&Block, (__int64)&v85, (__int64)v35);
            if ( (*(_DWORD *)(v26 - 1) & 0x100) != 0 )
            {
              v36 = 1;
            }
            else
            {
              v37 = *((_BYTE *)v26 - 3);
              if ( v37 == 1 )
              {
                v36 = 16;
              }
              else
              {
                if ( v37 != 2 )
                {
                  if ( byte_1400CB61C )
                    __debugbreak();
                  sub_14005A480(1783);
                }
                v36 = 32;
              }
            }
            v38 = sub_14005B4D0(Src, (unsigned __int64)v93, v36) - Src;
            if ( v38 )
            {
              v39 = a1[1];
              v40 = v38 + v39;
              if ( v38 + v39 < v39 )
                v40 = 0x7FFFFFFFFFFFFFFFLL;
              sub_140002EF0((__int64)a1, v40);
              memcpy((void *)(v39 + *a1), Src, v38);
            }
            for ( i = 0; i < v36; ++i )
            {
              v42 = pNodeName;
              if ( *(_QWORD *)(*v26 + 8 * i) )
                v42 = *(const char **)(*v26 + 8 * i);
              v43 = strlen(v42);
              v44 = v43 + 1;
              if ( v43 != -1 )
              {
                v45 = a1[1];
                v46 = v44 + v45;
                if ( v44 + v45 < v45 )
                  v46 = 0x7FFFFFFFFFFFFFFFLL;
                sub_140002EF0((__int64)a1, v46);
                memcpy((void *)(v45 + *a1), v42, v44);
              }
            }
            v25 = v80;
            v27 = Block;
          }
          v28 = v77;
        }
        v80 = ++v25;
        v26 += 4;
      }
      while ( v25 < v28 );
      v3 = v77;
    }
    sub_140002D20(a1, v3);
    if ( v3 )
    {
      v47 = v83 + 8;
      do
      {
        v48 = pNodeName;
        if ( *(_QWORD *)(v47 - 8) )
          v48 = *(const char **)(v47 - 8);
        v49 = strlen(v48);
        v50 = v49 + 1;
        if ( v49 != -1 )
        {
          v51 = a1[1];
          v52 = v50 + v51;
          if ( v50 + v51 < v51 )
            v52 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v52);
          memcpy((void *)(v51 + *a1), v48, v50);
        }
        v53 = sub_14005B4D0(v94, (unsigned __int64)v95, *(_DWORD *)v47) - v94;
        if ( v53 )
        {
          v54 = a1[1];
          v55 = v53 + v54;
          if ( v53 + v54 < v54 )
            v55 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v55);
          memcpy((void *)(v54 + *a1), v94, v53);
        }
        v56 = sub_14005B4D0(v96, (unsigned __int64)v97, *(unsigned __int8 *)(v47 + 4)) - v96;
        if ( v56 )
        {
          v57 = a1[1];
          v58 = v56 + v57;
          if ( v56 + v57 < v57 )
            v58 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v58);
          memcpy((void *)(v57 + *a1), v96, v56);
        }
        v59 = sub_14005B4D0(v98, (unsigned __int64)v99, *(unsigned __int8 *)(v47 + 5)) - v98;
        if ( v59 )
        {
          v60 = a1[1];
          v61 = v59 + v60;
          if ( v59 + v60 < v60 )
            v61 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v61);
          memcpy((void *)(v60 + *a1), v98, v59);
        }
        v62 = 0;
        v63 = *((_QWORD **)v81 + 1);
        for ( j = v81; !*((_BYTE *)v63 + 25); v63 = (_QWORD *)*v63 )
        {
          if ( v63[4] >= *(_QWORD *)(v47 + 8) )
            j = v63;
          else
            v63 += 2;
        }
        if ( j[25] || *(_QWORD *)(v47 + 8) < *((_QWORD *)j + 4) )
          j = v81;
        if ( j != v81 )
          v62 = *((_QWORD *)j + 5) + 1;
        v65 = sub_14005B4D0(v100, (unsigned __int64)v101, v62) - v100;
        if ( v65 )
        {
          v66 = a1[1];
          v67 = v65 + v66;
          if ( v65 + v66 < v66 )
            v67 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v67);
          memcpy((void *)(v66 + *a1), v100, v65);
        }
        v68 = sub_14005B5A0(v102, (unsigned __int64)v103, *(_QWORD *)(v47 + 16) + 1LL) - v102;
        if ( v68 )
        {
          v69 = a1[1];
          v70 = v68 + v69;
          if ( v68 + v69 < v69 )
            v70 = 0x7FFFFFFFFFFFFFFFLL;
          sub_140002EF0((__int64)a1, v70);
          memcpy((void *)(v69 + *a1), v102, v68);
        }
        v47 += 32;
        --v3;
      }
      while ( v3 );
    }
    sub_140002D20(a1, *((_DWORD *)v84 + 24));
    v71 = Block;
    v72 = *((_QWORD **)Block + 1);
    if ( !*((_BYTE *)v72 + 25) )
    {
      do
      {
        sub_140009A60((__int64)&Block, (__int64)&Block, v72[2]);
        v73 = v72;
        v72 = (_QWORD *)*v72;
        j_j_free(v73);
      }
      while ( !*((_BYTE *)v72 + 25) );
      v71 = Block;
    }
    j_j_free(v71);
    v74 = v81;
    v75 = *((_QWORD **)v81 + 1);
    if ( !*((_BYTE *)v75 + 25) )
    {
      do
      {
        sub_1400098F0((__int64)&v81, (__int64)&v81, v75[2]);
        v76 = v75;
        v75 = (_QWORD *)*v75;
        j_j_free(v76);
      }
      while ( !*((_BYTE *)v75 + 25) );
      v74 = v81;
    }
    j_j_free(v74);
  }
}
// 140062D9B: conditional instruction was optimized away because rsi.8 is in (==1|==10|==20)
// 140004240: using guessed type void __fastcall __noreturn unknown_libname_1(_QWORD, _QWORD);
// 1400CB61C: using guessed type char byte_1400CB61C;
