__int64 __fastcall sub_A8580(_QWORD *a1, unsigned __int64 *a2, int a3, unsigned __int8 a4)
{
  unsigned __int8 v4; // r12
  unsigned __int64 v5; // rbp
  __int64 v8; // rdi
  int tinfo_size; // eax
  __int64 v10; // rax
  __int64 v11; // rax
  unsigned __int8 v14; // [rsp+7h] [rbp-E1h]
  _QWORD v15[2]; // [rsp+10h] [rbp-D8h] BYREF
  __int64 v16; // [rsp+20h] [rbp-C8h]
  __int128 v17; // [rsp+28h] [rbp-C0h]
  __int64 v18; // [rsp+38h] [rbp-B0h]
  __int128 v19; // [rsp+40h] [rbp-A8h]
  _OWORD v20[3]; // [rsp+50h] [rbp-98h] BYREF
  __int64 v21; // [rsp+80h] [rbp-68h]
  int v22; // [rsp+88h] [rbp-60h]
  __int64 v23; // [rsp+90h] [rbp-58h]
  char v24; // [rsp+98h] [rbp-50h]
  unsigned __int64 v25; // [rsp+A8h] [rbp-40h]

  v4 = a4 ^ 1;
  v25 = __readfsqword(0x28u);
  v5 = *a2;
  v14 = a4 ^ 1 | (*a2 != 0);
  if ( !v14 )
  {
LABEL_16:
    v14 = 1;
    v5 = 0;
    goto LABEL_17;
  }
  while ( 1 )
  {
    if ( (get_tinfo_property(*a1, 2) & 0xF) != 0xB )
      goto LABEL_7;
    v8 = *a1;
    v15[0] = 0;
    v15[0] = get_tinfo_property(v8, 11);
    tinfo_size = get_tinfo_size(0, v15[0], 0);
    if ( tinfo_size <= 0 )
    {
      v14 = 0;
      goto LABEL_24;
    }
    if ( (v4 & (tinfo_size < a3)) != 0 )
    {
      v14 = v4 & (tinfo_size < a3);
      goto LABEL_24;
    }
    v5 %= (unsigned int)tinfo_size;
    if ( (a4 & (v5 == 0)) != 0 )
      break;
    v10 = *a1;
    *a1 = v15[0];
    v15[0] = v10;
    clear_tinfo_t(v15);
LABEL_7:
    if ( !(unsigned __int8)get_tinfo_property(*a1, 2) )
      goto LABEL_22;
    if ( (get_tinfo_property(*a1, 2) & 0x3F) != 0xD )
      goto LABEL_17;
    v15[1] = 0;
    v16 = 0;
    v18 = 0;
    v21 = 1;
    v22 = -1;
    v23 = 0;
    v24 = 0;
    v15[0] = 8 * v5;
    v17 = 0;
    v19 = 0;
    v20[0] = 0;
    if ( (unsigned int)sub_32D810(v15, a1, v5, 0) == -1 )
    {
      clear_tinfo_t(v20);
      if ( v18 )
      {
        *(_QWORD *)&v19 = 0;
        qfree(v18);
      }
      if ( v16 )
      {
        *(_QWORD *)&v17 = 0;
        qfree(v16);
      }
LABEL_22:
      v14 = 0;
      goto LABEL_17;
    }
    v5 -= v15[0] >> 3;
    v11 = *a1;
    *a1 = *(_QWORD *)&v20[0];
    *(_QWORD *)&v20[0] = v11;
    clear_tinfo_t(v20);
    if ( v18 )
    {
      *(_QWORD *)&v19 = 0;
      qfree(v18);
    }
    if ( v16 )
    {
      *(_QWORD *)&v17 = 0;
      qfree(v16);
    }
    if ( !v5 && !v4 )
      goto LABEL_16;
  }
  v14 = a4 & (v5 == 0);
  v5 = 0;
LABEL_24:
  clear_tinfo_t(v15);
LABEL_17:
  *a2 = v5;
  return v14;
}
