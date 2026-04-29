__int64 __fastcall sub_3EBA20(_QWORD *a1, __int64 a2, __int64 a3)
{
  char v3; // al
  __int64 v5; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  _QWORD v11[7]; // [rsp+0h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  if ( (unsigned int)(*(_DWORD *)a2 - 12) > 1 )
    return 0;
  v3 = *(_BYTE *)(a2 + 48);
  if ( *(_BYTE *)(a2 + 32) == 2 )
  {
    if ( (*(_BYTE *)(a2 + 33) & 8) == 0 )
    {
      if ( v3 != 2 || (*(_BYTE *)(a2 + 49) & 8) == 0 )
        return 0;
      v5 = a2 + 48;
      v7 = a2 + 32;
      v6 = a2 + 48;
      goto LABEL_8;
    }
    v5 = a2 + 48;
    v6 = a2 + 32;
    v7 = a2 + 48;
  }
  else
  {
    if ( v3 != 2 || (*(_BYTE *)(a2 + 49) & 8) == 0 )
      return 0;
    v5 = a2 + 48;
    v7 = a2 + 32;
    v3 = *(_BYTE *)(a2 + 32);
    v6 = a2 + 48;
  }
  if ( v3 != 10
    || (v10 = *(_QWORD *)(v7 + 8), *(_BYTE *)v10 != 6)
    || (*(_BYTE *)(v7 + 1) & 8) == 0
    || *(_QWORD *)(v10 + 8) != a3 )
  {
LABEL_8:
    if ( (unsigned __int8)sub_158E50(v7, v11, 1u) )
    {
      v8 = sub_32AEF0(*(_QWORD *)(*(_QWORD *)(v6 + 8) + 16LL), *(_DWORD *)(v6 + 4), 0);
      v9 = v11[0];
      if ( *(_DWORD *)a2 == 13 )
      {
        if ( v7 == v5 )
          v9 = -v11[0];
        else
          v8 = -v8;
      }
      *a1 = v9 + v8;
      return 1;
    }
    return 0;
  }
  *a1 = a3;
  return 1;
}
