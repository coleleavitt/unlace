char __fastcall sub_F3DD20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rsi
  __int64 v7; // rbx
  char v8; // al
  int v9; // eax
  _QWORD *v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rax
  __int16 v15; // dx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8

  v6 = *(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v6 + 16) - 57 > 1 )
  {
    v14 = *(_QWORD *)(*(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF0LL);
    if ( *(_BYTE *)(v14 + 16) == 13
      && (((*(_WORD *)(v14 + 18) >> 3) + 464) & 0x1FFu) <= 0x36
      && ((1LL << ((unsigned __int8)(*(_WORD *)(v14 + 18) >> 3) - 48)) & 0x70000000001FFFLL) != 0 )
    {
      LOBYTE(v9) = 1;
      v15 = (*(_WORD *)(v6 + 18) >> 3) & 0x1FF;
      if ( v15 != 100 )
        LOBYTE(v9) = ((v15 + 464) & 0x1FFu) <= 7;
    }
    else if ( sub_F346D0(*(_QWORD *)(*(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL)) )
    {
      LOBYTE(v9) = (((*(_WORD *)(v6 + 18) >> 3) + 404) & 0x1FFu) <= 0x2B;
    }
    else
    {
      LOBYTE(v9) = sub_9C8B50(v18, v6, v16, v17, v18);
    }
  }
  else
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v8 = *(_BYTE *)(v7 + 16);
    if ( v8 == 13 )
    {
      LOBYTE(v9) = (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0x13;
    }
    else if ( v8 == 47 )
    {
      v10 = sub_F3D150(*(_QWORD **)(v7 + 24), v6, a3, a4, a5, a6);
      if ( (*((_BYTE *)v10 + 74) & 1) != 0 )
        return (unsigned int)~*((_DWORD *)sub_F3D150(*(_QWORD **)(v7 + 24), v6, (__int64)v10, v11, v12, v13) + 19) >> 7;
      LOBYTE(v9) = 0;
      if ( (v10[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return (unsigned int)~*((_DWORD *)sub_F3D150(*(_QWORD **)(v7 + 24), v6, (__int64)v10, v11, v12, v13) + 19) >> 7;
    }
    else
    {
      LOBYTE(v9) = v8 == 10;
    }
  }
  return v9;
}

