__int64 __fastcall sub_D8BF50(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  int v5; // r15d
  int v6; // r12d
  __int64 v9; // rax
  __int64 v10; // r13
  signed __int64 v11; // r13
  unsigned int v12; // r15d
  _QWORD **v14; // rdi
  __int64 (__fastcall *v15)(__int64); // rax
  __int64 v16; // rax
  _QWORD **v17; // rdi
  __int64 (__fastcall *v18)(__int64); // rax
  __int64 v19; // rax
  __int64 v20; // rsi
  __int64 v21; // rcx
  unsigned __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  __int64 v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  unsigned __int8 v28; // [rsp+Fh] [rbp-89h]
  void *v29; // [rsp+10h] [rbp-88h] BYREF
  unsigned int v30; // [rsp+18h] [rbp-80h]
  void *v31; // [rsp+20h] [rbp-78h] BYREF
  unsigned int v32; // [rsp+28h] [rbp-70h]
  char v33; // [rsp+2Ch] [rbp-6Ch]
  _QWORD v34[3]; // [rsp+30h] [rbp-68h] BYREF
  int v35; // [rsp+48h] [rbp-50h]
  __int64 v36; // [rsp+50h] [rbp-48h]
  __int64 v37; // [rsp+58h] [rbp-40h]

  v5 = 13;
  v6 = a3;
  v9 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 32);
  if ( (*(_BYTE *)(v9 + 1) & 6) == 0 )
    v5 = sub_CE6180(a1[23], *(_QWORD *)(v9 + 8), a3, a4, a5);
  v10 = a1[22];
  sub_E21760(v10, 48);
  sub_E23260(v34);
  sub_E21790(v10, 48);
  sub_D8B1A0((__int64)&v29, a1[22], v5);
  v11 = (signed __int64)v29;
  if ( v30 > 0x40 )
    v11 = *(_QWORD *)v29;
  if ( v11 != (v11 & -v11) )
    goto LABEL_6;
  v14 = (_QWORD **)a1[3];
  v15 = (__int64 (__fastcall *)(__int64))(*v14)[13];
  v16 = v15 == sub_D8A670 ? (*(__int64 (__fastcall **)(_QWORD *))(*v14[3] + 104LL))(v14[3]) : ((__int64 (*)(void))v15)();
  v17 = (_QWORD **)a1[3];
  v28 = *(_BYTE *)(*(_QWORD *)(v16 + 17448) + 287LL);
  v18 = (__int64 (__fastcall *)(__int64))(*v17)[13];
  v19 = v18 == sub_D8A670 ? (*(__int64 (__fastcall **)(_QWORD *))(*v17[3] + 104LL))(v17[3]) : ((__int64 (*)(void))v18)();
  v20 = v28;
  if ( v11 > (__int64)sub_A97FF0(v19, v28) )
    goto LABEL_6;
  if ( v11 == 1 )
    goto LABEL_33;
  if ( !v35 || v35 == 2 )
  {
    if ( v36 )
      goto LABEL_34;
    goto LABEL_33;
  }
  if ( v35 == 3 )
    goto LABEL_34;
  v21 = v34[0];
  v20 = v34[0] | v37;
  if ( !(v34[0] | v37) )
  {
LABEL_33:
    v12 = 1;
    *(_BYTE *)sub_E216C0(a1[22], 8) = 1;
    goto LABEL_8;
  }
  if ( v35 == 1 )
  {
    if ( v36 )
      v21 = *(unsigned int *)(v36 + 16) * v34[0];
    v33 = 1;
    v20 = 0xFFFFFFFFLL;
    v32 = 64;
    v31 = (void *)(v21 + v37);
    if ( v11 )
    {
      _BitScanReverse64(&v22, v11);
      v20 = 63 - ((unsigned int)v22 ^ 0x3F);
    }
    v12 = sub_2206910(&v31, v20);
    if ( v32 > 0x40 && v31 )
      operator delete[](v31);
    if ( (_BYTE)v12 )
    {
      *(_BYTE *)sub_E216C0(a1[22], 8) = 1;
      goto LABEL_8;
    }
  }
LABEL_34:
  v23 = *(_QWORD *)(a2 + 8 * (((*(_BYTE *)(a2 + 2) & 8) != 0) + 1LL) + 40);
  if ( (*(_WORD *)v23 & 0x1FF) == 0x4F && ((*(_WORD *)(v23 + 2) >> 3) & 0x7F) == 1 )
    v23 = *(_QWORD *)(v23 + 16);
  v24 = *(_QWORD *)(*(_QWORD *)(v23 + 8) & 0xFFFFFFFFFFFFFFF0LL);
  if ( *(_BYTE *)(v24 + 16) == 42
    || (v27 = *(_QWORD *)(*(_QWORD *)(v24 + 8) & 0xFFFFFFFFFFFFFFF0LL), *(_BYTE *)(v27 + 16) == 42)
    && (v24 = sub_F63050(v24, v20, v27, v21)) != 0 )
  {
    v25 = *(_QWORD *)(v24 + 32);
    if ( !(unsigned __int8)sub_F62670(*(_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL), 0) )
    {
      v26 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)a1[3] + 104LL))(a1[3]);
      if ( v11 <= (__int64)sub_A980A0(v26, v25) )
        goto LABEL_33;
    }
  }
LABEL_6:
  v12 = 0;
  if ( v6 == 175 )
  {
    v12 = 1;
    *(_BYTE *)sub_E216C0(a1[22], 8) = 0;
  }
LABEL_8:
  if ( v30 > 0x40 && v29 )
    operator delete[](v29);
  sub_E232A0(v34);
  return v12;
}
