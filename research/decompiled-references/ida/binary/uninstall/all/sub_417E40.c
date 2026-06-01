__int64 __fastcall sub_417E40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  __int64 result; // rax
  int v4; // r13d
  int v5; // ebx
  __int64 v6; // rax
  __int64 v7; // [rsp+10h] [rbp-68h] BYREF
  int v8; // [rsp+1Ch] [rbp-5Ch] BYREF
  _BYTE v9[40]; // [rsp+20h] [rbp-58h] BYREF

  v2 = a1;
  result = a1;
  if ( *(_DWORD *)(a2 + 24) )
  {
    v4 = 0;
    if ( *(int *)(a2 + 24) <= 0 )
    {
      return v2;
    }
    else
    {
      while ( 1 )
      {
        if ( *(_UNKNOWN ***)(v2 + 24) == &off_655E20 )
        {
          v8 = *(_DWORD *)(*(_QWORD *)(v2 + 32) + 8LL);
        }
        else if ( (unsigned int)sub_46FB10(*(_QWORD *)(a2 + 40), v2, &v8) )
        {
          break;
        }
        v5 = *(_DWORD *)(*(_QWORD *)(a2 + 16) + 4LL * v4);
        if ( v5 < -1 )
          v5 += v8 + 1;
        if ( (unsigned int)sub_46FB70(*(_QWORD *)(a2 + 40), v2, (unsigned int)v5, &v7) )
          break;
        if ( !v7 )
        {
          sub_49F6F0(v9, v5);
          v6 = *(_QWORD *)(v2 + 8);
          if ( !v6 )
            LODWORD(v6) = sub_47B3B0(v2);
          sub_48B710(
            *(_QWORD *)(a2 + 40),
            (unsigned int)"element ",
            (unsigned int)v9,
            (unsigned int)" missing from sublist \"",
            v6,
            (unsigned int)"\"");
          break;
        }
        ++v4;
        v2 = v7;
        if ( *(_DWORD *)(a2 + 24) <= v4 )
          return v2;
      }
      *(_DWORD *)(a2 + 48) = 1;
      return 0;
    }
  }
  return result;
}

