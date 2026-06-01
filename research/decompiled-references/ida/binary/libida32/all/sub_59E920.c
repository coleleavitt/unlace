__int64 __fastcall sub_59E920(__int64 *a1, int *a2, unsigned int a3, unsigned int a4)
{
  int v4; // esi
  __int64 v5; // rbx
  __int64 v6; // rbp
  unsigned int v7; // eax
  unsigned int tinfo_udt_member; // ebx
  int v10; // eax
  unsigned __int64 v11; // [rsp+8h] [rbp-C0h] BYREF
  _QWORD v12[2]; // [rsp+10h] [rbp-B8h] BYREF
  void *v13; // [rsp+20h] [rbp-A8h]
  __int128 v14; // [rsp+28h] [rbp-A0h]
  void *ptr; // [rsp+38h] [rbp-90h]
  __int128 v16; // [rsp+40h] [rbp-88h]
  __int128 v17; // [rsp+50h] [rbp-78h] BYREF
  __int64 v18; // [rsp+70h] [rbp-58h]
  int v19; // [rsp+78h] [rbp-50h]
  __int64 v20; // [rsp+80h] [rbp-48h]
  char v21; // [rsp+88h] [rbp-40h]
  unsigned __int64 v22; // [rsp+98h] [rbp-30h]

  v22 = __readfsqword(0x28u);
  if ( a2 )
  {
    v4 = *a2;
    v5 = a3;
    v6 = a4;
    v11 = 0;
    v7 = sub_3B90A0(a1, v4);
    if ( v7 == -1 || !(unsigned __int8)sub_532DA0(a1, &v11, v7) )
    {
      tinfo_udt_member = 0;
    }
    else
    {
      v12[1] = 0;
      v13 = nullptr;
      ptr = nullptr;
      v18 = 1;
      v19 = -1;
      v20 = 0;
      v21 = 0;
      v12[0] = 8 * v5;
      v14 = 0;
      v16 = 0;
      v17 = 0;
      tinfo_udt_member = find_tinfo_udt_member((int)v12);
      if ( tinfo_udt_member == -1 )
      {
        tinfo_udt_member = 0;
      }
      else
      {
        v12[0] = 8 * v6;
        v10 = find_tinfo_udt_member((int)v12);
        LOBYTE(tinfo_udt_member) = (unsigned int)set_tinfo_property4(&v11, 10, (int)tinfo_udt_member, v10, 0, 0) == 0;
      }
      clear_tinfo_t(&v17);
      if ( ptr )
      {
        *(_QWORD *)&v16 = 0;
        qfree(ptr);
      }
      if ( v13 )
      {
        *(_QWORD *)&v14 = 0;
        qfree(v13);
      }
    }
    clear_tinfo_t(&v11);
  }
  else
  {
    return 0;
  }
  return tinfo_udt_member;
}

