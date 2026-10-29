__int64 __fastcall sub_3076A0(__int64 *a1, _QWORD *a2)
{
  __int64 (__fastcall *v2)(__int64); // rax
  __int64 result; // rax

  v2 = *(__int64 (__fastcall **)(__int64))(*a2 + 72LL);
  if ( v2 == sub_303CC0 )
    result = a2[111];
  else
    result = v2((__int64)a2);
  *a1 = result;
  a1[1] = (__int64)a2;
  a1[2] = result;
  a1[3] = 0;
  return result;
}

