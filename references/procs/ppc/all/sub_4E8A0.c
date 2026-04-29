__int64 __fastcall sub_4E8A0(__int64 a1, char a2)
{
  _BOOL8 v2; // rdx
  int v3; // ebp
  __int64 v4; // rax
  __int64 v5; // r12
  unsigned int v6; // eax
  __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r12

  if ( a2 )
  {
    v2 = 1;
    if ( *(_DWORD *)(a1 + 32) == 3 )
    {
      setinf_flag(67, 4, 1);
      v8 = *(_QWORD *)(a1 + 56);
      v9 = v8 + 24LL * *(_QWORD *)(a1 + 64);
      if ( v8 == v9 )
      {
LABEL_18:
        v2 = 0;
      }
      else
      {
        while ( strcmp("hard_float", *(const char **)(v8 + 16)) )
        {
          v8 += 24;
          if ( v9 == v8 )
            goto LABEL_18;
        }
        v2 = v8 != v9;
      }
    }
    setinf_flag(67, 32, v2);
    if ( (unsigned __int8)getinf_flag(3, 4) )
      setinf_flag(
        67,
        256,
        (*(_DWORD *)(a1 + 32) == 4) | (unsigned __int8)((unsigned int)(*(_DWORD *)(a1 + 32) - 8) <= 1));
  }
  v3 = 0;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 120LL) = 16;
  *(_DWORD *)(*(_QWORD *)a1 + 460LL) &= 0xFFFFF87F;
  v4 = 0;
  if ( *(_QWORD *)(a1 + 64) )
  {
    do
    {
      v5 = *(_QWORD *)(a1 + 56) + 24 * v4;
      if ( *(_BYTE *)(v5 + 8) )
      {
        if ( a2 )
        {
          v6 = getinf(67);
          setinf(67, *(_DWORD *)v5 | v6);
        }
        *(_DWORD *)(*(_QWORD *)a1 + 460LL) |= *(_DWORD *)(v5 + 4);
      }
      v4 = ++v3;
    }
    while ( (unsigned __int64)v3 < *(_QWORD *)(a1 + 64) );
  }
  result = (*(_DWORD *)(*(_QWORD *)a1 + 460LL) & 0x100) == 0 ? 16LL : 8LL;
  *(_QWORD *)(*(_QWORD *)(*(_QWORD *)a1 + 16LL) + 120LL) = result;
  return result;
}
