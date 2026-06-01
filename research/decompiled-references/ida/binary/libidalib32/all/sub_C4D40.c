__int64 __fastcall sub_C4D40(int *a1, __int64 a2)
{
  int v2; // eax
  unsigned int v3; // edx
  __int64 v5; // rcx
  __int64 v6; // rdi
  __int64 v7; // rax

  v2 = *a1;
  v3 = 0;
  if ( *a1 != *(_DWORD *)a2 )
    return v3;
  if ( v2 != -2 )
  {
    if ( v2 != -3 )
    {
      v5 = *((_QWORD *)a1 + 2);
      if ( v5 == *(_QWORD *)(a2 + 16) )
      {
        if ( v5 )
        {
          v6 = *((_QWORD *)a1 + 1);
          v7 = 0;
          while ( *(_BYTE *)(v6 + v7) == *(_BYTE *)(*(_QWORD *)(a2 + 8) + v7) )
          {
            if ( v5 == ++v7 )
              return 1;
          }
          return 0;
        }
        else
        {
          return 1;
        }
      }
    }
    return v3;
  }
  LOBYTE(v3) = *((_QWORD *)a1 + 1) == *(_QWORD *)(a2 + 8);
  return v3;
}

