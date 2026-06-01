__int64 __fastcall sub_4A3F60(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned int v6; // ebx
  int v7; // eax
  __int64 v8; // rsi
  int v10; // r13d
  int v12; // [rsp+4h] [rbp-44h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]

  v6 = 0;
  v7 = *(_DWORD *)(a1 + 24);
  v8 = *(_QWORD *)a1;
  v13 = __readfsqword(0x28u);
  v12 = v7;
  v10 = sub_79B3A0(&v12, v8, 1, 65);
  if ( v10 )
  {
    while ( !(unsigned __int8)sub_4A37F0(*(_QWORD *)a1, a2, *(_DWORD *)(a1 + 24), v6)
         || (*(unsigned int (__fastcall **)(_QWORD, _QWORD))(**(_QWORD **)(a2 + 40) + 8LL))(
              *(_QWORD *)(a2 + 40),
              *(_QWORD *)(a1 + 16)) != a4 )
    {
      if ( ++v6 == v10 )
        return (unsigned int)-1;
    }
    if ( a3 )
      netnode_qsupstr(*(unsigned int *)(a1 + 24), a3, v6, 82);
  }
  else
  {
    return (unsigned int)-1;
  }
  return v6;
}

