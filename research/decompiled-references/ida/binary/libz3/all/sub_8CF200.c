__int64 __fastcall sub_8CF200(__int64 a1)
{
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ecx
  int v4; // eax
  double v5; // xmm1_8
  __int64 result; // rax
  __int64 v7; // rcx
  double v8; // xmm1_8
  unsigned int v9; // eax
  double v10; // xmm0_8

  v1 = *(_QWORD *)(a1 + 96);
  if ( !*(_BYTE *)(v1 + 308) )
    return sub_8CEEA0(a1);
  v2 = *(_DWORD *)(v1 + 360);
  if ( !v2 )
  {
    v7 = *(_QWORD *)(a1 + 16);
    v8 = *(double *)(v1 + 320);
    v9 = *(_DWORD *)(a1 + 712);
    v10 = *(double *)(a1 + 720);
    if ( v9 < *(_DWORD *)(v7 + 16) )
    {
      do
      {
        v10 = v10 * v8;
        *(_DWORD *)(a1 + 712) = ++v9;
      }
      while ( v9 < *(_DWORD *)(v7 + 16) );
      *(double *)(a1 + 720) = v10;
      v8 = *(double *)(v1 + 320);
    }
    result = *(unsigned int *)(a1 + 716);
    if ( (double)((int)result + 1) * v10 <= v8 )
    {
      *(_DWORD *)(a1 + 716) = result + 1;
      return result;
    }
    *(_DWORD *)(a1 + 716) = 0;
    return sub_8CEEA0(a1);
  }
  if ( v2 != 1 )
    return sub_8CEEA0(a1);
  v3 = *(_DWORD *)(a1 + 716) + 1;
  v4 = *(_DWORD *)(a1 + 184);
  *(_DWORD *)(a1 + 716) = v3;
  v5 = (double)(v3 * (v4 + 1));
  result = *(unsigned int *)(*(_QWORD *)(a1 + 16) + 16LL);
  if ( v5 > (double)(int)result * *(double *)(v1 + 320) )
  {
    *(_DWORD *)(a1 + 716) = 1;
    return sub_8CEEA0(a1);
  }
  return result;
}

