__int64 __fastcall sub_777820(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 (*v5)(); // rax
  __int64 v6; // rax
  __int64 v7; // rdi
  __int64 v8; // r14
  __int64 (*v9)(); // rax
  __int64 (*v10)(); // rax
  __int64 v11; // rax
  __int64 v12; // rax
  unsigned int v13; // ebx
  __int64 v15[6]; // [rsp+8h] [rbp-30h] BYREF

  v5 = *(__int64 (**)())(*(_QWORD *)a1 + 32LL);
  if ( v5 == sub_6A41B0 )
  {
    v6 = sub_777E10(a1);
    v7 = a2;
    v8 = v6;
    v9 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
    if ( v9 == sub_6A41B0 )
      goto LABEL_3;
LABEL_10:
    if ( ((__int64 (__fastcall *)(__int64))v9)(v7) != v8 )
      goto LABEL_4;
    return 0;
  }
  v7 = a2;
  v8 = v5();
  v9 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v9 != sub_6A41B0 )
    goto LABEL_10;
LABEL_3:
  if ( sub_777E10(v7) == v8 )
    return 0;
LABEL_4:
  *a3 = a1;
  v10 = *(__int64 (**)())(*(_QWORD *)a2 + 32LL);
  if ( v10 == sub_6A41B0 )
    v11 = sub_777E10(a2);
  else
    v11 = ((__int64 (__fastcall *)(__int64))v10)(a2);
  v15[0] = v11;
  v12 = sub_798D40(a1);
  v13 = sub_76FAA0(
          (__int64)a3,
          v12,
          a1,
          (unsigned __int8 (__fastcall *)(__int64, __int64, __int64))sub_777B70,
          (__int64)v15,
          0);
  if ( (_BYTE)v13 )
    sub_773780((__int64)a3);
  return v13;
}

