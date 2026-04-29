__int64 __fastcall sub_D990(unsigned __int64 a1, unsigned __int8 a2, __int64 a3, double a4)
{
  int v4; // r12d
  unsigned __int64 v5; // rbx
  __int64 v6; // r14
  char v7; // bp
  int v8; // r13d
  __int64 v9; // r15
  char byte; // al
  unsigned __int8 v11; // dl
  unsigned __int64 v12; // rbp
  char v13; // r13
  int v14; // r15d
  __int64 v15; // rbx
  char v16; // al
  unsigned __int8 v17; // si
  __int64 v19; // [rsp+0h] [rbp-98h]
  __int64 v20; // [rsp+8h] [rbp-90h]
  int v23; // [rsp+34h] [rbp-64h] BYREF
  __int64 *v24; // [rsp+38h] [rbp-60h] BYREF
  __int64 v25; // [rsp+40h] [rbp-58h] BYREF
  __int128 v26; // [rsp+48h] [rbp-50h]
  unsigned __int64 v27; // [rsp+58h] [rbp-40h]

  v4 = -1;
  v5 = a1;
  v27 = __readfsqword(0x28u);
  v19 = get_flags_ex() & 0x600;
  v20 = 0;
  v6 = getseg();
  if ( v6 )
  {
    while ( 1 )
    {
      v25 = 0;
      v26 = 0;
      if ( !(unsigned __int8)is_loaded() )
        goto LABEL_27;
      v7 = v5;
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        byte = get_byte();
        v9 |= (unsigned __int64)(byte & 0x7F) << v8;
        v11 = v8 + 7;
        v8 += 7;
        if ( byte >= 0 || v11 > 0x3Fu )
          break;
        ++v7;
      }
      if ( v11 > 0x40u || (v12 = (unsigned __int8)(v7 - v5 + 1) + v5, *(_QWORD *)(v6 + 8) < v12) )
      {
LABEL_27:
        if ( v25 )
        {
          *(_QWORD *)&v26 = 0;
          qfree();
        }
        return -1;
      }
      if ( !(_DWORD)v9 && v5 != a1 )
        break;
      create_data();
      v4 += ((int)v9 >> 1) ^ -(v9 & 1);
      if ( !v19 )
      {
        if ( !*(_QWORD *)(a3 + 16)
          || (v24 = &v25,
              v23 = v4,
              !(*(unsigned __int8 (__fastcall **)(__int64, __int64 **, int *))(a3 + 24))(a3, &v24, &v23)) )
        {
          sub_CCD0(&v25);
        }
        set_cmt();
      }
      if ( !(unsigned __int8)is_loaded() )
        goto LABEL_27;
      v13 = v12;
      v14 = 0;
      v15 = 0;
      while ( 1 )
      {
        v16 = get_byte();
        v15 |= (unsigned __int64)(v16 & 0x7F) << v14;
        v17 = v14 + 7;
        v14 += 7;
        if ( v16 >= 0 || v17 > 0x3Fu )
          break;
        ++v13;
      }
      if ( v17 > 0x40u )
        goto LABEL_27;
      v20 += v15 * a2;
      v5 = v12 + (unsigned __int8)(v13 - v12 + 1);
      if ( *(_QWORD *)(v6 + 8) < v5 )
        goto LABEL_27;
      create_data();
      if ( !v19 )
      {
        sub_CCD0(&v25);
        set_cmt();
      }
      if ( v25 )
      {
        *(_QWORD *)&v26 = 0;
        qfree();
      }
    }
    if ( v25 )
    {
      *(_QWORD *)&v26 = 0;
      qfree();
    }
  }
  else
  {
    sub_5050((__int64)"%a: golang: failed to find segment for funcinfo\n", a4);
    return -1;
  }
  return v20;
}
