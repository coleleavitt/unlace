__int64 __fastcall sub_6E630(_DWORD *a1, __int64 (__fastcall ***a2)(_QWORD, __int64))
{
  __int64 result; // rax

  *a1 = (**a2)(a2, 4);
  a1[1] = (**a2)(a2, 1);
  a1[2] = (**a2)(a2, 2);
  a1[3] = (**a2)(a2, 31);
  result = (**a2)(a2, 0);
  a1[4] = result;
  return result;
}
