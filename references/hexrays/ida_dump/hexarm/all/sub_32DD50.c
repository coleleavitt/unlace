__int64 __fastcall sub_32DD50(_QWORD *a1)
{
  __int64 v1; // r12
  unsigned int v2; // ebx
  __int64 v4; // rsi
  __int64 v5; // [rsp+0h] [rbp-D8h] BYREF
  __int128 v6; // [rsp+8h] [rbp-D0h]
  __int128 v7; // [rsp+20h] [rbp-B8h] BYREF
  char *s1; // [rsp+30h] [rbp-A8h]
  __int128 v9; // [rsp+38h] [rbp-A0h]
  __int64 v10; // [rsp+48h] [rbp-90h]
  __int128 v11; // [rsp+50h] [rbp-88h]
  _OWORD v12[3]; // [rsp+60h] [rbp-78h] BYREF
  __int64 v13; // [rsp+90h] [rbp-48h]
  int v14; // [rsp+98h] [rbp-40h]
  __int64 v15; // [rsp+A0h] [rbp-38h]
  char v16; // [rsp+A8h] [rbp-30h]
  unsigned __int64 v17; // [rsp+B8h] [rbp-20h]

  v17 = __readfsqword(0x28u);
  v16 = 0;
  s1 = nullptr;
  v10 = 0;
  v13 = 1;
  v14 = -1;
  v15 = 0;
  v7 = 0;
  v9 = 0;
  v11 = 0;
  v12[0] = 0;
  if ( (unsigned int)sub_32DB30(&v7, a1, 0, 0) == -1 )
    goto LABEL_3;
  v1 = *(_QWORD *)&v12[0];
  if ( !LOBYTE(v12[0])
    || (v12[0] & 0xF) > 9
    || !(_QWORD)v9
    || strcmp(s1, "unused")
    || get_tinfo_size(0, v1, 0) != 4
    || get_tinfo_size(0, *a1, 0) != 4 )
  {
    goto LABEL_3;
  }
  v4 = *a1;
  v5 = 0;
  v6 = 0;
  if ( (v4 & 0x100) != 0 )
  {
    if ( !get_tinfo_pdata(&v5, v4, 0)
      || (unsigned __int64)v6 > 3 && *(_BYTE *)(v5 + v6 - 2) == 95 && *(_BYTE *)(v5 + v6 - 3) == 95 )
    {
      if ( v5 )
      {
        *(_QWORD *)&v6 = 0;
        qfree(v5);
      }
      goto LABEL_15;
    }
    if ( v5 )
    {
      *(_QWORD *)&v6 = 0;
      qfree(v5);
    }
LABEL_3:
    v2 = 0;
    goto LABEL_4;
  }
LABEL_15:
  v2 = 1;
LABEL_4:
  clear_tinfo_t(v12);
  if ( v10 )
  {
    *(_QWORD *)&v11 = 0;
    qfree(v10);
  }
  if ( s1 )
  {
    *(_QWORD *)&v9 = 0;
    qfree(s1);
  }
  return v2;
}
