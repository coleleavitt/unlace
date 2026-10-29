__int64 __fastcall sub_1C4DC60(__int64 *a1, __int64 *a2)
{
  int v2; // edx
  __int64 v3; // rcx
  __int64 result; // rax

  v2 = *((_DWORD *)a1 + 2);
  v3 = *a1;
  *((_DWORD *)a1 + 2) = 0;
  result = *((unsigned __int8 *)a1 + 12);
  *a1 = *a2;
  *((_DWORD *)a1 + 2) = *((_DWORD *)a2 + 2);
  *((_BYTE *)a1 + 12) = *((_BYTE *)a2 + 12);
  *a2 = v3;
  *((_DWORD *)a2 + 2) = v2;
  *((_BYTE *)a2 + 12) = result;
  return result;
}
