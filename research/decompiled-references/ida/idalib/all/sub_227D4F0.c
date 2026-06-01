__int64 __fastcall sub_227D4F0(__int64 *a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 result; // rax
  __int64 v5; // rdx

  v1 = a1[4];
  v2 = a1[2];
  *((_BYTE *)a1 + 52) = 0;
  if ( v1 != v2 )
  {
    v3 = *a1;
    a1[4] = v2;
    (*(void (__fastcall **)(__int64 *, __int64, __int64))(v3 + 72))(a1, v2, v1 - v2);
  }
  result = sub_2290B30(*((_DWORD *)a1 + 12));
  if ( (_DWORD)result )
  {
    *((_DWORD *)a1 + 18) = result;
    a1[10] = v5;
  }
  *((_DWORD *)a1 + 12) = -1;
  return result;
}
