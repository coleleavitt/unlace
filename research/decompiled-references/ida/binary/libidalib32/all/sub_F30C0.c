__int64 __fastcall sub_F30C0(__int64 a1, __int64 a2)
{
  __int64 v4; // rdx
  int v5; // r10d
  __int64 v6; // r9
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 v9; // rsi
  int v10; // ecx
  unsigned int v11; // eax

  if ( !(unsigned __int8)sub_13BCE0() )
    return sub_15E720(a1, a2, v4);
  v5 = *(_DWORD *)(a2 + 72);
  v6 = *(_QWORD *)(a1 + 1168);
  v4 = (unsigned int)(int)(float)((float)v5 * *(float *)(a1 + 1184));
  if ( !v6 )
    return sub_15E720(a1, a2, v4);
  v7 = *(_QWORD *)(a1 + 1160);
  v8 = 0;
  while ( 1 )
  {
    v9 = *(unsigned int *)(v7 + 8 * v8 + 4);
    v10 = *(_DWORD *)(v7 + 8 * v8);
    if ( *(_DWORD *)(v7 + 8 * v8 + 4) - v10 >= (unsigned int)v4 )
      break;
    ++v8;
    v4 = (unsigned int)(v10 + v4 - v9);
    if ( v8 == v6 )
      return sub_15E720(a1, a2, v4);
  }
  v11 = 0x7FFFFFFF;
  if ( v5 != *(_DWORD *)(a2 + 100) )
  {
    v9 = (unsigned int)(v10 + v4);
    v11 = 0;
  }
  return sub_15E6E0(a1, v9, v11);
}

