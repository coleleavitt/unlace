__int64 __fastcall sub_5143E0(_QWORD *a1, __int64 a2, unsigned __int8 a3)
{
  __int64 v3; // r13
  __int64 (__fastcall *v5)(_BYTE *, _BYTE *, _QWORD *); // rax
  __int64 v6; // rax
  _BYTE *v7; // rcx
  __int64 v8; // r8
  __int64 v10; // [rsp+8h] [rbp-440h] BYREF
  _BYTE v11[1024]; // [rsp+10h] [rbp-438h] BYREF
  _BYTE v12[8]; // [rsp+410h] [rbp-38h] BYREF
  unsigned __int64 v13; // [rsp+418h] [rbp-30h]

  v10 = a2;
  v3 = qword_2CCB598;
  v13 = __readfsqword(0x28u);
  v5 = *(__int64 (__fastcall **)(_BYTE *, _BYTE *, _QWORD *))(*(_QWORD *)(qword_2CCB598 + 1768) + 88LL);
  if ( v5 )
  {
    v6 = v5(v11, v12, a1);
    v7 = v11;
    v8 = v6;
  }
  else
  {
    v7 = a1;
    v8 = 32;
  }
  return sub_7BE7C0(&v10, v3, *a1, v7, v8, a3 | 0x100u);
}
