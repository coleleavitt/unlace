void __fastcall sub_1451B60(__int64 a1, int *a2)
{
  __int64 v3; // rax
  __int64 v4; // r12
  unsigned __int64 v5; // rax
  _BYTE *v6; // rax
  char *v7; // r12
  __int64 v8; // r13
  size_t v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdi
  unsigned int v12; // r12d
  char *s; // [rsp+0h] [rbp-78h] BYREF
  int v14; // [rsp+Ch] [rbp-6Ch]

  if ( sub_14363F0((_QWORD *)a1) )
  {
    sub_FC70B0((__int64)&s, *(_QWORD *)(a1 + 48), *a2, 1298);
    sub_AEA040((__int64)&s);
  }
  else
  {
    v3 = sub_1436660((_QWORD *)a1);
    v4 = *(_QWORD *)(a1 + 104);
    v5 = sub_1465F30(v3);
    v6 = (_BYTE *)sub_13C2790(v4, v5);
    *v6 = *v6 & 0xC7 | 8;
    sub_1022900((__int64)&s, *(__int64 **)(a1 + 88), *a2, 1);
    v7 = s;
    if ( s )
    {
      v8 = *(_QWORD *)(a1 + 88);
      v9 = strlen(s);
      v10 = sub_1022E90(v8, v7, v9);
      v11 = *(_QWORD *)(a1 + 1192);
      v12 = v10;
      if ( v11 )
        (*(void (__fastcall **)(__int64, _QWORD, __int64, __int64, _QWORD))(*(_QWORD *)v11 + 16LL))(
          v11,
          (unsigned int)*a2,
          2,
          1,
          0);
      sub_1021710(*(_QWORD *)(a1 + 88), *a2, v14 + 1, v12, 0, 0, 1u);
    }
  }
}
