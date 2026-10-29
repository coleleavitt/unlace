__int64 __fastcall sub_17C6CF0(__int64 *a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rax
  unsigned int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  void ***v12; // r15
  __int64 *v13; // rbx
  void ***v14; // r13
  __int64 *v15; // r12
  void **v16; // rsi
  __int64 v17; // rdi

  v5 = *(_QWORD *)(a3 + 16);
  v6 = v5 & 0xFFFFFFFFFFFFFFF8LL;
  if ( (v5 & 4) != 0 )
    v6 = *(_QWORD *)v6;
  if ( (*(_BYTE *)(v6 + 8) & 0x7F) == 0x13 )
  {
    v8 = ((*(_BYTE *)(a3 + 59) & 3) == 2) + 3;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFF8LL;
    if ( (*(_QWORD *)(a2 + 16) & 4) != 0 )
      v7 = *(_QWORD *)v7;
    v8 = ((*(_BYTE *)(v7 + 8) & 0x7Fu) - 21 > 1) + 1;
  }
  sub_17C44D0(a1, (__int64 *)a2, a3, v8);
  v12 = *(void ****)(a3 + 96);
  v13 = *(__int64 **)(a2 + 96);
  v14 = &v12[*(unsigned int *)(a3 + 104)];
  v15 = &v13[*(unsigned int *)(a2 + 104)];
  while ( v13 != v15 && v12 != v14 )
  {
    v16 = *v12;
    v17 = *v13++;
    ++v12;
    sub_17ADD40(v17, v16, (__int64)a1, v9, v10, v11);
  }
  return sub_18A29A0(a1[92], a2, a3);
}
