__int64 __fastcall sub_3E8760(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v3; // eax
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v8; // r14
  __int64 v9; // r13
  int v10; // ecx
  __int64 v11; // rdi
  char **v12; // rax
  char **v13; // r15
  int dtype_size; // r14d
  int v15; // eax
  bool v16; // cc
  int v17; // eax
  __int64 v18; // r13
  __int64 v19; // rax
  int v20; // eax
  char *v21; // r13
  int v22; // eax
  int v23; // ebx
  __int64 v24; // r13
  _QWORD *v25; // rax
  __int64 v26; // rsi
  _QWORD *v27; // r15
  __int64 v28; // rbp
  char *v29; // r14
  __int64 v30; // rsi
  unsigned int v31; // [rsp+10h] [rbp-88h]
  unsigned __int8 *v32; // [rsp+10h] [rbp-88h]
  char *v33; // [rsp+18h] [rbp-80h]
  _DWORD v34[4]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v35; // [rsp+30h] [rbp-68h] BYREF
  int v36; // [rsp+38h] [rbp-60h]
  unsigned __int64 v37; // [rsp+40h] [rbp-58h] BYREF
  __int64 v38; // [rsp+48h] [rbp-50h]
  unsigned __int64 v39; // [rsp+58h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 32);
  v39 = __readfsqword(0x28u);
  v3 = *(_DWORD *)v1;
  if ( *(_DWORD *)v1 == 54 )
  {
    if ( *(_BYTE *)(v1 + 64) == 1 && *(_DWORD *)(v1 + 72) == 132 )
    {
      sub_329340(*(_QWORD *)(a1 + 16), v1);
      ++*(_DWORD *)(a1 + 48);
    }
    return 0;
  }
  if ( v3 <= 0x36 )
  {
    if ( v3 == 12 )
    {
      if ( !(unsigned __int8)sub_3E86D0(*(_QWORD *)(a1 + 40), v1, &v35, &v37)
        || *(_BYTE *)(*(_QWORD *)(a1 + 40) + 376LL) && (v35 == -1 || v37 == -1) )
      {
        return 0;
      }
      v7 = v35 + v37;
    }
    else
    {
      if ( v3 != 13 )
        return 0;
      if ( *(_BYTE *)(v1 + 32) == 1
        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1184LL) == *(_DWORD *)(v1 + 40)
        && (unsigned __int8)sub_1196C0((char *)(v1 + 48), &v35, 1u) )
      {
        v38 = 0;
        v37 = 0xFFFFFFFF00000000LL;
        sub_11FC20((__int64)&v37, (unsigned __int8 *)v1);
        if ( (unsigned __int8)sub_136120(*(_QWORD *)(a1 + 16), (__int64)&v37, (int *)v1, 0, (__int64)&v37, 0xFFFFFFFF) )
        {
          sub_116290((char *)&v37, *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 64LL) + 1504LL));
          sub_116350((char *)(v1 + 32), (char *)&v37);
          sub_1166E0(v1 + 48);
          *(_DWORD *)v1 = 4;
          ++*(_DWORD *)(a1 + 48);
          sub_1166E0((__int64)&v37);
          return 0;
        }
        sub_1166E0((__int64)&v37);
      }
      if ( !(unsigned __int8)sub_3E86D0(*(_QWORD *)(a1 + 40), v1, &v35, &v37) )
        return 0;
      v5 = *(_QWORD *)(a1 + 40);
      if ( *(_BYTE *)(v5 + 376) && (v37 == -1 || v35 == -1) )
      {
        v6 = *(_QWORD *)(v5 + 352);
        if ( v37 != v6 && v35 != v6 )
          return 0;
      }
      v7 = v35 - v37;
    }
    v35 = v7;
    *(_DWORD *)v1 = 4;
    v8 = *(_QWORD *)(a1 + 40);
    v9 = v35;
    sub_1166E0(v1 + 32);
    *(_BYTE *)(v1 + 32) = 6;
    v10 = 8 * *(_DWORD *)(v8 + 84);
    if ( (unsigned __int64)v10 <= 0x3F )
      v9 &= ~(-1LL << v10);
    *(_QWORD *)(v1 + 40) = v9;
    sub_116290((char *)(v1 + 32), *(_QWORD *)(a1 + 40));
    sub_1166E0(v1 + 48);
    ++*(_DWORD *)(a1 + 48);
    return 0;
  }
  if ( v3 == 56 )
  {
    if ( *(_BYTE *)(v1 + 32) == 6 )
    {
      v11 = *(_QWORD *)(v1 + 40);
      goto LABEL_27;
    }
    return 0;
  }
  if ( v3 != 57 || *(_BYTE *)(v1 + 48) != 6 )
    return 0;
  v11 = *(_QWORD *)(v1 + 56);
LABEL_27:
  v12 = sub_3E24B0(v11, nullptr);
  v13 = v12;
  if ( !v12 )
    return 0;
  dtype_size = get_dtype_size(*((unsigned __int8 *)v12 + 12));
  if ( *(_QWORD *)(a1 + 24) != v1 && ((_BYTE)v13[2] & 1) != 0 )
    return 0;
  v34[2] = 8;
  v15 = *((_DWORD *)v13 + 2);
  v35 = 1;
  v34[0] = 1;
  v16 = (unsigned int)(v15 - 22) <= 2;
  v17 = 1;
  v34[1] = dtype_size;
  if ( !v16 )
    v17 = dtype_size;
  HIDWORD(v35) = v17;
  v36 = dtype_size + 8;
  if ( !*(_BYTE *)(v1 + 64) )
  {
    v33 = (char *)(v1 + 32);
    sub_11EAC0(v1 + 32, (unsigned __int8 *)v34);
    v21 = (char *)(v1 + 48);
    sub_11EAC0(v1 + 48, (unsigned __int8 *)&v35);
    v32 = (unsigned __int8 *)(v1 + 64);
    sub_11EAC0(v1 + 64, (unsigned __int8 *)v34);
LABEL_47:
    *(_DWORD *)v1 = *((_DWORD *)v13 + 2);
    v22 = *((_DWORD *)v13 + 4);
    if ( (v22 & 4) != 0 )
    {
      sub_116350(v33, v21);
      v22 = *((_DWORD *)v13 + 4);
    }
    if ( (v22 & 2) != 0 )
      sub_11A350((__int64)v21, *(_QWORD *)(a1 + 40), 10, *(_DWORD *)(v1 + 36), *(_QWORD *)(v1 + 24), 0);
    if ( *(_QWORD *)(a1 + 24) == v1 )
    {
      if ( ((_BYTE)v13[2] & 1) != 0 )
      {
        LODWORD(v37) = 1;
        HIDWORD(v37) = dtype_size;
        LODWORD(v38) = 272;
        sub_11EAC0((__int64)v32, (unsigned __int8 *)&v37);
        sub_1166E0((__int64)&v37);
        v24 = j__qalloc_or_throw(80);
        *(_OWORD *)(v24 + 8) = 0;
        *(_QWORD *)(v24 + 32) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v24 + 40) = 0;
        *(_QWORD *)(v24 + 48) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v24 + 56) = 0;
        *(_QWORD *)(v24 + 64) = 0xFFFFFFFF00000000LL;
        *(_QWORD *)(v24 + 72) = 0;
        sub_11ECE0(v24, v1);
        *(_DWORD *)v24 = *((_DWORD *)v13 + 2) + 2;
        sub_116350((char *)(v24 + 64), (char *)&v35);
        sub_9CAA0(*(_QWORD *)(a1 + 16), (_QWORD *)v24, v1);
        v25 = (_QWORD *)j__qalloc_or_throw(80);
        v26 = *(_QWORD *)(v1 + 24);
        v27 = v25;
        v28 = (__int64)(v25 + 4);
        v25[5] = 0;
        v29 = (char *)(v25 + 8);
        v25[7] = 0;
        v25[4] = 0xFFFFFFFF00000000LL;
        v25[6] = 0xFFFFFFFF00000000LL;
        v25[8] = 0xFFFFFFFF00000000LL;
        v25[9] = 0;
        sub_329320((__int64)v25, v26);
        *(_DWORD *)v27 = 4;
        sub_11EAC0(v28, v32);
        sub_116350(v29, (char *)v34);
        sub_9CAA0(*(_QWORD *)(a1 + 16), v27, v24);
      }
    }
    else
    {
      v23 = *(_DWORD *)(v1 + 68);
      sub_1166E0((__int64)v32);
      *(_DWORD *)(v1 + 68) = v23;
    }
    v20 = 1;
    goto LABEL_37;
  }
  v18 = *(_QWORD *)(v1 + 72);
  if ( *(_QWORD *)(v18 + 32) == 2 )
  {
    v19 = *(_QWORD *)(v18 + 24);
    if ( *(_DWORD *)(v19 + 4) == dtype_size
      && *(_DWORD *)(v19 + 84) == dtype_size
      && dtype_size == get_tinfo_size(0, *(_QWORD *)(v18 + 72), 0) )
    {
      v33 = (char *)(v1 + 32);
      sub_116350((char *)(v1 + 32), *(char **)(v18 + 24));
      v30 = *(_QWORD *)(v18 + 24);
      v21 = (char *)(v1 + 48);
      sub_116350((char *)(v1 + 48), (char *)(v30 + 80));
      v32 = (unsigned __int8 *)(v1 + 64);
      sub_11EAC0(v1 + 64, (unsigned __int8 *)v34);
      goto LABEL_47;
    }
  }
  v20 = 0;
LABEL_37:
  v31 = v20;
  sub_1166E0((__int64)&v35);
  sub_1166E0((__int64)v34);
  return v31;
}
