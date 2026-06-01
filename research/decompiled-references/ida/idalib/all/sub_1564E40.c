__int64 __fastcall sub_1564E40(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v3; // rdx
  unsigned int v4; // eax
  __int64 v5; // rbx
  __int64 result; // rax
  __int64 v7; // r13
  __int64 v8; // rax

  v2 = *(_DWORD *)(a1 + 128);
  v3 = *(_QWORD *)(a1 + 96);
  if ( v2 )
  {
    v4 = v2 - 1;
    *(_DWORD *)(a1 + 128) = v4;
    v5 = *(_QWORD *)(a1 + 8LL * v4 + 136);
    sub_15ED360(v5, *(_QWORD *)(v3 + 608), a2);
  }
  else
  {
    v7 = *(_QWORD *)(v3 + 608);
    v5 = operator new(0x208u);
    v8 = *(_QWORD *)(a1 + 104);
    *(_QWORD *)(v5 + 88) = 32;
    *(_QWORD *)(v5 + 80) = v5 + 104;
    *(_DWORD *)(v5 + 96) = 0;
    *(_BYTE *)(v5 + 100) = 1;
    *(_QWORD *)(v5 + 368) = v5 + 384;
    *(_QWORD *)(v5 + 376) = 0x200000000LL;
    *(_QWORD *)(v5 + 400) = v8;
    *(_DWORD *)(v5 + 408) = *(_DWORD *)(v8 + 196);
    LODWORD(v8) = *(_DWORD *)(v8 + 200);
    *(_BYTE *)(v5 + 424) = 0;
    *(_DWORD *)(v5 + 412) = v8;
    *(_QWORD *)(v5 + 432) = v5 + 456;
    *(_QWORD *)(v5 + 440) = 8;
    *(_DWORD *)(v5 + 448) = 0;
    *(_BYTE *)(v5 + 452) = 1;
    sub_15ED360(v5, v7, a2);
  }
  result = *(_QWORD *)(a1 + 96);
  *(_QWORD *)(result + 608) = v5;
  return result;
}
