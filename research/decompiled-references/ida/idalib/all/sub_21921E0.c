__int64 __fastcall sub_21921E0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned __int64 *v6; // rax
  __int64 v7; // rbx
  __int64 v9; // rax
  unsigned int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // [rsp+8h] [rbp-80h] BYREF
  unsigned __int64 *v13; // [rsp+10h] [rbp-78h] BYREF
  char v14; // [rsp+18h] [rbp-70h]
  _BYTE v15[32]; // [rsp+20h] [rbp-68h] BYREF
  unsigned __int64 *v16; // [rsp+40h] [rbp-48h] BYREF
  char v17; // [rsp+48h] [rbp-40h]
  __int16 v18; // [rsp+60h] [rbp-28h]

  sub_216F990((__int64)&v16, (_QWORD *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v17 & 1) != 0 )
  {
    v6 = v16;
    v14 |= 1u;
    v16 = nullptr;
    v13 = v6;
  }
  else
  {
    sub_2192010((__int64)&v13, (_QWORD *)(a1 + 56), v16, HIDWORD(a2));
  }
  sub_216FA80((__int64 *)&v16);
  if ( (v14 & 1) != 0 )
  {
    v9 = (__int64)v13;
    v13 = nullptr;
    v12 = v9;
    v10 = sub_2220DB0(&v12);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v11 + 32LL))(v15, v11, v10);
    v16 = (unsigned __int64 *)v15;
    v18 = 260;
    sub_2221AD0(&v16, 1);
  }
  v7 = (__int64)v13;
  sub_218B5B0((__int64 *)&v13);
  return v7;
}
