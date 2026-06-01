__int64 __fastcall sub_42ED50(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // r12d
  __int64 result; // rax
  int v7; // r8d
  int v8; // r9d
  __int64 v9; // rbp
  int v10; // ebx
  char v11; // [rsp+0h] [rbp-68h]
  _BYTE v12[88]; // [rsp+10h] [rbp-58h] BYREF

  v5 = 0;
  for ( result = sub_457E20(a1, v12); result; result = sub_457DE0(v12) )
  {
    LODWORD(v9) = result + 32;
    if ( *(_DWORD *)(a1 + 60) == 1 || *(_DWORD *)(a1 + 60) == -1 )
      v9 = *(_QWORD *)(result + 32);
    ++v5;
    v10 = *(_DWORD *)(result + 24);
    if ( v5 != 1 )
    {
      sub_48EDF0(a2, ", ", 0xFFFFFFFFLL);
      if ( (v5 & 3) == 0 )
        sub_48EDF0(a2, "\n\t\t", 0xFFFFFFFFLL);
    }
    sub_490C60(a2, (unsigned int)"\"%s\"->pc %d", v9, a4 + v10, v7, v8, v11);
  }
  return result;
}

