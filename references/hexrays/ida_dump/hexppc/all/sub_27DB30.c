__int64 __fastcall sub_27DB30(__int64 a1, __int64 a2, __int64 a3)
{
  bool v3; // zf
  int tinfo_size; // r14d
  unsigned int v6; // ebx
  __int64 v8; // rax
  __int64 v9; // [rsp+18h] [rbp-90h] BYREF
  __int64 v10; // [rsp+20h] [rbp-88h] BYREF
  __int64 v11; // [rsp+28h] [rbp-80h] BYREF
  _QWORD v12[2]; // [rsp+30h] [rbp-78h] BYREF
  __int128 v13; // [rsp+40h] [rbp-68h] BYREF
  __int64 v14; // [rsp+50h] [rbp-58h] BYREF
  int v15; // [rsp+58h] [rbp-50h]
  __int16 v16; // [rsp+5Ch] [rbp-4Ch]
  unsigned __int64 v17; // [rsp+68h] [rbp-40h]

  v3 = *(_DWORD *)(a3 + 8) == 61;
  v17 = __readfsqword(0x28u);
  if ( !v3 || sub_251DB0(*(__int64 **)(a3 + 24), (_QWORD *)(a3 + 48)) )
  {
    v9 = 0;
    copy_tinfo_t(&v9, a2 + 48);
    tinfo_size = get_tinfo_size(0, *(_QWORD *)(a3 + 48), 0);
    if ( (get_tinfo_property(v9, 2) & 0xF) == 0xB && *(_DWORD *)(a2 + 8) == 51 )
    {
      v6 = 0;
    }
    else
    {
      if ( tinfo_size == *(_DWORD *)(*(_QWORD *)(a1 + 112) + 84LL) )
      {
        v12[0] = 0;
        v12[1] = 0;
        if ( (unsigned __int8)get_tinfo_details(v9, 11, v12) )
        {
          v11 = 0;
          v10 = 0;
          v13 = 0;
          copy_tinfo_t((char *)&v13 + 8, &v10);
          v14 = 0;
          copy_tinfo_t(&v14, &v11);
          v15 = 0;
          v16 = 0;
          clear_tinfo_t(&v10);
          clear_tinfo_t(&v11);
          v8 = v13;
          *(_QWORD *)&v13 = v12[0];
          v12[0] = v8;
          create_tinfo(&v9, 10, 10, &v13);
          clear_tinfo_t(&v14);
          clear_tinfo_t((char *)&v13 + 8);
          clear_tinfo_t(&v13);
        }
        clear_tinfo_t(v12);
      }
      v6 = sub_242EC0(a3, a1, &v9);
    }
    clear_tinfo_t(&v9);
  }
  else
  {
    return 0;
  }
  return v6;
}
