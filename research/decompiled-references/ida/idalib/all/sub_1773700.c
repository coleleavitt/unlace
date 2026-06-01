__int64 __fastcall sub_1773700(__int64 *a1, __int64 *a2, unsigned __int8 a3)
{
  _QWORD *v6; // rdx
  int v7; // eax
  __int64 v8; // rsi
  __int64 v9; // rbx
  unsigned __int64 v11; // rsi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rsi
  void *v15; // rax
  unsigned __int64 v16; // rax
  unsigned int v17; // r15d
  int v18; // edx
  int v19; // ecx
  __int16 v20; // si
  __int64 v21; // rcx
  __int64 *v22; // rdi
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  const __m128i *v25; // rsi
  __int64 v26; // rdi
  __int64 v27; // rsi
  __int64 v28; // rdi
  __int64 v29; // rsi
  int *v30; // rcx
  __int64 v31; // rcx
  __int64 v32; // rsi
  __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rsi
  __int64 v36; // rcx
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // rdx
  _DWORD *v40; // rax
  void **v41; // r8
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  _DWORD *v45; // rax
  __int128 v46; // [rsp+0h] [rbp-238h] BYREF
  void *v47[2]; // [rsp+10h] [rbp-228h]
  __int128 v48; // [rsp+20h] [rbp-218h]
  __int64 v49; // [rsp+30h] [rbp-208h] BYREF
  void *ptr; // [rsp+38h] [rbp-200h]
  __int64 v51; // [rsp+40h] [rbp-1F8h]
  _BYTE v52[64]; // [rsp+48h] [rbp-1F0h] BYREF
  void *v53[2]; // [rsp+88h] [rbp-1B0h]
  __int64 v54; // [rsp+98h] [rbp-1A0h]
  _QWORD *v55; // [rsp+A0h] [rbp-198h]
  __int64 v56; // [rsp+A8h] [rbp-190h]
  int v57; // [rsp+B0h] [rbp-188h]
  __int64 v58; // [rsp+B8h] [rbp-180h] BYREF
  __int128 v59; // [rsp+C0h] [rbp-178h]
  __int64 v60; // [rsp+D0h] [rbp-168h]
  void *v61[2]; // [rsp+E0h] [rbp-158h] BYREF
  _DWORD v62[82]; // [rsp+F0h] [rbp-148h] BYREF

  v6 = (_QWORD *)*a1;
  v7 = *((_DWORD *)a2 + 6);
  v8 = a2[2];
  *(_OWORD *)v53 = 0;
  v55 = v6;
  ptr = v52;
  v51 = 0x800000000LL;
  v56 = v8;
  v57 = v7;
  v49 = 0;
  v54 = 0;
  sub_B85890(&v58, v8);
  v59 = 0;
  v60 = 0x101010000LL;
  sub_1A395A0(&v49);
  if ( (unsigned __int8)sub_174BAF0(a1, (__int16 *)a2, (*(_DWORD *)a2 >> 20) & 1, (__int64)&v49) )
  {
    v9 = 1;
    goto LABEL_3;
  }
  v11 = a2[5];
  v46 = 0;
  *(_OWORD *)v47 = 0;
  v48 = 0;
  if ( v11 )
  {
    v12 = sub_176EE90(a1, v11, (void *)a2[6], 0, 0);
    if ( !v12 )
    {
LABEL_67:
      v9 = 1;
      goto LABEL_44;
    }
    sub_15AB8B0((__int64)&v46, v12, v13);
  }
  v14 = a2[7];
  if ( !v14 )
    goto LABEL_22;
  v15 = (void *)sub_17473B0((__int64)a1, v14);
  if ( !v15 )
  {
    LODWORD(v49) = 0;
    LODWORD(v51) = 0;
    if ( v53[0] )
      sub_1A39780(v53[0]);
    BYTE6(v60) = 0;
    *(_OWORD *)v53 = 0;
    goto LABEL_67;
  }
  v53[1] = v15;
LABEL_22:
  v16 = *a2;
  v17 = 0;
  if ( (*a2 & 0x80000) == 0 )
  {
    v18 = 0;
    goto LABEL_24;
  }
  v34 = *((unsigned int *)a2 + 1);
  v35 = (__int64)&a2[v34 + 8];
  v36 = (__int64)&a2[v34 + 10];
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v35 = v36;
  v18 = 0;
  v17 = *(_DWORD *)(v35 + 8);
  if ( (v16 & 0x80000) == 0 )
  {
LABEL_24:
    v19 = 0;
    if ( (v16 & 0x80000) == 0 )
      goto LABEL_25;
    goto LABEL_47;
  }
  v31 = *((unsigned int *)a2 + 1);
  v32 = (__int64)&a2[v31 + 8];
  v33 = (__int64)&a2[v31 + 10];
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v32 = v33;
  v19 = 0;
  v18 = *(_DWORD *)(v32 + 4);
  if ( (v16 & 0x80000) != 0 )
  {
LABEL_47:
    v27 = *((unsigned int *)a2 + 1);
    v28 = (__int64)&a2[v27 + 8];
    v29 = (__int64)&a2[v27 + 10];
    v30 = (int *)v28;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v30 = (int *)v29;
    v19 = *v30;
  }
LABEL_25:
  v62[64] = v19;
  v62[65] = v18;
  v61[0] = v62;
  v61[1] = (void *)0x800000000LL;
  if ( (v16 & 0x80000) == 0 )
    goto LABEL_37;
  v20 = *(_WORD *)a2 & 0x1FF;
  v21 = *((unsigned int *)a2 + 1);
  v22 = &a2[v21 + 10];
  if ( v20 == 24 )
    v22 = &a2[v21 + 8];
  if ( !*(_DWORD *)v22 )
    goto LABEL_37;
  v23 = 0;
  if ( (v16 & 0x80000) != 0 )
    v23 = *((unsigned int *)v22 + 3);
  v24 = v16 >> 16;
  if ( (v24 & 8) == 0 )
    goto LABEL_32;
  if ( v20 == 24 )
  {
    if ( LODWORD(a2[v21 + 8]) )
    {
      v25 = (const __m128i *)&a2[2 * ((v24 & 8) != 0) + 8 + v21];
      goto LABEL_33;
    }
LABEL_32:
    v25 = nullptr;
    goto LABEL_33;
  }
  if ( !LODWORD(a2[v21 + 10]) )
    goto LABEL_32;
  v25 = (const __m128i *)&a2[2 * ((v24 & 8) != 0) + 10 + v21];
LABEL_33:
  if ( (unsigned __int8)sub_1771010(a1, v25, &v25[2 * v23], (__int64)v61) )
  {
    LODWORD(v49) = 0;
    LODWORD(v51) = 0;
    if ( v53[0] )
      sub_1A39780(v53[0]);
    BYTE6(v60) = 0;
    v9 = 1;
    *(_OWORD *)v53 = 0;
    goto LABEL_42;
  }
LABEL_37:
  if ( (unsigned __int8)((__int64 (__fastcall *)(__int64, __int128 *, __int64 *, _QWORD))sub_19C4B30)(
                          *a1,
                          &v46,
                          &v49,
                          a3) )
  {
    if ( (*a2 & 0x80000) == 0 )
      goto LABEL_73;
    v37 = *((unsigned int *)a2 + 1);
    v38 = (__int64)&a2[v37 + 8];
    v39 = (__int64)&a2[v37 + 10];
    v40 = (_DWORD *)v38;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v40 = (_DWORD *)v39;
    if ( *v40 )
      v41 = v61;
    else
LABEL_73:
      v41 = nullptr;
    v9 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, void **, _QWORD))sub_19CC8A0)(
           *a1,
           &v46,
           v17,
           &v49,
           v41,
           0);
    goto LABEL_42;
  }
  if ( (*a2 & 0x80000) != 0 )
  {
    v26 = *a1;
    v42 = *((unsigned int *)a2 + 1);
    v43 = (__int64)&a2[v42 + 8];
    v44 = (__int64)&a2[v42 + 10];
    v45 = (_DWORD *)v43;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v45 = (_DWORD *)v44;
    if ( *v45 )
      goto LABEL_41;
  }
  else
  {
    v26 = *a1;
  }
  if ( v17 )
  {
LABEL_41:
    v9 = ((__int64 (__fastcall *)(__int64, __int128 *, _QWORD, __int64 *, _QWORD, void **))sub_1CD7830)(
           v26,
           &v46,
           v17,
           &v49,
           (*(_DWORD *)a2 >> 20) & 1,
           v61);
    goto LABEL_42;
  }
  v9 = ((__int64 (__fastcall *)(__int64, __int128 *, __int64 *, _QWORD, _QWORD))sub_190B490)(
         v26,
         &v46,
         &v49,
         (*(_DWORD *)a2 >> 20) & 1,
         0);
LABEL_42:
  if ( v61[0] != v62 )
    free(v61[0]);
LABEL_44:
  if ( HIDWORD(v47[1]) )
  {
    free(v47[0]);
    if ( !BYTE3(v60) )
      goto LABEL_13;
    goto LABEL_4;
  }
LABEL_3:
  if ( !BYTE3(v60) )
  {
LABEL_13:
    if ( !BYTE4(v60) || (_DWORD)v49 != 5 )
      goto LABEL_7;
LABEL_15:
    sub_1A445B0(v55, &v49);
    goto LABEL_7;
  }
LABEL_4:
  if ( (_DWORD)v49 == 5 )
  {
    if ( !BYTE4(v60) )
      goto LABEL_7;
    goto LABEL_15;
  }
  if ( v53[1] && (*(_BYTE *)(v55[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v55, (__int64)&v49);
    goto LABEL_13;
  }
LABEL_7:
  if ( v53[0] )
    sub_1A39780(v53[0]);
  if ( ptr != v52 )
    free(ptr);
  return v9;
}
