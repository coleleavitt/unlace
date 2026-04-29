__int64 __fastcall sub_3B6CE0(__int64 a1, __int64 a2)
{
  __int64 v2; // rax
  unsigned int tinfo_property; // ebx
  __int64 v5; // rdx
  unsigned __int64 v6; // rax
  __int64 v7; // r8
  __int64 v8; // [rsp+8h] [rbp-D0h] BYREF
  __int128 v9; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+20h] [rbp-B8h]
  __int128 v11; // [rsp+28h] [rbp-B0h]
  __int64 v12; // [rsp+38h] [rbp-A0h]
  __int128 v13; // [rsp+40h] [rbp-98h]
  _OWORD v14[3]; // [rsp+50h] [rbp-88h] BYREF
  __int64 v15; // [rsp+80h] [rbp-58h]
  int v16; // [rsp+88h] [rbp-50h]
  __int64 v17; // [rsp+90h] [rbp-48h]
  char v18; // [rsp+98h] [rbp-40h]
  unsigned __int64 v19; // [rsp+A8h] [rbp-30h]

  v19 = __readfsqword(0x28u);
  v2 = sub_385E20(a2);
  v8 = 0;
  if ( v2 )
  {
    copy_tinfo_t(&v8, v2 + 80);
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
    v14[0] = 0;
    if ( (unsigned int)sub_385AD0(a2, &v9, nullptr, nullptr) == -1 )
    {
      v6 = sub_385E60(a2);
      if ( v6 != -1 )
        sub_3797A0(a1, v6, (unsigned __int64)&v8, 1, v7);
    }
    else
    {
      v5 = *(_QWORD *)&v14[0];
      *(_QWORD *)&v14[0] = v8;
      v8 = v5;
    }
    clear_tinfo_t(v14);
    if ( v12 )
    {
      *(_QWORD *)&v13 = 0;
      qfree(v12);
    }
    if ( v10 )
    {
      *(_QWORD *)&v11 = 0;
      qfree(v10);
    }
  }
  if ( (_BYTE)v8 )
  {
    *(_QWORD *)&v9 = 0;
    *(_QWORD *)&v9 = get_tinfo_property(v8, 10);
    copy_tinfo_t(&v8, &v9);
    clear_tinfo_t(&v9);
    tinfo_property = get_tinfo_property(v8, 7);
  }
  else
  {
    tinfo_property = 0;
  }
  clear_tinfo_t(&v8);
  return tinfo_property;
}
