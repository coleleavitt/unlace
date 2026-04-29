__int64 __fastcall sub_2503C0(__int64 a1)
{
  __int64 result; // rax

  for ( result = a1; *(_DWORD *)(result + 8) == 48; result = *(_QWORD *)(result + 24) )
    ;
  return result;
}
