__int64 __fastcall sub_DC16D0(_QWORD *a1, __int64 a2, __int64 *a3, int a4)
{
  _QWORD *v7; // rdi
  __int64 (__fastcall *v8)(__int64); // rax
  _QWORD *v9; // rdi
  __int64 (*v10)(void); // rdx
  _QWORD *v11; // rdi
  _QWORD **v12; // rdi
  char v13; // al
  __int64 v14; // rbp
  unsigned int v15; // r12d
  __int64 v16; // rbx
  int v17; // r13d
  unsigned int v18; // eax
  _BYTE v20[88]; // [rsp+0h] [rbp-58h] BYREF

  v7 = (_QWORD *)a1[3];
  v8 = *(__int64 (__fastcall **)(__int64))(*v7 + 24LL);
  if ( v8 == sub_CCC510 )
  {
    v9 = (_QWORD *)v7[3];
    v10 = *(__int64 (**)(void))(*v9 + 24LL);
    if ( (char *)v10 != (char *)v8 )
    {
LABEL_12:
      v13 = v10();
      goto LABEL_6;
    }
    v11 = (_QWORD *)v9[3];
    v8 = *(__int64 (__fastcall **)(__int64))(*v11 + 24LL);
    if ( (char *)v8 == (char *)v10 )
    {
      v12 = (_QWORD **)v11[3];
      v10 = (__int64 (*)(void))(*v12)[3];
      if ( (char *)v10 == (char *)v8 )
      {
        v13 = (*(__int64 (__fastcall **)(_QWORD *))(*v12[3] + 24LL))(v12[3]);
        goto LABEL_6;
      }
      goto LABEL_12;
    }
  }
  v13 = ((__int64 (*)(void))v8)();
LABEL_6:
  v14 = a1[50];
  if ( v13 && !*(_DWORD *)(v14 + 24) )
    return 0;
  v15 = sub_DA69E0((__int64)a1, a2, v14 + 40);
  if ( !(_BYTE)v15 )
    return 0;
  sub_DFF4E0(
    v20,
    *(_QWORD *)(v14 + 72),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)),
    (unsigned int)(a4 + *(_DWORD *)(v14 + 40)));
  v16 = a1[22];
  v17 = *(unsigned __int16 *)sub_DFDA20(v16, 8);
  sub_DFDA50(v16, 8);
  v18 = sub_B54430(*a3);
  if ( v18 <= 0xF )
    v17 &= (1 << v18) - 1;
  *(_WORD *)sub_CE90A0((__int64)v20) = v17;
  sub_E00FC0(v20);
  sub_DFF560(v20);
  return v15;
}

