__int64 __fastcall sub_18ED660(
        __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        char a7)
{
  __int64 v7; // rax
  int v9; // ebx
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rax
  unsigned int v15; // r13d
  __int64 v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rdi
  int v20; // edx
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  unsigned __int64 v27; // rdx
  bool v28; // zf
  __int64 v29; // rdx
  _BYTE *v30; // rax
  unsigned int v31; // eax
  __int64 v32; // rdi
  __int64 v33; // r13
  __int64 v34; // r12
  __int64 v35; // rbx
  __int64 v36; // r12
  __int64 v37; // r14
  char v38; // al
  __int64 v39; // rbx
  __int64 v40; // rdi
  __int64 v41; // rdi
  const __m128i *v42; // rcx
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  __int64 v45; // rdi
  __int64 v46; // rax
  __int64 v47; // rdi
  __int64 v48; // rdx
  __int64 v49; // [rsp+0h] [rbp-E8h] BYREF
  unsigned __int64 v50; // [rsp+8h] [rbp-E0h] BYREF
  unsigned __int64 v51; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v52; // [rsp+18h] [rbp-D0h] BYREF
  __int64 (__fastcall **v53)(); // [rsp+20h] [rbp-C8h] BYREF
  int v54; // [rsp+28h] [rbp-C0h]
  __int64 *v55; // [rsp+30h] [rbp-B8h]
  char *v56; // [rsp+38h] [rbp-B0h]

  v50 = a2;
  v49 = a4;
  v7 = *(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (*(_BYTE *)(v7 + 17) & 4) != 0 )
    return 0;
  v9 = a5;
  if ( (unsigned int)*(unsigned __int8 *)(v7 + 16) - 43 <= 1 )
    goto LABEL_73;
  v17 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v7 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
  if ( (unsigned int)v17 > 1 )
    goto LABEL_7;
  v7 = sub_F63050(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL), a2, v17, a4);
  if ( v7 )
  {
LABEL_73:
    while ( 1 )
    {
      v11 = *(_QWORD *)(v7 + 32);
      if ( (*(_BYTE *)(v7 + 18) & 0x10) == 0 )
        break;
      while ( 1 )
      {
        v12 = v11 & 0xFFFFFFFFFFFFFFF0LL;
        v7 = *(_QWORD *)v12;
        v13 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v12 + 16LL) - 43;
        if ( (unsigned int)v13 <= 1 )
          break;
        v14 = sub_F63050(v7, a2, v13, v12);
        v11 = *(_QWORD *)(v14 + 32);
        if ( (*(_BYTE *)(v14 + 18) & 0x10) == 0 )
          goto LABEL_6;
      }
    }
LABEL_6:
    v50 = v11;
LABEL_7:
    if ( (unsigned int)(v9 - 3) <= 1 )
      goto LABEL_18;
    goto LABEL_8;
  }
  if ( (unsigned int)(v9 - 3) <= 1 )
  {
LABEL_18:
    if ( v9 == 3 )
    {
      v30 = *(_BYTE **)(a1 + 232);
      if ( (v30[1] & 8) == 0
        && *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                    + 16LL) == 5 )
      {
        sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), a3, (*v30 & 0x10) == 0 ? 5503 : 6634, 0);
        sub_15F7200(&v53);
      }
    }
    v50 = sub_A71450(*(_QWORD *)(a1 + 248), v50);
    goto LABEL_10;
  }
LABEL_8:
  if ( v9 == 7 )
    goto LABEL_18;
  if ( v9 == 6 )
  {
    LOBYTE(v18) = sub_18D5550(a1, v50, a3, v49, a5, a6);
    return v18;
  }
LABEL_10:
  if ( v9 == 8 )
    return (unsigned int)sub_18D80C0(a1, v50, a3, v49);
  if ( v9 == 5 )
  {
    v51 = v50;
    v52 = v49;
    v15 = sub_16DDD00(a1, a3, v49);
    if ( (_BYTE)v15 )
      return v15;
    v24 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    if ( (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25 <= 1
      || sub_C1BF80(v24, a3, v22, v23) )
    {
      return v15;
    }
    v25 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    v26 = *(unsigned __int8 *)(v25 + 16);
    if ( (unsigned int)(v26 - 43) <= 1 )
      goto LABEL_74;
    v27 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 43;
    if ( (unsigned int)v27 > 1 )
    {
LABEL_56:
      if ( (_BYTE)v26 != 33
        && ((v48 = *(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v48 + 16) != 33)
         || (v25 = sub_F63050(v25, a3, v48, v26)) == 0)
        || (v44 = *(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFF0LL,
            v45 = *(_QWORD *)v44,
            *(_BYTE *)(*(_QWORD *)v44 + 16LL) != 26)
        && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v45 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 26
         || !sub_F63050(v45, a3, v27, v26)) )
      {
        v15 = 1;
        sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), a3, 0x1310u, 0);
        v46 = sub_1605D30((__int64)&v53, (__int64 *)&v51);
        sub_15884C0(v46, &v52);
        sub_15F7200(&v53);
      }
      return v15;
    }
    v25 = sub_F63050(*(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL), a3, v27, v26);
    if ( v25 )
    {
LABEL_74:
      while ( 1 )
      {
        v27 = *(_QWORD *)(v25 + 32) & 0xFFFFFFFFFFFFFFF0LL;
        v28 = (*(_BYTE *)(v25 + 18) & 0x10) == 0;
        v25 = *(_QWORD *)v27;
        if ( v28 )
          break;
        v29 = (unsigned int)*(unsigned __int8 *)(v25 + 16) - 43;
        if ( (unsigned int)v29 > 1 )
          v25 = sub_F63050(v25, a3, v29, v26);
      }
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 25) <= 1u )
        return v15;
    }
    v25 = *(_QWORD *)(v51 & 0xFFFFFFFFFFFFFFF0LL);
    v26 = *(unsigned __int8 *)(v25 + 16);
    goto LABEL_56;
  }
  v15 = sub_18ED4D0(a1, v50, a3, v49, v9);
  if ( !(_BYTE)v15 )
    return 0;
  v56 = &a7;
  v55 = &v49;
  v54 = 4986;
  v53 = off_2BC6F68;
  if ( !(unsigned __int8)sub_1E63C20(a1, a3, v50, 0, &v53) )
  {
    v19 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
    v20 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v19 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL);
    if ( (unsigned int)(v20 - 25) <= 1 )
    {
      sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), a3, 0x1379u, 0);
      v21 = sub_1682BA0((__int64)&v53, (__int64)&a7);
      sub_15884C0(v21, &v49);
      sub_15F7200(&v53);
      return v15;
    }
    if ( (unsigned __int8)(v20 - 2) > 4u && v9 == 2 )
    {
      sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), a3, 0xDDDu, 0);
      sub_1605D30((__int64)&v53, (__int64 *)&v50);
      sub_15F7200(&v53);
      return v15;
    }
    if ( (unsigned int)(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 248LL) - 55) <= 1 )
    {
      LOBYTE(v31) = sub_F65F60(v19);
      if ( (_BYTE)v31 )
      {
        v15 = v31;
        sub_168B9F0((__int64)&v53, (__int64 *)(a1 + 8), a3, 0x1564u, 0);
        v52 = sub_10CCE40(v9);
        sub_15AFC70((__int64)&v53, &v52);
        sub_15F7200(&v53);
        return v15;
      }
    }
    if ( !(unsigned __int8)sub_18D5630(a1, v50, a3, v49, v9) )
    {
      v32 = *(_QWORD *)(v50 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (*(_BYTE *)(v32 + 17) & 8) == 0 )
        return 0;
      if ( *(_DWORD *)(a1 + 40) <= 1u )
        return 0;
      v33 = sub_F6AC00(v32);
      if ( !v33 )
        return 0;
      v34 = *(_QWORD *)(a1 + 32);
      v35 = v34 + 8LL * *(unsigned int *)(a1 + 40);
      v36 = v34 + 8;
      if ( v36 == v35 )
        return 0;
      v37 = *(_QWORD *)(v35 - 8);
      v38 = *(_BYTE *)(v37 + 8) & 7;
      if ( (unsigned __int8)(v38 - 1) > 2u )
        return 0;
      v39 = v35 - 8;
      while ( 1 )
      {
        if ( v38 == 2 )
        {
          v40 = *(_QWORD *)(v37 + 1592);
          if ( v40 )
          {
            v41 = v40 + 72;
LABEL_49:
            if ( sub_B8E9C0(v41, *(_QWORD *)(v33 + 32)) )
              return 0;
            sub_18BE2C0(*(_QWORD **)(a1 + 248), v50, v37, v42, v43);
          }
        }
        else
        {
          v47 = *(_QWORD *)(v37 + 1528);
          if ( v47 )
          {
            v41 = v47 + 40;
            goto LABEL_49;
          }
        }
        if ( v36 != v39 )
        {
          v37 = *(_QWORD *)(v39 - 8);
          v39 -= 8;
          v38 = *(_BYTE *)(v37 + 8) & 7;
          if ( (unsigned __int8)(v38 - 1) <= 2u )
            continue;
        }
        return 0;
      }
    }
  }
  return v15;
}
