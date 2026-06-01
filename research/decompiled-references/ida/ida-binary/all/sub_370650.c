__int64 __fastcall sub_370650(__int64 *a1, int a2)
{
  __int64 v2; // rax
  __int64 result; // rax

  if ( *((_DWORD *)a1 + 2) != a2 )
  {
    v2 = *a1;
    *((_DWORD *)a1 + 2) = a2;
    result = *(_QWORD *)(v2 + 32);
    *(_BYTE *)(result + 336) = 1;
  }
  return result;
}
