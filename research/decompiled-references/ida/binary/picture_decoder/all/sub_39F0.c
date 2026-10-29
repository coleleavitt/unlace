__int64 __fastcall sub_39F0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  int v6; // edi
  signed __int64 v7; // rdx
  ssize_t v8; // rax
  int v9; // eax
  __int64 v10; // [rsp+8h] [rbp-30h] BYREF
  char buf; // [rsp+17h] [rbp-21h] BYREF
  unsigned __int64 v12; // [rsp+18h] [rbp-20h]

  v3 = a3;
  v10 = a3;
  v12 = __readfsqword(0x28u);
  if ( a3 )
  {
    v3 = 0;
    if ( !*(_BYTE *)(a1 + 24) )
    {
      v6 = *(_DWORD *)(a1 + 20);
      buf = -16;
      if ( j__write(v6, &buf, 1u) == 1 && j__write(*(_DWORD *)(a1 + 20), &v10, 8u) == 8 )
      {
        v7 = v10;
        if ( v10 > 0 )
        {
          v3 = 0;
          while ( 1 )
          {
            v8 = j__read(*(_DWORD *)(a1 + 16), (void *)(a2 + v3), v7);
            if ( !v8 )
              break;
            if ( v8 >= 0 )
            {
              v3 += v8;
              v7 = v10 - v8;
              v10 -= v8;
            }
            else
            {
              v9 = *__errno_location();
              if ( v9 != 11 && v9 != 4 )
                return -1;
              v7 = v10;
            }
            if ( v7 <= 0 )
              return v3;
          }
          *(_BYTE *)(a1 + 24) = 1;
        }
      }
      else
      {
        return -1;
      }
    }
  }
  return v3;
}

