__int64 __fastcall sub_86A020(__int64 a1)
{
  __int64 result; // rax

  result = **(_QWORD **)(a1 + 8);
  if ( result )
    *(_DWORD *)(result - 4) = 0;
  return result;
}

