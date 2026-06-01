__int64 __fastcall sub_27F60(_QWORD *a1, __int64 *a2)
{
  __int64 v2; // r9
  __int64 v3; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rsi
  unsigned int v8; // edi
  unsigned int v9; // eax
  char *v10; // rdx
  char *v11; // rsi
  char v12; // cl

  v2 = a2[1];
  v3 = a1[2];
  v5 = a1[4];
  v6 = v2 - v3;
  a1[17] += v2 - v3;
  v7 = *a2;
  v8 = v5;
  v9 = ~(_DWORD)v5;
  v10 = (char *)(v7 + v3);
  if ( v6 )
  {
    v11 = (char *)(v2 + v7);
    do
    {
      v12 = *v10++;
      v9 = dword_8BE20[(unsigned __int8)(v9 ^ v12)] ^ (v9 >> 8);
    }
    while ( v10 != v11 );
    v8 = ~v9;
  }
  a1[4] = v8;
  return v8;
}

