__int64 __fastcall sub_5AC887(_DWORD *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // r12
  __int64 v6; // [rsp+28h] [rbp-38h] BYREF
  __int64 v7; // [rsp+30h] [rbp-30h] BYREF
  __int64 v8; // [rsp+38h] [rbp-28h]
  unsigned __int64 v9; // [rsp+40h] [rbp-20h]
  _DWORD *i; // [rsp+48h] [rbp-18h]

  v9 = (unsigned __int64)a1 + a2;
  for ( i = a1;
        (unsigned __int64)i < v9 && i[2] != 3;
        i = (_DWORD *)((char *)i + ((*i + 3) & 0xFFFFFFFC) + (unsigned __int64)((i[1] + 3) & 0xFFFFFFFC) + 12) )
  {
    ;
  }
  if ( (unsigned __int64)i >= v9 || !i[1] )
    return 0;
  v8 = (__int64)i + ((*i + 3) & 0xFFFFFFFC) + 12;
  v4 = (unsigned int)i[1] + v8;
  v7 = sub_5985B0(a3);
  sub_5985DA(&v6, (__int64)&v7);
  sub_598604(a3, v6, v8, v4);
  return 1;
}
