__int64 __fastcall sub_E1E4B0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v3; // rax
  char v4; // r9
  char v5; // r8
  char v6; // r10
  __int64 v7; // rax
  char v8; // al
  __int64 result; // rax

  v3 = *(_QWORD *)(a3 + 32);
  v4 = *(_BYTE *)(a3 + 24);
  *(_QWORD *)a1 = a2;
  v5 = *(_BYTE *)(a3 + 29);
  v6 = *(_BYTE *)(a3 + 25);
  *(_BYTE *)(a1 + 44) = 0;
  *(_QWORD *)(a1 + 56) = v3;
  v7 = *a2;
  *(_BYTE *)(a1 + 49) = v4;
  *(_DWORD *)(a1 + 24) = -1;
  *(_QWORD *)(a1 + 32) = 0;
  *(_BYTE *)(a1 + 48) = v6;
  *(_WORD *)(a1 + 50) = 1;
  *(_BYTE *)(a1 + 52) = 0;
  *(_BYTE *)(a1 + 53) = v5;
  if ( v7 )
  {
    *(_QWORD *)(v7 + 8) = a1;
    v7 = *a2;
  }
  *(_QWORD *)(a1 + 16) = v7;
  v8 = *(_BYTE *)(a3 + 28);
  *(_QWORD *)(a1 + 8) = 0;
  *a2 = a1;
  *(_BYTE *)(a1 + 52) = v8;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a3 + 8);
  for ( result = *(_QWORD *)(a3 + 8); result; result = *(_QWORD *)(result + 16) )
    *(_QWORD *)(result + 32) = a1 + 24;
  *(_QWORD *)(a3 + 8) = 0;
  return result;
}
