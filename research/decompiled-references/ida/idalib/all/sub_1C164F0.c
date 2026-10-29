__int64 __fastcall sub_1C164F0(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5,
        __m128 a6,
        __m128 a7)
{
  __int64 v12; // r14
  __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 v18; // rbx
  __int64 v19; // rax
  _QWORD *v20; // rax
  unsigned int v21; // ecx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 (__fastcall *v24)(__int64, unsigned __int64, _QWORD, __int64); // r8
  unsigned __int8 v25; // al
  unsigned __int64 v26; // rsi
  __int64 v27; // rax
  unsigned __int64 v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // edx
  __int64 v32; // r13
  _QWORD *v33; // rdi
  unsigned int v34; // eax
  unsigned __int64 v35; // r13
  __int64 v36; // rsi
  unsigned __int64 v37; // rax
  _QWORD *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  __int64 v43; // rax
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rcx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rax
  _QWORD *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // rcx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rax
  __int64 v56; // rdx
  unsigned __int64 v57; // rbx
  unsigned __int64 v58; // rax
  __int64 v59; // [rsp-8h] [rbp-60h]
  __int64 v60; // [rsp+0h] [rbp-58h]
  __int64 v61; // [rsp+0h] [rbp-58h]
  __int64 (__fastcall *v62)(__int64, unsigned __int64, _QWORD, __int64); // [rsp+8h] [rbp-50h]
  void *v63; // [rsp+10h] [rbp-48h] BYREF
  unsigned int v64; // [rsp+18h] [rbp-40h]

  v12 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 24LL))(a1, a5);
  result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 32LL))(a1);
  if ( result != 1 )
  {
    v18 = result & 0xFFFFFFFFFFFFFFFELL;
    v19 = *(_QWORD *)((result & 0xFFFFFFFFFFFFFFFELL) + 8);
    v60 = v19;
    if ( a4 <= 1
      && ((*(_DWORD *)v18 & 0x10000) != 0
       || (*(_BYTE *)(v18 + 1) & 6) != 0
       || (v38 = sub_F63270(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL), a5, v14, v15, v16, v17)) == nullptr
       || sub_B9E190((__int64)v38, a5, v39, v40, v41, v42)) )
    {
      v43 = sub_1C160F0(a1, v18);
      v44 = *(unsigned int *)(a1 + 40);
      v18 = v43 & 0xFFFFFFFFFFFFFFFELL;
      *(_DWORD *)(a1 + 16) = v44 - 1;
      v45 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v44 - 8);
      if ( (*(_WORD *)v45 & 0x1FF) == 0x1A )
        *(_BYTE *)(v45 + 2) &= ~8u;
    }
    v64 = sub_A97D20(
            *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL),
            *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
    if ( v64 > 0x40 )
      sub_2205470(&v63, 1, 0);
    else
      v63 = &dword_0 + 1;
    v20 = (_QWORD *)sub_C0C5D0(
                      *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL),
                      (__int64)&v63,
                      *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL) + 18720LL),
                      *(_DWORD *)(a1 + 20));
    if ( (a4 & 0xFFFFFFFD) != 0 )
      v21 = 6;
    else
      v21 = 5;
    v22 = sub_1929BB0(*(_QWORD *)(a1 + 8), a2, a3, v21, v18, v20, a6, a7, 0);
    if ( v22 == 1 )
      goto LABEL_30;
    v23 = 0;
    v24 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 40LL);
    if ( a4 - 2 <= 1 )
    {
      v62 = *(__int64 (__fastcall **)(__int64, unsigned __int64, _QWORD, __int64))(*(_QWORD *)a1 + 40LL);
      v25 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 48LL))(a1, a2, v59, 0);
      v24 = v62;
      v23 = v25;
    }
    v26 = v22 & 0xFFFFFFFFFFFFFFFELL;
    v27 = v24(a1, v22 & 0xFFFFFFFFFFFFFFFELL, a3, v23);
    if ( v27 == 1 )
    {
LABEL_30:
      result = 1;
    }
    else
    {
      v28 = v27 & 0xFFFFFFFFFFFFFFFELL;
      v29 = *(unsigned int *)(a1 + 40);
      if ( v29 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
      {
        v26 = a1 + 48;
        sub_2237220(a1 + 32, a1 + 48, v29 + 1, 8);
        v29 = *(unsigned int *)(a1 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v29) = v28;
      ++*(_DWORD *)(a1 + 40);
      if ( a4 - 2 <= 1 && !(*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)a1 + 48LL))(a1) )
      {
        v49 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                        & 0xFFFFFFFFFFFFFFF0LL);
        if ( (*(_BYTE *)(v49 + 16) != 13 || ((*(_WORD *)(v49 + 18) >> 3) & 0x1FF) != 0x1B3)
          && ((*(_DWORD *)v28 & 0x10000) != 0
           || (*(_BYTE *)(v28 + 1) & 6) != 0
           || (v50 = sub_F63270(
                       *(_QWORD *)(*(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL),
                       v26,
                       *(_QWORD *)(v28 + 8) & 0xFFFFFFFFFFFFFFF0LL,
                       v46,
                       v47,
                       v48)) == nullptr
           || sub_B9E190((__int64)v50, v26, v51, v52, v53, v54)) )
        {
          v55 = *(unsigned int *)(a1 + 40);
          *(_DWORD *)(a1 + 16) = v55 - 1;
          v56 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v55 - 8);
          if ( (*(_WORD *)v56 & 0x1FF) == 0x1A )
            *(_BYTE *)(v56 + 2) &= ~8u;
        }
      }
      v30 = *(_QWORD *)(a1 + 8);
      v31 = *(_DWORD *)(v30 + 1952);
      v32 = *(unsigned int *)(v30 + 1956);
      if ( *(_QWORD *)(v30 + 1944) == __PAIR64__(v32, v31) )
      {
        v32 = 0;
        v31 = 0;
      }
      v33 = *(_QWORD **)(v30 + 248);
      v34 = 0;
      v35 = (v32 << 32) | v31;
      v36 = *(_QWORD *)(v60 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v36 + 17) & 4) == 0 )
      {
        v57 = sub_A97D20((__int64)v33, v36);
        v58 = sub_A97D20(
                *(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL),
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 248LL) + 18720LL) & 0xFFFFFFFFFFFFFFF0LL));
        v33 = *(_QWORD **)(*(_QWORD *)(a1 + 8) + 248LL);
        v34 = v57 >= v58;
      }
      v37 = sub_C09D40(v33, v12, a4, v60, 1, 0, a3, v34, v35);
      result = (*(__int64 (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)a1 + 16LL))(a1, v37);
    }
    if ( v64 > 0x40 )
    {
      if ( v63 )
      {
        v61 = result;
        operator delete[](v63);
        return v61;
      }
    }
  }
  return result;
}
