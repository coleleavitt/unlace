__int64 __fastcall sub_4105B0(_DWORD *a1)
{
  int v1; // ebx
  int v2; // eax
  int v3; // ecx
  __int64 *v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  v1 = a1[12];
  v2 = sub_4100F0(a1);
  v3 = 0;
  v4 = &qword_506A20[6 * v2];
  if ( *(_DWORD *)v4 < v1 )
  {
    v5 = 0;
    do
    {
      ++v3;
      v1 -= *((_DWORD *)v4 + v5);
      if ( v3 > 11 )
        break;
      v5 = v3;
    }
    while ( *((_DWORD *)v4 + v3) < v1 );
  }
  result = (unsigned int)(v3 + 1);
  a1[14] = v1;
  a1[13] = result;
  return result;
}

