__int64 __fastcall sub_72C450(__int64 a1)
{
  __int64 v2; // rbp
  __int64 v3; // rdi
  unsigned int v4; // edx
  __int64 result; // rax

  if ( *(_BYTE *)(a1 + 850) )
  {
    v2 = *(_QWORD *)(a1 + 696);
    v3 = *(_QWORD *)(a1 + 640);
    if ( *(_DWORD *)(a1 + 616) > 6u )
    {
      if ( v2 != qlseek(v3, 0, 1) )
      {
        if ( !under_debugger )
          interr(3327);
        BUG();
      }
    }
    else if ( !(unsigned __int8)sub_836CD0(a1, v3) )
    {
      return 0;
    }
  }
  if ( sub_836AD0(a1, *(_QWORD *)(a1 + 640), a1 + 464, 128, 0) != 128 )
    return 0;
  LOBYTE(result) = sub_72C300(a1);
  v4 = result;
  if ( !(_BYTE)result )
    return 0;
  if ( *(_BYTE *)(a1 + 632) == 64 )
    return v4;
  *(_QWORD *)(a1 + 464) = 0;
  *(_QWORD *)(a1 + 584) = 0;
  memset(
    (void *)((a1 + 472) & 0xFFFFFFFFFFFFFFF8LL),
    0,
    8LL * (((_DWORD)a1 + 464 - (((_DWORD)a1 + 472) & 0xFFFFFFF8) + 128) >> 3));
  *(_QWORD *)(a1 + 600) = 0;
  return (unsigned int)result;
}
