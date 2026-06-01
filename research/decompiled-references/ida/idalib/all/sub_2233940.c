__int64 __fastcall sub_2233940(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  __int64 v5; // rbp
  __int64 v6; // rax
  int v7; // edx
  int v8; // ecx
  __int64 result; // rax

  v5 = a2 + a3;
  v6 = operator new(0x20u);
  v7 = 8;
  v8 = a4 & 1;
  *(_DWORD *)v6 = 0;
  *(_QWORD *)(v6 + 8) = 0;
  *(_QWORD *)(v6 + 24) = 0;
  *(_QWORD *)a1 = v6;
  *(_QWORD *)(v6 + 16) = v5;
  if ( (a4 & 1) != 0 )
  {
    v7 = 10;
    v8 = 2;
  }
  if ( (a4 & 2) == 0 )
    v7 = v8;
  if ( (a4 & 4) == 0 )
    v7 |= 1u;
  result = sub_2282190(v6, a2, v7 | 0x20u);
  *(_DWORD *)(a1 + 8) = result;
  return result;
}
