__int64 __fastcall Z3_mk_divides(__int64 a1, __int64 a2, __int64 a3)
{
  char v5; // al
  int v6; // eax
  void *v7; // rbx
  __int64 result; // rax
  __int64 v9; // rdi
  void *v10; // rbx
  void *v11; // rbx
  void *v12; // rbx
  __int64 v13; // [rsp+0h] [rbp-80h]
  char v14; // [rsp+8h] [rbp-78h]
  char v15; // [rsp+17h] [rbp-69h] BYREF
  int v16[2]; // [rsp+18h] [rbp-68h] BYREF
  int v17; // [rsp+20h] [rbp-60h] BYREF
  char v18; // [rsp+28h] [rbp-58h]
  _QWORD v19[2]; // [rsp+30h] [rbp-50h] BYREF
  _QWORD v20[8]; // [rsp+40h] [rbp-40h] BYREF

  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  v14 = v5;
  if ( v5 )
    sub_2962F0();
  v6 = *(unsigned __int16 *)(a2 + 4);
  v19[0] = 0;
  *(_DWORD *)(a1 + 1520) = 0;
  v19[1] = 0;
  v20[0] = 1;
  v20[1] = 0;
  if ( (unsigned int)(v6 - 3) > 1
    && (unsigned __int8)sub_1666AE0(a1 + 296, a2, v19, &v15)
    && (v20[0] & 0x100000000LL) == 0
    && LODWORD(v20[0]) == 1
    && (unsigned __int8)sub_182CFA0(qword_1C7F2C0, v19)
    && !((unsigned __int64)sub_182D020(qword_1C7F2C0, v19) >> 32) )
  {
    v17 = sub_182D020(qword_1C7F2C0, v19);
    v9 = *(_QWORD *)(a1 + 232);
    *(_QWORD *)v16 = a3;
    v18 = 0;
    v13 = sub_15DCAD0(v9, (int)v16, 0);
    sub_251FD0(a1, v13);
    sub_24FE40(a1, v13);
    if ( !v14 )
    {
      sub_15D0DF0(&v17);
      v10 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v19);
      sub_182CBA0(v10, v20);
      return v13;
    }
    sub_2BB620(v13);
    sub_15D0DF0(&v17);
    v12 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v12, v20);
    result = v13;
  }
  else
  {
    sub_24EA30(a1, 3u, nullptr);
    if ( !v14 )
    {
      v7 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, v19);
      sub_182CBA0(v7, v20);
      return 0;
    }
    sub_2BB620(0);
    v11 = qword_1C7F2C0;
    sub_182CBA0(qword_1C7F2C0, v19);
    sub_182CBA0(v11, v20);
    result = 0;
  }
  byte_1C7EBA0 = 1;
  return result;
}

