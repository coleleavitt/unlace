unsigned __int64 __fastcall sub_E97B50(__int64 a1)
{
  int v1; // ebx
  unsigned __int64 result; // rax
  unsigned int *v3; // rax

  v1 = *(_DWORD *)(a1 + 16);
  result = 0;
  if ( v1 )
  {
    if ( (*(_BYTE *)(a1 + 24) & 1) != 0 )
      v3 = (unsigned int *)sub_B96980(a1);
    else
      v3 = *(unsigned int **)(a1 + 24);
    return ((unsigned __int64)v3[6 * (v1 - 1) + 1] << 32) | *v3;
  }
  return result;
}
