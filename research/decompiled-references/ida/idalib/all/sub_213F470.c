__int64 __fastcall sub_213F470(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdi
  bool v8; // zf
  unsigned int v9; // ebp
  __int64 v10; // rax
  unsigned int v11; // ebx
  __int64 v12; // rsi
  __int64 v13; // r13
  unsigned int v14; // r15d
  void (__fastcall *v15)(__int64, __int64, _QWORD); // r14
  void *v17; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v18; // [rsp+8h] [rbp-40h]

  v7 = *a1;
  v18 = 1;
  v8 = *(_BYTE *)(v7 + 861) == 0;
  v17 = nullptr;
  if ( v8 )
  {
    if ( (unsigned __int8)sub_2129170(v7) )
    {
LABEL_13:
      v9 = 1;
      goto LABEL_7;
    }
    v7 = *a1;
  }
  v9 = sub_213ECC0(v7, a1[1], (__int64)&v17, a4, a5, a6);
  if ( (_BYTE)v9 )
    goto LABEL_13;
  v10 = *a1;
  v11 = v18;
  v12 = (__int64)v17;
  v13 = *(_QWORD *)(v10 + 24);
  v14 = v18 >> 3;
  v15 = *(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 536LL);
  if ( v18 > 0x40 )
  {
    v12 = -1;
    if ( v11 - (unsigned int)sub_2206780(&v17) <= 0x40 )
      v12 = *(_QWORD *)v17;
  }
  v15(v13, v12, v14);
LABEL_7:
  if ( v18 > 0x40 && v17 )
    operator delete[](v17);
  return v9;
}
