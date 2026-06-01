__int64 __fastcall sub_19F59D0(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v6; // rdx

  result = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32) + 8LL)
                     & 0xFFFFFFFFFFFFFFF0LL);
  v6 = (unsigned int)*(unsigned __int8 *)(result + 16) - 57;
  if ( (unsigned int)v6 <= 1 || (result = sub_19F5590(result, a2, v6, a4)) != 0 )
  {
    result = sub_A76A60(*a1, a3, *(_DWORD *)(result + 20));
    *(_QWORD *)(a2 + 8) = result;
  }
  else
  {
    *(_QWORD *)(a2 + 8) = a3;
  }
  return result;
}
