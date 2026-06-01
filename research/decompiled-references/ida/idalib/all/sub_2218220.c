__int64 __fastcall sub_2218220(int *a1, char *a2, __int64 a3)
{
  __int64 result; // rax
  char *v4; // rdx
  char v5; // cl

  result = (unsigned int)*a1;
  v4 = &a2[a3];
  for ( *a1 = ~*a1; v4 != a2; result = dword_26F7F00[(unsigned __int8)(result ^ v5)] ^ ((unsigned int)result >> 8) )
    v5 = *a2++;
  *a1 = result;
  return result;
}
