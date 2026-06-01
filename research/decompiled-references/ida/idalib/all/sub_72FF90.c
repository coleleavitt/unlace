__int64 __fastcall sub_72FF90(__int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // rax
  unsigned __int64 v4; // rbx

  v3 = 0;
  v4 = *(_QWORD *)(a1 + 16);
  if ( v4 >= a3 )
  {
    v4 = a3;
    v3 = *(_QWORD *)(a1 + 16) - a3;
  }
  *(_QWORD *)(a1 + 16) = v3;
  if ( qlread(*(_QWORD *)a1, a2, v4) != v4 )
    return -1;
  *(_DWORD *)(a1 + 24) = calc_crc32(*(unsigned int *)(a1 + 24), a2, v4);
  return v4;
}
