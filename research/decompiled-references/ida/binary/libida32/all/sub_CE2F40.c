__int64 __fastcall sub_CE2F40(__int64 a1, __int64 a2, char a3, _QWORD *a4)
{
  __int64 result; // rax
  __int64 v6; // rbp
  __int64 v7; // rsi
  __int64 v8; // rbx
  unsigned __int8 **v9; // rax
  __int64 v10[4]; // [rsp+8h] [rbp-20h] BYREF

  result = 1;
  if ( *(_DWORD *)(a1 + 1252) == *(_DWORD *)(a1 + 1256) )
  {
    v6 = a1 + 384;
    v7 = *(_QWORD *)(a1 + 1232);
    *(_QWORD *)(a1 + 1240) = *a4;
    if ( a3 )
    {
      v10[0] = sub_DFB160(*(_QWORD *)(a1 + 784), v7);
      v8 = *(_QWORD *)(a2 + 16);
      v9 = (unsigned __int8 **)sub_E0FE60(v6, v10, 2501, 1);
      if ( v9 )
        sub_AC60B0(v9, v8, 0xAu);
      sub_E10070(v6, *(unsigned int *)(v8 + 24), 103);
      return 0;
    }
    else
    {
      return sub_DA8140(a1 + 384, v7, a2);
    }
  }
  return result;
}

