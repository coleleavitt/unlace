__int64 __fastcall sub_17937B0(_QWORD *a1, unsigned int a2, __int64 a3, __int64 a4)
{
  __int64 v7; // rsi
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // ebp
  _QWORD *v17; // rcx
  __int64 v18; // r9
  __int64 v19; // r14
  unsigned __int64 v20; // r14
  __int64 v21; // r8
  __int64 v22; // rax
  unsigned __int64 v23; // rdx
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r14
  __int64 v27; // rax
  _QWORD *v28; // rbx
  __int64 v29; // r15
  __int64 v30; // rdx
  _QWORD *v31; // r15
  __int64 v32; // rdx
  __int64 v33; // rdx
  __int64 v34; // rdx
  unsigned __int64 v35; // rdx
  __int64 v36; // rax
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // rax
  _DWORD *v39; // rax
  __int64 v40; // rdi
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _QWORD *v45; // [rsp+0h] [rbp-58h]
  __int64 v46; // [rsp+0h] [rbp-58h]
  __int64 v47; // [rsp+8h] [rbp-50h]
  _BYTE v48[64]; // [rsp+18h] [rbp-40h] BYREF

  v7 = (__int64)v48;
  if ( !(unsigned __int8)sub_B7D390(a3, (__int64)v48, 0, a4) && sub_B77D90(a3) )
  {
    v7 = a2;
    sub_1E3D740(*a1, a2, *(_QWORD *)(a3 + 112), 0, 0, 0);
  }
  if ( *(char *)(a3 + 82) < 0 )
    return 1;
  LOBYTE(v12) = sub_B7F990((_QWORD *)a3, v7, v8, v9, v10, v11);
  v15 = v12;
  if ( !(_BYTE)v12 || (unsigned int)sub_B76070(a3, v7, v13, v14) )
    return 0;
  v19 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  if ( (v19 & 4) != 0 )
    v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v20 = v19 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v20 )
    BUG();
  v21 = *(_QWORD *)(v20 + 40);
  v22 = *(_QWORD *)(v21 + 96);
  v23 = v22 & 0xFFFFFFFFFFFFFFFELL;
  if ( (v22 & 1) == 0 )
  {
    v17 = (_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
    if ( (v22 & 0xFFFFFFFFFFFFFFFCLL) != 0 )
    {
      if ( (v22 & 2) == 0 )
        goto LABEL_13;
      v18 = v17[2295];
      v35 = v21 & 0xFFFFFFFFFFFFFFFBLL;
      if ( v18 )
      {
        v36 = v17[294];
        v17[304] += 24LL;
        v37 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        if ( v17[295] >= v37 + 24 && v36 )
        {
          v17[294] = v37 + 24;
          v38 = (v36 + 7) & 0xFFFFFFFFFFFFFFF8LL;
        }
        else
        {
          v47 = v18;
          v46 = v21;
          v38 = sub_986170((__int64)(v17 + 294), 24, 24, 3, v21, v18);
          v18 = v47;
          v21 = v46;
          v37 = v38 & 0xFFFFFFFFFFFFFFFBLL;
        }
        *(_QWORD *)v38 = v18;
        v35 = v37 | 4;
        *(_DWORD *)(v38 + 8) = 0;
        *(_QWORD *)(v38 + 16) = v21;
      }
      v23 = v35 & 0xFFFFFFFFFFFFFFFELL;
      v22 = v23 | 1;
      *(_QWORD *)(v21 + 96) = v23 | 1;
    }
  }
  if ( v23 )
  {
    v23 &= 4u;
    if ( (_DWORD)v23 )
    {
      v39 = (_DWORD *)(v22 & 0xFFFFFFFFFFFFFFF8LL);
      if ( v39 )
      {
        v40 = *(_QWORD *)v39;
        v23 = *(unsigned int *)(*(_QWORD *)v39 + 12LL);
        if ( v39[2] != (_DWORD)v23 )
        {
          v39[2] = v23;
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v40 + 152LL))(v40, v21);
        }
      }
    }
  }
LABEL_13:
  if ( (*(_BYTE *)(*(_QWORD *)(v20 + 64) + 1LL) & 4) != 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(v20 + 40) + 96LL), *(_QWORD *)(v20 + 40), v23, (__int64)v17, v21, v18);
  if ( *(_DWORD *)(*(_QWORD *)(v20 + 64) + 20LL) )
    return 0;
  v24 = *(_QWORD *)(sub_B8C1B0(a3 + 72) + 16);
  if ( (v24 & 4) != 0 )
    v25 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFF8LL);
  else
    v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
  if ( !v25 )
    BUG();
  if ( *(_BYTE *)(v25 + 9) >> 5 == 2 )
    return 1;
  v26 = sub_B98F20(a3) + 8LL * (unsigned __int16)(*(_DWORD *)(a3 + 84) >> 13);
  v27 = sub_B98F20(a3);
  v28 = (_QWORD *)v27;
  v29 = (v26 - v27) >> 5;
  if ( v29 > 0 )
  {
    v30 = *(_QWORD *)(*(_QWORD *)v27 + 8LL);
    v45 = (_QWORD *)(v27 + 32 * v29);
    if ( (*(_WORD *)v30 & 0x1FFu) - 113 > 1 )
    {
LABEL_52:
      LOBYTE(v15) = v26 == (_QWORD)v28;
      return v15;
    }
    while ( (unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v30 + 16)) )
    {
      v31 = v28 + 1;
      v34 = *(_QWORD *)(v28[1] + 8LL);
      if ( (*(_WORD *)v34 & 0x1FFu) - 113 > 1
        || !(unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v34 + 16))
        || (v31 = v28 + 2, v32 = *(_QWORD *)(v28[2] + 8LL), (*(_WORD *)v32 & 0x1FFu) - 113 > 1)
        || !(unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v32 + 16))
        || (v31 = v28 + 3, v33 = *(_QWORD *)(v28[3] + 8LL), (*(_WORD *)v33 & 0x1FFu) - 113 > 1)
        || !(unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v33 + 16)) )
      {
        LOBYTE(v15) = v26 == (_QWORD)v31;
        return v15;
      }
      v28 += 4;
      if ( v45 == v28 )
        goto LABEL_47;
      v30 = *(_QWORD *)(*v28 + 8LL);
      if ( (*(_WORD *)v30 & 0x1FFu) - 113 > 1 )
        goto LABEL_52;
    }
LABEL_61:
    LOBYTE(v15) = v28 == (_QWORD *)v26;
    return v15;
  }
LABEL_47:
  v41 = (v26 - (__int64)v28) >> 3;
  if ( v41 != 2 )
  {
    if ( v41 != 3 )
    {
      if ( v41 != 1 )
        return v15;
      goto LABEL_50;
    }
    v43 = *(_QWORD *)(*v28 + 8LL);
    if ( (*(_WORD *)v43 & 0x1FFu) - 113 > 1 || !(unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v43 + 16)) )
      goto LABEL_61;
    ++v28;
  }
  v44 = *(_QWORD *)(*v28 + 8LL);
  if ( (*(_WORD *)v44 & 0x1FFu) - 113 > 1 || !(unsigned __int8)sub_17937B0(a1, a2, *(_QWORD *)(v44 + 16)) )
    goto LABEL_52;
  ++v28;
LABEL_50:
  v42 = *(_QWORD *)(*v28 + 8LL);
  if ( (*(_WORD *)v42 & 0x1FFu) - 113 > 1 )
    goto LABEL_52;
  v15 = sub_17937B0(a1, a2, *(_QWORD *)(v42 + 16));
  if ( !(_BYTE)v15 )
    goto LABEL_52;
  return v15;
}
