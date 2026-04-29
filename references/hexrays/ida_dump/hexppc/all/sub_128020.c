__int64 __fastcall sub_128020(__int64 a1, unsigned __int64 a2, unsigned __int8 *a3)
{
  if ( (unsigned __int8 *)a2 != a3 )
  {
    sub_119360(a2);
    sub_120000(a2, a3);
  }
  return sub_127110(a2, *(_QWORD *)(a1 + 8), *(_DWORD *)(a1 + 16), *(_DWORD *)(a1 + 20));
}
