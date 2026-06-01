/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_43FCC
// Address: 0x0000000000043FCC

//----- (0000000000043FCC) ----------------------------------------------------
__int64 __fastcall sub_43FCC(__int64 a1)
{
  __int64 v2; // x2
  __int64 v3; // x2
  __int64 v4; // x2
  _QWORD *v5; // x26
  char v6; // w28
  __int64 v7; // x27
  bool v8; // w22
  unsigned int v9; // w23
  _DWORD *v10; // x0
  _DWORD *v11; // x24
  __int64 v12; // x0
  _QWORD *v13; // x8
  __int64 v14; // x8
  __int64 v15; // x9
  _QWORD *v16; // t1
  int v18; // w8
  __int64 v19; // x8
  __int64 v20; // x11
  __int64 v21; // x12
  __int64 v22; // x10
  unsigned __int64 v23; // x9
  __int64 v24; // x0
  __int64 v25; // x8
  _QWORD *v26; // x1
  int v27; // [xsp+1Ch] [xbp-1F4h] BYREF
  struct utsname name; // [xsp+20h] [xbp-1F0h] BYREF

  _ReadStatusReg(TPIDR_EL0);
  v2 = *(_QWORD *)(a1 + 1536);
  if ( v2 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v2,
      a1 + 1544,
      *(unsigned __int8 *)(a1 + 1548));
  v3 = *(_QWORD *)(a1 + 1552);
  *(_QWORD *)(a1 + 1536) = 0;
  *(_BYTE *)(a1 + 1548) = 0;
  if ( v3 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v3,
      a1 + 1560,
      *(unsigned __int8 *)(a1 + 1564));
  v4 = *(_QWORD *)(a1 + 1568);
  *(_QWORD *)(a1 + 1552) = 0;
  *(_BYTE *)(a1 + 1564) = 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, _QWORD))(*(_QWORD *)a1 + 320LL))(
      a1,
      4,
      v4,
      a1 + 1576,
      *(unsigned __int8 *)(a1 + 1580));
  *(_QWORD *)(a1 + 1568) = 0;
  *(_BYTE *)(a1 + 1580) = 0;
  sub_43DFC(a1);
  v5 = *(_QWORD **)(a1 + 1736);
  v6 = 0;
  v7 = a1 + 1744;
  while ( v5 != (_QWORD *)v7 )
  {
    v8 = *((_DWORD *)v5 + 10) == *(_DWORD *)(a1 + 1844);
    if ( *(_BYTE *)(a1 + 1855) )
    {
      if ( dword_16401C < 0 )
      {
        dword_16401C = 0;
        if ( !uname(&name) )
        {
          v27 = 0;
          if ( sscanf(name.release, "%d", &v27) == 1 && v27 <= 4 )
            dword_16401C = 1;
        }
        if ( !dword_16401C )
          goto LABEL_26;
      }
      else if ( !dword_16401C )
      {
        goto LABEL_26;
      }
      if ( !ptrace(PTRACE_CONT, *((unsigned int *)v5 + 10), 0, 0) )
      {
        v9 = *((_DWORD *)v5 + 10);
        v10 = (_DWORD *)__errno(0);
        *v10 = 0;
        if ( (byte_166A38 & 1) != 0 )
          goto LABEL_24;
        v11 = v10;
        if ( (unsigned int)syscall(130, v9, 19) && *v11 == 38 )
        {
          *v11 = 0;
          byte_166A38 = 1;
          goto LABEL_24;
        }
        if ( byte_166A38 == 1 )
LABEL_24:
          kill(v9, 19);
        *(_DWORD *)name.sysname = 0;
        sub_4B230(a1, (int)&name, *((_DWORD *)v5 + 10));
      }
    }
LABEL_26:
    v6 |= v8;
    v12 = ptrace(PTRACE_DETACH, *((unsigned int *)v5 + 10), 0, 0);
    v13 = (_QWORD *)v5[1];
    if ( v13 )
    {
      do
      {
        v5 = v13;
        v13 = (_QWORD *)*v13;
      }
      while ( v13 );
LABEL_31:
      if ( v12 )
        return 0xFFFFFFFFLL;
    }
    else
    {
      v14 = (__int64)(v5 + 2);
      if ( *(_QWORD **)v5[2] != v5 )
      {
        do
        {
          v15 = *(_QWORD *)v14;
          v16 = *(_QWORD **)(*(_QWORD *)v14 + 16LL);
          v14 = *(_QWORD *)v14 + 16LL;
          v5 = v16;
        }
        while ( *v16 != v15 );
        goto LABEL_31;
      }
      v5 = (_QWORD *)v5[2];
      if ( v12 )
        return 0xFFFFFFFFLL;
    }
  }
  if ( (v6 & 1) == 0 && ptrace(PTRACE_DETACH, *(unsigned int *)(a1 + 1844), 0, 0) )
    return 0xFFFFFFFFLL;
  *(_QWORD *)name.sysname = 0xFFFFFFFFLL;
  *(_QWORD *)&name.sysname[8] = -1;
  name.sysname[16] = 0;
  memset(&name.sysname[20], 0, 52);
  set_debug_event_code((__int64)&name, 12);
  v18 = *(_DWORD *)(a1 + 1844);
  *(_QWORD *)&name.sysname[8] = -1;
  name.sysname[16] = 1;
  *(_DWORD *)name.sysname = v18;
  *(_DWORD *)&name.sysname[4] = v18;
  if ( (*(_DWORD *)&name.sysname[20] & 0xFFFFFFF) != 0 )
  {
    v19 = *(_QWORD *)(a1 + 128);
    v20 = *(_QWORD *)(a1 + 152);
    v21 = *(_QWORD *)(a1 + 160);
    if ( *(_QWORD *)(a1 + 136) == v19 )
      v22 = 0;
    else
      v22 = 56 * ((*(_QWORD *)(a1 + 136) - v19) >> 3) - 1;
    v23 = v21 + v20;
    if ( v22 == v21 + v20 )
    {
      sub_4825C(a1 + 120);
      v19 = *(_QWORD *)(a1 + 128);
      v23 = *(_QWORD *)(a1 + 152) + *(_QWORD *)(a1 + 160);
    }
    v24 = *(_QWORD *)(v19 + 8 * (v23 / 0x38)) + 72 * (v23 % 0x38);
    *(_QWORD *)v24 = 0xFFFFFFFFLL;
    *(_QWORD *)(v24 + 8) = -1;
    *(_BYTE *)(v24 + 16) = 0;
    *(_DWORD *)(v24 + 20) = 0;
    copy_debug_event(v24, (__int64)&name);
    v25 = *(_QWORD *)(a1 + 160);
    *(_BYTE *)(a1 + 1932) = 0;
    *(_QWORD *)(a1 + 160) = v25 + 1;
  }
  v26 = *(_QWORD **)(a1 + 1744);
  *(_BYTE *)(a1 + 1934) = 0;
  *(_BYTE *)(a1 + 1853) = 1;
  sub_47620(a1 + 1736, v26);
  *(_QWORD *)(a1 + 1736) = v7;
  *(_OWORD *)(a1 + 1744) = 0u;
  *(_DWORD *)(a1 + 1844) = -1;
  *(_BYTE *)(a1 + 1852) = 0;
  free_debug_event((__int64)&name);
  return 1;
}
// 372E0: using guessed type __int64 __fastcall __errno(_QWORD);
// 16401C: using guessed type int dword_16401C;
// 166A38: using guessed type char byte_166A38;
