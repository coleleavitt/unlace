__int64 __fastcall sub_15260(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // rax
  int v5; // r13d
  __int64 v6; // r14
  __int64 v7; // r15
  __int64 v8; // rax
  __int64 v10; // [rsp+8h] [rbp-80h]
  unsigned int v11; // [rsp+10h] [rbp-78h] BYREF
  unsigned int v12; // [rsp+14h] [rbp-74h] BYREF
  __int64 v13; // [rsp+18h] [rbp-70h] BYREF
  _QWORD v14[3]; // [rsp+20h] [rbp-68h] BYREF
  _BOOL4 v15; // [rsp+38h] [rbp-50h]
  unsigned __int64 v16; // [rsp+48h] [rbp-40h]

  v3 = *(_QWORD *)a1;
  v16 = __readfsqword(0x28u);
  v11 = 0;
  v13 = 0;
  if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64 *, unsigned int *, unsigned int *, __int64, _QWORD))(v3 + 16))(
          a1,
          &v13,
          &v11,
          &v12,
          a3,
          0) )
    return 0xFFFFFFFFLL;
  v5 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 392LL))(a1, a3);
  if ( !v5 )
    return 0xFFFFFFFFLL;
  v6 = v12;
  v7 = v11;
  v10 = v13;
  v8 = sub_15060(a1, 5);
  v14[1] = a1;
  *(_QWORD *)(a2 + 24) = v8;
  v14[0] = &off_3C598;
  v14[2] = a2;
  v15 = v5 != 2;
  return (**(__int64 (__fastcall ***)(__int64, _QWORD *, __int64, _QWORD, __int64, _QWORD, __int64, __int64))a1)(
           a1,
           v14,
           v10,
           0,
           a3,
           0,
           v7,
           v6);
}
