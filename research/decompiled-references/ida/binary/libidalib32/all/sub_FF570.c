__int64 __fastcall sub_FF570(_DWORD *a1)
{
  int v1; // ebp
  int v2; // eax
  int v3; // ecx
  __int64 v4; // rcx
  __int64 result; // rax
  int v6; // edx
  int v7; // eax
  int v8; // eax
  int v9; // edx
  _BOOL4 v10; // ebx

  v1 = a1[2];
  v2 = nbits();
  v3 = a1[5];
  if ( v3 )
  {
    v6 = v2 + 14;
    v7 = v2 + 7;
    if ( v7 < 0 )
      v7 = v6;
    v8 = v7 >> 3;
    if ( v3 == 1 )
    {
      v9 = a1[6];
      if ( !v9 )
        return (unsigned int)(2 * v1 * v8);
      v10 = v9 == 1;
    }
    else
    {
      if ( (unsigned int)(v3 - 2) <= 2 )
        return (unsigned int)(2 * v1 * v8);
      v10 = 0;
    }
    return v10 + (unsigned int)b2a_width();
  }
  v4 = **(_QWORD **)(*(_QWORD *)a1 + 264LL);
  result = 28;
  if ( v1 != *(_QWORD *)(v4 + 120) )
    return *(char *)(v4 + v1 / 4 + 128) + (unsigned int)(v1 > 4) + 8;
  return result;
}

