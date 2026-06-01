char __fastcall sub_F41720(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  unsigned __int64 v15; // rax
  _QWORD *v16; // rax
  unsigned __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9

  v6 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
  v7 = *(_QWORD *)v6;
  v8 = *(unsigned __int8 *)(*(_QWORD *)v6 + 16LL);
  if ( (_BYTE)v8 == 13 )
  {
    LOBYTE(v9) = (((*(_WORD *)(v7 + 18) >> 3) + 76) & 0x1FFu) <= 0xB;
    return v9;
  }
  if ( (_BYTE)v8 == 47 )
  {
    v10 = sub_F3D150(*(_QWORD **)(v7 + 24), a2, v8, a4, a5, a6);
    if ( (*((_BYTE *)v10 + 74) & 1) != 0 || (v10[16] & 0xFFFFFFFFFFFFFFF8LL) != 0 )
    {
      v16 = sub_F3D150(*(_QWORD **)(v7 + 24), a2, v11, v12, v13, v14);
      v17 = sub_6D3020((__int64)v16);
      LOBYTE(v9) = sub_F41620(*(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFF0LL), a2, v18, v19, v20, v21);
      return v9;
    }
    v15 = *(_QWORD *)(a1 + 8) & 0xFFFFFFFFFFFFFFF0LL;
    v7 = *(_QWORD *)v15;
    LOBYTE(v8) = *(_BYTE *)(*(_QWORD *)v15 + 16LL);
  }
  if ( (_BYTE)v8 == 10 )
  {
    LOBYTE(v9) = *(_BYTE *)(v7 + 32) & 1;
  }
  else
  {
    LOBYTE(v9) = 0;
    if ( (_BYTE)v8 == 19 )
      return (*(__int64 *)(v7 + 32) >> 1) & 1;
  }
  return v9;
}

