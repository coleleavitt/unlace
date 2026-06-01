__int64 __fastcall sub_18CDC20(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  bool v10; // r15
  _QWORD *v11; // rdi
  __int64 v12; // rbx
  __int64 v13; // rbp
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char v18; // al
  unsigned int v19; // ebp
  unsigned int v20; // ecx
  __int64 *v21; // r12
  unsigned int v22; // edx
  __int64 *v23; // rsi
  __int64 *v24; // rax
  __int64 *v25; // r13
  __int64 *i; // r15
  __int64 v27; // rdx
  unsigned int v28; // ebp
  __int64 v30; // r15
  __int64 v31; // rbp
  unsigned __int64 v32; // rax
  bool v33; // [rsp+7h] [rbp-121h]
  __int64 v34; // [rsp+18h] [rbp-110h] BYREF
  __int64 v35[3]; // [rsp+20h] [rbp-108h] BYREF
  void *v36; // [rsp+38h] [rbp-F0h]
  __int64 v37; // [rsp+48h] [rbp-E0h] BYREF
  _BYTE v38[200]; // [rsp+60h] [rbp-C8h] BYREF

  v8 = *(unsigned int *)(a1 + 11320);
  v33 = 0;
  if ( (_DWORD)v8 )
    v33 = *(_DWORD *)(*(_QWORD *)(a1 + 11312) + (v8 << 6) - 64) == 2;
  v9 = *(_QWORD *)(a1 + 544);
  if ( (*(_BYTE *)(v9 + 8) & 0x7Fu) - 35 > 3 || v9 == 72 || sub_B979F0((_QWORD *)(v9 - 72)) )
  {
    v10 = 0;
  }
  else
  {
    v31 = *(_QWORD *)(a2 + 96);
    v32 = sub_B72690(v9);
    a3 = v32 - 64;
    if ( v32 )
      v32 -= 64LL;
    v10 = !v33 && v31 == v32;
  }
  v11 = (_QWORD *)(*(_QWORD *)((**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 16) & 0xFFFFFFFFFFFFFFF8LL);
  if ( (*(_QWORD *)((**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL) + 16) & 4) != 0 )
    v11 = (_QWORD *)*v11;
  v12 = *(_QWORD *)(a2 + 96);
  if ( v12 && (v13 = sub_B91570((__int64)v11, a2, a3, a4, a5, a6), v13 == sub_B91570(v12 + 64, a2, v14, v15, v16, v17)) )
  {
    v19 = 6080;
    v20 = (**(_BYTE **)(a1 + 232) & 0x20) == 0 ? 3848 : 5565;
  }
  else
  {
    v18 = **(_BYTE **)(a1 + 232) & 0x20;
    v19 = v18 == 0 ? 6080 : 5911;
    v20 = v18 == 0 ? 3847 : 5564;
  }
  v21 = (__int64 *)(a1 + 8);
  v22 = *(_DWORD *)(a2 + 128);
  v23 = (__int64 *)(a1 + 8);
  if ( v10 )
  {
    sub_168B9F0((__int64)v38, v23, v22, v20, 0);
    v34 = *(_QWORD *)(a2 + 120);
    v30 = sub_15894B0((__int64)v38, &v34);
    sub_9EC740((__int64)v35, *(_DWORD *)(a2 + 128), "this->", 6, 0);
    sub_1589170(v30, v35);
    if ( v36 != &v37 )
      operator delete(v36);
    sub_15F7200(v38);
    sub_19B4460(a1, *(unsigned int *)(a2 + 128), 0, 1, 0, 0);
  }
  else
  {
    sub_168B9F0((__int64)v38, v23, v22, v20, 0);
    v35[0] = *(_QWORD *)(a2 + 120);
    sub_15894B0((__int64)v38, v35);
    sub_15F7200(v38);
  }
  v24 = *(__int64 **)(a2 + 8);
  v25 = &v24[*(unsigned int *)(a2 + 16)];
  for ( i = v24; v25 != i; ++i )
  {
    v27 = *i;
    sub_168B9F0((__int64)v38, v21, *(_DWORD *)((v27 & 0xFFFFFFFFFFFFFFF8LL) + 24), v19, 0);
    sub_15F7200(v38);
  }
  if ( v33 && (v28 = sub_B72F20(**(_QWORD **)(a2 + 8) & 0xFFFFFFFFFFFFFFF8LL), (_BYTE)v28) )
  {
    sub_168B9F0((__int64)v38, v21, *(_DWORD *)(a2 + 128), 0x102Eu, 0);
    LODWORD(v35[0]) = 0;
    sub_1587D10((__int64)v38, (int *)v35);
    sub_15F7200(v38);
  }
  else
  {
    return 0;
  }
  return v28;
}
