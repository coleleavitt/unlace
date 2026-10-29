__int64 __fastcall sub_1990F40(__int64 *a1, __int64 a2, unsigned __int8 a3, double a4, __m128 a5)
{
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rbx
  unsigned __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rsi
  void *v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // r15d
  int v22; // edx
  int v23; // ecx
  __int16 v24; // si
  __int64 v25; // rcx
  unsigned int *v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  const __m128i *v29; // rsi
  bool v30; // al
  __int64 v31; // r9
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rdi
  __int64 v35; // rsi
  int *v36; // rcx
  __int64 v37; // rcx
  __int64 v38; // rsi
  __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rsi
  __int64 v42; // rcx
  _QWORD *v43; // r12
  bool v44; // al
  void **v45; // r8
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

  v8 = (_QWORD *)*a1;
  v9 = *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v53 = 0;
  v55 = v8;
  ptr = v52;
  v51 = 0x800000000LL;
  v56 = v10;
  v57 = v9;
  v49 = 0;
  v54 = 0;
  sub_B85890(&v58, v10);
  v59 = 0;
  v60 = 0x101010000LL;
  sub_1A395A0(&v49);
  if ( (unsigned __int8)sub_18D9390(a1, a2, (*(_DWORD *)a2 & 0x100000) != 0, (__int64)&v49) )
  {
    v13 = 1;
    goto LABEL_3;
  }
  v15 = *(_QWORD *)(a2 + 40);
  v46 = 0;
  *(_OWORD *)v47 = 0;
  v48 = 0;
  if ( v15 )
  {
    v16 = sub_198CB00((__int64)a1, v15, *(void **)(a2 + 48), 0, 0);
    if ( !v16 )
    {
LABEL_63:
      v13 = 1;
      goto LABEL_43;
    }
    sub_15AB8B0((__int64)&v46, v16, v17);
  }
  v18 = *(_QWORD *)(a2 + 56);
  if ( !v18 )
    goto LABEL_22;
  v19 = (void *)sub_18CBE40((__int64)a1, v18);
  if ( !v19 )
  {
    LODWORD(v49) = 0;
    LODWORD(v51) = 0;
    if ( v53[0] )
      sub_1A39780(v53[0]);
    BYTE6(v60) = 0;
    *(_OWORD *)v53 = 0;
    goto LABEL_63;
  }
  v53[1] = v19;
LABEL_22:
  v20 = *(_QWORD *)a2;
  v21 = 0;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
  {
    v22 = 0;
    goto LABEL_24;
  }
  v40 = 8LL * *(unsigned int *)(a2 + 4);
  v41 = a2 + v40 + 64;
  v42 = a2 + v40 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v41 = v42;
  v22 = 0;
  v21 = *(_DWORD *)(v41 + 8);
  if ( (v20 & 0x80000) == 0 )
  {
LABEL_24:
    v23 = 0;
    if ( (v20 & 0x80000) == 0 )
      goto LABEL_25;
    goto LABEL_46;
  }
  v37 = 8LL * *(unsigned int *)(a2 + 4);
  v38 = a2 + v37 + 64;
  v39 = a2 + v37 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v38 = v39;
  v23 = 0;
  v22 = *(_DWORD *)(v38 + 4);
  if ( (v20 & 0x80000) != 0 )
  {
LABEL_46:
    v33 = 8LL * *(unsigned int *)(a2 + 4);
    v34 = a2 + v33 + 64;
    v35 = a2 + v33 + 80;
    v36 = (int *)v34;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v36 = (int *)v35;
    v23 = *v36;
  }
LABEL_25:
  v62[64] = v23;
  v62[65] = v22;
  v61[0] = v62;
  v61[1] = (void *)0x800000000LL;
  if ( (v20 & 0x80000) == 0 )
    goto LABEL_37;
  v24 = *(_WORD *)a2 & 0x1FF;
  v25 = 8LL * *(unsigned int *)(a2 + 4);
  v26 = (unsigned int *)(a2 + v25 + 80);
  if ( v24 == 24 )
    v26 = (unsigned int *)(a2 + v25 + 64);
  v11 = *v26;
  if ( !(_DWORD)v11 )
    goto LABEL_37;
  v27 = 0;
  if ( (v20 & 0x80000) != 0 )
    v27 = v26[3];
  v28 = v20 >> 16;
  if ( (v28 & 8) == 0 )
    goto LABEL_32;
  if ( v24 == 24 )
  {
    if ( *(_DWORD *)(a2 + v25 + 64) )
    {
      v29 = (const __m128i *)(a2 + v25 + 16LL * ((v28 & 8) != 0) + 64);
      goto LABEL_33;
    }
LABEL_32:
    v29 = nullptr;
    goto LABEL_33;
  }
  if ( !*(_DWORD *)(a2 + v25 + 80) )
    goto LABEL_32;
  v29 = (const __m128i *)(a2 + v25 + 16LL * ((v28 & 8) != 0) + 80);
LABEL_33:
  if ( !(unsigned __int8)sub_198ECE0(a1, v29, &v29[2 * v27], (__int64)v61) )
  {
LABEL_37:
    if ( (unsigned __int8)sub_19C4B30(*a1, &v46, &v49, a3, v11, v12) )
    {
      v43 = (_QWORD *)*a1;
      v44 = sub_18C0AE0(a2);
      v45 = nullptr;
      if ( v44 )
        v45 = v61;
      v13 = sub_19CC8A0(v43, &v46, v21, &v49, v45, 0);
    }
    else
    {
      v30 = sub_18C0AE0(a2);
      v32 = *a1;
      if ( v21 || v30 )
        v13 = sub_1CD7830(v32, &v46, v21, &v49, (*(_DWORD *)a2 >> 20) & 1, v61);
      else
        v13 = sub_190B490(v32, (__int64 *)&v46, (__int64)&v49, (*(_DWORD *)a2 >> 20) & 1, 0, v31, (__m128i)0LL, a5);
    }
    goto LABEL_41;
  }
  LODWORD(v49) = 0;
  LODWORD(v51) = 0;
  if ( v53[0] )
    sub_1A39780(v53[0]);
  BYTE6(v60) = 0;
  v13 = 1;
  *(_OWORD *)v53 = 0;
LABEL_41:
  if ( v61[0] != v62 )
    free(v61[0]);
LABEL_43:
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
  return v13;
}
