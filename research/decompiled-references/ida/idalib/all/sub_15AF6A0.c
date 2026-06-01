__int64 __fastcall sub_15AF6A0(__int64 a1, int a2, _QWORD *a3, _DWORD *a4, __int64 a5, int a6)
{
  __int64 result; // rax

  result = *(_QWORD *)(a1 + 24);
  if ( result )
  {
    *a4 = ((result | a5) & 0xFFFFFFFFFFFFFFFCLL) == 0 ? 97 : 12;
    *a3 = "explicit";
    return 1;
  }
  else
  {
    *(_QWORD *)(a1 + 24) = a5;
    *(_DWORD *)(a1 + 248) = a2;
    *(_DWORD *)(a1 + 256) = a6;
  }
  return result;
}
