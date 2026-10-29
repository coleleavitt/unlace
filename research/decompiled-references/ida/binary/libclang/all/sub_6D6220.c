__int64 __fastcall sub_6D6220(__int64 a1, unsigned int a2)
{
  __int64 v3; // rax
  __int64 v4; // rdi
  __int64 result; // rax
  __int64 v6; // r12
  unsigned __int8 v7; // r13
  __int64 v8; // rbp
  __int64 v9; // rax

  if ( (_BYTE)a2 )
    return a2;
  if ( **(_BYTE **)a1 )
    v3 = **(_QWORD **)(a1 + 8);
  else
    v3 = **(_QWORD **)(a1 + 16);
  v4 = *(_QWORD *)(*(_QWORD *)(v3 + 32) & 0xFFFFFFFFFFFFFFF0LL);
  if ( (unsigned int)*(unsigned __int8 *)(v4 + 16) - 34 > 1 )
    v4 = sub_B0D320(v4);
  result = sub_B0DBD0(v4);
  if ( (_BYTE)result )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = **(_BYTE **)a1;
    v8 = sub_B0EBE0(**(_QWORD **)(a1 + 16), v6);
    v9 = sub_B0EBE0(**(_QWORD **)(a1 + 8), *(_QWORD *)(a1 + 24));
    return sub_6D58F0(v6, v9, v8, v7);
  }
  return result;
}

