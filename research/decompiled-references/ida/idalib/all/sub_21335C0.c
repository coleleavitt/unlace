__int64 __fastcall sub_21335C0(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r14
  unsigned int v4; // eax
  unsigned int v5; // ebp
  __int64 v6; // rdi
  __int64 v7; // r15
  _BYTE *v8; // rdx
  __int64 (*v9)(); // rax
  __int64 v11; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v12[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v13; // [rsp+30h] [rbp-48h]

  v3 = *(_QWORD *)(a1 + 184);
  v12[0] = 0;
  LOBYTE(v4) = sub_2133530(a1, (unsigned __int64 *)&v11, (__int64)v12);
  v5 = v4;
  if ( !(_BYTE)v4 )
  {
    v6 = *(_QWORD *)(a1 + 24);
    v7 = v11;
    v8 = nullptr;
    v9 = *(__int64 (**)())(*(_QWORD *)v6 + 80LL);
    if ( v9 != sub_210EC60 )
      v8 = (_BYTE *)((__int64 (__fastcall *)(__int64, __int64 *, _QWORD))v9)(v6, &v11, 0);
    if ( !sub_210E270(v7, a2, v8) )
    {
      v12[0] = "expected absolute expression";
      v13 = 259;
      return (unsigned int)sub_2153E90(a1, v3, v12, 0, 0);
    }
  }
  return v5;
}
