unsigned __int64 __fastcall sub_1C510(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rax

  v2 = *(_QWORD *)(a1 + 32);
  v3 = 0;
  v4 = (a2 + 2LL * *(unsigned int *)(a2 + 12) + 19) & 0xFFFFFFFFFFFFFFFCLL;
  if ( v4 < v2 )
    return v3;
  v3 = v4 + 8LL * *(unsigned __int16 *)(a2 + 6);
  if ( v3 >= v4 )
  {
    if ( *(unsigned int *)(*(_QWORD *)(a1 + 40) + 32LL) + v2 < v3 )
      return 0;
    return v3;
  }
  return 0;
}

