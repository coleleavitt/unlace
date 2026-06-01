__int64 __fastcall sub_79E810(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rdx
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = *(_QWORD *)(a1 + 288);
  if ( v2 )
    qfclose(v2);
  qfree(*(void **)(a1 + 296));
  v3 = *(_QWORD *)(a1 + 272);
  v4 = *(_QWORD *)(a1 + 264);
  *(_QWORD *)(a1 + 296) = 0;
  v5 = v4 + 40 * v3 - 40;
  *(_QWORD *)(a1 + 288) = *(_QWORD *)(v5 + 8);
  *(_DWORD *)(a1 + 304) = *(_DWORD *)(v5 + 32);
  *(_QWORD *)(a1 + 296) = *(_QWORD *)v5;
  *(_BYTE *)(a1 + 144) = *(_BYTE *)(v5 + 36);
  *(_QWORD *)(a1 + 216) = *(_QWORD *)(v5 + 16);
  *(_QWORD *)(a1 + 224) = *(_QWORD *)(v5 + 24);
  if ( v3 )
    *(_QWORD *)(a1 + 272) = v3 - 1;
  return 1;
}
