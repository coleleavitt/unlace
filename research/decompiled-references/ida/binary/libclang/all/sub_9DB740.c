__int64 __fastcall sub_9DB740(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  unsigned __int8 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  char v13; // al
  __int64 v14; // r14
  unsigned int v15; // r12d
  __int64 v16; // r14
  int v17; // ebx
  unsigned int v18; // eax
  char v19; // cl
  _BYTE *v20; // rcx
  int v22; // eax
  bool v23; // zf
  __int64 v24; // rsi
  _QWORD v25[3]; // [rsp+0h] [rbp-68h] BYREF
  __int64 v26; // [rsp+18h] [rbp-50h]
  unsigned int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+30h] [rbp-38h]

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(unsigned __int8 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
      goto LABEL_12;
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (unsigned __int8 (*)(void))(*v12)[3];
      if ( (char *)v10 == (char *)v8 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 24LL))(v12[3]);
        goto LABEL_6;
      }
LABEL_12:
      if ( v10() )
        return 0;
      goto LABEL_7;
    }
  }
  v13 = ((__int64 (*)(void))v8)();
LABEL_6:
  if ( v13 )
    return 0;
LABEL_7:
  v14 = a1[25];
  v15 = sub_9D9870((__int64)a1, a2, v14 + 40);
  if ( !(_BYTE)v15 )
    return 0;
  sub_A1C030(
    v25,
    *(_QWORD *)(v14 + 64),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
  v16 = a1[23];
  v17 = *(unsigned __int8 *)sub_A1A5A0(v16, 8);
  sub_A1A5E0(v16, 8);
  v18 = sub_781830(*a3);
  v19 = v18;
  if ( v18 <= 7 )
  {
    v22 = v17 & ((1 << v18) - 1) | -(1 << v18);
    v23 = ((unsigned __int8)(1 << (v19 - 1)) & (unsigned __int8)v17) == 0;
    LOBYTE(v17) = v17 & ((1 << v19) - 1);
    if ( !v23 )
      LOBYTE(v17) = v22;
  }
  if ( v28 )
    goto LABEL_10;
  v24 = *(_QWORD *)(v26 + 32);
  if ( *(_DWORD *)(v24 + 16) != v27 && v27 )
    v24 = *(_QWORD *)(v26 + v27 + 32);
  if ( !*(_BYTE *)(v24 + 51) || (v20 = (_BYTE *)(v26 + v25[0] + 72), v25[0] != v27) )
LABEL_10:
    v20 = (_BYTE *)(v26 + v25[0] + 40);
  *v20 = v17;
  sub_A1DB00(v25);
  sub_A1C0C0(v25);
  return v15;
}

