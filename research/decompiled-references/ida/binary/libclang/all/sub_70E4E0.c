unsigned __int64 __fastcall sub_70E4E0(_QWORD *a1, __int64 a2, char a3)
{
  unsigned int v6; // ebx
  int v7; // eax
  unsigned int v8; // edx
  unsigned __int64 v9; // rdi
  __int64 v10; // r14
  __int64 *v11; // r13
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rcx
  unsigned int v15; // edx
  int v16; // eax
  __int64 v17; // rsi
  __int64 v18; // rdx
  unsigned __int8 v19; // di
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned int v24; // edx
  __int64 v26; // rax
  unsigned __int64 v27; // rdx
  unsigned __int64 v28; // rax
  __int64 v29; // rax
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // rsi
  unsigned __int64 v32; // rdi
  int v33; // eax
  unsigned __int64 v34; // rdx
  __int64 v35; // rax
  __int64 v36; // rsi
  unsigned __int8 v37; // r8
  int v38; // edx
  unsigned int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  unsigned __int64 v42; // rsi
  __int64 v43; // r14
  __int64 v44; // rax
  __int64 v45; // r12
  __int64 v46; // r13
  unsigned int v47; // r12d
  unsigned int v48; // ecx
  __int64 v49; // rax
  unsigned __int64 v50; // rax
  __int64 v51; // rax
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  unsigned __int64 v55; // [rsp+8h] [rbp-50h]
  unsigned int v56; // [rsp+8h] [rbp-50h]
  unsigned __int64 v57; // [rsp+10h] [rbp-48h]

  v6 = sub_798DC0(a2);
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  v8 = v7 - 47;
  if ( v6 )
  {
    if ( v8 > 2 )
    {
LABEL_27:
      v24 = *(_DWORD *)(a1[2161] + 192LL);
      if ( (unsigned int)(v7 - 38) <= 6 && v24 )
      {
        if ( v6 <= v24 )
          v24 = v6;
        if ( (*(_BYTE *)(a2 + 96) & 7) == 2 )
          v6 = v24;
      }
      return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
    }
  }
  else
  {
    v6 = 8;
    if ( v8 > 2 )
      goto LABEL_9;
  }
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v26 = sub_79A2B0(a2);
    v27 = *(_QWORD *)v26;
    v28 = *(_QWORD *)v26 + 8LL * *(unsigned int *)(v26 + 8);
    if ( v27 < v28 )
    {
      while ( *(_WORD *)(*(_QWORD *)v27 + 32LL) != 316 )
      {
        v27 += 8LL;
        if ( v28 == v27 )
          goto LABEL_4;
      }
    }
    else
    {
      if ( v27 == v28 )
        goto LABEL_4;
      while ( *(_WORD *)(*(_QWORD *)v28 + 32LL) != 316 )
      {
        v28 += 8LL;
        if ( v27 == v28 )
          goto LABEL_4;
      }
    }
    if ( v27 != v28 )
    {
LABEL_40:
      v7 = *(_BYTE *)(a2 + 28) & 0x7F;
      goto LABEL_27;
    }
  }
LABEL_4:
  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v9 = *(_QWORD *)v9;
  if ( (*(_BYTE *)(v9 + 8) & 0x7Fu) - 56 > 3 )
    BUG();
  if ( (*(_BYTE *)(v9 - 35) & 1) == 0 )
  {
    v7 = *(_BYTE *)(a2 + 28) & 0x7F;
    goto LABEL_9;
  }
  v29 = sub_79A2B0(v9 - 64);
  v30 = *(_QWORD *)v29;
  v31 = *(_QWORD *)v29 + 8LL * *(unsigned int *)(v29 + 8);
  v7 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( v30 < v31 )
  {
    while ( *(_WORD *)(*(_QWORD *)v30 + 32LL) != 316 )
    {
      v30 += 8LL;
      if ( v31 == v30 )
        goto LABEL_9;
    }
  }
  else
  {
    if ( v30 == v31 )
      goto LABEL_9;
    while ( *(_WORD *)(*(_QWORD *)v31 + 32LL) != 316 )
    {
      v31 += 8LL;
      if ( v30 == v31 )
        goto LABEL_9;
    }
  }
  if ( v30 != v31 )
    goto LABEL_27;
LABEL_9:
  if ( (unsigned int)(v7 - 24) > 0x1A )
    return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
  v10 = *(_QWORD *)(a2 + 48);
  v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  v12 = *(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v12 + 16) - 42 <= 1
    || (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v12 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 42 <= 1
    && (v12 = sub_B0D320(v12)) != 0 )
  {
    if ( a3 )
    {
      v10 = sub_6B2590(v12);
    }
    else
    {
      v41 = sub_6B2590(v12);
      v10 = sub_6C4160((__int64)a1, v41);
    }
    v11 = (__int64 *)(v10 & 0xFFFFFFFFFFFFFFF0LL);
  }
  v13 = sub_6CB5B0(a1, v10);
  v55 = v13;
  if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 > 1 )
  {
    v57 = v13 & 0xFFFFFFFFFFFFFFF0LL;
    if ( !(unsigned __int8)sub_B19120(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL), 0) )
    {
      v35 = sub_6D9A50(a1, v10);
      if ( v35 )
      {
        v36 = a1[2161];
        v37 = *(_BYTE *)(v36 + 28);
        if ( a3 != 1 )
        {
          if ( v37 )
          {
            v38 = *(unsigned __int8 *)(v35 + 16);
            if ( (_BYTE)v38 == 6 )
            {
              if ( v6 < *(unsigned __int8 *)(v36 + 29) )
                v6 = *(unsigned __int8 *)(v36 + 29);
            }
            else if ( (unsigned int)(v38 - 2) <= 1
                   && sub_6F6DE0((__int64)a1, v35) >= (unsigned __int64)v37
                   && v6 < *(unsigned __int8 *)(a1[2161] + 29LL) )
            {
              v6 = *(unsigned __int8 *)(a1[2161] + 29LL);
            }
          }
        }
      }
      v39 = sub_70BB40(a1, *v11);
      v14 = v57;
      v40 = *(_QWORD *)(v57 + 8);
      if ( (v40 & 8) != 0 && (*((_BYTE *)&qword_18 + (v40 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
      {
        v6 = 8;
      }
      else if ( v6 < v39 )
      {
        v6 = v39;
      }
    }
  }
  else
  {
    sub_70BEA0((__int64)a1, *v11);
    v6 = v15;
  }
  v16 = *(_BYTE *)(a2 + 28) & 0x7F;
  v17 = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (unsigned int)(v16 - 38) > 6 )
  {
    if ( (unsigned int)(v16 - 47) > 2 )
      return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_85;
  }
  v18 = *(unsigned __int8 *)(a2 + 96);
  v19 = v18 & 7;
  if ( (*(_BYTE *)(a2 + 96) & 7) != 0 )
  {
    if ( (*(_BYTE *)(a2 + 96) & 7) != 5 )
      goto LABEL_82;
    if ( v16 != 44 && v16 != 38 )
      goto LABEL_108;
    v52 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v52 = *(_QWORD *)(v52 + 8);
    if ( !v52 )
    {
LABEL_108:
      if ( (_BYTE)v17 == 41 )
        return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
      goto LABEL_20;
    }
    v53 = *(_BYTE *)(sub_79C2A0(v52, v17, v18, v14) + 8) & 0x7F;
    if ( (unsigned __int8)v53 > 0x10u )
    {
      if ( (((_BYTE)v53 + 96) & 0x7Fu) <= 5 )
        goto LABEL_115;
    }
    else
    {
      v54 = 65922;
      if ( _bittest64(&v54, v53) )
      {
LABEL_115:
        v19 = *(_BYTE *)(a2 + 96) & 7;
LABEL_82:
        if ( v19 > 3u )
        {
LABEL_83:
          LOBYTE(v7) = *(_BYTE *)(a2 + 28) & 0x7F;
          goto LABEL_84;
        }
        goto LABEL_20;
      }
    }
    if ( (*(_BYTE *)(a2 + 28) & 0x7F) == 0x29 && (*(_BYTE *)(a2 + 96) & 7u) > 3 )
      return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_20;
  }
  v20 = *(_QWORD *)(a2 + 48);
  v21 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
  if ( (v21 & 8) != 0
    && (unsigned int)((*(__int64 *)((char *)&qword_18 + (v21 & 0xFFFFFFFFFFFFFFF0LL))
                     | (unsigned __int64)(((unsigned __int8)v21 | (unsigned __int8)v20) & 7)) >> 9) == 3 )
  {
    goto LABEL_20;
  }
  if ( (*(_BYTE *)(a2 + 28) & 0x7D) == 0x29 )
  {
    if ( (v18 & 0x18) == 0 )
      return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
    goto LABEL_20;
  }
  v32 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v32 = *(_QWORD *)(v32 + 8);
  v33 = *(_BYTE *)(sub_79C2A0(v32, *(_BYTE *)(a2 + 28) & 0x7D, v18, v14) + 8) & 0x7F;
  if ( !v33 || v33 == 22 )
    goto LABEL_20;
  LOBYTE(v7) = *(_BYTE *)(a2 + 28) & 0x7F;
  if ( (_BYTE)v7 == 41 )
  {
    v7 = 41;
    if ( (*(_BYTE *)(a2 + 96) & 0x18) == 0 )
      goto LABEL_27;
    goto LABEL_20;
  }
  v34 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v34 = *(_QWORD *)v34;
  if ( ((*(_BYTE *)(v34 + 8) + 72) & 0x7Fu) <= 3 || (*(_BYTE *)(a2 + 96) & 0x18) != 0 )
  {
LABEL_20:
    if ( !a3 )
    {
      v22 = 0;
      if ( !(unsigned __int8)sub_B19120(*(_QWORD *)(v55 & 0xFFFFFFFFFFFFFFF0LL), 0) )
        v22 = sub_6F6DE0((__int64)a1, *v11);
      v23 = sub_6BF3D0((__int64)a1, v22, a2);
      if ( v6 < v23 )
        v6 = v23;
    }
    goto LABEL_83;
  }
LABEL_84:
  v7 = (unsigned __int8)v7;
  if ( (unsigned int)(unsigned __int8)v7 - 47 > 2 )
    goto LABEL_27;
LABEL_85:
  v42 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
    v42 = *(_QWORD *)v42;
  if ( (*(_BYTE *)(v42 + 8) & 0x7Fu) - 56 > 3 )
    BUG();
  if ( *(char *)(v42 - 36) >= 0 )
  {
    v43 = a2;
    v44 = sub_AB4240(a1, v42 - 64);
    v45 = *(_QWORD *)(v44 + 16);
    v46 = v44;
    v47 = sub_6F7120((__int64)a1) * v45;
    v48 = v47;
    if ( *(char *)(a2 + 29) < 0 )
    {
      v51 = sub_77A0C0(a2);
      v48 = v47;
      v43 = v51;
    }
    if ( *(_DWORD *)(v43 + 68) <= 0xFu )
    {
      v56 = v48;
      sub_78B660(v43);
      v48 = v56;
    }
    v49 = *(_QWORD *)(*(_QWORD *)(v46 + 48) + 8LL * (unsigned int)((*(_DWORD *)(v43 + 68) >> 4) - 1));
    if ( v49 )
    {
      v50 = -v49 & v49;
      if ( v50 < v47 )
        v48 = v50;
    }
    if ( v6 > v48 )
      v6 = v48;
    goto LABEL_40;
  }
  return v6 / (unsigned __int64)sub_6F6DE0((__int64)a1, *(_QWORD *)(a1[2311] & 0xFFFFFFFFFFFFFFF0LL));
}

