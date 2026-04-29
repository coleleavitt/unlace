__int64 __fastcall sub_A77F0(__int64 *a1, unsigned __int64 *a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r12
  unsigned __int64 v5; // rbp
  int tinfo_size; // eax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int8 v12; // [rsp+7h] [rbp-E1h]
  _QWORD v13[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v14; // [rsp+20h] [rbp-C8h]
  __int128 v15; // [rsp+28h] [rbp-C0h]
  __int64 v16; // [rsp+38h] [rbp-B0h]
  __int128 v17; // [rsp+40h] [rbp-A8h]
  __int128 v18; // [rsp+50h] [rbp-98h]
  __int64 v19; // [rsp+80h] [rbp-68h]
  int v20; // [rsp+88h] [rbp-60h]
  __int64 v21; // [rsp+90h] [rbp-58h]
  char v22; // [rsp+98h] [rbp-50h]
  unsigned __int64 v23; // [rsp+A8h] [rbp-40h]

  v4 = a4 ^ 1;
  v23 = __readfsqword(0x28u);
  v5 = *a2;
  v12 = a4 ^ 1 | (*a2 != 0);
  if ( !v12 )
  {
LABEL_16:
    v12 = 1;
    v5 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    if ( (get_tinfo_property() & 0xF) != 0xB )
      goto LABEL_7;
    v13[0] = 0;
    v13[0] = get_tinfo_property();
    tinfo_size = get_tinfo_size();
    if ( tinfo_size <= 0 )
    {
      v12 = 0;
      goto LABEL_24;
    }
    if ( (v4 & (tinfo_size < a3)) != 0 )
    {
      v12 = v4 & (tinfo_size < a3);
      goto LABEL_24;
    }
    v5 %= (unsigned int)tinfo_size;
    if ( (a4 & (v5 == 0)) != 0 )
      break;
    v8 = *a1;
    *a1 = v13[0];
    v13[0] = v8;
    clear_tinfo_t();
LABEL_7:
    if ( !(unsigned __int8)get_tinfo_property() )
      goto LABEL_22;
    if ( (get_tinfo_property() & 0x3F) != 0xD )
      goto LABEL_17;
    v13[1] = 0;
    v14 = 0;
    v16 = 0;
    v19 = 1;
    v20 = -1;
    v21 = 0;
    v22 = 0;
    v13[0] = 8 * v5;
    v15 = 0;
    v17 = 0;
    v18 = 0;
    if ( (unsigned int)sub_32A3B0(v13, a1, v5, 0) == -1 )
    {
      clear_tinfo_t();
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree();
      }
      if ( v14 )
      {
        *(_QWORD *)&v15 = 0;
        qfree();
      }
LABEL_22:
      v12 = 0;
      goto LABEL_17;
    }
    v5 -= v13[0] >> 3;
    v9 = *a1;
    *a1 = v18;
    *(_QWORD *)&v18 = v9;
    clear_tinfo_t();
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree();
    }
    if ( v14 )
    {
      *(_QWORD *)&v15 = 0;
      qfree();
    }
    if ( !v5 && !v4 )
      goto LABEL_16;
  }
  v12 = a4 & (v5 == 0);
  v5 = 0;
LABEL_24:
  clear_tinfo_t();
LABEL_17:
  *a2 = v5;
  return v12;
}
