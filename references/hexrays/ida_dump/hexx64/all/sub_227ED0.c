__int64 __fastcall sub_227ED0(__int64 a1, __int64 a2, __int64 *a3, signed int a4)
{
  __int64 *v6; // rbx
  __int64 v8; // rdi
  bool v9; // zf
  __int64 v10; // rax
  int v11; // eax
  unsigned int v13; // eax
  __int64 v14; // r14
  __int64 v15; // rbx
  __int64 v16; // rax
  int v17; // edx
  unsigned __int64 v18; // rcx
  unsigned __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  bool v21; // [rsp+Fh] [rbp-59h]
  __int64 v22; // [rsp+18h] [rbp-50h] BYREF
  unsigned __int64 v23; // [rsp+20h] [rbp-48h] BYREF
  __int64 v24; // [rsp+28h] [rbp-40h]
  unsigned __int64 v25; // [rsp+38h] [rbp-30h]

  v25 = __readfsqword(0x28u);
  if ( a4 == -1 )
    return 1;
  v6 = a3;
  if ( a3 )
  {
    v8 = *a3;
    if ( (unsigned __int8)*a3 )
    {
      v13 = *(_DWORD *)(a1 + 72);
      if ( v13 <= 0x10 )
      {
        v13 = getinf(99);
        v8 = *v6;
      }
      if ( v13 != 176 && v13 != 256 )
      {
        if ( (get_tinfo_property(v8, 2) & 0xF) == 0xB )
          goto LABEL_42;
        v8 = *v6;
      }
      v14 = a4;
      if ( a4 == get_tinfo_size(0, v8, 0) )
      {
        v23 = -1;
        v9 = *(_BYTE *)(a2 + 8) == 5;
        v24 = 0;
        if ( !v9 )
          goto LABEL_20;
        if ( !(unsigned __int8)sub_21E630(a1, (__int64)&v23) )
          goto LABEL_20;
        if ( *(_BYTE *)(a2 + 8) != (_BYTE)v24 )
          goto LABEL_20;
        v16 = SHIDWORD(v24);
        if ( !a4 || !HIDWORD(v24) )
          goto LABEL_20;
        goto LABEL_30;
      }
LABEL_42:
      if ( !under_debugger )
        sub_383060(52299);
      goto LABEL_46;
    }
  }
  v23 = -1;
  v9 = *(_BYTE *)(a2 + 8) == 5;
  v24 = 0;
  if ( !v9
    || !(unsigned __int8)sub_21E630(a1, (__int64)&v23)
    || (_BYTE)v24 != *(_BYTE *)(a2 + 8)
    || (v14 = a4, v16 = SHIDWORD(v24), !a4)
    || !HIDWORD(v24) )
  {
LABEL_5:
    v10 = *(_QWORD *)(a1 + 1504);
    if ( (*(_BYTE *)(v10 + 50) & 8) != 0 )
      v11 = 16;
    else
      v11 = 2 * *(_DWORD *)(v10 + 80);
    if ( a4 > v11 || !sub_11CA80(a4) && !sub_11CB40(a4) )
      return 0;
    v6 = nullptr;
LABEL_20:
    if ( (unsigned __int8)sub_1EEC00(*(_QWORD *)(a1 + 1496), a4, *(_DWORD *)(a1 + 72), (__int64)v6) )
      return 0;
    if ( *(_BYTE *)(a2 + 8) == 5 )
    {
      v22 = 0;
      if ( !v6 || (copy_tinfo_t(&v22, v6), *(_BYTE *)(a2 + 8) == 5) )
      {
        v15 = *(_QWORD *)a2;
        v21 = v15 == sub_227D30(a1, *(_QWORD *)a2, &v22, a4);
        clear_tinfo_t(&v22);
        return v21;
      }
      if ( !under_debugger )
        sub_383060(51893);
LABEL_46:
      BUG();
    }
    return 1;
  }
  v6 = nullptr;
LABEL_30:
  v17 = v23;
  v18 = *(_QWORD *)a2;
  v19 = v16 + v23 - 1;
  if ( v19 < *(_QWORD *)a2 || (v20 = v14 + v18 - 1, v20 < v23) )
  {
    if ( v6 )
      goto LABEL_20;
    goto LABEL_5;
  }
  LOBYTE(v16) = v18 >= v23;
  LOBYTE(v17) = v19 >= v20;
  return v17 & (unsigned int)v16;
}
