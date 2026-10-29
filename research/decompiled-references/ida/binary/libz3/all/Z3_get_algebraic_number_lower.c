__int64 __fastcall Z3_get_algebraic_number_lower(__int64 a1, __int64 a2, unsigned int a3)
{
  char v5; // bp
  __int64 v6; // r12
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // r14
  __int64 v13; // rax
  int v14; // ecx
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // rdi
  void *v18; // rbx
  void *v19; // rbx
  _QWORD v20[2]; // [rsp+0h] [rbp-58h] BYREF
  _QWORD v21[9]; // [rsp+10h] [rbp-48h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29AB80();
  *(_DWORD *)(a1 + 1520) = 0;
  if ( (unsigned __int8)Z3_is_algebraic_number(a1, a2) )
  {
    v8 = sub_1666D30(a1 + 296, a2);
    v11 = *(_QWORD *)(a1 + 304);
    v12 = v8;
    v20[0] = 0;
    v20[1] = 0;
    v21[0] = 1;
    v21[1] = 0;
    if ( !v11 )
    {
      sub_16669E0(a1 + 296);
      v11 = *(_QWORD *)(a1 + 304);
    }
    v13 = sub_1666310(v11, a2, v9, v10);
    ((void (__fastcall *)(__int64, __int64, _QWORD *, _QWORD))sub_17B47B0)(v13, v12, v20, a3);
    v17 = *(_QWORD *)(a1 + 304);
    if ( !v17 )
    {
      sub_16669E0(a1 + 296);
      v17 = *(_QWORD *)(a1 + 304);
    }
    v6 = sub_166A700(v17, (unsigned int)v20, 0, v14, v15, v16);
    sub_251FD0(a1, v6);
    if ( !v5 )
    {
      v18 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v20);
      sub_182CBA0(v18, v21);
      return v6;
    }
    sub_2BB620(v6);
    v19 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v20);
    sub_182CBA0(v19, v21);
LABEL_13:
    byte_1C7EBA0 = 1;
    return v6;
  }
  sub_24EA30(a1, 3u, nullptr);
  v6 = 0;
  if ( v5 )
  {
    sub_2BB620(0);
    v6 = 0;
    goto LABEL_13;
  }
  return v6;
}

