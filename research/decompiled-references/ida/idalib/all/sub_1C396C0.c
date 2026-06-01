unsigned __int64 __fastcall sub_1C396C0(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        double a7,
        __int64 a8,
        __int64 a9)
{
  unsigned int v9; // r15d
  unsigned int v10; // r14d
  unsigned __int64 v13; // rbx
  unsigned __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // rbp
  __int64 v18; // rbx
  __int64 v19; // rcx
  unsigned int v20; // r10d
  __int64 v21; // rdi
  char v22; // al
  _QWORD *v23; // rax
  unsigned int v24; // [rsp+8h] [rbp-E0h]
  unsigned __int64 v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v27[200]; // [rsp+20h] [rbp-C8h] BYREF

  v9 = a5;
  v10 = a3;
  v13 = a9 & 0xFFFFFFFFFFFFFFFELL;
  if ( (a9 & 0xFFFFFFFFFFFFFFFELL) != 0 && (*(_DWORD *)v13 & 0x10000) == 0 )
  {
    v20 = a2;
    v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL);
    v22 = *(_BYTE *)(v21 + 16);
    switch ( v22 )
    {
      case 13:
        if ( (((*(_WORD *)(v21 + 18) >> 3) + 76) & 0x1FFu) > 0x13 )
          return 1;
        break;
      case 47:
        v23 = sub_F60F10(v21, a2, a3, a4, a5, a6);
        v20 = a2;
        if ( (*((_BYTE *)v23 + 74) & 1) == 0 && (v23[16] & 0xFFFFFFFFFFFFFFF8LL) == 0 )
          return 1;
        break;
      case 10:
        break;
      default:
        return 1;
    }
    v24 = v20;
    if ( sub_BFF300((unsigned __int16 *)v13, 1, a3, a4, a5) )
    {
      sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), v24, 0x19E5u, 0);
      v26 = sub_EEC8C0(v13, a1 + 8, a7);
      sub_1587DB0((__int64)v27, &v26);
      sub_15F7200(v27);
    }
  }
  sub_15F2460(a1);
  result = sub_EEF8B0(*(_QWORD **)(a1 + 248), a4, a8, v13, v10, v9);
  v15 = *(unsigned int *)(a1 + 40);
  if ( !(_DWORD)v15 )
    BUG();
  v16 = *(_QWORD *)(a1 + 32);
  v17 = result & 0xFFFFFFFFFFFFFFFBLL;
  v18 = *(_QWORD *)(v16 + 8 * v15 - 8);
  v19 = *(unsigned int *)(v18 + 64);
  if ( v19 + 1 > (unsigned __int64)*(unsigned int *)(v18 + 68) )
  {
    v25 = result;
    sub_2237220(v18 + 56, v18 + 72, v19 + 1, 8);
    v19 = *(unsigned int *)(v18 + 64);
    result = v25;
  }
  *(_QWORD *)(*(_QWORD *)(v18 + 56) + 8 * v19) = v17;
  ++*(_DWORD *)(v18 + 64);
  return result;
}
