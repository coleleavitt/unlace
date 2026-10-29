__int64 __fastcall sub_1DE8A40(__int64 *a1, unsigned __int64 a2, unsigned __int8 a3, double a4, __m128 a5)
{
  _QWORD *v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // r8
  unsigned __int64 *v12; // r9
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rbx
  unsigned __int64 v19; // rsi
  __int64 v20; // rax
  __int64 v21; // rdx
  void *v22; // rax
  unsigned __int64 v23; // rax
  unsigned int v24; // r15d
  int v25; // edx
  int v26; // ecx
  __int16 v27; // si
  __int64 v28; // rcx
  _DWORD *v29; // rdi
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  const __m128i *v32; // rsi
  __int64 v33; // r9
  unsigned __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rdi
  __int64 v37; // rsi
  int *v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rsi
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rsi
  __int64 v44; // rcx
  __int64 v45; // rdx
  __int64 v46; // rcx
  __int64 v47; // rdx
  _DWORD *v48; // rax
  void **v49; // r8
  __int64 v50; // rdx
  __int64 v51; // rcx
  __int64 v52; // rdx
  _DWORD *v53; // rax
  __m128i v54; // [rsp+0h] [rbp-238h] BYREF
  void *v55[2]; // [rsp+10h] [rbp-228h]
  __int128 v56; // [rsp+20h] [rbp-218h]
  __int64 v57; // [rsp+30h] [rbp-208h] BYREF
  void *ptr; // [rsp+38h] [rbp-200h]
  __int64 v59; // [rsp+40h] [rbp-1F8h]
  _BYTE v60[64]; // [rsp+48h] [rbp-1F0h] BYREF
  void *v61[2]; // [rsp+88h] [rbp-1B0h]
  __int64 v62; // [rsp+98h] [rbp-1A0h]
  _QWORD *v63; // [rsp+A0h] [rbp-198h]
  __int64 v64; // [rsp+A8h] [rbp-190h]
  int v65; // [rsp+B0h] [rbp-188h]
  __int64 v66; // [rsp+B8h] [rbp-180h] BYREF
  __int128 v67; // [rsp+C0h] [rbp-178h]
  __int64 v68; // [rsp+D0h] [rbp-168h]
  void *v69[2]; // [rsp+E0h] [rbp-158h] BYREF
  _DWORD v70[82]; // [rsp+F0h] [rbp-148h] BYREF

  v8 = (_QWORD *)*a1;
  v9 = *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v61 = 0;
  v63 = v8;
  ptr = v60;
  v59 = 0x800000000LL;
  v64 = v10;
  v65 = v9;
  v57 = 0;
  v62 = 0;
  sub_B85890(&v66, v10);
  v67 = 0;
  v68 = 0x101010000LL;
  sub_1A395A0((__int64)&v57);
  if ( (unsigned __int8)sub_1DD8F30(a1, a2, (*(_DWORD *)a2 >> 20) & 1, (__int64)&v57, v11, v12, (__m128)0LL, a5) )
  {
    v17 = 1;
    goto LABEL_3;
  }
  v19 = *(_QWORD *)(a2 + 40);
  v54 = 0;
  *(_OWORD *)v55 = 0;
  v56 = 0;
  if ( v19 )
  {
    v20 = sub_1DD3CF0((__int64)a1, v19, *(void **)(a2 + 48), 0, 0);
    if ( !v20 )
    {
LABEL_67:
      v17 = 1;
      goto LABEL_44;
    }
    sub_15AB8B0((__int64)&v54, v20, v13);
  }
  v21 = *(_QWORD *)(a2 + 56);
  if ( !v21 )
    goto LABEL_22;
  v22 = (void *)sub_1DD8310((__int64)a1, *(_DWORD *)(a2 + 24), v21, v14, v15, v16, (__m128)0LL, a5);
  if ( !v22 )
  {
    LODWORD(v57) = 0;
    LODWORD(v59) = 0;
    if ( v61[0] )
      sub_1A39780((char *)v61[0]);
    BYTE6(v68) = 0;
    *(_OWORD *)v61 = 0;
    goto LABEL_67;
  }
  v61[1] = v22;
LABEL_22:
  v23 = *(_QWORD *)a2;
  v24 = 0;
  if ( (*(_QWORD *)a2 & 0x80000) == 0 )
  {
    v25 = 0;
    goto LABEL_24;
  }
  v42 = 8LL * *(unsigned int *)(a2 + 4);
  v43 = a2 + v42 + 64;
  v44 = a2 + v42 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v43 = v44;
  v25 = 0;
  v24 = *(_DWORD *)(v43 + 8);
  if ( (v23 & 0x80000) == 0 )
  {
LABEL_24:
    v26 = 0;
    if ( (v23 & 0x80000) == 0 )
      goto LABEL_25;
    goto LABEL_47;
  }
  v39 = 8LL * *(unsigned int *)(a2 + 4);
  v40 = a2 + v39 + 64;
  v41 = a2 + v39 + 80;
  if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
    v40 = v41;
  v26 = 0;
  v25 = *(_DWORD *)(v40 + 4);
  if ( (v23 & 0x80000) != 0 )
  {
LABEL_47:
    v35 = 8LL * *(unsigned int *)(a2 + 4);
    v36 = a2 + v35 + 64;
    v37 = a2 + v35 + 80;
    v38 = (int *)v36;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v38 = (int *)v37;
    v26 = *v38;
  }
LABEL_25:
  v70[64] = v26;
  v70[65] = v25;
  v69[0] = v70;
  v69[1] = (void *)0x800000000LL;
  if ( (v23 & 0x80000) == 0 )
    goto LABEL_37;
  v27 = *(_WORD *)a2 & 0x1FF;
  v28 = 8LL * *(unsigned int *)(a2 + 4);
  v29 = (_DWORD *)(a2 + v28 + 80);
  if ( v27 == 24 )
    v29 = (_DWORD *)(a2 + v28 + 64);
  if ( !*v29 )
    goto LABEL_37;
  v30 = 0;
  if ( (v23 & 0x80000) != 0 )
    v30 = (unsigned int)v29[3];
  v31 = v23 >> 16;
  if ( (v31 & 8) == 0 )
    goto LABEL_32;
  if ( v27 == 24 )
  {
    if ( *(_DWORD *)(a2 + v28 + 64) )
    {
      v32 = (const __m128i *)(a2 + v28 + 16LL * ((v31 & 8) != 0) + 64);
      goto LABEL_33;
    }
LABEL_32:
    v32 = nullptr;
    goto LABEL_33;
  }
  if ( !*(_DWORD *)(a2 + v28 + 80) )
    goto LABEL_32;
  v32 = (const __m128i *)(a2 + v28 + 16LL * ((v31 & 8) != 0) + 80);
LABEL_33:
  if ( (unsigned __int8)sub_1DD6C30(a1, v32, &v32[2 * v30], (__int64)v69, (__m128)0LL, a5) )
  {
    LODWORD(v57) = 0;
    LODWORD(v59) = 0;
    if ( v61[0] )
      sub_1A39780((char *)v61[0]);
    BYTE6(v68) = 0;
    v17 = 1;
    *(_OWORD *)v61 = 0;
    goto LABEL_42;
  }
LABEL_37:
  if ( (unsigned __int8)sub_19C4B30(*a1, (__int64)&v54, (__int64)&v57, a3) )
  {
    if ( (*(_QWORD *)a2 & 0x80000LL) == 0 )
      goto LABEL_73;
    v45 = 8LL * *(unsigned int *)(a2 + 4);
    v46 = a2 + v45 + 64;
    v47 = a2 + v45 + 80;
    v48 = (_DWORD *)v46;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v48 = (_DWORD *)v47;
    if ( *v48 )
      v49 = v69;
    else
LABEL_73:
      v49 = nullptr;
    v17 = (__int64)sub_19CC8A0(*a1, &v54, v24, (__int64)&v57, (__int64)v49, 0, (__m128)0LL, a5);
    goto LABEL_42;
  }
  if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
  {
    v34 = *a1;
    v50 = 8LL * *(unsigned int *)(a2 + 4);
    v51 = a2 + v50 + 64;
    v52 = a2 + v50 + 80;
    v53 = (_DWORD *)v51;
    if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
      v53 = (_DWORD *)v52;
    if ( *v53 )
      goto LABEL_41;
  }
  else
  {
    v34 = *a1;
  }
  if ( v24 )
  {
LABEL_41:
    v17 = (__int64)sub_1CD7830(
                     v34,
                     v54.m128i_i64,
                     v24,
                     (__int64)&v57,
                     (*(_DWORD *)a2 >> 20) & 1,
                     (unsigned __int64)v69,
                     (__m128i)0LL,
                     a5);
    goto LABEL_42;
  }
  v17 = sub_190B490(v34, v54.m128i_i64, (__int64)&v57, (*(_DWORD *)a2 >> 20) & 1, 0, v33, (__m128i)0LL, a5);
LABEL_42:
  if ( v69[0] != v70 )
    free(v69[0]);
LABEL_44:
  if ( HIDWORD(v55[1]) )
  {
    free(v55[0]);
    if ( !BYTE3(v68) )
      goto LABEL_13;
    goto LABEL_4;
  }
LABEL_3:
  if ( !BYTE3(v68) )
  {
LABEL_13:
    if ( !BYTE4(v68) || (_DWORD)v57 != 5 )
      goto LABEL_7;
LABEL_15:
    sub_1A445B0((__int64)v63, (__int64)&v57, v13, v14, v15);
    goto LABEL_7;
  }
LABEL_4:
  if ( (_DWORD)v57 == 5 )
  {
    if ( !BYTE4(v68) )
      goto LABEL_7;
    goto LABEL_15;
  }
  if ( v61[1] && (*(_BYTE *)(v63[29] + 46LL) & 0x20) != 0 )
  {
    sub_1663B80(v63, (__int64)&v57);
    goto LABEL_13;
  }
LABEL_7:
  if ( v61[0] )
    sub_1A39780((char *)v61[0]);
  if ( ptr != v60 )
    free(ptr);
  return v17;
}
