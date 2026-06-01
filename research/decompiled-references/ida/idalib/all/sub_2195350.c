void *__fastcall sub_2195350(_QWORD *a1, unsigned __int64 a2, _QWORD *a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int (*v7)(void); // rax
  __int64 v8; // r15
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // eax
  __int64 v14; // rsi
  __int64 v16; // rax
  unsigned int v17; // eax
  __int64 v18; // rdx
  __int64 v19; // [rsp+18h] [rbp-A0h] BYREF
  __int64 v20; // [rsp+20h] [rbp-98h] BYREF
  char v21; // [rsp+28h] [rbp-90h]
  _BYTE v22[32]; // [rsp+30h] [rbp-88h] BYREF
  _BYTE *v23; // [rsp+50h] [rbp-68h] BYREF
  __int16 v24; // [rsp+70h] [rbp-48h]

  v7 = *(unsigned int (**)(void))(*a1 + 320LL);
  if ( (char *)v7 == (char *)sub_2194E90 )
  {
    sub_216EEC0((__int64)&v20, a1 + 7, (unsigned int)a2, a4, a5, a6);
    if ( (v21 & 1) != 0 )
    {
      v16 = v20;
      v20 = 0;
      v19 = v16;
      v17 = sub_2220DB0(&v19);
      (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v18 + 32LL))(v22, v18, v17);
      v24 = 260;
      v23 = v22;
      sub_2221AD0(&v23, 1);
    }
    v8 = v20;
    sub_216EFC0(&v20);
    v13 = *(_DWORD *)(v8 + 4);
    if ( v13 == 1073741844 )
    {
      v14 = *(unsigned int *)(*(_QWORD *)(a1[18] + 16LL * (unsigned int)a2) + 16 * HIDWORD(a2) + 8);
    }
    else if ( v13 == 9 )
    {
      v14 = *(unsigned __int8 *)(sub_2194B30((__int64)a1, a2, v9, v10, v11, v12) + 4);
    }
    else
    {
      v14 = *(unsigned __int8 *)(sub_2194DC0((__int64)a1, a2, v9, v10, v11, v12) + 4);
    }
  }
  else
  {
    v14 = v7();
  }
  return sub_216F000((__int64)(a1 + 7), v14, a3);
}
