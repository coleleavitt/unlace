__int64 __fastcall sub_B228E0(__int64 a1, int a2)
{
  __int64 result; // rax

  sub_965AE0(a1, a2);
  result = *(_QWORD *)(a1 + 184);
  if ( result )
    *(_DWORD *)(result - 4) -= a2;
  return result;
}

