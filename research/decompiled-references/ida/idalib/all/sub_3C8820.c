unsigned __int64 __fastcall sub_3C8820(__int64 *a1, __int64 a2, int a3, unsigned __int64 *a4, int a5, __int64 a6)
{
  __int64 v7; // r13
  unsigned __int64 *v9; // rbx
  signed int v10; // r8d
  signed __int64 v11; // r8
  unsigned __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // rdx
  unsigned __int64 *v16; // r13
  __int64 v17; // rdx
  signed __int64 v18; // [rsp+8h] [rbp-1B0h]
  unsigned __int64 v19; // [rsp+18h] [rbp-1A0h] BYREF
  _BYTE v20[330]; // [rsp+20h] [rbp-198h] BYREF
  char v21[14]; // [rsp+16Ah] [rbp-4Eh] BYREF
  unsigned __int64 v22; // [rsp+178h] [rbp-40h]

  v7 = a5;
  v9 = a4;
  v10 = -a5;
  v22 = __readfsqword(0x28u);
  if ( v10 < 0 )
    v10 = v7;
  v11 = sub_3C85E0(a1, (__int64)v20, (unsigned __int64)v21, a4, v10, a6) - v20;
  v12 = -1;
  if ( a2 != -1 )
  {
    v18 = v11;
    v12 = sub_3B9DC0(a1, a2);
    v11 = v18;
  }
  v13 = *a1;
  v19 = v12;
  sub_7BE7C0(&v19, v13, a3, v20, v11, 83);
  if ( !(unsigned __int8)is_cvt64(&v19, v13, v14)
    && ((get_merge_state(&v19, v13) & 2) == 0
     || !(unsigned __int8)sub_3FD360(a1, a2) && !rangeset_t_find_range(a1 + 130, a2))
    && (int)v7 > 0 )
  {
    v16 = &v9[v7];
    do
    {
      v17 = *v9++;
      sub_411350(a1, a2, v17, 1);
    }
    while ( v16 != v9 );
  }
  return v22 - __readfsqword(0x28u);
}
