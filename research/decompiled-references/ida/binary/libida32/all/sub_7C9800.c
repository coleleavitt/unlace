bool __fastcall sub_7C9800(__int64 a1, unsigned __int64 *a2, __int64 a3)
{
  size_t v3; // r15
  bool result; // al
  __int64 v5; // r13
  unsigned __int64 v6; // rbx
  __int64 v7; // r13
  __int64 v8; // r14
  __int64 *v9; // rcx
  __int64 *v10; // [rsp+8h] [rbp-80h]
  unsigned int v11; // [rsp+2Ch] [rbp-5Ch] BYREF
  size_t v12; // [rsp+30h] [rbp-58h] BYREF
  size_t v13; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v14[9]; // [rsp+40h] [rbp-48h] BYREF

  v14[1] = __readfsqword(0x28u);
  v12 = *a2;
  v3 = v12 + a3;
  if ( __CFADD__(v12, a3) || !sub_7BFDB0(&v11, &v12) )
    return 0;
  v5 = v11;
  sub_7C9380((const char **)(a1 + 16), (const char *)v11);
  if ( (_DWORD)v5 )
  {
    v6 = v12;
    v7 = 32 * v5;
    v8 = 0;
    do
    {
      v13 = v6;
      if ( v3 < v6 )
        return 0;
      v9 = (__int64 *)(*(_QWORD *)(a1 + 16) + v8);
      v14[0] = v6;
      v10 = v9;
      *(_DWORD *)v9 = unpack_dd(v14);
      v13 = v14[0];
      if ( v6 >= v14[0] || !(unsigned __int8)sub_7BE640(v10 + 1, &v13, v3) )
        return 0;
      v6 = v13;
      v8 += 32;
      v12 = v13;
    }
    while ( v8 != v7 );
  }
  result = sub_7BFDB0((_DWORD *)(a1 + 40), &v12);
  if ( !result )
    return 0;
  *a2 = v12;
  return result;
}

