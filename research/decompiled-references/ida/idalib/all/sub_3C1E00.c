__int64 __fastcall sub_3C1E00(unsigned __int64 a1, __int64 a2, unsigned __int64 a3)
{
  unsigned int v3; // ebp
  unsigned __int64 v4; // rdx
  __int64 (__fastcall **v6)(); // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v7; // [rsp+8h] [rbp-50h]
  __int64 (__fastcall *v8)(unsigned __int64); // [rsp+10h] [rbp-48h]
  __int64 v9; // [rsp+18h] [rbp-40h]
  unsigned __int64 v10; // [rsp+28h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  v3 = 0;
  if ( a3 > 1 )
  {
    v3 = *(unsigned __int8 *)(a1 + 2321);
    v4 = a2 + a3;
    if ( (_BYTE)v3 )
    {
      v6 = (__int64 (__fastcall **)())(a2 + 1);
      v7 = v4;
      if ( !sub_40F580(a1 + 1896, &v6, sub_3B7DD0, 0) )
        LOBYTE(v3) = sub_40F580(a1 + 2104, &v6, sub_3B7DD0, 0) != 0;
    }
    else if ( a2 != -1 )
    {
      v7 = a1;
      v6 = &off_2B26118;
      v8 = sub_3B7CF0;
      v9 = 0;
      if ( a2 + 1 < v4 )
        LOBYTE(v3) = sub_3B81B0((_QWORD *)a1, a2 + 1, v4, 0, (__int64 (__fastcall ***)(_QWORD, __int128 *, __int64))&v6) != -1;
    }
  }
  return v3;
}
