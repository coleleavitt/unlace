__int64 __fastcall sub_1C480(__int64 a1, __int64 a2, _BYTE *a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int _32bit; // eax
  __int64 v7; // r15
  unsigned int v8; // eax
  __int64 v9; // rbx
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r13
  unsigned int v12; // eax
  __int64 result; // rax
  int v14; // eax
  int v15; // r14d
  unsigned __int64 v16; // r13
  __int64 v17; // [rsp+0h] [rbp-68h]
  __int64 v18; // [rsp+10h] [rbp-58h] BYREF
  __int128 v19; // [rsp+18h] [rbp-50h]
  unsigned __int64 v20; // [rsp+28h] [rbp-40h]

  v20 = __readfsqword(0x28u);
  v4 = getseg();
  if ( !v4 )
    return 0xFFFFFFFFLL;
  v5 = v4;
  _32bit = get_32bit();
  if ( _32bit == -1 )
    return 0xFFFFFFFFLL;
  v7 = _32bit;
  v17 = 4 * _32bit;
  if ( *(_QWORD *)(v5 + 8) < v17 + a2 + (unsigned __int64)_32bit || !_32bit )
    return 0xFFFFFFFFLL;
  if ( (a3[8] & 2) != 0 )
  {
    v18 = 0;
    v19 = 0;
    sub_D6A0(&v18);
    set_name();
    sub_EB50(a2, *(_QWORD *)(a1 + 672), *(_QWORD *)(a1 + 648));
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
  }
  v8 = get_32bit();
  if ( v8 == -1 )
    return 0xFFFFFFFFLL;
  v9 = v8 + a2 + *(_QWORD *)(a1 + 672) + 1;
  if ( (a3[8] & 2) == 0 )
  {
    v10 = v7 + v9;
    goto LABEL_11;
  }
  v18 = 0;
  v19 = 0;
  sub_D6A0(&v18);
  set_name();
  v10 = v7 + v9;
  v15 = 0;
  v16 = a2 + *(_QWORD *)(a1 + 672);
  if ( v16 < v10 )
  {
    while ( (a3[8] & 1) == 0 || __ROR4__(652835029 * v15, 3) > 0x418937u || !(unsigned __int8)callui(27) )
    {
      create_data();
      ++v16;
      ++v15;
      if ( v10 == v16 )
        goto LABEL_30;
    }
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
    return 0xFFFFFFFFLL;
  }
LABEL_30:
  if ( v18 )
  {
    *(_QWORD *)&v19 = 0;
    qfree();
  }
  if ( (a3[8] & 2) != 0 )
  {
    v18 = 0;
    v19 = 0;
    sub_D6A0(&v18);
    set_name();
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree();
    }
  }
LABEL_11:
  v11 = v10 + v17;
  if ( v10 >= v10 + v17 )
    return 0;
  while ( 1 )
  {
    v14 = *((_DWORD *)a3 + 2);
    if ( (v14 & 1) != 0 )
    {
      if ( (unsigned __int8)callui(27) )
        return 0xFFFFFFFFLL;
      v14 = *((_DWORD *)a3 + 2);
    }
    if ( (v14 & 2) != 0 )
      create_data();
    v12 = get_32bit();
    if ( v12 - 1 <= 0xFFFFFFFD )
    {
      result = (*(__int64 (__fastcall **)(_BYTE *, __int64))(*(_QWORD *)a3 + 16LL))(a3, v12 + a2);
      if ( (_DWORD)result )
        break;
    }
    v10 += 4LL;
    if ( v10 >= v11 )
      return 0;
  }
  return result;
}
