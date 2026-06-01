__int64 __fastcall sub_9DB250(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
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
  __int64 v19; // r13
  __int64 v20; // r14
  _WORD *v21; // rax
  _QWORD v23[4]; // [rsp+0h] [rbp-68h] BYREF
  unsigned int v24; // [rsp+20h] [rbp-48h]
  int v25; // [rsp+30h] [rbp-38h]

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_8D7F10 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(unsigned __int8 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
      goto LABEL_13;
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
LABEL_13:
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
    v23,
    *(_QWORD *)(v14 + 64),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
  v16 = a1[23];
  v17 = *(unsigned __int16 *)sub_A1A5A0(v16, 8);
  sub_A1A5E0(v16, 8);
  v18 = sub_781830(*a3);
  if ( v18 <= 0xF )
    v17 &= (1 << v18) - 1;
  v19 = v23[3];
  v20 = v23[0];
  if ( !v25 && *(_BYTE *)(sub_8E5480((__int64)v23) + 51) && v24 == v20 )
    v21 = (_WORD *)(v19 + v24 + 72);
  else
    v21 = (_WORD *)(v19 + v20 + 40);
  *v21 = v17;
  sub_A1DB00(v23);
  sub_A1C0C0(v23);
  return v15;
}

