__int64 __fastcall sub_7C0360(__int64 a1, __int64 *a2)
{
  unsigned __int64 v2; // rcx
  __int64 result; // rax
  int v4; // edx
  __int64 v5; // rbx
  unsigned int *v6; // rax

  v2 = a2[1] + *(unsigned int *)(a1 + 808);
  *(_DWORD *)(a1 + 808) = v2;
  result = *a2;
  *(_BYTE *)(a1 + 996) |= HIDWORD(v2) != 0;
  if ( result )
  {
    v4 = *(_DWORD *)(result - 4);
    if ( v4 )
    {
      v5 = 8LL * (unsigned int)(v4 - 1);
      while ( 1 )
      {
        v6 = (unsigned int *)(v5 + result);
        v5 -= 8;
        result = sub_7C00D0(a1, v6[1], *v6);
        if ( v5 == -8 )
          break;
        result = *a2;
      }
    }
  }
  return result;
}

