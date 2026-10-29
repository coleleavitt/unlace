__int64 __fastcall sub_1DA24A0(__int64 *a1, __int64 a2, unsigned __int8 a3, double a4, __m128 a5)
{
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rbx
  unsigned __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rsi
  void *v19; // rax
  unsigned __int64 v20; // rax
  unsigned int v21; // r15d
  int v22; // edx
  int v23; // ecx
  __int16 v24; // si
  __int64 v25; // rcx
  _DWORD *v26; // rdi
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  const __m128i *v29; // rsi
  __int64 v30; // r9
  unsigned __int64 v31; // rdi
  __int64 v32; // rsi
  __int64 v33; // rdi
  __int64 v34; // rsi
  int *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rsi
  __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // rdx
  _DWORD *v45; // rax
  void **v46; // r8
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // rdx
  _DWORD *v50; // rax
  __m128i v51; // [rsp+0h] [rbp-238h] BYREF
  void *v52[2]; // [rsp+10h] [rbp-228h]
  __int128 v53; // [rsp+20h] [rbp-218h]
  __int64 v54; // [rsp+30h] [rbp-208h] BYREF
  void *ptr; // [rsp+38h] [rbp-200h]
  __int64 v56; // [rsp+40h] [rbp-1F8h]
  _BYTE v57[64]; // [rsp+48h] [rbp-1F0h] BYREF
  void *v58[2]; // [rsp+88h] [rbp-1B0h]
  __int64 v59; // [rsp+98h] [rbp-1A0h]
  _QWORD *v60; // [rsp+A0h] [rbp-198h]
  __int64 v61; // [rsp+A8h] [rbp-190h]
  int v62; // [rsp+B0h] [rbp-188h]
  __int64 v63; // [rsp+B8h] [rbp-180h] BYREF
  __int128 v64; // [rsp+C0h] [rbp-178h]
  __int64 v65; // [rsp+D0h] [rbp-168h]
  void *v66[2]; // [rsp+E0h] [rbp-158h] BYREF
  _DWORD v67[82]; // [rsp+F0h] [rbp-148h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v58 = 0;
  v60 = v8;
  ptr = v57;
  v56 = 0x800000000LL;
  v61 = v10;
  v62 = v9;
  v54 = 0;
  v59 = 0;
  sub_B85890(&v63, v10);
  v64 = 0;
  v65 = 0x101010000LL;
  sub_1A395A0((__int64)&v54);
  if ( (unsigned __int8)sub_1D88D50(a1, (__int64 *)a2, (*(_DWORD *)a2 >> 20) & 1, (__int64)&v54) )
  {
    v14 = 1;
    goto LABEL_3;
  }
  v16 = *(_QWORD *)(a2 + 40);
  v51 = 0;
  *(_OWORD *)v52 = 0;
  v53 = 0;
  if ( v16 )
  {
    v17 = sub_1D9F590((__int64)a1, v16, *(void **)(a2 + 48), 0, 0);
    if ( !v17 )
    {
LABEL_67:
      v14 = 1;
      goto LABEL_44;
    }
    sub_15AB8B0((__int64)&v51, v17, v11);
  }
  v18 = *(_QWORD *)(a2 + 56);
  if ( !v18 )
    goto LABEL_22;
  v19 = (void *)sub_1D86580((__int64)a1, v18);
  if ( !v19 )
  {
    LODWORD(v54) = 0;
    LODWORD(v56) = 0;
    if ( v58[0] )
      sub_1A39780((char *)v58[0]);
    BYTE6(v65) = 0;
    *(_OWORD *)v58 = 0;
    goto LABEL_67;
  }
  v58[1] = v19;
LABEL_22:
  v20 = *(_QWORD *)a2;
  v21 = 0;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
  {
    v22 = 0;
    goto LABEL_24;
  }
  v39 = 8LL * *(unsigned int *)(a2 + 4);
  v40 = a2 + v39 + 64;
  v41 = a2 + v39 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v40 = v41;
  v22 = 0;
  v21 = *(_DWORD *)(v40 + 8);
  if ( (v20 & 0x80000) == 0 )
  {
LABEL_24:
    v23 = 0;
    if ( (v20 & 0x80000) == 0 )
      goto LABEL_25;
    goto LABEL_47;
  }
  v36 = 8LL * *(unsigned int *)(a2 + 4);
  v37 = a2 + v36 + 64;
  v38 = a2 + v36 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v37 = v38;
  v23 = 0;
  v22 = *(_DWORD *)(v37 + 4);
  if ( (v20 & 0x80000) != 0 )
  {
LABEL_47:
    v32 = 8LL * *(unsigned int *)(a2 + 4);
    v33 = a2 + v32 + 64;
    v34 = a2 + v32 + 80;
    v35 = (int *)v33;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v35 = (int *)v34;
    v23 = *v35;
  }
LABEL_25:
  v67[64] = v23;
  v67[65] = v22;
  v66[0] = v67;
  v66[1] = (void *)0x800000000LL;
  if ( (v20 & 0x80000) == 0 )
    goto LABEL_37;
  v24 = *(_WORD *)a2 & 0x1FF;
  v25 = 8LL * *(unsigned int *)(a2 + 4);
  v26 = (_DWORD *)(a2 + v25 + 80);
  if ( v24 == 24 )
    v26 = (_DWORD *)(a2 + v25 + 64);
  if ( !*v26 )
    goto LABEL_37;
  v27 = 0;
  if ( (v20 & 0x80000) != 0 )
    v27 = (unsigned int)v26[3];
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
  if ( (unsigned __int8)sub_1DA1000(a1, v29, &v29[2 * v27], (__int64)v66) )
  {
    LODWORD(v54) = 0;
    LODWORD(v56) = 0;
    if ( v58[0] )
      sub_1A39780((char *)v58[0]);
    BYTE6(v65) = 0;
    v14 = 1;
    *(_OWORD *)v58 = 0;
    goto LABEL_42;
  }
LABEL_37:
  if ( (unsigned __int8)sub_19C4B30(*a1, (__int64)&v51, (__int64)&v54, a3) )
  {
    if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
      goto LABEL_73;
    v42 = 8LL * *(unsigned int *)(a2 + 4);
    v43 = a2 + v42 + 64;
    v44 = a2 + v42 + 80;
    v45 = (_DWORD *)v43;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v45 = (_DWORD *)v44;
    if ( *v45 )
      v46 = v66;
    else
LABEL_73:
      v46 = nullptr;
    v14 = (__int64)sub_19CC8A0(*a1, &v51, v21, (__int64)&v54, (__int64)v46, 0, (__m128)0LL, a5);
    goto LABEL_42;
  }
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v31 = *a1;
    v47 = 8LL * *(unsigned int *)(a2 + 4);
    v48 = a2 + v47 + 64;
    v49 = a2 + v47 + 80;
    v50 = (_DWORD *)v48;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v50 = (_DWORD *)v49;
    if ( *v50 )
      goto LABEL_41;
  }
  else
  {
    v31 = *a1;
  }
  if ( v21 )
  {
LABEL_41:
    v14 = (__int64)sub_1CD7830(
                     v31,
                     v51.m128i_i64,
                     v21,
                     (__int64)&v54,
                     (*(_DWORD *)a2 >> 20) & 1,
                     (unsigned __int64)v66,
                     (__m128i)0LL,
                     a5);
    goto LABEL_42;
  }
  v14 = sub_190B490(v31, v51.m128i_i64, (__int64)&v54, (*(_DWORD *)a2 >> 20) & 1, 0, v30, (__m128i)0LL, a5);
LABEL_42:
  if ( v66[0] != v67 )
    free(v66[0]);
LABEL_44:
  if ( HIDWORD(v52[1]) )
  {
    free(v52[0]);
    if ( !BYTE3(v65) )
      goto LABEL_13;
    goto LABEL_4;
  }
LABEL_3:
  if ( !BYTE3(v65) )
  {
LABEL_13:
    if ( !BYTE4(v65) || (_DWORD)v54 != 5 )
      goto LABEL_7;
LABEL_15:
    sub_1A445B0((__int64)v60, (__int64)&v54, v11, v12, v13);
    goto LABEL_7;
  }
LABEL_4:
  if ( (_DWORD)v54 == 5 )
  {
    if ( !BYTE4(v65) )
      goto LABEL_7;
    goto LABEL_15;
  }
  if ( v58[1] && (*(_BYTE *)(v60[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v60, (__int64)&v54);
    goto LABEL_13;
  }
LABEL_7:
  if ( v58[0] )
    sub_1A39780((char *)v58[0]);
  if ( ptr != v57 )
    free(ptr);
  return v14;
}
