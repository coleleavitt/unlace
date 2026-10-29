__int64 __fastcall sub_1D7B6F0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        _QWORD *a6,
        __m128 a7,
        __m128 a8,
        __int64 a9)
{
  bool v9; // sf
  __int64 v10; // r14
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rdi
  int v16; // ebp
  unsigned int v17; // r12d
  __int64 v18; // rdi
  __int64 v19; // rdx
  int v20; // r13d
  char v21; // dl
  __int64 v22; // rax
  __int64 v23; // r15
  int v24; // esi
  unsigned __int64 v25; // rsi
  int v26; // r10d
  char v27; // dl
  char v28; // al
  unsigned int v29; // r10d
  __int64 v30; // rdx
  unsigned __int64 v31; // rax
  unsigned int v32; // edx
  unsigned int v33; // eax
  unsigned int v34; // r14d
  __int64 *v35; // rax
  __int64 v36; // rax
  int v37; // esi
  __int64 v38; // rax
  int v40; // eax
  int v41; // [rsp+Ch] [rbp-21Ch]
  __int64 *v42; // [rsp+10h] [rbp-218h] BYREF
  __int64 v43; // [rsp+18h] [rbp-210h]
  char v44; // [rsp+22h] [rbp-206h]
  char v45; // [rsp+23h] [rbp-205h]
  int v46; // [rsp+24h] [rbp-204h]
  _QWORD *v47; // [rsp+28h] [rbp-200h]
  __int64 v48; // [rsp+30h] [rbp-1F8h] BYREF
  __int64 v49; // [rsp+38h] [rbp-1F0h] BYREF
  unsigned int v50; // [rsp+4Ch] [rbp-1DCh]
  __int64 v51; // [rsp+50h] [rbp-1D8h] BYREF
  __int64 v52; // [rsp+58h] [rbp-1D0h] BYREF
  void *ptr[2]; // [rsp+60h] [rbp-1C8h] BYREF
  _BYTE v54[32]; // [rsp+70h] [rbp-1B8h] BYREF
  _OWORD v55[2]; // [rsp+90h] [rbp-198h] BYREF
  __int64 v56; // [rsp+B0h] [rbp-178h]
  void **v57; // [rsp+B8h] [rbp-170h]
  __int64 v58; // [rsp+C0h] [rbp-168h]
  void *v59[2]; // [rsp+D0h] [rbp-158h] BYREF
  _BYTE v60[128]; // [rsp+E0h] [rbp-148h] BYREF
  _QWORD v61[2]; // [rsp+160h] [rbp-C8h] BYREF
  __int64 v62; // [rsp+170h] [rbp-B8h] BYREF
  _QWORD v63[2]; // [rsp+1B0h] [rbp-78h] BYREF
  _QWORD v64[2]; // [rsp+1C0h] [rbp-68h] BYREF
  __int16 v65; // [rsp+1D0h] [rbp-58h]
  char v66; // [rsp+1D2h] [rbp-56h]
  __int64 v67; // [rsp+1D8h] [rbp-50h]

  v9 = *(char *)(a2 + 28) < 0;
  v49 = a2;
  v48 = a5;
  if ( v9 )
  {
    return 1;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 48);
    v43 = a3;
    v47 = a6;
    v12 = *(_QWORD *)(v10 + 48);
    v46 = a4;
    v13 = *(_QWORD *)(v12 & 0xFFFFFFFFFFFFFFF0LL);
    v14 = (unsigned int)*(unsigned __int8 *)(v13 + 16) - 25;
    if ( (unsigned int)v14 > 1 )
      v13 = sub_F63050(v13, a2, v14, a4);
    v51 = *(_QWORD *)(v13 + 24);
    v15 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    v16 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v15 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    v17 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                         & 0xFFFFFFFFFFFFFFF0LL)
                             + 16LL)
        - 43;
    if ( (unsigned int)*(unsigned __int8 *)(v15 + 16) - 43 <= 1 || (v15 = sub_1D379A0(v15, a2, v14, a4)) != 0 )
      v51 = sub_9B4870(v15, a2, v14, a4, a5);
    v18 = *(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL);
    v19 = (unsigned int)*(unsigned __int8 *)(v18 + 16) - 43;
    if ( (unsigned int)v19 <= 1 || (v18 = sub_1D379A0(v18, a2, v19, a4)) != 0 )
    {
      v48 = sub_9B4870(v18, a2, v19, a4, a5);
      if ( (unsigned int)(v16 - 43) > 1 )
      {
        v48 = sub_6D5440(&v48);
        v51 = sub_6D5440(&v51);
      }
    }
    else
    {
      v40 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      if ( (unsigned __int8)(v40 - 2) > 4u )
      {
        if ( (unsigned int)(v40 - 25) > 1 )
          v51 = sub_6D5440(&v51);
        else
          v51 = sub_A70010(*(_QWORD *)(a1 + 248), v51);
      }
      else
      {
        v51 = sub_A72210(*(_QWORD **)(a1 + 248), v51);
      }
      v48 = sub_6D5440(&v48);
    }
    sub_18C74E0(a1, 0, 0, 4);
    v41 = *(_DWORD *)(a1 + 11200);
    v44 = *(_BYTE *)(a1 + 12592);
    v45 = *(_BYTE *)(a1 + 11248);
    v20 = *(_DWORD *)(*(_QWORD *)(a1 + 264) + 204LL);
    sub_1DBADC0(a1);
    if ( !v21 )
      *(_BYTE *)(a1 + 12592) = 1;
    v22 = v49;
    *(_BYTE *)(a1 + 11248) = 0;
    v23 = *(_QWORD *)(v22 + 56);
    v59[0] = v60;
    v24 = *(_DWORD *)(v23 + 20);
    v59[1] = (void *)0x400000000LL;
    v25 = v24 & 0x1FFFFFFF;
    if ( (_DWORD)v25 )
      sub_1D37240((__int64)v59, v25);
    v26 = v17 < 2 ? 0x40 : 0;
    v27 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                   + 16LL);
    if ( v27 == 42 )
    {
      if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 42 )
        v26 = v17 < 2 ? 66 : 2;
    }
    else if ( v27 == 33
           && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v48 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                       + 16LL) == 33 )
    {
      v26 = v17 < 2 ? 66 : 2;
    }
    LODWORD(v42) = v26;
    ptr[0] = v54;
    ptr[1] = (void *)0x100000000LL;
    v28 = sub_B981D0((_QWORD *)v10, v25);
    v29 = (unsigned int)v42;
    if ( !v28 )
      goto LABEL_24;
    v30 = *(_QWORD *)(v49 + 48);
    if ( (*(_BYTE *)(v30 + 28) & 0x7F) == 0x27 && (*(_BYTE *)(v30 + 29) & 2) != 0 )
    {
      if ( (*(_DWORD *)(v30 + 40) & 7) != 7 || (v31 = *(_QWORD *)(v30 + 40) & 0xFFFFFFFFFFFFFFF8LL, *(_DWORD *)v31) )
        BUG();
      v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v31 + 16) + 56LL) + 20LL) & 0x1FFFFFFF;
    }
    else
    {
      v32 = 0;
    }
    v33 = sub_1D774E0(
            a1,
            v23,
            v32,
            *(_QWORD *)(**(_QWORD **)(v10 + 120) + 48LL),
            v43,
            v46,
            *(double *)a7.m128_u64,
            a8,
            0,
            a9,
            (__int64 *)v59,
            (__int64)ptr,
            0,
            0,
            0,
            0);
    v29 = (unsigned int)v42;
    v34 = v33;
    if ( !v33 )
    {
LABEL_24:
      v34 = sub_1D6C080(a1, v23, v51, v48, a9, (__int64 *)v59, v29, 0, 0, nullptr);
      if ( !v34 )
      {
        v61[0] = a1;
        v61[1] = 1;
        v35 = &v62;
        do
        {
          *v35 = -4096;
          v35 += 2;
        }
        while ( v63 != v35 );
        v66 = 0;
        v63[0] = v64;
        v63[1] = 0x100000000LL;
        v36 = *(_QWORD *)(a1 + 11280);
        *(_QWORD *)(a1 + 11280) = v61;
        v64[1] = v36;
        v65 = 0;
        v42 = &v49;
        v67 = 0;
        v52 = 0;
        v55[0] = _mm_loadh_ps((const double *)&v42);
        v42 = &v52;
        v57 = ptr;
        v37 = *(_DWORD *)(a9 + 16);
        v56 = a9;
        a7 = _mm_loadh_ps((const double *)&v42);
        v58 = a1;
        v55[1] = a7;
        sub_15F0FC0(a1, v37, (__int64 (__fastcall *)(__int64))sub_1D81310, (__int64)v55);
        v34 = v50;
        *v47 = v52;
        sub_1CB3BA0((__int64)v61);
      }
    }
    if ( ptr[0] != v54 )
      free(ptr[0]);
    if ( v59[0] != v60 )
      free(v59[0]);
    *(_DWORD *)(a1 + 11200) = v41;
    *(_BYTE *)(a1 + 12592) = v44;
    *(_BYTE *)(a1 + 11248) = v45;
    v38 = *(_QWORD *)(a1 + 264);
    if ( *(_DWORD *)(v38 + 204) == 5 )
      *(_BYTE *)(v38 + 194) = 1;
    if ( v20 )
      v20 = 3;
    *(_DWORD *)(v38 + 204) = v20;
    sub_190D5E0(a1, a7);
  }
  return v34;
}
