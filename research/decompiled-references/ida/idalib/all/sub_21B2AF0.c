__int64 __fastcall sub_21B2AF0(__int64 a1, __int64 a2, __int16 a3)
{
  int v3; // ebx
  bool (__fastcall *v4)(__int64); // rax
  bool (__fastcall *v5)(__int64); // rax
  bool v6; // al
  unsigned __int64 v7; // rbx
  __int64 (__fastcall ***v9)(); // r12
  __int64 v10; // rax
  __int64 v11; // [rsp+18h] [rbp-D0h] BYREF
  void *v12[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v13; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v14; // [rsp+40h] [rbp-A8h]
  _QWORD v15[4]; // [rsp+70h] [rbp-78h] BYREF
  __int16 v16; // [rsp+90h] [rbp-58h]
  _QWORD v17[4]; // [rsp+A0h] [rbp-48h] BYREF
  __int16 v18; // [rsp+C0h] [rbp-28h]

  v3 = a3;
  if ( a3 <= 0 )
    goto LABEL_8;
  v4 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
  if ( v4 != sub_21B1110 )
    v4(a2);
  if ( (unsigned __int16)__ROL2__(*(_WORD *)(*(_QWORD *)(a2 + 48) + 2LL), 8) < v3 )
  {
LABEL_8:
    LODWORD(v14) = v3;
    v15[0] = "the section index (";
    v18 = 770;
    v15[2] = v14;
    v16 = 2563;
    v17[0] = v15;
    v17[2] = ") is invalid";
    v9 = sub_2195B10();
    sub_2253560(v12, v17);
    sub_22205D0(&v11, v12, 6, v9);
    if ( v12[0] != &v13 )
      operator delete(v12[0]);
    v10 = v11;
    *(_BYTE *)(a1 + 8) |= 1u;
    *(_QWORD *)a1 = v10;
    return a1;
  }
  else
  {
    v5 = *(bool (__fastcall **)(__int64))(*(_QWORD *)a2 + 64LL);
    if ( v5 == sub_21B1110 )
      v6 = *(_DWORD *)(a2 + 8) == 12;
    else
      v6 = v5(a2);
    v7 = *(_QWORD *)(a2 + 64) + ((-(__int64)!v6 & 0xFFFFFFFFFFFFFFE0LL) + 72) * (v3 - 1);
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_QWORD *)a1 = v7;
    return a1;
  }
}
