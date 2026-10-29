__int64 __fastcall sub_8E9400(__int64 a1)
{
  __int64 result; // rax
  __int64 v2; // rdx
  __int64 v3; // rcx
  unsigned int v4; // ebp
  __int64 v5; // rdx
  unsigned __int64 v6; // rbx
  __int64 v7; // rax
  int v8; // edx
  int v9; // ecx
  int v10; // ecx

  result = 0;
  if ( !*(_DWORD *)(a1 + 48) )
  {
    v2 = *(_QWORD *)(a1 + 24);
    if ( v2 )
    {
      v3 = *(_QWORD *)(v2 + 32);
      v4 = *(_DWORD *)(a1 + 32);
      if ( *(_DWORD *)(v3 + 16) != v4 && v4 )
        v5 = *(_QWORD *)(v2 + v4 + 32);
      else
        v5 = *(_QWORD *)(v2 + 32);
      result = 0;
      if ( *(_DWORD *)(v5 + 12) != -1 )
      {
        v6 = *(_QWORD *)a1;
        result = 1;
        if ( *(_QWORD *)a1 != 0xFFFFFFFFLL && *(unsigned int *)(v3 + 20) >= v6 )
        {
          v7 = sub_8E5480(a1);
          v8 = v6;
          if ( v4 != -1 )
          {
            v9 = 0;
            if ( v6 != v4 )
            {
              v9 = 32;
              if ( *(_QWORD *)(v7 + 32) )
                v9 = 16;
            }
            v8 = v6 - v4 - v9;
          }
          v10 = *(_DWORD *)(v7 + 12);
          LOBYTE(v7) = v10 == 0;
          LOBYTE(v8) = v10 != v8;
          return (v8 | (unsigned int)v7) ^ 1;
        }
      }
    }
  }
  return result;
}

