__int64 __fastcall sub_8E8D80(__int64 *a1)
{
  __int64 v1; // rax
  __int64 result; // rax

  v1 = a1[2];
  *((_DWORD *)a1 + 18) = 0;
  a1[3] = v1;
  result = *a1;
  a1[1] = *a1;
  return result;
}

