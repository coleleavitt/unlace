__int64 __fastcall sub_184A830(__int64 a1, __int64 a2, char a3, __int64 *a4, unsigned int a5, __int64 a6)
{
  __int64 v11; // r15
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  _QWORD *v16; // rcx
  _QWORD *v17; // rsi
  unsigned __int64 v18; // rbp
  char v19; // dl
  unsigned __int64 v20; // rax
  __int64 v21; // rdx
  _QWORD *v22; // rcx
  __int64 v23; // rdi
  unsigned __int64 v24; // rax
  __int64 *v25; // rbx
  unsigned int v26; // ecx
  _QWORD *v28; // r15
  _QWORD *v29; // rbp
  __int64 v30; // rsi
  __int64 v31; // rax
  unsigned __int64 v32; // r13
  char v33; // al
  __int64 v35; // [rsp+8h] [rbp-E0h]
  __int64 v36; // [rsp+18h] [rbp-D0h] BYREF
  _BYTE v37[200]; // [rsp+20h] [rbp-C8h] BYREF

  v11 = a4[1];
  if ( ((*(_BYTE *)(sub_B8EAA0(*(_QWORD *)(a1 + 544)) + 8) + 70) & 0x7Fu) <= 3 )
  {
    v35 = sub_AB7570(*(_QWORD **)(a1 + 248), v11);
    v28 = *(_QWORD **)(a6 + 8);
    v29 = &v28[*(unsigned int *)(a6 + 16)];
    if ( v29 == v28 )
      return 0;
    while ( 1 )
    {
      v32 = *v28 & 0xFFFFFFFFFFFFFFF8LL;
      v33 = *(_BYTE *)(v32 + 28) & 0x7F;
      if ( v33 == 81 )
        break;
      if ( v33 != 28 )
      {
        if ( v33 != 63 )
          goto LABEL_17;
        v30 = *(_QWORD *)(v32 + 72);
        LOBYTE(v31) = 1;
LABEL_16:
        if ( (_BYTE)v31 != a3 )
          goto LABEL_17;
        goto LABEL_21;
      }
      v30 = *(_QWORD *)(v32 + 64);
      if ( a3 )
        goto LABEL_17;
LABEL_21:
      if ( sub_AB7570(*(_QWORD **)(a1 + 248), v30) == v35 )
      {
        sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), a5, 0x151Du, 0);
        v36 = *a4;
        sub_1587DB0((__int64)v37, &v36);
        sub_15F7200(v37);
        sub_168B9F0((__int64)v37, (__int64 *)(a1 + 8), *(_DWORD *)(v32 + 24), 0x1937u, 0);
        LODWORD(v36) = 1;
        sub_1587D10((__int64)v37, (int *)&v36);
        sub_15F7200(v37);
        return 1;
      }
LABEL_17:
      if ( v29 == ++v28 )
        return 0;
    }
    v30 = *(_QWORD *)(v32 + 64);
    v31 = (*(__int64 *)(v32 + 48) >> 2) & 1;
    goto LABEL_16;
  }
  if ( !sub_E917A0(v11, a2, v12, v13, v14, v15) )
    return 0;
  if ( a3 )
    return 0;
  v16 = *(_QWORD **)(a6 + 8);
  v17 = &v16[*(unsigned int *)(a6 + 16)];
  if ( v16 == v17 )
    return 0;
  v18 = *v16 & 0xFFFFFFFFFFFFFFF8LL;
  v19 = *(_BYTE *)(v18 + 28) & 0x7F;
  v20 = (v19 + 73) & 0x7F;
  if ( (unsigned __int8)v20 <= 0x1Au )
  {
    v21 = 67117049;
    if ( _bittest64(&v21, v20) )
    {
      v22 = v16 + 1;
      v23 = 67117049;
      while ( v17 != v22 )
      {
        v18 = *v22 & 0xFFFFFFFFFFFFFFF8LL;
        v19 = *(_BYTE *)(v18 + 28) & 0x7F;
        v24 = (v19 + 73) & 0x7F;
        if ( (unsigned __int8)v24 > 0x1Au )
          goto LABEL_10;
        ++v22;
        if ( !_bittest64(&v23, v24) )
          goto LABEL_26;
      }
      return 0;
    }
LABEL_26:
    v25 = (__int64 *)(a1 + 8);
    goto LABEL_27;
  }
LABEL_10:
  v25 = (__int64 *)(a1 + 8);
  if ( v19 != 33 && v19 != 28 )
  {
LABEL_27:
    v26 = 4904;
    goto LABEL_28;
  }
  v26 = 4902;
LABEL_28:
  sub_168B9F0((__int64)v37, v25, a5, v26, 0);
  v36 = *(_QWORD *)(a6 + 120);
  sub_15894B0((__int64)v37, &v36);
  sub_15F7200(v37);
  sub_168B9F0((__int64)v37, v25, *(_DWORD *)(v18 + 24), 0x71u, 0);
  sub_15F7200(v37);
  return 1;
}
