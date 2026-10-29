__int64 __fastcall sub_47AE60(__int64 a1, _QWORD *a2, __int64 a3)
{
  unsigned int v4; // r14d
  __int64 v5; // rdx
  __int64 v6; // rbp
  __int64 v7; // rbp
  __int64 v8; // r13
  _DWORD *v9; // rax
  __int64 v10; // rax
  __int64 v12; // r12
  _BYTE v13[57]; // [rsp+Fh] [rbp-39h] BYREF

  sub_4B0770(a1 + 88);
  if ( !(unsigned __int8)sub_4B0A40(a1 + 88, *(_QWORD *)(a1 + 56), *a2, a3, v13) )
    return 0;
  v4 = v13[0];
  if ( !v13[0] )
    return 0;
  v5 = *(_QWORD *)(a3 + 32);
  if ( v5 )
  {
    v6 = *(unsigned int *)(v5 - 4);
    if ( (_DWORD)v6 )
    {
      v7 = 8 * v6;
      v8 = 0;
      while ( 1 )
      {
        v10 = *(_QWORD *)(a3 + 8)
            + 24LL * (unsigned int)(*(_DWORD *)(v8 + v5) + *(_DWORD *)(a3 + 20) * *(_DWORD *)(v8 + v5 + 4));
        if ( *(_DWORD *)(v10 + 16) != *(_DWORD *)(a3 + 24) )
        {
          sub_1872CE0("");
          sub_1873130(114, 157);
        }
        v12 = *(_QWORD *)v10;
        if ( *(_WORD *)(v12 + 4) )
          break;
        v9 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( !v9 || *v9 != 5 && *v9 != *(_DWORD *)(a1 + 24) )
          break;
        if ( v9[1] )
          break;
        v8 += 8;
        if ( v7 == v8 )
          return v4;
        v5 = *(_QWORD *)(a3 + 32);
      }
      return 0;
    }
  }
  return v4;
}

