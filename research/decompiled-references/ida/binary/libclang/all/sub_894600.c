__int64 __fastcall sub_894600(__int64 a1)
{
  unsigned int v1; // edx
  __int64 result; // rax

  v1 = *(_DWORD *)(a1 + 8);
  if ( v1 != -1 )
  {
    sub_8941C0(*(_QWORD *)a1, 0, v1);
    *(_DWORD *)(a1 + 8) = -1;
  }
  result = *(_QWORD *)(*(_QWORD *)a1 + 32LL);
  --*(_DWORD *)(result + 192);
  return result;
}

