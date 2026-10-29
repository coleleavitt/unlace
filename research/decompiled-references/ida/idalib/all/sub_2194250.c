__int64 __fastcall sub_2194250(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r8
  __int64 v7; // r9
  unsigned int *v8; // rax
  __int64 v9; // rbx
  __int64 v11; // rax
  unsigned int v12; // eax
  __int64 v13; // rdx
  __int64 v14; // [rsp+8h] [rbp-80h] BYREF
  unsigned int *v15; // [rsp+10h] [rbp-78h] BYREF
  char v16; // [rsp+18h] [rbp-70h]
  _BYTE v17[32]; // [rsp+20h] [rbp-68h] BYREF
  unsigned int *v18; // [rsp+40h] [rbp-48h] BYREF
  char v19; // [rsp+48h] [rbp-40h]
  __int16 v20; // [rsp+60h] [rbp-28h]

  sub_216F6A0((__int64)&v18, (__int64 *)(a1 + 56), (unsigned int)a2, a4, a5, a6);
  if ( (v19 & 1) != 0 )
  {
    v8 = v18;
    v16 |= 1u;
    v18 = nullptr;
    v15 = v8;
  }
  else
  {
    sub_2194080((__int64)&v15, (__int64 *)(a1 + 56), v18, HIDWORD(a2), v6, v7);
  }
  sub_216F7A0((__int64 *)&v18);
  if ( (v16 & 1) != 0 )
  {
    v11 = (__int64)v15;
    v15 = nullptr;
    v14 = v11;
    v12 = sub_2220DB0(&v14);
    (*(void (__fastcall **)(_BYTE *, __int64, _QWORD))(*(_QWORD *)v13 + 32LL))(v17, v13, v12);
    v18 = (unsigned int *)v17;
    v20 = 260;
    sub_2221AD0(&v18, 1);
  }
  v9 = (__int64)v15;
  sub_218B630((__int64 *)&v15);
  return v9;
}
