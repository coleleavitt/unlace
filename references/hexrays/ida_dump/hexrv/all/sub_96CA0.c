__int64 __fastcall sub_96CA0(__int64 a1, __int64 a2)
{
  _DWORD *v2; // r12
  __int64 result; // rax
  __int64 v4; // rax
  __int64 v5; // r14
  unsigned __int8 v6; // al
  unsigned __int8 v7; // [rsp+Fh] [rbp-99h]
  _QWORD v8[4]; // [rsp+10h] [rbp-98h] BYREF
  _QWORD v9[2]; // [rsp+30h] [rbp-78h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp-68h] BYREF
  __int128 v11; // [rsp+48h] [rbp-60h]
  __int64 v12; // [rsp+58h] [rbp-50h]
  unsigned __int64 v13; // [rsp+68h] [rbp-40h]

  v13 = __readfsqword(0x28u);
  if ( *(_DWORD *)a2 != 10 )
    return 0;
  if ( *(_BYTE *)(a2 + 32) != 4 )
    return 0;
  v2 = *(_DWORD **)(a2 + 40);
  if ( !v2 )
    return 0;
  result = 0;
  if ( (unsigned int)(*v2 - 23) <= 1 )
  {
    v8[1] = a1;
    v11 = 0;
    v8[0] = &off_4AE870;
    v9[0] = 0xFFFFFFFF00000000LL;
    v10 = 0xFFFFFFFF00000000LL;
    v8[2] = 0;
    v8[3] = 0;
    v9[1] = 0;
    v12 = 0xFFFFFFFFLL;
    v4 = sub_91030((__int64)v8, a2, 1u);
    v5 = v4;
    if ( v4 && (unsigned __int8)sub_12BE60(a1, a2, a2, v4, v4) )
      v6 = sub_96890(a1, (__int64)v8, v5, a2);
    else
      v6 = 0;
    v7 = v6;
    v8[0] = &off_4AE870;
    sub_1188E0(&v10);
    sub_1188E0(v9);
    return v7;
  }
  return result;
}
