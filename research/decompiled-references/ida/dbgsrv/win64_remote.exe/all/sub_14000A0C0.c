/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14000A0C0
// Address: 0x000000014000A0C0

//----- (000000014000A0C0) ----------------------------------------------------
__int64 __fastcall sub_14000A0C0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rbx
  _QWORD *v6; // rax
  __int64 v7; // r14
  unsigned __int64 v8; // rbx
  void *v9; // rdi
  unsigned __int64 *v10; // rdi
  __int64 v11; // r8
  unsigned __int64 *v12; // rax
  unsigned __int64 v13; // rcx

  *(_QWORD *)a1 = &off_1400929C8;
  *(_QWORD *)(a1 + 8) = a2;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_QWORD *)(a1 + 32) = 0;
  v5 = a1 + 40;
  *(_DWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  *(_QWORD *)(a1 + 56) = 0;
  v6 = operator new(0x20u);
  *v6 = v6;
  v6[1] = v6;
  *(_QWORD *)(v5 + 8) = v6;
  v7 = v5 + 24;
  *(_QWORD *)(v5 + 24) = 0;
  *(_QWORD *)(v5 + 32) = 0;
  *(_QWORD *)(v5 + 40) = 0;
  *(_QWORD *)(v5 + 48) = 7;
  *(_QWORD *)(v5 + 56) = 8;
  *(_DWORD *)v5 = 1065353216;
  v8 = *(_QWORD *)(v5 + 8);
  v9 = *(void **)v7;
  if ( (unsigned __int64)((__int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)v7) >> 3) >= 0x10 )
  {
    v13 = (unsigned __int64)(*(_QWORD *)(v7 + 8) - *(_QWORD *)v7 + 7LL) >> 3;
    if ( (unsigned __int64)v9 > *(_QWORD *)(v7 + 8) )
      v13 = 0;
    if ( v13 )
      memset64(v9, v8, v13);
  }
  else
  {
    v10 = (unsigned __int64 *)operator new(0x80u);
    v11 = (__int64)(*(_QWORD *)(v7 + 16) - *(_QWORD *)v7) >> 3;
    if ( v11 )
      sub_140011C80(v7, *(void **)v7, v11);
    *(_QWORD *)v7 = v10;
    v12 = v10 + 16;
    *(_QWORD *)(v7 + 8) = v10 + 16;
    *(_QWORD *)(v7 + 16) = v10 + 16;
    do
      *v10++ = v8;
    while ( v10 != v12 );
  }
  *(_QWORD *)(a1 + 104) = 0;
  *(_QWORD *)a1 = &off_140092ED0;
  *(_QWORD *)(a1 + 112) = a3;
  *(_QWORD *)(a1 + 120) = 0;
  *(_QWORD *)(a1 + 128) = 0;
  *(_QWORD *)(a1 + 136) = 0;
  *(_QWORD *)(a1 + 144) = 0;
  memset((void *)(a1 + 152), 0, 0xC0u);
  memset((void *)(a1 + 344), 0, 0x290u);
  sub_14001B0E0(*(_QWORD *)(a1 + 8), (const void **)off_1400C76E0, 1);
  return a1;
}
// 1400929C8: using guessed type __int64 (__fastcall *off_1400929C8)(void *Block);
// 140092ED0: using guessed type __int64 (__fastcall *off_140092ED0)(void *Block);
// 1400C76E0: using guessed type char *off_1400C76E0[6];
