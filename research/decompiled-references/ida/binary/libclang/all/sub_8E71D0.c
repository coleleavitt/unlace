__int64 __fastcall sub_8E71D0(_QWORD *a1, unsigned int a2, __int64 a3)
{
  _QWORD *v4; // rdi
  __int64 (__fastcall *v5)(__int64); // rax
  _QWORD *v6; // rdi
  __int64 (*v7)(void); // rdx
  _QWORD *v8; // rdi
  _QWORD **v9; // rdi
  char v10; // al
  unsigned int v11; // edx
  __int64 v12; // r12
  int *v13; // rax
  __int64 v14; // r11
  __int64 v15; // r13
  __int64 v16; // rbx
  __int64 v17; // rbx
  __int64 v18; // rdi
  unsigned int v19; // eax
  _QWORD v21[4]; // [rsp+0h] [rbp-68h] BYREF
  int v22; // [rsp+20h] [rbp-48h]
  int v23; // [rsp+30h] [rbp-38h]

  a1[100] = a3;
  v4 = (_QWORD *)a1[51];
  v5 = *(__int64 (__fastcall **)(__int64))(*v4 + 24LL);
  if ( v5 == sub_8D7F10 )
  {
    v6 = (_QWORD *)v4[3];
    v7 = *(__int64 (**)(void))(*v6 + 24LL);
    if ( (char *)v7 != (char *)v5 )
    {
LABEL_15:
      v10 = v7();
      goto LABEL_6;
    }
    v8 = (_QWORD *)v6[3];
    v5 = *(__int64 (__fastcall **)(__int64))(*v8 + 24LL);
    if ( (char *)v5 == (char *)v7 )
    {
      v9 = (_QWORD **)v8[3];
      v7 = (__int64 (*)(void))(*v9)[3];
      if ( (char *)v7 == (char *)v5 )
      {
        v10 = (*(__int64 (__fastcall **)(_QWORD *))(*v9[3] + 24LL))(v9[3]);
        goto LABEL_6;
      }
      goto LABEL_15;
    }
  }
  v10 = ((__int64 (*)(void))v5)();
LABEL_6:
  v11 = 0;
  if ( !v10 )
  {
    v12 = a1[71];
    v13 = sub_8CFFE0((__int64 *)(a1[73] + 192LL), a2);
    if ( v13 == (int *)(*(_QWORD *)(v14 + 192) + 16LL * *(unsigned int *)(v14 + 208)) )
    {
      v17 = *(_QWORD *)(v14 + 168) + a2 - (unsigned __int64)*(unsigned int *)(v14 + 160);
    }
    else
    {
      sub_A1BF70(v21, *((_QWORD *)v13 + 1));
      v15 = v21[3];
      v16 = v21[0];
      if ( !v23 && *(_BYTE *)(sub_8E5480((__int64)v21) + 51) && v16 == v22 )
        v17 = v15 + v16 + 72;
      else
        v17 = v15 + v16 + 40;
      sub_A1C0C0(v21);
    }
    v18 = sub_A1A4E0(v12, 16);
    v19 = *(_DWORD *)(v17 + 8);
    *(_DWORD *)(v18 + 8) = v19;
    if ( v19 > 0x40 )
      sub_2585B30(v18);
    else
      *(_QWORD *)v18 = *(_QWORD *)v17;
    return 1;
  }
  return v11;
}

