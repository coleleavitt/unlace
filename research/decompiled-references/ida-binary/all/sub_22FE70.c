__int64 __fastcall sub_22FE70(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  const char *v4; // r12
  unsigned int v5; // r13d
  const char *v6; // r14
  __int64 v7; // rbx
  __int64 v8; // [rsp+8h] [rbp-68h] BYREF
  char v9[8]; // [rsp+10h] [rbp-60h] BYREF
  __int128 v10; // [rsp+18h] [rbp-58h] BYREF
  __int64 v11; // [rsp+28h] [rbp-48h]
  unsigned __int64 v12; // [rsp+38h] [rbp-38h]

  v12 = __readfsqword(0x28u);
  v9[0] = 2;
  v11 = 0;
  v10 = 0;
  v2 = 3;
  if ( (unsigned __int8)parse_config_value(v9, a1) )
  {
    switch ( v9[0] )
    {
      case 2:
        v4 = (const char *)&v10;
        v5 = 2;
        goto LABEL_6;
      case 4:
        v4 = (const char *)&v10;
        v5 = 3;
        goto LABEL_6;
      case 7:
        v4 = &s1;
        v5 = 1;
        if ( *((_QWORD *)&v10 + 1) )
          v4 = (const char *)v10;
        goto LABEL_6;
      case 8:
        v4 = (const char *)v10;
        v5 = 6;
        goto LABEL_6;
      case 9:
        v4 = (const char *)&v10;
        v5 = 5;
LABEL_6:
        v6 = &s1;
        if ( *(_QWORD *)(a2 + 8) )
          v6 = *(const char **)a2;
        v8 = 1;
        v7 = dbg;
        if ( dbg )
        {
          if ( (unsigned int)sub_20CEA0(dbg, 44, 0, " ", 0, 0, 0) )
            sub_20CEA0(v7, 44, &v8, v6, 1, v5, v4);
          v2 = v8;
        }
        else
        {
          v2 = 1;
        }
        break;
      default:
        v2 = 3;
        break;
    }
  }
  free_idcv(v9);
  return v2;
}
