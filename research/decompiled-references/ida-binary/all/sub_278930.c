__int64 __fastcall sub_278930(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  *(_QWORD *)(a1 + 112) = a2;
  *(_QWORD *)(a1 + 120) = -1;
  *(_DWORD *)(a1 + 128) = 0;
  sub_464450();
  result = sub_2780D0(a1, *(_QWORD *)(a1 + 120), 17);
  if ( result != -1 )
    return sub_278850(a1, result, 17, 0, 1);
  return result;
}
