__int64 __fastcall sub_16CE840(__int64 *a1, __int64 a2, double a3)
{
  unsigned int v3; // r13d
  _QWORD *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  __int64 v9; // r8
  __int64 v10; // rax
  __int64 v11; // rax
  int v12; // eax
  __int64 v13; // rax
  unsigned int v15; // eax
  __int64 *v16; // rsi
  unsigned int v17; // ecx
  __int64 v18; // [rsp+8h] [rbp-C0h] BYREF
  _BYTE v19[184]; // [rsp+10h] [rbp-B8h] BYREF

  v3 = 1;
  v5 = *(_QWORD **)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  v6 = sub_191BD20(a1, v5);
  if ( v6 == 1 )
    return v3;
  v8 = sub_BFBAE0(v6 & 0xFFFFFFFFFFFFFFFELL);
  v10 = *(_QWORD *)(*(_QWORD *)(v8 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v10 + 16) != 42
    && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v10 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 2) > 4u )
  {
    goto LABEL_15;
  }
  v5 = (_QWORD *)a1[31];
  v3 = sub_C01160(v8, (__int64)v5, 1, v7, v9);
  if ( (_BYTE)v3 )
  {
    v15 = sub_EEB7E0(v8, (__int64)v5, a3);
    v16 = a1 + 1;
    v17 = 3345;
LABEL_14:
    sub_168B9F0((__int64)v19, v16, v15, v17, 0);
    v18 = sub_EEC8C0(v8, (__int64)v16, a3);
    v3 = *(unsigned __int8 *)(sub_1587DB0((__int64)v19, &v18) + 120);
    sub_15F7200(v19);
    return v3;
  }
  if ( (*(_WORD *)v8 & 0x1FF) != 0x2E
    || (v5 = (_QWORD *)a1[31], !sub_BF76D0(v8, v5, (*(_BYTE *)(a1[29] + 213) >> 2) & 3, 0)) )
  {
LABEL_15:
    v15 = sub_EEB7E0(v8, (__int64)v5, a3);
    v16 = a1 + 1;
    v17 = 3347;
    goto LABEL_14;
  }
  v11 = sub_F6A430(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v8 + 24) + 48LL) & 0xFFFFFFFFFFFFFFF0LL));
  if ( v11
    && (v12 = *(_DWORD *)(v11 + 16), (v12 & 0x1000000) == 0)
    && (v12 & 0x800000) == 0
    && (v13 = sub_B782F0(*(_QWORD *)(v8 + 24))) != 0 )
  {
    *(_QWORD *)(a2 + 8) = sub_A70010(a1[31], *(_QWORD *)(v13 + 48));
  }
  else
  {
    *(_QWORD *)(a2 + 8) = sub_A70010(a1[31], *(_QWORD *)(a1[31] + 18632));
  }
  return v3;
}
