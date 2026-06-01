__int64 __fastcall sub_A9B8D0(__int64 a1, __int64 a2, unsigned int a3, unsigned int a4, char a5)
{
  unsigned int v6; // ebx
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v10; // rax

  v6 = sub_A9B400(*(unsigned int ***)(a1 + 56), a3, a4, a2, a5);
  if ( !(_BYTE)v6 )
    return v6;
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 504LL);
  if ( a5 )
  {
    v8 = sub_FF9A30(v7);
    ++*(_DWORD *)(v8 + 120);
    return v6;
  }
  v10 = sub_FF9A30(v7);
  ++*(_DWORD *)(v10 + 116);
  return v6;
}

