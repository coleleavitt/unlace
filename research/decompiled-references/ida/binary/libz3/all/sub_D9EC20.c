__int64 __fastcall sub_D9EC20(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 result; // rax

  result = *a3;
  *(_QWORD *)a1 = 0;
  *(_QWORD *)(a1 + 8) = a2;
  *(_DWORD *)(a1 + 16) = 2;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = result;
  if ( result )
    ++*(_DWORD *)(result + 128);
  *(_DWORD *)(a1 + 40) = 0;
  return result;
}

