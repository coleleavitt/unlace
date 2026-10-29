__int64 __fastcall sub_15F2410(__int64 a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v1 )
    BUG();
  result = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 8 * v1 - 8);
  --*(_DWORD *)(result + 368);
  return result;
}
