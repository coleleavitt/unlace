void __fastcall sub_85D760(__int64 a1, __int64 a2, double a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  char **exception; // rbx
  unsigned int *v9; // rsi
  _DWORD *v11; // rdx
  _QWORD *v12; // r12
  __int64 v13; // rax
  _QWORD *v14; // r14
  char *v15; // rax
  unsigned int v16; // esi
  unsigned int v17; // edx
  char *v18; // rax
  unsigned int v19; // eax
  __int64 v20; // rdx
  unsigned int v21; // ecx
  __int64 v22; // r13
  _QWORD *v23; // rdx
  __int64 v24; // r12
  unsigned int v25; // eax
  __int64 v26; // rcx
  int v27; // eax
  __int64 *v28; // rcx
  _QWORD *v29; // rax
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rdx
  _QWORD *v33; // r13
  unsigned int v34; // eax
  __int64 v35; // rcx
  int v36; // eax
  _QWORD *v37; // rcx
  __m128i v38; // xmm0
  char *v39; // rax
  unsigned int v40; // esi
  unsigned int v41; // edx
  __int64 v42; // r14
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rdx
  __int64 v47; // r12
  unsigned int v48; // r13d
  unsigned int v49; // eax
  __int64 v51; // r12
  unsigned int v52; // r14d
  unsigned int v53; // ecx
  unsigned int *v54; // rax
  __int64 v55; // rcx
  unsigned int v56; // r12d
  unsigned int v57; // ecx
  unsigned int *v58; // rax
  __int64 v59; // rcx
  _QWORD *v60; // rax
  _QWORD *v61; // rdx
  __int64 v62; // [rsp+0h] [rbp-70h]
  __int64 v63; // [rsp+0h] [rbp-70h]
  int v64; // [rsp+0h] [rbp-70h]
  __int64 v65; // [rsp+8h] [rbp-68h]
  __int64 v66; // [rsp+8h] [rbp-68h]
  int v67[2]; // [rsp+18h] [rbp-58h] BYREF
  __int64 v68; // [rsp+20h] [rbp-50h] BYREF
  __m128i v69; // [rsp+28h] [rbp-48h]

  v9 = *(unsigned int **)a2;
  if ( *((_WORD *)v9 + 2) )
    BUG();
  v11 = *(_DWORD **)(*((_QWORD *)v9 + 2) + 24LL);
  if ( !v11 )
  {
LABEL_49:
    sub_1872CE0("");
    sub_1873130(114, 145);
  }
  switch ( v11[1] )
  {
    case 0:
      v65 = *(_QWORD *)(a1 + 80);
      v18 = (char *)(a2 + 88);
      if ( *(int *)(a2 + 88) >> 8 == -1 )
        goto LABEL_51;
      do
      {
        if ( *(_DWORD *)(a1 + 12) == *v18 )
        {
          v19 = *(int *)v18 >> 8;
          goto LABEL_18;
        }
        v18 = *((char **)v18 + 1);
      }
      while ( v18 );
LABEL_51:
      v19 = -1;
      do
      {
LABEL_18:
        v20 = v19;
        v21 = v19;
        v19 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v19);
      }
      while ( v21 != v19 );
      v22 = *(_QWORD *)(*(_QWORD *)(a1 + 184) + 8 * v20);
      v23 = *(_QWORD **)(v22 + 8);
      v24 = v22 + 8;
      if ( v23 )
      {
        v25 = *((_DWORD *)v23 - 1);
        if ( v25 == *((_DWORD *)v23 - 2) )
        {
          v52 = (3 * v25 + 1) >> 1;
          v53 = 8 * v52 + 8;
          if ( 8 * v25 + 8 >= v53 || v25 >= v52 )
            goto LABEL_62;
          v54 = (unsigned int *)sub_186B300(v23 - 1, v53);
          v55 = v54[1];
          v23 = v54 + 2;
          *(_QWORD *)(v22 + 8) = v54 + 2;
          *v54 = v52;
          LODWORD(v54) = v55;
          v28 = &v23[v55];
          v27 = (_DWORD)v54 + 1;
        }
        else
        {
          v26 = v25;
          v27 = v25 + 1;
          v28 = &v23[v26];
        }
      }
      else
      {
        v61 = (_QWORD *)sub_186B270(0x18u);
        *v61 = 2;
        v27 = 1;
        v23 = v61 + 1;
        *(_QWORD *)(v22 + 8) = v23;
        v28 = v23;
      }
      *v28 = a2;
      *((_DWORD *)v23 - 1) = v27;
      v29 = (_QWORD *)sub_180C100(v65 + 2144, 16);
      v32 = *(_QWORD **)(v65 + 2128);
      v33 = v29;
      *v29 = off_1C54F38;
      v29[1] = v24;
      if ( !v32 )
      {
        v60 = (_QWORD *)sub_186B270(0x18u);
        *v60 = 2;
        v32 = v60 + 1;
        *(_QWORD *)(v65 + 2128) = v60 + 1;
        v37 = v60 + 1;
        v36 = 1;
        goto LABEL_25;
      }
      v34 = *((_DWORD *)v32 - 1);
      if ( v34 == *((_DWORD *)v32 - 2) )
      {
        v56 = (3 * v34 + 1) >> 1;
        v57 = 8 * v56 + 8;
        if ( 8 * v34 + 8 < v57 && v34 < v56 )
        {
          v58 = (unsigned int *)sub_186B300(v32 - 1, v57);
          v59 = v58[1];
          v32 = v58 + 2;
          *(_QWORD *)(v65 + 2128) = v58 + 2;
          *v58 = v56;
          LODWORD(v58) = v59;
          v37 = &v32[v59];
          v36 = (_DWORD)v58 + 1;
          goto LABEL_25;
        }
LABEL_62:
        exception = (char **)__cxa_allocate_exception(0x28u);
        sub_24ABB0(&v68, "Overflow encountered when expanding vector");
        *exception = (char *)off_1C63128;
        sub_2333C0(exception + 1, &v68);
        sub_233E40((__int64)&v68);
        __cxa_throw(exception, (struct type_info *)&`typeinfo for'default_exception, (void (*)(void *))sub_230E50);
      }
      v35 = v34;
      v36 = v34 + 1;
      v37 = &v32[v35];
LABEL_25:
      *v37 = v33;
      *((_DWORD *)v32 - 1) = v36;
      v68 = 0;
      v69 = (__m128i)(unsigned __int64)a2;
      sub_865240(a1, &v68, v32, v37, v30, v31, v62);
      return;
    case 1:
      return;
    case 2:
    case 0xD:
      goto LABEL_12;
    case 3:
      v38 = _mm_loadu_si128((const __m128i *)(a2 + 176));
      v68 = 2;
      v69 = v38;
      sub_865240(a1, &v68, v11, a5, a6, a7, v62);
      return;
    case 4:
      v39 = (char *)(*(_QWORD *)(a2 + 176) + 88LL);
      if ( *(int *)v39 >> 8 == -1 )
        goto LABEL_50;
      do
      {
        if ( *(_DWORD *)(a1 + 12) == *v39 )
        {
          v40 = *(int *)v39 >> 8;
          goto LABEL_34;
        }
        v39 = *((char **)v39 + 1);
      }
      while ( v39 );
LABEL_50:
      v40 = -1;
      do
      {
LABEL_34:
        v41 = v40;
        v40 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v40);
      }
      while ( v41 != v40 );
      sub_818B10((_QWORD *)a1, v40);
      return;
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
      v12 = (_QWORD *)(a2 + 176);
      v13 = 8LL * *(unsigned int *)(a2 + 152);
      v14 = (_QWORD *)(a2 + 176 + v13);
      if ( !v13 )
        goto LABEL_12;
      do
      {
        v15 = (char *)(*v12 + 88LL);
        if ( *(int *)v15 >> 8 == -1 )
        {
LABEL_48:
          v16 = -1;
        }
        else
        {
          while ( *(_DWORD *)(a1 + 12) != *v15 )
          {
            v15 = *((char **)v15 + 1);
            if ( !v15 )
              goto LABEL_48;
          }
          v16 = *(int *)v15 >> 8;
        }
        do
        {
          v17 = v16;
          v16 = *(_DWORD *)(*(_QWORD *)(a1 + 344) + 4LL * v16);
        }
        while ( v17 != v16 );
        ++v12;
        sub_818EE0((_QWORD *)a1, v16, a2);
      }
      while ( v14 != v12 );
LABEL_12:
      sub_85D4B0(a1, a2, (__int64)v11, a5, a6, a7);
      return;
    case 0xA:
      if ( *(_DWORD *)(a1 + 112) != *v11 || v9[6] != 2 )
      {
        sub_1872CE0("");
        sub_1873130(114, 132);
      }
      v51 = *((_QWORD *)v9 + 4);
      v42 = *(_QWORD *)(a1 + 72);
      v43 = sub_15E1B70(*(_QWORD *)(a1 + 120));
      v66 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      v63 = *(_QWORD *)(a1 + 72);
      v44 = sub_15D1F10(v51);
      v45 = *(_QWORD *)(a1 + 120);
      v46 = *(_QWORD *)(v45 + 864);
      v68 = v44;
      v69.m128i_i8[0] = 1;
      *(_QWORD *)v67 = v46;
      v47 = sub_15DCAD0(v45, (int)v67, 0);
      sub_15D0DF0(&v68);
      if ( v47 )
        ++*(_DWORD *)(v47 + 8);
      v48 = sub_7E58D0(a1, v66, v47);
      v49 = sub_7E4F30(a1, *(unsigned int **)a2);
      sub_7E5800(a1, v48, v49);
      if ( v47 )
      {
        if ( (*(_DWORD *)(v47 + 8))-- == 1 )
          sub_15D7BC0(v63, v47);
      }
      if ( v66 )
      {
        v64 = *(_DWORD *)(v66 + 8);
        *(_DWORD *)(v66 + 8) = v64 - 1;
        if ( v64 == 1 )
          sub_15D7BC0(v42, v66);
      }
      return;
    case 0xB:
    case 0xC:
      sub_7CDC60(*(_QWORD **)(a1 + 80), *((_QWORD *)v9 + 2), a3);
      return;
    default:
      goto LABEL_49;
  }
}

