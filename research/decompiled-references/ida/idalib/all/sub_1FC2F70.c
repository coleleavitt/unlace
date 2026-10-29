__int64 __fastcall sub_1FC2F70(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  __int64 v3; // rbp

  sub_1F6F570(*(_QWORD **)(a1 + 16), *(_DWORD *)(a2 + 8), *(_QWORD *)(a1 + 24));
  result = *(unsigned int *)(a1 + 40);
  v3 = *(_QWORD *)(a2 + 16);
  if ( result + 1 > (unsigned __int64)*(unsigned int *)(a1 + 44) )
  {
    sub_2237220(a1 + 32, a1 + 48, result + 1, 8);
    result = *(unsigned int *)(a1 + 40);
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * result) = v3;
  *(_DWORD *)(a1 + 224) = 301;
  ++*(_DWORD *)(a1 + 40);
  return result;
}
