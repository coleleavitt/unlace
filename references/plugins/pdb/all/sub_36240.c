__int64 __fastcall sub_36240(_QWORD *a1, __int64 a2, double a3, double a4, double a5)
{
  __int64 v6; // rax
  unsigned int v7; // ebp
  int v8; // eax
  __int64 (*v10)(); // rax
  unsigned int v11; // r14d
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // eax
  __int64 v17; // rdi
  __int64 v18; // rdi
  __int64 (__fastcall **v19)(); // [rsp+0h] [rbp-58h] BYREF
  __int64 v20; // [rsp+8h] [rbp-50h]
  _QWORD *v21; // [rsp+10h] [rbp-48h]
  unsigned __int64 v22; // [rsp+18h] [rbp-40h]

  v6 = *a1;
  v22 = __readfsqword(0x28u);
  v7 = (*(__int64 (__fastcall **)(_QWORD *))(v6 + 16))(a1);
  v8 = *(_DWORD *)(*(_QWORD *)(a1[40] + 8LL) + 112LL);
  if ( v7 )
  {
    if ( (v8 & 0x10) == 0 )
      return v7;
    sub_29760();
LABEL_13:
    callui(24);
    return v7;
  }
  if ( (v8 & 2) == 0 )
  {
    if ( (v8 & 0x10) == 0 )
      goto LABEL_6;
    sub_29760();
    goto LABEL_15;
  }
  sub_29760();
  v11 = sub_33DC0((__int64)a1, a2);
  callui(24);
  if ( (*(_BYTE *)(*(_QWORD *)(a1[40] + 8LL) + 112LL) & 0x10) != 0 )
  {
    sub_29760();
    if ( v11 )
    {
      v7 = v11;
      goto LABEL_13;
    }
LABEL_15:
    v16 = sub_33CD0(a1, a2, v12, v13, v14, v15);
    if ( v16
      || (v21 = a1,
          v17 = a1[40],
          v20 = a2,
          v19 = off_A9E90,
          (v16 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v17 + 16LL))(
                   v17,
                   a2,
                   7,
                   &v19)) != 0) )
    {
      v7 = v16;
      goto LABEL_13;
    }
    v19 = off_A9E90;
    v18 = a1[40];
    v21 = a1;
    v20 = a2;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64 (__fastcall ***)()))(*(_QWORD *)v18 + 16LL))(
            v18,
            a2,
            10,
            &v19);
    callui(24);
  }
  if ( v11 )
    return v11;
LABEL_6:
  sub_29760();
  sub_35280((__int64)a1, a3, a4, a5);
  callui(24);
  if ( (unsigned __int8)callui(27) )
    return (unsigned int)-2147467260;
  v10 = *(__int64 (**)())(*a1 + 24LL);
  if ( v10 == sub_24140 )
    return v7;
  return ((__int64 (__fastcall *)(_QWORD *, __int64))v10)(a1, a2);
}
