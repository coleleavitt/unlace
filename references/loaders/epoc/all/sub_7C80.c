__int64 __fastcall sub_7C80(unsigned int a1, char *a2, int a3)
{
  __int64 result; // rax
  __int64 v5; // rbx
  char *v6; // rbx
  char v7; // dl
  int v8; // esi
  int *v9; // rdi
  unsigned __int16 v10; // dx
  int v11; // r8d
  int v12; // ecx

  result = a1;
  v5 = a3;
  if ( !byte_132D2 )
  {
    dword_132E0[0] = 0;
    v8 = 0;
    v9 = dword_132E0;
    do
    {
      v10 = 2 * *v9;
      v11 = ((*v9 & 0x8000) == 0) + v8;
      v12 = v8 + ((*v9++ & 0x8000u) >> 15);
      v8 += 2;
      dword_132E0[v11] = v10 ^ 0x1021;
      dword_132E0[v12] = v10;
    }
    while ( v9 != (int *)&unk_134E0 );
    byte_132D2 = 1;
  }
  if ( (int)v5 > 0 )
  {
    v6 = &a2[v5];
    do
    {
      v7 = *a2++;
      result = ((_DWORD)result << 8) ^ (unsigned int)LOWORD(dword_132E0[(unsigned __int8)(BYTE1(result) ^ v7)]);
    }
    while ( a2 != v6 );
  }
  return result;
}
