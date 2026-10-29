__int64 __fastcall sub_1BBB800(__int64 *a1, __int64 a2, unsigned __int8 a3, double a4, __m128 a5)
{
  __int64 v8; // rdx
  int v9; // eax
  __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned __int64 v13; // rsi
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  void *v17; // rax
  unsigned __int64 v18; // rax
  unsigned int v19; // r15d
  int v20; // edx
  int v21; // ecx
  __int16 v22; // si
  __int64 v23; // rcx
  _DWORD *v24; // rdi
  __int64 v25; // rdx
  unsigned __int64 v26; // rax
  const __m128i *v27; // rsi
  bool v28; // al
  __int64 v29; // r9
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rdi
  __int64 v33; // rsi
  int *v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rsi
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rsi
  __int64 v40; // rcx
  __int64 v41; // r12
  bool v42; // al
  void **v43; // r8
  __m128i v44; // [rsp+0h] [rbp-238h] BYREF
  void *v45[2]; // [rsp+10h] [rbp-228h]
  __int128 v46; // [rsp+20h] [rbp-218h]
  _QWORD v47[2]; // [rsp+30h] [rbp-208h] BYREF
  __int64 v48; // [rsp+40h] [rbp-1F8h]
  __int64 v49; // [rsp+48h] [rbp-1F0h] BYREF
  void *v50[2]; // [rsp+88h] [rbp-1B0h]
  __int64 v51; // [rsp+98h] [rbp-1A0h]
  __int64 v52; // [rsp+A0h] [rbp-198h]
  __int64 v53; // [rsp+A8h] [rbp-190h]
  int v54; // [rsp+B0h] [rbp-188h]
  __int64 v55; // [rsp+B8h] [rbp-180h] BYREF
  __int128 v56; // [rsp+C0h] [rbp-178h]
  __int64 v57; // [rsp+D0h] [rbp-168h]
  void *ptr[2]; // [rsp+E0h] [rbp-158h] BYREF
  _DWORD v59[82]; // [rsp+F0h] [rbp-148h] BYREF

  v8 = *a1;
  v9 = *(_DWORD *)(a2 + 24);
  v10 = *(_QWORD *)(a2 + 16);
  *(_OWORD *)v50 = 0;
  v52 = v8;
  v47[1] = &v49;
  v48 = 0x800000000LL;
  v53 = v10;
  v54 = v9;
  v47[0] = 0;
  v51 = 0;
  sub_B85890(&v55, v10);
  v56 = 0;
  v57 = 0x101010000LL;
  sub_1A395A0((__int64)v47);
  if ( (unsigned __int8)sub_1B19E70(a1, a2, (*(_DWORD *)a2 & 0x100000) != 0, (__int64)v47) )
  {
    v11 = 1;
    goto LABEL_3;
  }
  v13 = *(_QWORD *)(a2 + 40);
  v44 = 0;
  *(_OWORD *)v45 = 0;
  v46 = 0;
  if ( v13 )
  {
    v14 = sub_1BB75E0(a1, v13, *(void **)(a2 + 48), 0, 0);
    if ( !v14 )
      goto LABEL_50;
    sub_15AB8B0((__int64)&v44, v14, v15);
  }
  v16 = *(_QWORD *)(a2 + 56);
  if ( !v16 )
    goto LABEL_10;
  v17 = (void *)sub_1B03C10((__int64)a1, v16);
  if ( v17 )
  {
    v50[1] = v17;
LABEL_10:
    v18 = *(_QWORD *)a2;
    v19 = 0;
    if ( (*(_QWORD *)a2 & 0x80000) != 0 )
    {
      v38 = 8LL * *(unsigned int *)(a2 + 4);
      v39 = a2 + v38 + 64;
      v40 = a2 + v38 + 80;
      if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
        v39 = v40;
      v20 = 0;
      v19 = *(_DWORD *)(v39 + 8);
      if ( (v18 & 0x80000) != 0 )
      {
        v35 = 8LL * *(unsigned int *)(a2 + 4);
        v36 = a2 + v35 + 64;
        v37 = a2 + v35 + 80;
        if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
          v36 = v37;
        v21 = 0;
        v20 = *(_DWORD *)(v36 + 4);
        if ( (v18 & 0x80000) == 0 )
        {
LABEL_13:
          v59[64] = v21;
          ptr[1] = (void *)0x800000000LL;
          ptr[0] = v59;
          v59[65] = v20;
          if ( (v18 & 0x80000) == 0 )
            goto LABEL_25;
          v22 = *(_WORD *)a2 & 0x1FF;
          v23 = 8LL * *(unsigned int *)(a2 + 4);
          v24 = (_DWORD *)(a2 + v23 + 80);
          if ( v22 == 24 )
            v24 = (_DWORD *)(a2 + v23 + 64);
          if ( !*v24 )
            goto LABEL_25;
          v25 = 0;
          if ( (v18 & 0x80000) != 0 )
            v25 = (unsigned int)v24[3];
          v26 = v18 >> 16;
          if ( (v26 & 8) == 0 )
            goto LABEL_20;
          if ( v22 == 24 )
          {
            if ( *(_DWORD *)(a2 + v23 + 64) )
            {
              v27 = (const __m128i *)(a2 + v23 + 16LL * ((v26 & 8) != 0) + 64);
              goto LABEL_21;
            }
          }
          else if ( *(_DWORD *)(a2 + v23 + 80) )
          {
            v27 = (const __m128i *)(a2 + v23 + 16LL * ((v26 & 8) != 0) + 80);
LABEL_21:
            if ( (unsigned __int8)sub_1BB9400(a1, v27, &v27[2 * v25], (__int64)ptr) )
            {
              LODWORD(v47[0]) = 0;
              LODWORD(v48) = 0;
              if ( v50[0] )
                sub_1A39780((char *)v50[0]);
              BYTE6(v57) = 0;
              v11 = 1;
              *(_OWORD *)v50 = 0;
LABEL_29:
              if ( ptr[0] != v59 )
                free(ptr[0]);
              goto LABEL_31;
            }
LABEL_25:
            if ( (unsigned __int8)sub_19C4B30(*a1, (__int64)&v44, (__int64)v47, a3) )
            {
              v41 = *a1;
              v42 = sub_18C0AE0(a2);
              v43 = nullptr;
              if ( v42 )
                v43 = ptr;
              v11 = (__int64)sub_19CC8A0(v41, &v44, v19, (__int64)v47, (__int64)v43, 0, (__m128)0LL, a5);
            }
            else
            {
              v28 = sub_18C0AE0(a2);
              v30 = *a1;
              if ( v28 || v19 )
                v11 = sub_1CD7830(v30, &v44, v19, v47, (*(_DWORD *)a2 >> 20) & 1, ptr);
              else
                v11 = sub_190B490(v30, v44.m128i_i64, (__int64)v47, (*(_DWORD *)a2 >> 20) & 1, 0, v29, (__m128i)0LL, a5);
            }
            goto LABEL_29;
          }
LABEL_20:
          v27 = nullptr;
          goto LABEL_21;
        }
LABEL_33:
        v31 = 8LL * *(unsigned int *)(a2 + 4);
        v32 = a2 + v31 + 64;
        v33 = a2 + v31 + 80;
        v34 = (int *)v32;
        if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
          v34 = (int *)v33;
        v21 = *v34;
        goto LABEL_13;
      }
    }
    else
    {
      v20 = 0;
    }
    v21 = 0;
    if ( (v18 & 0x80000) == 0 )
      goto LABEL_13;
    goto LABEL_33;
  }
  LODWORD(v47[0]) = 0;
  LODWORD(v48) = 0;
  if ( v50[0] )
    sub_1A39780((char *)v50[0]);
  BYTE6(v57) = 0;
  *(_OWORD *)v50 = 0;
LABEL_50:
  v11 = 1;
LABEL_31:
  if ( HIDWORD(v45[1]) )
    free(v45[0]);
LABEL_3:
  sub_169D230((__int64)v47);
  return v11;
}
