__int64 __fastcall sub_1EC0290(__int64 a1, __int64 a2, char a3, unsigned int a4)
{
  __int64 v4; // r12
  unsigned int v5; // r12d
  char v7; // r13
  __int64 v8; // r8
  unsigned int v9; // r9d
  __int64 v10; // r10
  unsigned __int8 v11; // r11
  unsigned int v12; // eax
  __int64 v13; // rax
  size_t v14; // rax
  unsigned __int8 *v15[15]; // [rsp+0h] [rbp-78h] BYREF

  v4 = *(_QWORD *)(a1 + 56);
  if ( a3 )
  {
    sub_1EBFAB0(
      a2,
      *(_QWORD *)(a2 + 448),
      *(_QWORD *)(a2 + 456),
      *(_QWORD *)(a2 + 8),
      *(_QWORD *)(a2 + 16),
      a4,
      (*(_DWORD *)(a2 + 4) & 0xFFFFFFFB) == 1,
      v4,
      0);
    return 0;
  }
  v7 = sub_1EAADD0(a1, a2);
  v12 = sub_1EBFAB0(
          a2,
          *(_QWORD *)(a2 + 448),
          *(_QWORD *)(a2 + 456),
          v10,
          v8,
          v9,
          v11,
          v4,
          (*(_BYTE *)(**(_QWORD **)(*(_QWORD *)(a1 + 136) + 104LL) + 625LL) & 8) != 0);
  v5 = v12;
  if ( v7 || *(_BYTE *)(a1 + 9261) && v12 == 5 )
    return 0;
  if ( v12 == 1 )
  {
    v14 = j__strlen("malformed block record in AST file");
    sub_1EAD680(a1, "malformed block record in AST file", v14);
  }
  else if ( v12 == 3 && !*(_DWORD *)(a2 + 4) )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 288) + 32LL))(*(_QWORD *)(a1 + 288));
    if ( (unsigned __int8)sub_1FD88A0(v13, *(_QWORD *)(a2 + 8), *(_QWORD *)(a2 + 16)) )
    {
      v5 = 0;
      sub_FC70B0((__int64)v15, *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 504), 951);
      sub_AEC220(v15, *(_BYTE **)(a2 + 8), *(_QWORD *)(a2 + 16));
      sub_AEA040((__int64)v15);
    }
  }
  return v5;
}
