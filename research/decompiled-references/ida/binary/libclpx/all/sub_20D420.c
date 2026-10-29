__int64 __fastcall sub_20D420(__int64 a1, int a2, _DWORD *a3)
{
  __int64 v3; // rbp
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // r9
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 result; // rax
  int v12; // r10d
  __int64 v13; // r11
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r8
  unsigned __int64 v18; // rdi

  v3 = *(int *)(a1 + 244);
  v4 = 8LL * ((int)v3 + 2);
  v5 = v4 + *(_QWORD *)(a1 + 208);
  *(_QWORD *)(a1 + 216) = v5;
  v6 = v4 + v5;
  v7 = v6 - 8;
  v8 = v4 + v6;
  *(_QWORD *)(a1 + 192) = v8;
  v9 = v4 + v8;
  *(_QWORD *)(a1 + 200) = v9;
  v10 = v4 + v9;
  *(_QWORD *)(a1 + 224) = v7;
  *(_QWORD *)(a1 + 128) = v10;
  result = v10 + 4LL * (6 * (int)v3 + 8);
  v12 = *(_DWORD *)(a1 + 256);
  *(_QWORD *)(a1 + 40) = result;
  v13 = result + 4LL * (v12 + 2 * (int)v3) + 4;
  *(_QWORD *)(a1 + 48) = v13;
  v14 = v13 + 4LL * (2 * (int)v3 + 5) + 20 + 8LL * (v12 + (int)v3 + 4);
  *(_QWORD *)(a1 + 56) = v14;
  v15 = 4 * v3 + v14;
  *(_QWORD *)(a1 + 64) = v15;
  v16 = 4 * v3 + v15;
  *(_QWORD *)(a1 + 72) = v16;
  v17 = v16 + 4LL * ((int)v3 + (((int)v3 + 33) >> 5) + 1);
  *(_QWORD *)(a1 + 80) = v17;
  *(_QWORD *)(a1 + 144) = v13 + 4 * (v12 + 2 * v3 + 9);
  v18 = (unsigned __int64)(4LL * (int)(((v17 + 4LL * (v12 + 3 * (int)v3 + 8) - *(_QWORD *)(a1 + 120)) >> 2) + 1)) >> 3;
  *a3 = v18;
  if ( a2 )
    return clp_double((int)v18 + 8);
  return result;
}

