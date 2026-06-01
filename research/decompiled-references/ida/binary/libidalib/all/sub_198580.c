__int64 __fastcall sub_198580(_DWORD *a1, __int64 a2, double a3, double a4, __m128 a5)
{
  __int64 v6; // rax
  void (*v8)(void); // rax
  __int64 v9; // rdx
  __int64 *v10; // rsi
  __int64 v11; // rcx
  _BYTE *v12; // rdi
  __int64 (*v13)(); // rax
  void (__fastcall *v14)(__int64, __int64, __int64, __int64); // rax
  int v15; // ecx
  void (*v16)(); // rax
  int v17; // ecx
  unsigned int v18; // r14d
  int v20; // eax
  __int64 v21; // [rsp+0h] [rbp-58h] BYREF
  __int128 v22; // [rsp+8h] [rbp-50h]
  __int64 v23; // [rsp+18h] [rbp-40h]
  unsigned __int64 v24; // [rsp+28h] [rbp-30h]

  v6 = *(_QWORD *)a1;
  v24 = __readfsqword(0x28u);
  v8 = *(void (**)(void))(v6 + 392);
  if ( v8 != nullsub_121 )
    v8();
  a1[480] |= 1u;
  v9 = a2 + 8;
  v10 = &v21;
  v21 = 0;
  v22 = 0;
  v23 = -1;
  sub_195120(0.0, a4, a5, (__int64)a1, (__int64)&v21, v9, 0);
  v12 = *((_BYTE **)a1 + 315);
  if ( (v12[12] & 4) == 0 )
  {
    v10 = *((__int64 **)a1 + 315);
    v20 = sub_192CD0((__int64)&v21, (__int64)v10, (_BYTE *)&qword_70 + 1, 0);
    goto LABEL_18;
  }
  v13 = *(__int64 (**)())(*(_QWORD *)v12 + 112LL);
  if ( v13 != sub_B73F0 )
  {
    v10 = &v21;
    v20 = ((__int64 (__fastcall *)(_BYTE *, __int64 *))v13)(v12, &v21);
LABEL_18:
    v18 = 0;
    if ( !v20 )
      goto LABEL_14;
  }
  v14 = *(void (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)a1 + 344LL);
  if ( v14 == sub_198530 )
  {
    sub_183B40((__int64)(a1 + 40), (__int64)v10, (__int64)sub_198530, v11);
    *((_BYTE *)a1 + 2120) = 0;
    *((_QWORD *)a1 + 241) = -1;
  }
  else
  {
    ((void (__fastcall *)(_DWORD *))v14)(a1);
  }
  v15 = *(_DWORD *)(a2 + 64);
  if ( (v15 & 0x40) == 0 )
    sub_194A90((__int64)a1, (__int64 *)(a2 + 8), (__int64)&v21, v15);
  v16 = *(void (**)())(*(_QWORD *)a1 + 296LL);
  if ( v16 == sub_197ED0 )
    nullsub_113();
  else
    ((void (__fastcall *)(_DWORD *, __int64, _QWORD))v16)(a1, a2 + 8, 0);
  v17 = a1[544];
  if ( v17 >= 0 )
    (*(void (__fastcall **)(__int64, unsigned __int64, unsigned __int64, _QWORD))(*(_QWORD *)(TProgram::application
                                                                                            + 136LL)
                                                                                + 176LL))(
      TProgram::application + 136LL,
      (unsigned __int64)((v17 & 0x40) == 0) << v17,
      (unsigned __int64)((v17 & 0x40) != 0) << v17,
      0);
  v18 = 1;
LABEL_14:
  if ( v21 )
  {
    *(_QWORD *)&v22 = 0;
    qfree();
  }
  return v18;
}

