__int64 __fastcall sub_6B49D0(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  int v5; // edx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rsi
  __int64 v9; // rdi
  _QWORD v11[4]; // [rsp+8h] [rbp-20h] BYREF

  result = a2[1];
  if ( result )
  {
    while ( 1 )
    {
      v5 = *(_DWORD *)(result - 4);
      if ( !v5 )
        break;
      v6 = *(_QWORD *)(result + 8LL * (unsigned int)(v5 - 1));
      v11[0] = v6;
      if ( v6 )
        ++*(_DWORD *)(v6 + 8);
      sub_6ACAE0((_QWORD *)(a1 + 16), v11);
      result = a2[1];
      v7 = (unsigned int)(*(_DWORD *)(result - 4) - 1);
      v8 = *(_QWORD *)(result + 8 * v7);
      *(_DWORD *)(result - 4) = v7;
      if ( v8 )
      {
        v9 = *a2;
        if ( (*(_DWORD *)(v8 + 8))-- == 1 )
        {
          sub_15D7BC0(v9, v8);
          result = a2[1];
          if ( !result )
            break;
        }
      }
    }
  }
  return result;
}

