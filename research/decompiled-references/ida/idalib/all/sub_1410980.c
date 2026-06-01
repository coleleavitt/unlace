__int64 __fastcall sub_1410980(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 result; // rax

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0x200000000LL;
  if ( *(_DWORD *)(a2 + 8) )
    sub_14078B0(a1, a2);
  *(_DWORD *)(a1 + 96) = *(_DWORD *)(a2 + 96);
  v2 = *(_DWORD *)(a2 + 100);
  *(_QWORD *)(a1 + 112) = 0;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 104) = 0;
  *(_DWORD *)(a1 + 100) = v2;
  *(_QWORD *)(a1 + 104) = *(_QWORD *)(a2 + 104);
  v3 = *(_QWORD *)(a2 + 112);
  *(_QWORD *)(a2 + 104) = 0;
  v4 = *(_QWORD *)(a1 + 112);
  *(_QWORD *)(a1 + 112) = v3;
  v5 = *(_QWORD *)(a2 + 120);
  *(_QWORD *)(a2 + 112) = v4;
  v6 = *(_QWORD *)(a1 + 120);
  *(_QWORD *)(a1 + 120) = v5;
  LOBYTE(v5) = *(_BYTE *)(a2 + 128);
  *(_QWORD *)(a2 + 120) = v6;
  LODWORD(v6) = v5 & 1 | *(_BYTE *)(a1 + 128) & 0xFE;
  *(_BYTE *)(a1 + 128) = v6;
  result = *(_BYTE *)(a2 + 128) & 2 | (unsigned int)v6 & 0xFFFFFFFD;
  *(_BYTE *)(a1 + 128) = result;
  return result;
}
