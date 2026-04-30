__int64 __fastcall sub_4B7F50(int *a1, int *a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 result; // rax

  v2 = *a1;
  *a1 = *a2;
  v3 = *((_QWORD *)a2 + 1);
  *a2 = v2;
  v4 = *((_QWORD *)a1 + 1);
  *((_QWORD *)a1 + 1) = v3;
  LOBYTE(v3) = *((_BYTE *)a2 + 16);
  *((_QWORD *)a2 + 1) = v4;
  result = *((unsigned __int8 *)a1 + 16);
  *((_BYTE *)a1 + 16) = v3;
  *((_BYTE *)a2 + 16) = result;
  return result;
}
