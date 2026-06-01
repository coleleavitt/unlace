__int64 __fastcall sub_6368C0(__int64 a1, _QWORD *a2, _BYTE *a3)
{
  __int64 v3; // rbp
  __int64 *v4; // rbp
  __int64 *v6; // rbx
  unsigned int v7; // r12d
  __int64 *v8; // rax
  __int64 v10[11]; // [rsp+0h] [rbp-58h] BYREF

  v3 = a2[1];
  v10[3] = __readfsqword(0x28u);
  v4 = (__int64 *)(*a2 + (v3 << 7));
  if ( v4 != (__int64 *)*a2 )
  {
    v6 = (__int64 *)(*a2 + 64LL);
    v7 = 0;
    while ( 1 )
    {
      if ( (get_tinfo_property(*v6, 2) & 0xF) == 0xB )
      {
        v10[0] = 0;
        v10[1] = 0;
        if ( (unsigned __int8)get_tinfo_details(*v6, 11, v10) && (unsigned __int8)sub_6365E0(a1, v10, a3) )
          v7 |= create_tinfo(v6, 11, 11, v10);
        clear_tinfo_t(v10);
        v8 = v6 + 16;
        if ( v4 == v6 + 8 )
          return v7;
      }
      else
      {
        v7 |= sub_6365E0(a1, v6, a3);
        v8 = v6 + 16;
        if ( v4 == v6 + 8 )
          return v7;
      }
      v6 = v8;
    }
  }
  return 0;
}

