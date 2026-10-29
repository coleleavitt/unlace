__int64 __fastcall sub_1A3AB00(__int64 a1, __int64 a2)
{
  char v2; // al
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 result; // rax

  *(_QWORD *)a1 = *(_QWORD *)a2;
  *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 8);
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x100000000LL;
  if ( *(_DWORD *)(a2 + 24) )
    sub_AEA1F0((char ***)(a1 + 16), (char ***)(a2 + 16));
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_DWORD *)(a1 + 44) = *(_DWORD *)(a2 + 44);
  *(_DWORD *)(a1 + 48) = *(_DWORD *)(a2 + 48);
  *(_QWORD *)(a1 + 52) = *(_QWORD *)(a2 + 52);
  *(_BYTE *)(a1 + 60) = *(_BYTE *)(a2 + 60);
  v2 = *(_BYTE *)(a2 + 61);
  *(_QWORD *)(a1 + 72) = 0;
  *(_QWORD *)(a1 + 80) = 0;
  *(_QWORD *)(a1 + 64) = 0;
  *(_BYTE *)(a1 + 61) = v2;
  *(_QWORD *)(a1 + 64) = *(_QWORD *)(a2 + 64);
  v3 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 64) = 0;
  v4 = *(_QWORD *)(a1 + 72);
  *(_QWORD *)(a1 + 72) = v3;
  v5 = *(_QWORD *)(a2 + 80);
  *(_QWORD *)(a2 + 72) = v4;
  result = *(_QWORD *)(a1 + 80);
  *(_QWORD *)(a1 + 80) = v5;
  *(_QWORD *)(a2 + 80) = result;
  return result;
}
