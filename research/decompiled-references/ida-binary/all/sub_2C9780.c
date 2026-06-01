__int64 __fastcall sub_2C9780(_DWORD *a1, __int64 a2)
{
  int v2; // ebp
  int v3; // eax
  int v4; // ecx
  __int64 v5; // rcx
  __int64 result; // rax
  int v7; // edx
  int v8; // eax
  int v9; // eax
  int v10; // edx
  _BOOL4 v11; // ebx

  v2 = a1[2];
  v3 = nbits(a2);
  v4 = a1[5];
  if ( v4 )
  {
    v7 = v3 + 14;
    v8 = v3 + 7;
    if ( v8 < 0 )
      v8 = v7;
    v9 = v8 >> 3;
    if ( v4 == 1 )
    {
      v10 = a1[6];
      if ( !v10 )
        return (unsigned int)(2 * v2 * v9);
      v11 = v10 == 1;
    }
    else
    {
      if ( (unsigned int)(v4 - 2) <= 2 )
        return (unsigned int)(2 * v2 * v9);
      v11 = 0;
    }
    return v11 + (unsigned int)b2a_width((unsigned int)(v9 * v2), 10);
  }
  v5 = **(_QWORD **)(*(_QWORD *)a1 + 208LL);
  result = 28;
  if ( v2 != *(_QWORD *)(v5 + 120) )
    return *(char *)(v5 + v2 / 4 + 128) + (unsigned int)(v2 > 4) + 8;
  return result;
}
