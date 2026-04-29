__int64 __fastcall sub_188B0(__int64 a1, __int64 a2, __int64 a3)
{
  int v4; // eax
  char v6; // dl
  __int64 v7; // rax
  int v8; // edx
  __int64 v9; // rdx
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  _QWORD v11[5]; // [rsp+10h] [rbp-28h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( !a3 )
    return 1;
  if ( *(_DWORD *)(a2 + 88) || *(_WORD *)(a2 + 54) == 0xFFF1 )
  {
    if ( !strcmp((const char *)a3, "_SDA_BASE_") || !strcmp((const char *)a3, "_gp") )
    {
      netnode_check(&v10, "$ nds32", 0, 1);
      v11[0] = *(_QWORD *)(a2 + 80) + 1LL;
      netnode_supset(v10, -2, v11, 8, 65);
    }
    else if ( !strcmp((const char *)a3, "_ITB_BASE_") || !strcmp((const char *)a3, "_EX9_BASE_") )
    {
      netnode_check(&v10, "$ nds32", 0, 1);
      v11[0] = *(_QWORD *)(a2 + 80) + 1LL;
      netnode_supset(v10, -3, v11, 8, 65);
    }
  }
  if ( *(_BYTE *)a3 != 36 )
    return 1;
  v4 = *(unsigned __int8 *)(a3 + 1);
  if ( (_BYTE)v4 == 100 )
  {
    v7 = sub_394F0(a2, *(_QWORD *)(a1 + 16), *(_QWORD *)(*(_QWORD *)(a1 + 8) + 328LL));
    v8 = *(char *)(a3 + 2);
    if ( (unsigned __int8)(*(_BYTE *)(a3 + 2) - 48) > 9u )
    {
      v9 = 4;
    }
    else
    {
      if ( v8 - 48 > 3 )
        return 0;
      v9 = 1 << (v8 - 48);
    }
    create_data(v7, 0, v9, -1);
    return 0;
  }
  if ( (_BYTE)v4 != 99 )
    return 1;
  v6 = *(_BYTE *)(a3 + 2);
  LOBYTE(v4) = v6 == 0;
  return ((v6 == 46) | v4) ^ 1u;
}
