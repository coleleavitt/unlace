__int64 __fastcall sub_11A7B0(__int64 a1, __int64 a2, _QWORD *a3, bool a4)
{
  _BOOL4 v4; // r14d
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r13
  unsigned int v8; // ebp
  unsigned __int8 v10; // al
  _QWORD *v11; // rdx
  __int64 v12; // r13
  __int64 v13; // r14
  __int64 v14; // rax
  __int64 v15; // r15
  __int64 v16; // r13
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rdi
  __int64 tinfo_property; // rax
  __int64 v23; // rdi
  _QWORD v24[9]; // [rsp+0h] [rbp-48h] BYREF

  while ( 1 )
  {
    v4 = a4;
    v5 = a1;
    v6 = *(_QWORD *)a2;
    v24[1] = __readfsqword(0x28u);
    v7 = a3;
    *(_BYTE *)(a2 + 40) = 0;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD *, bool))(v6 + 16))(a2, a1, a3, a4);
    if ( v8 || *(_BYTE *)(a2 + 40) )
      return v8;
    v10 = *(_BYTE *)a1;
    if ( *(_BYTE *)a1 != 10 )
      break;
    if ( v7 && (get_tinfo_property(*v7, 2) & 0xF) == 0xA )
    {
      v21 = *v7;
      v24[0] = 0;
      tinfo_property = get_tinfo_property(v21, 9);
      v23 = *(_QWORD *)(v5 + 8);
      v24[0] = tinfo_property;
      v8 = sub_11A7B0(v23, a2, v24, *(_DWORD *)(v23 + 20) > 0);
      clear_tinfo_t(v24);
      return v8;
    }
    a1 = *(_QWORD *)(a1 + 8);
    a4 = *(_DWORD *)(a1 + 20) > 0;
LABEL_22:
    a3 = nullptr;
  }
  if ( v10 > 0xAu )
  {
    if ( v10 != 14 )
      return v8;
    v8 = sub_11A7B0(*(_QWORD *)(a1 + 8), a2, 0, v4);
    if ( v8 )
      return v8;
    if ( *(_BYTE *)a1 != 14 )
    {
      if ( !under_debugger )
        sub_37E160(52565);
      goto LABEL_34;
    }
    a4 = v4;
    a1 = *(_QWORD *)(a1 + 8) + 16LL;
    goto LABEL_22;
  }
  if ( v10 == 4 )
  {
    v19 = *(_QWORD *)(a2 + 32);
    v20 = sub_11A700(*(_BYTE **)(a1 + 8), a2);
    *(_QWORD *)(a2 + 32) = v19;
    return v20;
  }
  else if ( v10 == 8 )
  {
    v11 = *(_QWORD **)(a1 + 8);
    v12 = v11[3];
    v13 = v12 + 80LL * v11[4];
    if ( v12 != v13 )
    {
      while ( 1 )
      {
        v18 = sub_11A7B0(v12, a2, v12 + 24, 0);
        if ( v18 )
          return v18;
        if ( *(_BYTE *)a1 != 8 )
          break;
        v12 += 80;
        if ( v13 == v12 )
        {
          v11 = *(_QWORD **)(a1 + 8);
          goto LABEL_9;
        }
      }
      if ( !under_debugger )
        sub_37E160(52562);
LABEL_34:
      BUG();
    }
LABEL_9:
    v14 = v11[7];
    v15 = v11[6];
    v16 = v15 + 16 * v14;
    if ( v16 != v15 )
    {
      while ( 1 )
      {
        v17 = v11 + 9;
        if ( v14 != 1 )
          v17 = nullptr;
        v18 = sub_11A7B0(v15, a2, v17, 1);
        if ( v18 )
          break;
        v15 += 16;
        if ( v16 == v15 )
          return v8;
        v11 = *(_QWORD **)(a1 + 8);
        v14 = v11[7];
      }
      return v18;
    }
  }
  return v8;
}
