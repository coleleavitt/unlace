__int64 __fastcall sub_A31870(__int64 a1, __int64 a2, char a3, int a4, __int64 a5)
{
  char v5; // al
  __int64 result; // rax
  char v7; // [rsp+10h] [rbp-18h]
  int v8; // [rsp+14h] [rbp-14h]
  __int64 v9; // [rsp+18h] [rbp-10h]

  v5 = 0;
  if ( (a5 & 0xFFFFFFFFFFFFFFF8LL) != 0 && (a5 & 4) == 0 )
  {
    v9 = a5;
    v8 = a4;
    v7 = a3;
    v5 = sub_B99930();
    a5 = v9;
    a4 = v8;
    a3 = v7;
  }
  *(_DWORD *)(a1 + 16) = a4;
  *(_QWORD *)(a1 + 24) = a5;
  *(_DWORD *)(a1 + 40) = 1;
  result = 2 * (v5 & 1u);
  *(_QWORD *)(a1 + 8) = a2 | 2;
  *(_DWORD *)a1 = (a3 == 0) + 1;
  *(_BYTE *)(a1 + 4) = result & 0xFB | (a5 >> 1) & 1 | *(_BYTE *)(a1 + 4) & 0xF8;
  return result;
}

