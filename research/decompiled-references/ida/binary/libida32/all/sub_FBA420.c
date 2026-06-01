__int64 __fastcall sub_FBA420(__int64 a1)
{
  unsigned int *v1; // rdx
  __int64 v2; // rax
  bool v3; // zf
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+0h] [rbp-18h] BYREF

  v1 = *(unsigned int **)(a1 + 16);
  v2 = *v1;
  v3 = *((_BYTE *)v1 + 16) == 95;
  v5[0] = v1 + 4;
  v5[1] = v2;
  result = 1;
  if ( v3 )
    return 2 * (unsigned int)(sub_2222D70(v5, "__", 2, 0) != -1);
  return result;
}

