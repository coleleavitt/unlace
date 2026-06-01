__int64 __fastcall sub_18604E0(__int64 a1, __int64 a2, int a3, __int64 *a4, __int64 a5)
{
  void *v9; // rdi
  int v10; // ecx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdi
  _BOOL8 v15; // rax
  unsigned int *v16; // rdi
  size_t v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rcx
  void *v20; // rbp
  unsigned __int64 v21; // rax
  unsigned __int64 *v22; // r12
  unsigned __int64 *v23; // rbp
  unsigned __int64 v24; // rdi
  unsigned __int64 *v26; // r12
  unsigned __int64 *v27; // rbp
  unsigned __int64 v28; // rdi
  __int64 v29; // rax
  __int64 v30; // r12
  __int64 *v31; // rsi
  __int64 v32; // r14
  __int64 v33; // rbp
  __int64 v34; // rax
  unsigned __int8 *v35; // rdx
  unsigned __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // rbp
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  unsigned __int8 *v43; // rax
  _QWORD *v44; // rax
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // r14
  unsigned __int8 *v50; // rax
  _QWORD *v51; // rax
  __int64 v53; // [rsp+8h] [rbp-1C0h]
  unsigned __int64 v54; // [rsp+10h] [rbp-1B8h]
  __int64 v55; // [rsp+28h] [rbp-1A0h]
  __int64 v56; // [rsp+34h] [rbp-194h] BYREF
  char v57; // [rsp+3Ch] [rbp-18Ch]
  unsigned __int8 *v58; // [rsp+40h] [rbp-188h] BYREF
  unsigned __int64 v59; // [rsp+48h] [rbp-180h]
  unsigned __int8 *v60; // [rsp+60h] [rbp-168h] BYREF
  unsigned __int64 v61; // [rsp+68h] [rbp-160h]
  _QWORD v62[2]; // [rsp+80h] [rbp-148h] BYREF
  __int128 v63; // [rsp+90h] [rbp-138h]
  _QWORD v64[2]; // [rsp+A0h] [rbp-128h] BYREF
  void *ptr; // [rsp+B0h] [rbp-118h]
  int v66; // [rsp+B8h] [rbp-110h]
  _BYTE v67[20]; // [rsp+C0h] [rbp-108h] BYREF
  unsigned int v68; // [rsp+D4h] [rbp-F4h]
  char v69; // [rsp+DCh] [rbp-ECh]
  char v70; // [rsp+DDh] [rbp-EBh]
  void *v71; // [rsp+E0h] [rbp-E8h]
  unsigned __int64 *v72; // [rsp+E8h] [rbp-E0h]
  void *s2; // [rsp+100h] [rbp-C8h] BYREF
  unsigned __int64 v74; // [rsp+108h] [rbp-C0h]
  __int64 v75; // [rsp+110h] [rbp-B8h] BYREF

  v9 = *(void **)(a2 + 88);
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 16) = 0;
  if ( v9 )
    sub_1A39780(v9);
  v63 = 0;
  v10 = *(_DWORD *)(a2 + 152);
  v62[1] = 0x101010101LL;
  v62[0] = off_2BC6AB8;
  *(_BYTE *)(a2 + 166) = 0;
  *(_OWORD *)(a2 + 88) = 0;
  sub_1A6BD60((unsigned int)v64, a1, a2 + 120, v10, a3, (_DWORD)a4, (__int64)v62, 1, 0, 0, 0, 1);
  if ( v64[0] )
  {
    if ( !v66 || (v14 = *(_QWORD *)ptr) == 0 || (*(_BYTE *)(v14 + 28) & 0x7F) != 0x18 || !v70 )
    {
      v54 = sub_16A2930(a1, (__int64)a4, 0, v11, v12, v13);
      if ( v54 )
      {
        sub_1A39F10(&s2, v64, *(_QWORD *)(a1 + 232));
        v15 = 0;
        if ( v69 )
        {
          v16 = *(unsigned int **)(a5 + 16);
          v17 = *v16;
          if ( v74 == v17 )
          {
            v15 = 1;
            if ( *v16 )
              v15 = memcmp(v16 + 4, s2, v17) == 0;
          }
        }
        v55 = v15;
        sub_168B9B0((__int64)&v60, a1 + 8, 6103);
        sub_168B9B0((__int64)&v58, a1 + 8, 5409);
        sub_AE9DF0(&v58, a5, 5u);
        sub_AE9DF0(&v58, v54, 0xCu);
        sub_AE9DF0(&v58, v55, 2u);
        v18 = *a4;
        v57 = 1;
        v56 = v18;
        sub_AEC610((__int64 *)&v58, &v56);
        sub_1A5FC70(a1, v64, &v58, &v60, 1);
        if ( v58 && v59 )
          sub_1580C40(v59, (unsigned __int64)v58);
        if ( v60 && v61 )
          sub_1580C40(v61, (unsigned __int64)v60);
        if ( s2 != &v75 )
          operator delete(s2);
      }
      else
      {
        sub_168B9B0((__int64)&s2, a1 + 8, 6103);
        sub_168B9B0((__int64)&v60, a1 + 8, 5410);
        sub_AE9DF0(&v60, a5, 5u);
        sub_1A5FC70(a1, v64, &v60, &s2, 1);
        if ( v60 && v61 )
          sub_1580C40(v61, (unsigned __int64)v60);
        if ( s2 && v74 )
          sub_1580C40(v74, (unsigned __int64)s2);
      }
LABEL_19:
      if ( !v66 || !*(_QWORD *)ptr )
        BUG();
      v19 = *(unsigned int *)(a2 + 16);
      v20 = (void *)((*(_BYTE *)(*(_QWORD *)ptr + 29LL) >> 5) & 3 | *(_QWORD *)ptr);
      v21 = *(unsigned int *)(a2 + 20);
      s2 = v20;
      if ( v19 + 1 > v21 )
      {
        sub_2237220(a2 + 8, a2 + 24, v19 + 1, 8);
        v19 = *(unsigned int *)(a2 + 16);
      }
      *(_QWORD *)(*(_QWORD *)(a2 + 8) + 8 * v19) = v20;
      v22 = v72;
      v23 = (unsigned __int64 *)v71;
      ++*(_DWORD *)(a2 + 16);
      *(_DWORD *)a2 = 2;
      if ( v22 != v23 )
      {
        do
        {
          if ( *v23 )
          {
            v24 = v23[1];
            if ( v24 )
              sub_1580C40(v24, *v23);
          }
          v23 += 3;
        }
        while ( v22 != v23 );
        v23 = (unsigned __int64 *)v71;
      }
      if ( v23 )
        operator delete(v23);
      if ( ptr != v67 )
        free(ptr);
      return 1;
    }
    v29 = *(_QWORD *)(v14 + 8) & 7LL;
    if ( *(char *)(v14 + 29) < 0 )
    {
      if ( v29 )
      {
        v30 = sub_B8C660(v14);
LABEL_56:
        v31 = (__int64 *)(a1 + 8);
        if ( *(_DWORD *)(v30 + 36) == 6 )
        {
          v37 = 0;
          sub_168B9F0((__int64)&s2, v31, v68, 0x1078u, 0);
          LODWORD(v58) = 0;
          v38 = sub_1587D10((__int64)&s2, (int *)&v58);
          if ( v66 )
            v37 = *(_QWORD *)ptr;
          if ( *(_BYTE *)(v38 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v38 + 32), v37, 0xAu);
          }
          else if ( *(_BYTE *)(v38 + 132) )
          {
            v49 = sub_168B9E0((_QWORD *)v38);
            v50 = *(unsigned __int8 **)(v38 + 16);
            if ( v50 )
              v50 = (unsigned __int8 *)(*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)v50 + 32LL))(*(_QWORD *)(v38 + 16));
            v60 = v50;
            v51 = sub_1587BC0(v49, (__int64 *)&v60, v45, v46, v47, v48);
            sub_AE9DF0((unsigned __int8 **)(*v51 + 32LL * *(unsigned int *)(v38 + 128) + 8), v37, 0xAu);
          }
          LOBYTE(v60) = 0;
          sub_1588420(v38, (unsigned __int8 *)&v60);
          sub_15F7200(&s2);
        }
        else
        {
          sub_168B9F0((__int64)&s2, v31, v68, 0x1077u, 0);
          v32 = 0;
          LODWORD(v58) = 0;
          v33 = sub_1587D10((__int64)&s2, (int *)&v58);
          if ( v66 )
            v32 = *(_QWORD *)ptr;
          if ( *(_BYTE *)(v33 + 120) )
          {
            sub_AE9DF0((unsigned __int8 **)(v33 + 32), v32, 0xAu);
          }
          else if ( *(_BYTE *)(v33 + 132) )
          {
            v40 = sub_168B9E0((_QWORD *)v33);
            v43 = *(unsigned __int8 **)(v33 + 16);
            if ( v43 )
            {
              v53 = v40;
              v43 = (unsigned __int8 *)(*(__int64 (__fastcall **)(unsigned __int8 *))(*(_QWORD *)v43 + 32LL))(v43);
              v40 = v53;
            }
            v60 = v43;
            v44 = sub_1587BC0(v40, (__int64 *)&v60, v39, v40, v41, v42);
            sub_AE9DF0((unsigned __int8 **)(*v44 + 32LL * *(unsigned int *)(v33 + 128) + 8), v32, 0xAu);
          }
          v34 = sub_FEEE40(v30);
          v35 = *(unsigned __int8 **)v34;
          v36 = *(_QWORD *)(v34 + 8);
          v60 = v35;
          v61 = v36;
          sub_166BAF0(v33, (__int64)&v60);
          sub_15F7200(&s2);
        }
        goto LABEL_19;
      }
    }
    else if ( v29 )
    {
      v30 = *(_QWORD *)(v14 - 8);
      goto LABEL_56;
    }
    BUG();
  }
  v26 = v72;
  v27 = (unsigned __int64 *)v71;
  if ( v72 != v71 )
  {
    do
    {
      if ( *v27 )
      {
        v28 = v27[1];
        if ( v28 )
          sub_1580C40(v28, *v27);
      }
      v27 += 3;
    }
    while ( v26 != v27 );
    v27 = (unsigned __int64 *)v71;
  }
  if ( v27 )
    operator delete(v27);
  if ( ptr != v67 )
    free(ptr);
  return 0;
}
