__int64 __fastcall sub_15F2610(__int64 a1, char a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rbx
  int v10; // eax
  __int64 v12; // rax

  v6 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v6 )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = v7 + 8 * v6;
  v9 = *(_QWORD *)(v8 - 8);
  v10 = *(_BYTE *)(v9 + 8) & 7;
  if ( a2 )
  {
    a4 = (unsigned int)(v10 - 1);
    if ( (unsigned __int8)(v10 - 1) <= 2u && (_BYTE)v10 != 2 )
    {
      v8 -= 8;
      while ( v7 != v8 )
      {
        v9 = *(_QWORD *)(v8 - 8);
        v8 -= 8;
        v10 = *(_BYTE *)(v9 + 8) & 7;
        a4 = (unsigned int)(v10 - 1);
        if ( (unsigned __int8)(v10 - 1) > 2u || (_BYTE)v10 == 2 )
          goto LABEL_11;
      }
      return 0;
    }
  }
LABEL_11:
  if ( (_BYTE)v10 != 2 )
    return 0;
  v12 = *(_QWORD *)(v9 + 1584);
  if ( v12 )
  {
    if ( *(_QWORD *)(v9 + 1592)
      && !(unsigned __int8)sub_B91990(v12 + 64, *(_QWORD *)(a1 + 544), v8, a4, v7, a6)
      && *(_BYTE *)(v9 + 1600) )
    {
      return 0;
    }
  }
  return v9;
}
