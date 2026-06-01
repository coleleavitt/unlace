__int64 __fastcall sub_3CC470(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v4; // eax
  unsigned int v5; // r12d
  unsigned int v6; // r12d
  __int64 v8; // [rsp+8h] [rbp-60h] BYREF
  __int128 v9; // [rsp+10h] [rbp-58h] BYREF
  void (__fastcall *v10)(__int128 *, __int128 *, __int64); // [rsp+20h] [rbp-48h]
  __int64 v11; // [rsp+28h] [rbp-40h]
  unsigned __int64 v12; // [rsp+38h] [rbp-30h]

  v12 = __readfsqword(0x28u);
  v4 = sub_3EA400(a1, a2);
  if ( (_BYTE)v4 || (v6 = v4, rangeset_t_find_range(a1 + 129, (unsigned int)a2)) )
  {
    if ( !(unsigned __int8)sub_3BA160(a1, &v8, a2) || v8 != a3 )
    {
      v5 = a2;
      if ( (sub_3B9AA0((__int64)a1, a2, 4) & 0x600) == 0x200 )
        v5 = sub_3BD5D0((__int64)a1, a2);
      if ( (~(unsigned __int16)sub_3B9AA0((__int64)a1, v5, 4) & 0x600) == 0 )
      {
        v10 = nullptr;
        v11 = 0;
        v9 = 0;
        sub_3CB9E0(a1, v5, 0);
        if ( v10 )
          v10(&v9, &v9, 3);
      }
    }
    return (unsigned int)sub_580EF0(a1, (unsigned int)a2, a3);
  }
  return v6;
}

