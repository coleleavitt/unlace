__int64 __fastcall sub_196EC50(__int64 *a1, __int64 a2, __m128 a3, __m128 a4)
{
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  __int64 v10; // r15
  int v11; // ebp
  unsigned int v12; // eax
  __int64 v13; // rdx
  int v14; // r14d
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rax
  __m128i v20; // xmm1
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  unsigned __int64 v28; // rax
  __int16 v29; // si
  __int64 v30; // rcx
  int *v31; // rdi
  int v32; // r8d
  int v33; // r8d
  __int64 v34; // rdx
  unsigned __int64 v35; // rax
  const __m128i *v36; // rsi
  bool v37; // al
  int v38; // r8d
  bool v39; // zf
  int v40; // r13d
  void **v41; // rax
  __int64 v42; // [rsp+8h] [rbp-260h]
  __int64 v43; // [rsp+10h] [rbp-258h]
  bool v44; // [rsp+27h] [rbp-241h]
  __int64 v45; // [rsp+28h] [rbp-240h]
  __int128 v46; // [rsp+30h] [rbp-238h] BYREF
  void *v47[2]; // [rsp+40h] [rbp-228h]
  __int128 v48; // [rsp+50h] [rbp-218h]
  _QWORD v49[3]; // [rsp+60h] [rbp-208h] BYREF
  __int64 v50; // [rsp+78h] [rbp-1F0h] BYREF
  __int128 v51; // [rsp+B8h] [rbp-1B0h]
  __int64 v52; // [rsp+C8h] [rbp-1A0h]
  __int64 v53; // [rsp+D0h] [rbp-198h]
  __m128i v54; // [rsp+D8h] [rbp-190h]
  __int64 v55; // [rsp+E8h] [rbp-180h]
  __int64 v56; // [rsp+F0h] [rbp-178h]
  __int64 v57; // [rsp+F8h] [rbp-170h]
  __int64 v58; // [rsp+100h] [rbp-168h]
  void *ptr[2]; // [rsp+110h] [rbp-158h] BYREF
  _BYTE v60[256]; // [rsp+120h] [rbp-148h] BYREF
  __int64 v61; // [rsp+220h] [rbp-48h]

  if ( (unsigned __int8)sub_C95850(a2) )
  {
    v11 = 0;
    v12 = (unsigned int)sub_1942710(a1, *(_QWORD *)(a2 + 64), a3, a4);
    v10 = *(_QWORD *)(a2 + 40);
    LODWORD(v42) = v12;
    if ( !v10 )
      goto LABEL_7;
  }
  else
  {
    v6 = sub_1933BC0(a1, *(_QWORD *)(a2 + 56), *(double *)a3.m128_u64, a4);
    if ( v6 == 1 )
      return 1;
    v9 = sub_19C4DF0(*a1, v6 & 0xFFFFFFFFFFFFFFFELL, (*(_DWORD *)a2 >> 20) & 1);
    if ( v9 == 1 )
      return 1;
    v10 = *(_QWORD *)(a2 + 40);
    v11 = v9 & 0xFFFFFFFE;
    v42 = *(_QWORD *)((v9 & 0xFFFFFFFFFFFFFFFELL) + 8);
    if ( !v10 )
    {
LABEL_7:
      v43 = 0;
      goto LABEL_10;
    }
  }
  v10 = sub_1969B50((__int64)a1, v10, *(void **)(a2 + 48), 0, 0);
  v43 = v13;
  if ( v10 )
  {
LABEL_10:
    v14 = 0;
    if ( (*(_QWORD *)a2 & 0x80000LL) != 0 )
    {
      v15 = 8LL * *(unsigned int *)(a2 + 4);
      v16 = a2 + v15 + 64;
      v17 = a2 + v15 + 80;
      v18 = v16;
      if ( (*(_WORD *)a2 & 0x1FF) != 0x18 )
        v18 = v17;
      v14 = *(_DWORD *)(v18 + 8);
    }
    v19 = *a1;
    v20 = _mm_loadu_si128((const __m128i *)(a2 + 16));
    v49[2] = 0x800000000LL;
    v53 = v19;
    v21 = *(_QWORD *)(a2 + 32);
    v49[1] = &v50;
    v55 = v21;
    v49[0] = 0;
    v51 = 0;
    v52 = 0;
    v54 = v20;
    v56 = 0;
    v57 = 0;
    v58 = 0x101010000LL;
    sub_1A395A0(v49);
    if ( (unsigned __int8)sub_18D8DA0(a1, a2, 0, (__int64)v49) )
      goto LABEL_15;
    if ( sub_C95870(a2, a2, v22, v23) )
    {
      v26 = sub_C95870(a2, a2, v24, v25);
      v27 = sub_18CBB50((__int64)a1, v26);
      if ( !v27 )
      {
LABEL_15:
        v7 = 1;
LABEL_16:
        sub_169D230((__int64)v49);
        return v7;
      }
      *((_QWORD *)&v51 + 1) = v27;
    }
    v61 = 0;
    ptr[0] = v60;
    ptr[1] = (void *)0x800000000LL;
    v28 = *(_QWORD *)a2;
    if ( (*(_QWORD *)a2 & 0x80000) == 0 )
      goto LABEL_39;
    v29 = *(_WORD *)a2 & 0x1FF;
    v30 = 8LL * *(unsigned int *)(a2 + 4);
    v31 = (int *)(a2 + v30 + 80);
    if ( v29 == 24 )
      v31 = (int *)(a2 + v30 + 64);
    v32 = *v31;
    if ( !*v31 )
      goto LABEL_39;
    if ( ((v28 >> 16) & 8) == 0 )
      v32 = 0;
    LODWORD(v61) = v32;
    v33 = 0;
    if ( ((v28 >> 16) & 8) != 0 )
      v33 = v31[1];
    HIDWORD(v61) = v33;
    v34 = 0;
    if ( (v28 & 0x80000) != 0 )
      v34 = (unsigned int)v31[3];
    v35 = v28 >> 16;
    if ( (v35 & 8) == 0 )
      goto LABEL_31;
    if ( v29 == 24 )
    {
      if ( *(_DWORD *)(a2 + v30 + 64) )
      {
        v36 = (const __m128i *)(a2 + v30 + 16LL * ((v35 & 8) != 0) + 64);
        goto LABEL_32;
      }
    }
    else if ( *(_DWORD *)(a2 + v30 + 80) )
    {
      v36 = (const __m128i *)(a2 + v30 + 16LL * ((v35 & 8) != 0) + 80);
LABEL_32:
      if ( (unsigned __int8)sub_196BD30(a1, v36, &v36[2 * v34], (__int64)ptr) )
      {
        v7 = 1;
LABEL_34:
        if ( ptr[0] != v60 )
          free(ptr[0]);
        goto LABEL_16;
      }
LABEL_39:
      v37 = sub_18C0AE0(a2);
      v38 = *(_DWORD *)a2;
      v39 = !v37;
      v40 = *(_DWORD *)(a2 + 72);
      v41 = nullptr;
      if ( !v39 )
        v41 = ptr;
      v46 = 0;
      v45 = (__int64)v41;
      v44 = (v38 & 0x100000) != 0;
      *(_OWORD *)v47 = 0;
      v48 = 0;
      sub_15AB8B0((__int64)&v46, v10, v43);
      v7 = sub_19CB370(*a1, v11, v42, v40, v44, (unsigned int)&v46, v14, 0, (__int64)v49, v45, 0, 0, 0);
      if ( HIDWORD(v47[1]) )
        free(v47[0]);
      goto LABEL_34;
    }
LABEL_31:
    v36 = nullptr;
    goto LABEL_32;
  }
  return 1;
}
