__int64 __fastcall sub_6BA1F0(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rbx
  __int64 v4; // r12
  const char *v5; // rbp

  v3 = *a3;
  v4 = *a3 + 24 * a3[1];
  if ( *a3 != v4 )
  {
    do
    {
      if ( *(_QWORD *)(v3 + 8) )
      {
        v5 = *(const char **)v3;
        if ( !strcmp(*(const char **)v3, "__hidden") )
        {
          *(_DWORD *)(a2 + 72) |= 1u;
        }
        else if ( !strcmp(v5, "__return_ptr") )
        {
          *(_DWORD *)(a2 + 72) |= 2u;
        }
        else if ( !strcmp(v5, "__struct_ptr") )
        {
          *(_DWORD *)(a2 + 72) |= 4u;
        }
        else if ( !strcmp(v5, "__array_ptr") )
        {
          *(_DWORD *)(a2 + 72) |= 8u;
        }
        else if ( !strcmp(v5, "__unused") )
        {
          *(_DWORD *)(a2 + 72) |= 0x10u;
        }
      }
      v3 += 24;
    }
    while ( v4 != v3 );
  }
  return 1;
}

