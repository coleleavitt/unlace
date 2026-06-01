bool __fastcall sub_F40D00(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // r8
  __int64 v8; // r9
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _QWORD *v14; // rbx

  v2 = sub_F3F130(a1);
  v3 = *(_QWORD *)(*(_QWORD *)(v2 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v3 + 16) == 13 )
    return ((*(_WORD *)(v3 + 18) >> 3) & 0x1FF) == 434;
  for ( ; (unsigned int)*(unsigned __int8 *)(v2 + 16) - 2 <= 1; v2 = sub_F40CA0(v2) )
    ;
  v4 = sub_F3F130(v2);
  if ( *(_BYTE *)(v4 + 16) != 48 )
    return 0;
  v9 = sub_F3F480(v4, a2, v5, v6, v7, v8);
  v14 = v9;
  if ( !v9 || (*((_BYTE *)v9 + 28) & 0x7Fu) - 59 > 2 )
    BUG();
  sub_6E4DB0((__int64 *)(v9[13] + 96LL), v9[13], v10, v11, v12, v13);
  return (*(_BYTE *)(v14[16] + 10LL) & 0x10) != 0;
}

