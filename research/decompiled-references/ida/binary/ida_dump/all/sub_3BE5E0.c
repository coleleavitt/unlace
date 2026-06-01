__int64 __fastcall sub_3BE5E0(__int64 a1, __int64 a2)
{
  unsigned int tinfo_property; // ebx
  __int64 v4; // rdx
  unsigned __int64 v5; // rax
  __int64 v6; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v7; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v8; // [rsp+20h] [rbp-B8h]
  __int128 v9; // [rsp+28h] [rbp-B0h]
  __int64 v10; // [rsp+38h] [rbp-A0h]
  __int128 v11; // [rsp+40h] [rbp-98h]
  __int128 v12; // [rsp+50h] [rbp-88h]
  __int64 v13; // [rsp+80h] [rbp-58h]
  int v14; // [rsp+88h] [rbp-50h]
  __int64 v15; // [rsp+90h] [rbp-48h]
  char v16; // [rsp+98h] [rbp-40h]
  unsigned __int64 v17; // [rsp+A8h] [rbp-30h]

  v17 = __readfsqword(0x28u);
  v6 = 0;
  if ( sub_38D720(a2) )
  {
    copy_tinfo_t();
  }
  else
  {
    v7 = 0;
    v8 = 0;
    v10 = 0;
    v13 = 1;
    v14 = -1;
    v15 = 0;
    v16 = 0;
    v9 = 0;
    v11 = 0;
    v12 = 0;
    if ( (unsigned int)sub_38D3D0(a2, &v7, nullptr, nullptr) == -1 )
    {
      v5 = sub_38D760(a2);
      if ( v5 != -1 )
        sub_3810A0(a1, v5, (__int64)&v6, 1);
    }
    else
    {
      v4 = v12;
      *(_QWORD *)&v12 = v6;
      v6 = v4;
    }
    clear_tinfo_t();
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
    if ( v8 )
    {
      *(_QWORD *)&v9 = 0;
      qfree();
    }
  }
  if ( (_BYTE)v6 )
  {
    *(_QWORD *)&v7 = 0;
    *(_QWORD *)&v7 = get_tinfo_property();
    copy_tinfo_t();
    clear_tinfo_t();
    tinfo_property = get_tinfo_property();
  }
  else
  {
    tinfo_property = 0;
  }
  clear_tinfo_t();
  return tinfo_property;
}
