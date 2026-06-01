__int64 __fastcall sub_15F2390(__int64 a1, __int16 a2)
{
  __int64 v2; // rax
  __int64 v3; // rbp
  unsigned __int64 v4; // rbx
  __int64 result; // rax

  v2 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v2 )
    BUG();
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v2 - 8);
  v4 = (unsigned __int16)(a2 << 8) | ((unsigned __int64)*(unsigned int *)(a1 + 224) << 32);
  result = *(unsigned int *)(v3 + 368);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(v3 + 372) )
  {
    sub_2237220(v3 + 360, v3 + 376, result + 1, 8);
    result = *(unsigned int *)(v3 + 368);
  }
  *(_QWORD *)(*(_QWORD *)(v3 + 360) + 8 * result) = v4;
  ++*(_DWORD *)(v3 + 368);
  return result;
}
