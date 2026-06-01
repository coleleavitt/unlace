__int64 __fastcall sub_99E770(__int64 a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v4; // r15
  __int64 v5; // r12
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v11; // rbp
  __int64 v12; // rax

  v4 = *(_QWORD *)(a1 + 128);
  v5 = *(_QWORD *)(a1 + 136);
  sub_999430(a1, a2);
  v8 = *(unsigned int *)(a2 + 4);
  if ( !(_DWORD)v8 )
    return *(_QWORD *)(a1 + 16);
  v11 = a2 + 8 * v8 + 16;
  if ( (**(_WORD **)(a2 + 8 * v8 + 8) & 0x1FF) != 0x8B )
  {
    sub_99A450((_QWORD *)a1, *(_QWORD *)(a1 + 128), *(_QWORD *)(a1 + 136), v4, v5, a2);
    v11 = a2 + 8LL * *(unsigned int *)(a2 + 4) + 16;
  }
  v9 = *(_QWORD *)(a1 + 16);
  if ( a2 + 16 != v11 )
  {
    while ( 1 )
    {
      v12 = sub_99D480(a1, *(_QWORD *)(v11 - 8), 1, a3, v6, v7);
      a3 = *(_BYTE *)(a1 + 320);
      if ( v12 )
        v9 = v12;
      if ( a3 )
        break;
      v11 -= 8;
      if ( a2 + 16 == v11 )
        return v9;
    }
    return 0;
  }
  return v9;
}
