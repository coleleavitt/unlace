__int64 __fastcall sub_151FF0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v11; // r10d
  char v13; // al
  __int64 v14; // rax
  int v15; // r14d
  char v16; // al
  __int64 v17; // rdx
  __int64 v18; // rcx

  do
  {
    if ( (unsigned __int8)sub_14E7A0(a1, *(_BYTE *)(a4 + 32), *(_QWORD *)(a4 + 40)) )
      break;
    v11 = sub_14E7A0(a1, *(_BYTE *)(a4 + 48), *(_QWORD *)(a4 + 56));
    if ( (_BYTE)v11 )
      break;
    if ( *(_BYTE *)a2 == 10 )
      return v11;
    if ( !a3 )
      return v11;
    v13 = sub_151D70(a6, a1);
    v11 = 0;
    if ( v13 )
    {
      if ( *(_BYTE *)a2 != 4 )
        return v11;
      v14 = *(_QWORD *)(a2 + 8);
      if ( *(_DWORD *)v14 != 12 || *(_BYTE *)(v14 + 32) != 10 && *(_BYTE *)(v14 + 48) != 10 )
        return v11;
    }
    v15 = *(_DWORD *)(a2 + 4);
    v16 = sub_13C7E0(a3, a2, (int *)a4, a5, a2, 0xFFFFFFFF);
    v11 = 0;
    if ( v16 )
    {
      sub_11C950((unsigned __int8 *)a2, a1, v17, v18);
      if ( *(_DWORD *)(a2 + 4) < v15 )
        sub_1207E0((char *)a2, a1, 9, *(_QWORD *)(a4 + 24), v15);
      return 1;
    }
    if ( *(_BYTE *)a2 != 4 )
      return v11;
    a4 = *(_QWORD *)(a2 + 8);
    if ( *(_DWORD *)a4 != 12 )
      return v11;
    a2 = a4 + 48;
    a6 = a4 + 32;
  }
  while ( !(unsigned __int8)sub_151FF0(a1, a4 + 32, a3, a4, a5, a4 + 48) );
  return 1;
}
