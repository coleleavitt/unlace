bool __fastcall sub_8EA690(__int64 a1, const void **a2, __int64 a3)
{
  char *v3; // rbx
  bool v4; // cf
  char *v5; // rdx
  bool result; // al
  unsigned __int64 v7; // r12
  __int64 v8; // rax
  const void *v9; // r15
  const void *v10; // [rsp+8h] [rbp-60h]
  const void *v11; // [rsp+18h] [rbp-50h] BYREF
  _QWORD v12[9]; // [rsp+20h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v3 = (char *)*a2;
  v11 = v3;
  v4 = __CFADD__(v3, a3);
  v5 = &v3[a3];
  if ( v4 )
    return 0;
  v12[0] = v3;
  v7 = (unsigned __int64)v5;
  *(_DWORD *)a1 = unpack_dd(v12);
  v11 = (const void *)v12[0];
  if ( (unsigned __int64)v3 >= v12[0] )
    return 0;
  if ( !sub_7E30F0((_DWORD *)(a1 + 4), (unsigned __int64 *)&v11) )
    return 0;
  v12[0] = v11;
  v10 = v11;
  v8 = unpack_dq(v12);
  v9 = (const void *)v12[0];
  *(_QWORD *)(a1 + 8) = v8;
  v11 = v9;
  if ( v10 >= v9 )
    return 0;
  *(_QWORD *)(a1 + 16) = unpack_dq(v12);
  v11 = (const void *)v12[0];
  if ( (unsigned __int64)v9 >= v12[0] )
    return 0;
  if ( !(unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 24), &v11, v7) )
    return 0;
  if ( !(unsigned __int8)sub_7E1CF0((__int64 *)(a1 + 48), &v11, v7) )
    return 0;
  if ( !sub_7E30F0((_DWORD *)(a1 + 72), (unsigned __int64 *)&v11) )
    return 0;
  result = sub_7E30F0((_DWORD *)(a1 + 76), (unsigned __int64 *)&v11);
  if ( !result )
    return 0;
  *a2 = v11;
  return result;
}
