__int64 __fastcall sub_14A2E0(__int64 a1, char a2, __int64 a3)
{
  unsigned int v3; // ebp
  int v4; // eax
  int v7; // ecx
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rdx
  _QWORD v11[5]; // [rsp+0h] [rbp-28h] BYREF

  v3 = 0;
  v11[1] = __readfsqword(0x28u);
  if ( a2 == 4 )
  {
    v4 = *(_DWORD *)a3;
    if ( *(_DWORD *)a3 == 22 )
    {
      if ( *(_BYTE *)(a3 + 48) != 2 )
        return v3;
      v3 = 1;
      v7 = *(unsigned __int8 *)(*(_QWORD *)(a3 + 56) + 16LL);
      *(_DWORD *)a3 = 14;
      v8 = a3 + 48;
      v9 = *(_QWORD *)(a3 + 24);
      v10 = 1LL << v7;
      if ( v7 >= 64 )
        v10 = 0;
      sub_11C550(v8, a1, v10, *(_DWORD *)(a3 + 36), v9, 0);
      v4 = *(_DWORD *)a3;
    }
    if ( v4 == 14 && sub_1183E0(a3, v11) )
      v3 |= sub_14A2E0(a1, *(unsigned __int8 *)v11[0], *(_QWORD *)(v11[0] + 8LL));
  }
  return v3;
}
