__int64 __fastcall sub_3B9560(__int64 a1, __int64 a2)
{
  int v2; // r8d
  int v3; // r9d
  unsigned int tinfo_property; // ebx
  __int64 v6; // rdx
  __int64 v7; // rax
  __int64 v8; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-B8h]
  __int128 v11; // [rsp+28h] [rbp-B0h]
  __int64 v12; // [rsp+38h] [rbp-A0h]
  __int128 v13; // [rsp+40h] [rbp-98h]
  __int128 v14; // [rsp+50h] [rbp-88h]
  __int64 v15; // [rsp+80h] [rbp-58h]
  int v16; // [rsp+88h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp-48h]
  char v18; // [rsp+98h] [rbp-40h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v8 = 0;
  if ( sub_388F20(a2) )
  {
    copy_tinfo_t();
  }
  else
  {
    v9 = 0;
    v10 = 0;
    v12 = 0;
    v15 = 1;
    v16 = -1;
    v17 = 0;
    v18 = 0;
    v11 = 0;
    v13 = 0;
    v14 = 0;
    if ( (unsigned int)sub_388BD0(a2, (unsigned int)&v9, 0, 0, v2, v3) == -1 )
    {
      v7 = sub_388F60(a2);
      if ( v7 != -1 )
        sub_37CA60(a1, v7, &v8, 1);
    }
    else
    {
      v6 = v14;
      *(_QWORD *)&v14 = v8;
      v8 = v6;
    }
    clear_tinfo_t();
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree();
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree();
    }
  }
  if ( (_BYTE)v8 )
  {
    *(_QWORD *)&v9 = 0;
    *(_QWORD *)&v9 = get_tinfo_property();
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
