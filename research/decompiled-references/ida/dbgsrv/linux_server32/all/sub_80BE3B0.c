/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80BE3B0
// Address: 0x080BE3B0

//----- (080BE3B0) --------------------------------------------------------
int __cdecl sub_80BE3B0(int a1, int domain, int type, int protocol)
{
  int v4; // eax
  int result; // eax
  int optval; // [esp+0h] [ebp-14h] BYREF
  unsigned int v7; // [esp+4h] [ebp-10h]

  v7 = __readgsdword(0x14u);
  v4 = socket(domain, type, protocol);
  *(_DWORD *)(a1 + 28) = v4;
  if ( v4 == -1 )
  {
    *(_DWORD *)(a1 + 44) = "socket";
    *(_DWORD *)(a1 + 48) = *__errno_location();
    result = 0;
  }
  else
  {
    optval = 1;
    *(_BYTE *)(a1 + 52) = domain == 10;
    if ( setsockopt(v4, 1, 2, &optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_REUSEADDR)";
      if ( (dword_811F8A4 & 0x100000) != 0 )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_80BE360();
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 1, 9, &optval, 4u) )
    {
      *(_DWORD *)(a1 + 44) = "setsockopt(SO_KEEPALIVE)";
      if ( (dword_811F8A4 & 0x100000) != 0 )
      {
        (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
        sub_80BE360();
      }
    }
    if ( setsockopt(*(_DWORD *)(a1 + 28), 6, 1, &optval, 4u)
      && (*(_DWORD *)(a1 + 44) = "setsockopt(TCP_NODELAY)", (dword_811F8A4 & 0x100000) != 0) )
    {
      (*(void (__cdecl **)(int))(*(_DWORD *)a1 + 44))(a1);
      sub_80BE360();
      result = 1;
    }
    else
    {
      result = 1;
    }
  }
  if ( v7 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811F8A4: using guessed type int dword_811F8A4;
