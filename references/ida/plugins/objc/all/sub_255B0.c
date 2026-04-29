__int64 __fastcall sub_255B0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  result = sub_25490(a1, a2, a3, *(_QWORD *)(a1 + 560), 1);
  if ( !(_DWORD)result )
    return sub_25490(a1, a2, a3, *(_QWORD *)(a1 + 568), 0);
  return result;
}
