__int64 __fastcall sub_59E700(__int64 *a1, int *a2, unsigned int a3, __int64 a4, _QWORD *a5, unsigned int a6)
{
  int v6; // esi
  unsigned int v7; // ebx
  __int64 v8; // r15
  unsigned int v11; // eax
  _QWORD *v13; // r8
  int tinfo_udt_member; // [rsp+4h] [rbp-E4h]
  unsigned __int64 v15; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v16[2]; // [rsp+20h] [rbp-C8h] BYREF
  void *v17; // [rsp+30h] [rbp-B8h]
  __int128 v18; // [rsp+38h] [rbp-B0h]
  void *ptr; // [rsp+48h] [rbp-A0h]
  __int128 v20; // [rsp+50h] [rbp-98h]
  _OWORD v21[2]; // [rsp+60h] [rbp-88h] BYREF
  __int64 v22; // [rsp+80h] [rbp-68h]
  int v23; // [rsp+88h] [rbp-60h]
  __int64 v24; // [rsp+90h] [rbp-58h]
  char v25; // [rsp+98h] [rbp-50h]
  unsigned __int64 v26; // [rsp+A8h] [rbp-40h]

  v26 = __readfsqword(0x28u);
  if ( a2 )
  {
    v6 = *a2;
    v7 = (unsigned int)a1;
    v8 = a3;
    v15 = 0;
    v11 = sub_3B90A0(a1, v6);
    if ( v11 == -1 || !(unsigned __int8)sub_532DA0(a1, &v15, v11) )
    {
      v7 = 0;
    }
    else
    {
      v16[1] = 0;
      v17 = nullptr;
      ptr = nullptr;
      v22 = 1;
      v23 = -1;
      v24 = 0;
      v25 = 0;
      v16[0] = 8 * v8;
      v18 = 0;
      v20 = 0;
      v21[0] = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)v16);
      if ( tinfo_udt_member == -1 )
      {
        v7 = 0;
      }
      else
      {
        copy_tinfo_t(v21);
        sub_59E180(*a1, v21);
        v13 = nullptr;
        if ( a5 )
        {
          v13 = (_QWORD *)*a5;
          if ( *a5 )
            v13 = a5;
        }
        LOBYTE(v7) = (unsigned int)set_tinfo_property4(&v15, 12, tinfo_udt_member, v21, v13, a6) == 0;
      }
      clear_tinfo_t(v21);
      if ( ptr )
      {
        *(_QWORD *)&v20 = 0;
        qfree(ptr);
      }
      if ( v17 )
      {
        *(_QWORD *)&v18 = 0;
        qfree(v17);
      }
    }
    clear_tinfo_t(&v15);
  }
  else
  {
    return 0;
  }
  return v7;
}

