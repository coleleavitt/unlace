__int64 __fastcall sub_1AF0190(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  bool v4; // cc
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdi
  __int64 v8; // r8
  __int64 v9; // r9
  unsigned __int64 v10; // rax
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  _QWORD v21[4]; // [rsp+8h] [rbp-20h] BYREF

  v4 = *(_DWORD *)(a1 + 64) <= 0x2Du;
  v21[0] = *(_QWORD *)(a2 + 48);
  if ( v4 )
  {
    v7 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1BEF0((__int64)v21, a2, a3, a4) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                   & 0xFFFFFFFFFFFFFFF0LL);
    v10 = *(unsigned __int8 *)(v7 + 16);
    if ( (_BYTE)v10 == 13 )
    {
      if ( (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0x34 )
        return 0;
    }
    else if ( (_BYTE)v10 == 47 )
    {
      v12 = sub_F60F10(v7, a2, v5, v6, v8, v9);
      if ( (*((_BYTE *)v12 + 74) & 1) != 0 || (v12[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
        return 0;
    }
    else if ( (unsigned __int8)v10 <= 0x2Au )
    {
      v20 = 0x40600004C00LL;
      if ( _bittest64(&v20, v10) )
        return 0;
    }
    return 1;
  }
  else if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(sub_C1BEF0((__int64)v21, a2, a3, a4) & 0xFFFFFFFFFFFFFFF0LL)
                                              + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL)
           & 0xF7) == 0x22 )
  {
    return 2;
  }
  else
  {
    v21[0] = *(_QWORD *)(a2 + 48);
    v15 = sub_C1BEF0((__int64)v21, a2, v13, v14);
    return (unsigned __int8)sub_F61140(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL), a2, v16, v17, v18, v19) ^ 1u;
  }
}
