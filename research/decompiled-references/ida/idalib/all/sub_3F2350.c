__int64 __fastcall sub_3F2350(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  __int64 result; // rax
  _QWORD *v5; // r13
  unsigned __int64 v6; // r12
  _QWORD *v7; // rdx
  __int64 v8; // rbp
  __int64 v9; // rdx
  unsigned int v10; // [rsp+Ch] [rbp-5Ch]
  __int64 v11; // [rsp+18h] [rbp-50h] BYREF
  void *ptr; // [rsp+20h] [rbp-48h] BYREF
  __int128 v13; // [rsp+28h] [rbp-40h]
  unsigned __int64 v14; // [rsp+38h] [rbp-30h]

  v14 = __readfsqword(0x28u);
  if ( a3 != 83 || a4 != 1085440 )
    return 0;
  v5 = *(_QWORD **)(*(_QWORD *)(a1 + 24) + 1672LL);
  v6 = sub_3BDE50(v5, a2);
  v7 = (_QWORD *)sub_5CAA10(v5);
  result = 1;
  if ( v7 && *v7 == v6 )
  {
    v8 = *(_QWORD *)(a1 + 24);
    v11 = a2;
    v13 = 0;
    ptr = nullptr;
    v9 = sub_7BEED0(&v11, v8, &ptr, 1, 1085440, 83);
    result = 0;
    if ( v9 > 0 )
    {
      sub_7BEF30(&v11, v8, ptr, v13, 1085440, 83);
      result = 1;
    }
    if ( ptr )
    {
      v10 = result;
      *(_QWORD *)&v13 = 0;
      qfree(ptr);
      return v10;
    }
  }
  return result;
}
