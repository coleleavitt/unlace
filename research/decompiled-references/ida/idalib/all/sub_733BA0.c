__int64 __fastcall sub_733BA0(__int64 a1, __int64 a2)
{
  __int64 result; // rax

  result = sub_7349C0(*(_QWORD *)a1, *(unsigned __int16 *)(a2 - *(unsigned __int16 *)(a1 + 588)), a2);
  if ( !(_DWORD)result )
  {
    result = *(unsigned __int16 *)(a1 + 588);
    *(_BYTE *)(a2 - result + 40) = 0;
  }
  return result;
}
