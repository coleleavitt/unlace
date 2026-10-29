__int64 __fastcall sub_20FD9A0(__int64 a1, int a2)
{
  __int64 v3; // rbp
  __int64 result; // rax
  __int64 v5; // rdx
  int *v6; // r13
  int *v7; // rbx
  int v8; // esi
  char *v9; // rax
  __int64 v10; // rdx

  v3 = 0;
  *(_DWORD *)a1 = 103;
  *(_QWORD *)(a1 + 8) = 0;
  while ( 1 )
  {
    if ( v3 == 103 )
      goto LABEL_3;
    result = sub_20ED4A0(v3);
    if ( (a2 & (unsigned int)result) != 0 )
    {
      result = (__int64)sub_20ED9F0();
      v6 = (int *)(result + 4 * v5);
      v7 = (int *)result;
      if ( v6 != (int *)result )
        break;
    }
    if ( v3 == 114 )
      return result;
LABEL_3:
    ++v3;
  }
  do
  {
    v8 = *v7++;
    v9 = sub_20EAB70(v3, v8);
    result = (__int64)sub_20FD450((_DWORD *)a1, (__int64)v9, v10, v3);
  }
  while ( v6 != v7 );
  if ( v3 != 114 )
    goto LABEL_3;
  return result;
}
