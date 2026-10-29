unsigned __int64 __fastcall sub_A73320(_QWORD *a1, __int64 a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r12
  __int64 v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rdx
  __int64 v8; // r13
  __int64 v9; // rdx
  _DWORD *v10; // r15
  unsigned int v11; // r12d
  unsigned int v12; // ebx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  char v17; // r12
  __int16 v18; // bx
  __int64 v19; // rax
  unsigned __int8 v20; // bl
  __int64 v21; // rax
  unsigned int v22; // ecx
  unsigned int v23; // r8d
  unsigned __int8 v24; // bl
  __int64 v25; // rax
  __int64 v26; // rax
  __int16 v27; // bx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // [rsp+0h] [rbp-50h]
  void *v31; // [rsp+8h] [rbp-48h] BYREF
  unsigned int v32; // [rsp+10h] [rbp-40h]

  if ( (*(_BYTE *)(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 8) == 0 )
    return a2;
  v3 = 0;
  v4 = sub_F6AEA0(a2);
  v8 = v7;
  v9 = *(unsigned __int8 *)(v4 + 16);
  switch ( *(_BYTE *)(v4 + 16) )
  {
    case 2:
      v10 = nullptr;
      v11 = (*(_BYTE *)(v4 + 18) >> 3) & 7;
      v12 = (*(_WORD *)(v4 + 18) >> 6) & 7;
      if ( (*(_BYTE *)(v4 + 19) & 2) != 0 )
        v10 = *(_DWORD **)(*(_QWORD *)(v4 + 40) + 16LL);
      v30 = v4;
      sub_A5DAD0((__int64)&v31, v4);
      v13 = sub_A73320(a1, *(_QWORD *)(v30 + 32));
      v3 = sub_A70F70((__int64)a1, v13, (__int64)&v31, v10, v12, v11);
      if ( v32 > 0x40 )
      {
        if ( v31 )
          operator delete[](v31);
      }
      goto LABEL_9;
    case 4:
      v16 = *(_QWORD *)(v4 + 40);
      v17 = *(_BYTE *)(v4 + 18) >> 3;
      v18 = *(_WORD *)(v4 + 18) >> 6;
      v19 = sub_A73320(a1, *(_QWORD *)(v4 + 32));
      v3 = sub_A71B90((__int64)a1, v19, v16, v18 & 7, v17 & 7);
      goto LABEL_9;
    case 5:
      v20 = *(_BYTE *)(v4 + 18);
      v21 = sub_A73320(a1, *(_QWORD *)(v4 + 32));
      v22 = 0;
      v23 = (v20 >> 3) & 7;
      goto LABEL_14;
    case 6:
      v24 = *(_BYTE *)(v4 + 18);
      v21 = sub_A73320(a1, *(_QWORD *)(v4 + 32));
      v22 = 2;
      v23 = (v24 >> 3) & 7;
LABEL_14:
      v3 = sub_A71A40(a1, v21, 0, v22, v23);
      goto LABEL_9;
    case 7:
      v25 = sub_A73320(a1, *(_QWORD *)(v4 + 32));
      v3 = sub_A72BF0((__int64)a1, v25);
      goto LABEL_9;
    case 0xB:
    case 0x19:
    case 0x1A:
    case 0x21:
    case 0x29:
      return a2;
    case 0x2A:
      v26 = sub_A73320(a1, *(_QWORD *)(v4 + 32));
      v3 = sub_A70010((__int64)a1, v26);
      goto LABEL_9;
    case 0x2B:
      v27 = *(_WORD *)(v4 + 18);
      v28 = sub_9B4870(v4, a2, v9, v5, v6);
      v29 = sub_A73320(a1, v28);
      v3 = sub_A73030((__int64)a1, v29, (v27 & 8) != 0);
      goto LABEL_9;
    case 0x2C:
      v14 = sub_9B4870(v4, a2, v9, v5, v6);
      v15 = sub_A73320(a1, v14);
      v3 = sub_A72DD0((__int64)a1, v15);
      goto LABEL_9;
    default:
LABEL_9:
      result = sub_A70F20((__int64)a1, v3, v8);
      break;
  }
  return result;
}
