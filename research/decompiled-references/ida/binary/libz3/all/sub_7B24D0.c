void __fastcall sub_7B24D0(__int64 a1, __int64 *a2)
{
  __int64 v2; // rbx
  __int64 i; // r15
  _DWORD *v4; // r14
  int v5; // ebp
  unsigned int j; // r13d

  v2 = *a2;
  if ( *a2 )
  {
    for ( i = v2 + 8LL * *(unsigned int *)(v2 - 4); i != v2; v2 += 8 )
    {
      v4 = *(_DWORD **)v2;
      if ( !*(_BYTE *)(*(_QWORD *)v2 + 48LL) )
      {
        v5 = v4[8];
        if ( v5 )
        {
          for ( j = 0; j != v5; ++j )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 24) + 3328LL)
                          + ((*(unsigned int (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v4 + 88LL))(v4, j) >> 1)) )
            {
              sub_1872CE0("");
              sub_1873130(114, 2217);
            }
          }
        }
      }
    }
  }
}

