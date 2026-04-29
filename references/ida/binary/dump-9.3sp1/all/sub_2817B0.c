__int64 __fastcall sub_2817B0(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  int tinfo_size; // r14d
  unsigned int v6; // ebx
  _QWORD v8[3]; // [rsp+18h] [rbp-90h] BYREF
  __int64 v9; // [rsp+30h] [rbp-78h]
  __int64 v10; // [rsp+38h] [rbp-70h]
  __int128 v11; // [rsp+40h] [rbp-68h]
  __int64 v12; // [rsp+50h] [rbp-58h]
  int v13; // [rsp+58h] [rbp-50h]
  __int16 v14; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v15; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a3 + 8) == 61;
  v15 = __readfsqword(0x28u);
  if ( !v3 || sub_255A30(*(__int64 **)(a3 + 24)) )
  {
    v8[0] = 0;
    copy_tinfo_t();
    tinfo_size = get_tinfo_size();
    if ( (get_tinfo_property() & 0xF) == 0xB && *(_DWORD *)(a2 + 8) == 51 )
    {
      v6 = 0;
    }
    else
    {
      if ( tinfo_size == *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL) )
      {
        v9 = 0;
        v10 = 0;
        if ( (unsigned __int8)get_tinfo_details() )
        {
          v8[2] = 0;
          v8[1] = 0;
          v11 = 0;
          copy_tinfo_t();
          v12 = 0;
          copy_tinfo_t();
          v13 = 0;
          v14 = 0;
          clear_tinfo_t();
          clear_tinfo_t();
          *(_QWORD *)&v11 = v9;
          v9 = 0;
          create_tinfo();
          clear_tinfo_t();
          clear_tinfo_t();
          clear_tinfo_t();
        }
        clear_tinfo_t();
      }
      v6 = sub_246B40(a3, a1, v8);
    }
    clear_tinfo_t();
  }
  else
  {
    return 0;
  }
  return v6;
}
