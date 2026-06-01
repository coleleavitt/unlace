__int64 __fastcall sub_CB9B00(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  __int64 result; // rax
  unsigned __int64 v9; // rsi
  unsigned __int16 v10; // bx
  unsigned int v11; // eax
  __int64 *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rbp
  unsigned __int64 v15; // r15
  __int64 v16; // rdi
  __int64 v17; // rdx
  unsigned __int64 v18; // rdx
  __int64 v19; // rax
  __int64 v20; // rdx
  int v21; // eax
  __int64 v22; // r15
  unsigned int v23; // eax
  __int64 v24; // rax
  __int64 v25; // rcx
  __int16 v26; // dx
  __int64 v27; // rbx
  unsigned int v28; // eax
  __int64 v29; // rcx
  __int64 v30; // rsi
  __int64 v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rcx
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rdx
  unsigned int v42; // esi
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // r9
  unsigned __int8 v46; // al
  unsigned int v47; // eax
  unsigned __int8 v48; // [rsp+8h] [rbp-60h]
  unsigned __int8 v49; // [rsp+8h] [rbp-60h]
  void *v50; // [rsp+10h] [rbp-58h] BYREF
  unsigned int v51; // [rsp+18h] [rbp-50h]
  char v52; // [rsp+20h] [rbp-48h]

  v6 = **(_QWORD ***)(a1 + 488);
  v7 = (*(_BYTE *)(a2 + 2) >> 3) & 0xF;
  if ( v7 <= 1 )
  {
    v12 = *(__int64 **)(a2 + 16);
    if ( *(char *)(a2 + 2) < 0 )
      v13 = *v12;
    else
      v13 = v12[1];
    v14 = v13;
    v15 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    v16 = *(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(v16 + 16) - 43 <= 1 )
      goto LABEL_76;
    v20 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    v21 = *(unsigned __int8 *)(v20 + 16);
    v38 = (unsigned int)(v21 - 43);
    if ( (unsigned int)v38 > 1 )
      goto LABEL_17;
    v16 = sub_F63050(v16, a2, v20, v38);
    if ( v16 )
    {
LABEL_76:
      while ( 1 )
      {
        v17 = *(_QWORD *)(v16 + 32);
        if ( (*(_BYTE *)(v16 + 18) & 0x10) == 0 )
          break;
        while ( 1 )
        {
          v18 = v17 & 0xFFFFFFFFFFFFFFF0LL;
          v16 = *(_QWORD *)v18;
          if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v18 + 16LL) - 43 <= 1 )
            break;
          v19 = sub_F63050(v16, a2, v18, a4);
          v17 = *(_QWORD *)(v19 + 32);
          if ( (*(_BYTE *)(v19 + 18) & 0x10) == 0 )
            goto LABEL_16;
        }
      }
LABEL_16:
      v14 = v17;
      v16 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL);
      v20 = *(_QWORD *)(*(_QWORD *)(v16 + 8) & 0xFFFFFFFFFFFFFFF0LL);
      v21 = *(unsigned __int8 *)(v20 + 16);
    }
    else
    {
      v16 = *(_QWORD *)v15;
      v20 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v15 + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
      v21 = *(unsigned __int8 *)(v20 + 16);
    }
LABEL_17:
    if ( (_BYTE)v21 == 13 )
    {
      if ( ((*(_WORD *)(v20 + 18) >> 3) & 0x1FF) == 0x1B3 )
      {
        v22 = 1;
        goto LABEL_20;
      }
    }
    else
    {
      v22 = 1;
      if ( (unsigned int)(v21 - 25) <= 1 )
      {
LABEL_20:
        if ( !*(_BYTE *)(a1 + 584) )
        {
          v23 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
          return sub_CB7AA0(a1, v22, v23, a2);
        }
        return 1;
      }
    }
    if ( (*(_BYTE *)(v16 + 17) & 4) != 0 || !(unsigned __int8)sub_F58240(v16) )
    {
LABEL_42:
      v50 = (void *)(a2 | 4);
      return sub_CAAFE0(a1, (__int64 *)&v50);
    }
    if ( v7 )
    {
      sub_AAE9B0(&v50, (__int64)v6, v14);
      v22 = (__int64)v50;
    }
    else
    {
      v22 = sub_AAE980((__int64)v6, v14);
    }
    goto LABEL_20;
  }
  if ( v7 == 2 )
  {
    v30 = sub_C1D510(a2);
    v31 = *(_QWORD *)(v30 & 0xFFFFFFFFFFFFFFF0LL);
    v32 = *(unsigned __int8 *)(v31 + 16);
    if ( (unsigned __int8)(v32 - 2) > 4u )
    {
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v31 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
        BUG();
      v31 = sub_F63050(v31, v30, v32, v29);
      LODWORD(v32) = *(unsigned __int8 *)(v31 + 16);
    }
    if ( (unsigned int)(v32 - 2) <= 1 )
    {
      result = *(unsigned __int8 *)(a1 + 584);
      if ( !(_BYTE)result )
      {
        sub_A5DAD0((__int64)&v50, v31);
        result = sub_CB7CB0(a1, (__int64)&v50, a2);
        if ( v51 > 0x40 )
        {
          if ( v50 )
          {
            v48 = result;
            operator delete[](v50);
            return v48;
          }
        }
      }
      return result;
    }
    v43 = sub_A72040(v6, v30);
    if ( !v43 || *(_BYTE *)(v43 + 16) != 6 )
      BUG();
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 32) & 0xFFFFFFFFFFFFFFF0LL)
                                                            + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u )
    {
      sub_C3EB00((__int64)&v50, *(_QWORD *)(v43 + 40), (__int64)v6, nullptr, v44, v45);
      if ( v52 )
      {
        v46 = *(_BYTE *)(a1 + 584);
        if ( !v46 )
          v46 = sub_CB7C70(a1, (__int64)&v50, a2);
        v49 = v46;
        sub_98E4B0((__int64)&v50);
        return v49;
      }
      sub_98E4B0((__int64)&v50);
    }
    return 0;
  }
  if ( v7 - 3 <= 1 )
  {
    if ( *(char *)(a2 + 2) < 0 )
    {
      v36 = sub_C1D510(a2);
      v27 = sub_CAF1C0(v36, v6, v7, v37);
    }
    else
    {
      v24 = sub_BFB9F0(*(_QWORD *)(a2 + 16));
      v26 = *(_WORD *)v24 & 0x1FF;
      if ( v26 == 71 )
      {
        v27 = sub_AB0BF0(v6, *(_QWORD *)(v24 + 16), 1);
      }
      else if ( v26 == 46 )
      {
        v27 = sub_AB0BF0(v6, *(_QWORD *)(v24 + 24), 1);
      }
      else
      {
        v27 = sub_CAF1C0(*(_QWORD *)(v24 + 8), v6, v7, v25);
      }
    }
    if ( !*(_BYTE *)(a1 + 584) )
      goto LABEL_26;
    return 1;
  }
  switch ( v7 )
  {
    case 8u:
      v33 = *(_QWORD *)(sub_C1D510(a2) & 0xFFFFFFFFFFFFFFF0LL);
      v35 = (unsigned int)*(unsigned __int8 *)(v33 + 16) - 57;
      if ( (unsigned int)v35 <= 1 )
        return sub_CB7690(a1, *(_DWORD *)(v33 + 20), a2);
      v33 = sub_CAEB00(v33, a2, v35, v34);
      if ( v33 )
        return sub_CB7690(a1, *(_DWORD *)(v33 + 20), a2);
      v50 = (void *)(a2 | 4);
      return sub_CA35D0(a1, (__int64 *)&v50);
    case 6u:
      v39 = *(_QWORD *)(sub_C1D510(a2) & 0xFFFFFFFFFFFFFFF0LL);
      v41 = (unsigned int)*(unsigned __int8 *)(v39 + 16) - 57;
      if ( (unsigned int)v41 > 1 )
      {
        v39 = sub_CAEB00(v39, a2, v41, v40);
        if ( !v39 )
          return sub_CB7570(a1, 1, a2);
      }
      v42 = *(_DWORD *)(v39 + 20);
      if ( v42 == 3 )
        v42 = 4;
      return sub_CB7690(a1, v42, a2);
    case 7u:
      v47 = sub_A62EB0((__int64)v6);
      v27 = sub_A97FF0((__int64)v6, v47);
LABEL_26:
      v28 = sub_CE6180(*(_QWORD *)(a1 + 488), *(_QWORD *)(a2 + 8));
      return sub_CB7AA0(a1, v27, v28, a2);
  }
  result = 0;
  if ( v7 == 5 )
  {
    v9 = **(_QWORD **)(a2 + 16);
    if ( (*(_BYTE *)(*(_QWORD *)(v9 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
    {
      v10 = sub_ABF880(v6, v9);
      v11 = sub_CB1440(a1, *(_QWORD *)(a2 + 8));
      return sub_CB9A40(a1, v10, v11, a2);
    }
    goto LABEL_42;
  }
  return result;
}
