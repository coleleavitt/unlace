__int64 __fastcall sub_7CBBB0(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 *v4; // rbx
  __int64 *v5; // r13
  int v7; // r15d
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rbp
  __int64 result; // rax
  __int64 v12; // rdx
  _DWORD *v13; // rax

  if ( *(_BYTE *)(a1 + 168) )
    return 0;
  v4 = *(__int64 **)(a1 + 2392);
  if ( v4 )
  {
    v5 = &v4[*((unsigned int *)v4 - 1)];
    if ( v4 != v5 )
    {
      v7 = 1;
      do
      {
        v8 = *v4++;
        v7 &= (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v8 + 192LL))(v8, a2, a3);
      }
      while ( v5 != v4 );
      if ( !(_BYTE)v7 )
        return 0;
    }
  }
  v9 = *(_QWORD *)(a1 + 2328);
  v10 = a2 >> 1;
  if ( !v9 )
    return 1;
  result = 1;
  if ( (unsigned int)v10 < *(_DWORD *)(v9 - 4) )
  {
    v12 = *(_QWORD *)(v9 + 8 * v10);
    if ( v12 )
    {
      if ( !*(_WORD *)(v12 + 4) )
      {
        v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
        if ( v13 )
        {
          if ( !*v13 && v13[1] == 2 )
            sub_15D2CB0(*(_QWORD *)(a1 + 144), *(_QWORD *)(v12 + 32));
        }
      }
      return 0;
    }
  }
  return result;
}

