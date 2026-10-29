__int64 __fastcall sub_B97580(__int64 a1)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 16);
  if ( !*(_DWORD *)(result + 8632) )
    *(_DWORD *)(result + 8632) = 1;
  return result;
}

