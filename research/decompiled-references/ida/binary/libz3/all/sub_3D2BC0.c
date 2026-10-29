__int64 __fastcall sub_3D2BC0(__int64 a1, unsigned int *a2)
{
  unsigned int v2; // ebp
  __int64 result; // rax

  v2 = *a2;
  if ( *a2 >= *(_DWORD *)(a1 + 8) )
    sub_186B510(a1 + 8, v2 + 1, 0);
  result = v2 >> 5;
  *(_DWORD *)(*(_QWORD *)(a1 + 16) + 4 * result) |= 1 << v2;
  return result;
}

