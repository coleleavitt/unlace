__int64 __fastcall sub_3B5B0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r12
  __int64 v6; // rbp
  __int64 v7; // r13
  __int64 (__fastcall *hexdsp)(__int64, __int64, __int64); // rax
  __int64 v9; // rbx
  int v10; // eax
  int v11; // eax
  int (__fastcall *v12)(__int64, __int64, __int64); // rax

  v5 = a1;
  v6 = a2;
  v7 = *(_QWORD *)(a1 + 16);
  if ( v7 )
  {
    while ( 1 )
    {
      hexdsp = (__int64 (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
      v9 = v7 + 32;
      a2 = v6;
      a1 = 296;
      v10 = hexdsp(296, v6, v7 + 32);
      a3 = *(_QWORD *)(v7 + 24);
      if ( v10 < 0 )
        a3 = *(_QWORD *)(v7 + 16);
      v11 = (v10 >> 31) & 1;
      if ( !a3 )
        break;
      v7 = a3;
    }
    if ( !(_BYTE)v11 )
      goto LABEL_10;
  }
  else
  {
    v7 = a1 + 8;
  }
  if ( v7 == *(_QWORD *)(v5 + 24) )
    return 0;
  a1 = v7;
  v7 = std::_Rb_tree_decrement(v7, a2, a3, a4, a5);
  v9 = v7 + 32;
LABEL_10:
  v12 = (int (__fastcall *)(__int64, __int64, __int64))get_hexdsp(a1, a2);
  if ( v12(296, v9, v6) < 0 )
    return 0;
  return v7;
}
