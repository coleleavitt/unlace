__int64 __fastcall sub_61A680(__int64 a1)
{
  __int64 v1; // r12
  __int64 v2; // rax
  _QWORD *v3; // rbp
  unsigned int v4; // r13d
  __int64 v6; // rsi
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // r12
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  unsigned __int64 v14; // rsi
  __int64 v15; // r14
  __int64 v16; // rdi

  v1 = *(_QWORD *)(a1 + 8);
  v2 = *(_QWORD *)(v1 + 64);
  v3 = *(_QWORD **)(v2 + 2880);
  if ( !v3 )
    return 0;
  v4 = *(_DWORD *)(a1 + 84);
  if ( v4 )
  {
    v6 = *(unsigned int *)(a1 + 88);
    if ( (_DWORD)v6 )
    {
      v7 = *(_QWORD *)(v1 + 32);
      v8 = (unsigned int)sub_FEDF50(*(_QWORD *)(a1 + 8), v6);
      v9 = (unsigned int)sub_FEDF50(v1, v4);
      if ( (unsigned __int8)sub_FEE100(*(_QWORD *)(a1 + 8), v9)
        && ((unsigned int)v8 & 0x7FFFFFFF) < *(_DWORD *)(v7 + 252) )
      {
        v10 = sub_FEE180(*(_QWORD *)(a1 + 8));
        result = sub_619F80((v10 << 32) | (unsigned int)v9, (__int64)v3, a1);
        if ( (_BYTE)result )
          return result;
        v15 = v8 << 32;
        v16 = (unsigned int)sub_FEE320(*(_QWORD *)(a1 + 8));
      }
      else
      {
        v15 = v8 << 32;
        v16 = (unsigned int)v9;
      }
      return sub_619F80(v15 | v16, (__int64)v3, a1);
    }
  }
  if ( !*(_BYTE *)(v1 + 280) && *(_BYTE *)(v1 + 272) )
  {
    v12 = *(_QWORD *)(v2 + 2880);
    v13 = v12;
    v14 = 0;
  }
  else
  {
    v12 = *(_QWORD *)(v2 + 2880);
    v13 = v12;
    v14 = (unsigned int)-((__int64)(v3[18] - v3[17]) >> 3);
  }
  return sub_619CC0((_QWORD *)a1, v14, v12, (__int64)(v3[15] - v3[14]) >> 3, v13, 0);
}

