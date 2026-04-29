__int64 __fastcall sub_160960(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned int v5; // r12d
  __int64 v7; // r14
  __int64 v8; // rax
  char v9; // r12
  char v10; // al
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // r13
  int tinfo_property; // eax
  __int64 v15; // r8
  int v16; // r9d
  __int64 v17; // r13
  __int64 v18; // rsi
  __int64 v19; // rsi
  int v20; // eax
  __int64 v21; // r13
  unsigned int v22; // eax
  _QWORD *v23; // rbx
  char *v24; // [rsp+18h] [rbp-E8h]
  __int64 v25; // [rsp+30h] [rbp-D0h]
  __int64 v26; // [rsp+40h] [rbp-C0h]
  int v27; // [rsp+4Ch] [rbp-B4h]
  unsigned __int64 v29; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v30; // [rsp+68h] [rbp-98h]
  unsigned __int64 v31; // [rsp+70h] [rbp-90h] BYREF
  __int64 v32; // [rsp+78h] [rbp-88h]
  __int64 v33; // [rsp+80h] [rbp-80h] BYREF
  __int64 v34; // [rsp+88h] [rbp-78h]
  __int64 v35; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v36; // [rsp+A8h] [rbp-58h]
  __int64 v37; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v38; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-38h]

  v39 = __readfsqword(0x28u);
  if ( a2 != a3 && (!a2 || *(_DWORD *)a2 != 4 || *(_BYTE *)(a2 + 32) != 4 || *(_QWORD *)(a2 + 40) != a3)
    || *(_BYTE *)(*(_QWORD *)(a3 + 40) + 1LL) != 98 )
  {
    return 0;
  }
  v7 = *(_QWORD *)(a3 + 72);
  v8 = *(_QWORD *)(v7 + 24);
  if ( *(_BYTE *)v8 == 10 && **(_BYTE **)(v8 + 8) == 1 )
  {
    v9 = 1;
  }
  else
  {
    v9 = 0;
    if ( *(_BYTE *)(v8 + 80) != 2 )
      return 0;
  }
  if ( !(unsigned __int8)sub_5E300((_QWORD *)(v7 + 96)) || *(_QWORD *)(v7 + 120) )
    return 0;
  if ( a2 != a3 )
  {
    if ( !v9 || *(_BYTE *)(*(_QWORD *)(v7 + 24) + 80LL) != 2 )
      return 0;
    sub_11DFC0((__int64)&v31, a1, a3, 1u);
    v35 = 0;
    v36 = 0;
    v37 = 0;
    v38 = 0;
    sub_121920(a1, &v35, a2 + 64, 1u);
    v10 = sub_5E200(&v31, &v35);
    v11 = v37;
    if ( v10 || (v12 = sub_3110F0(&v33, &v37), v11 = v37, v12) )
    {
      if ( v11 )
      {
        *(_QWORD *)&v38 = 0;
        qfree(v11);
      }
      qfree(v35);
      if ( v33 )
      {
        v34 = 0;
        qfree(v33);
      }
      qfree(v31);
      return 0;
    }
    if ( v37 )
    {
      *(_QWORD *)&v38 = 0;
      qfree(v37);
    }
    qfree(v35);
    if ( v33 )
    {
      v34 = 0;
      qfree(v33);
    }
    qfree(v31);
  }
  v13 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v26 = v13;
  tinfo_property = get_tinfo_property(*(_QWORD *)(*(_QWORD *)(v7 + 24) + 24LL), 14);
  v27 = sub_1163D0(tinfo_property);
  if ( v27 > *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 1504LL) + 80LL)
    || !(unsigned __int8)sub_14F580(v13, a1, a2, *(_QWORD *)(v7 + 24), v15, v16) )
  {
    return 0;
  }
  v30 = 0;
  v29 = 0xFFFFFFFF00000000LL;
  v17 = j__qalloc_or_throw(80);
  v18 = *(_QWORD *)(a3 + 24);
  *(_QWORD *)(v17 + 40) = 0;
  *(_QWORD *)(v17 + 32) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 48) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 56) = 0;
  *(_QWORD *)(v17 + 64) = 0xFFFFFFFF00000000LL;
  *(_QWORD *)(v17 + 72) = 0;
  sub_329320(v17, v18);
  *(_DWORD *)v17 = 22;
  sub_11A350(v17 + 32, v26, 1, v27, -1, 0);
  sub_11EAC0(v17 + 48, (unsigned __int8 *)(*(_QWORD *)(v7 + 24) + 80LL));
  if ( v27 == 2 && v9 )
    sub_11FB80((char *)(v17 + 48), v26, 20, *(_QWORD *)(a3 + 24), 15, *(_DWORD *)(v17 + 52));
  LOBYTE(v29) = 4;
  v30 = v17;
  v5 = sub_124490(v17 + 48, v26, 1, 1);
  if ( (_BYTE)v5 )
  {
    *(_DWORD *)(v17 + 68) = v27;
    HIDWORD(v29) = v27;
    v31 = 0xFFFFFFFF00000000LL;
    v32 = 0;
    v25 = j__qalloc_or_throw(80);
    v19 = *(_QWORD *)(a3 + 24);
    *(_QWORD *)(v25 + 40) = 0;
    *(_QWORD *)(v25 + 32) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v25 + 48) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v25 + 56) = 0;
    *(_QWORD *)(v25 + 64) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v25 + 72) = 0;
    sub_329320(v25, v19);
    *(_DWORD *)v25 = 2;
    v20 = *(_DWORD *)(v26 + 52);
    v35 = 0x200000001LL;
    LODWORD(v36) = v20;
    sub_11EAC0(v25 + 32, (unsigned __int8 *)&v35);
    sub_1166E0((__int64)&v35);
    sub_116350((char *)(v25 + 48), *(char **)(v7 + 24));
    *(_DWORD *)(v25 + 68) = v27;
    v32 = v25;
    LOBYTE(v31) = 4;
    HIDWORD(v31) = v27;
    sub_116350((char *)(a3 + 32), (char *)&v31);
    v24 = (char *)(a3 + 48);
    sub_116350((char *)(a3 + 48), (char *)&v29);
    if ( a2 != a3 )
    {
      v21 = j__qalloc_or_throw(80);
      *(_QWORD *)(v21 + 32) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 40) = 0;
      *(_QWORD *)(v21 + 48) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 56) = 0;
      *(_QWORD *)(v21 + 64) = 0xFFFFFFFF00000000LL;
      *(_QWORD *)(v21 + 72) = 0;
      *(_OWORD *)(v21 + 8) = 0;
      sub_11ECE0(v21, a3);
      *(_DWORD *)v21 = 20;
      sub_11EAC0(v21 + 64, (unsigned __int8 *)(a2 + 64));
      *(_DWORD *)(v21 + 68) = v27;
      sub_125030(v21, v26, 32, 1, 1);
      sub_11A350(v21 + 48, v26, 0, v27, -1, 0);
      sub_9CAA0(a1, (_QWORD *)v21, *(_QWORD *)(a2 + 16));
      sub_1555B0(v21, v26, a1, v21, 0, 0, 0);
    }
    v22 = *(_DWORD *)(v7 + 284);
    if ( v22 == 21 )
    {
      sub_11A120(v24, v26, 7, *(_QWORD *)(a3 + 24), v27);
      *(_DWORD *)a3 = 20;
    }
    else if ( v22 > 0x15 )
    {
      if ( v22 == 22 )
        *(_DWORD *)a3 = 21;
    }
    else if ( v22 == 19 )
    {
      *(_DWORD *)a3 = 4;
      sub_1166E0((__int64)v24);
    }
    else if ( v22 == 20 )
    {
      *(_DWORD *)a3 = 19;
    }
    sub_1166E0(a3 + 64);
    *(_DWORD *)(a3 + 68) = v27;
    if ( a2 == a3 )
    {
      v23 = (_QWORD *)j__qalloc_or_throw(80);
      sub_14AA20(v23, *(_QWORD *)(a3 + 24));
      sub_1171D0((__int64)v23, a3);
      *(_BYTE *)(a3 + 32) = 4;
      *(_DWORD *)a3 = 1;
      *(_QWORD *)(a3 + 40) = v23;
      *(_DWORD *)(a3 + 36) = v27;
      sub_11EAC0((__int64)v24, (unsigned __int8 *)(v25 + 32));
      sub_11EAC0(a3 + 64, (unsigned __int8 *)(v25 + 48));
    }
    else
    {
      sub_11EAC0(a2 + 64, *(unsigned __int8 **)(v25 + 56));
    }
    sub_1166E0((__int64)&v31);
  }
  sub_1166E0((__int64)&v29);
  return v5;
}
