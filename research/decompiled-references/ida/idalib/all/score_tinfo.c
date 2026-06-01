__int64 __fastcall score_tinfo(__int64 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rbx
  unsigned int v3; // r13d
  char v4; // cl
  char v5; // r15
  char v6; // r12
  unsigned __int8 v7; // r14
  __int64 tinfo_pdata; // rax
  __int64 v9; // r12
  __int64 v10; // r13
  char *v11; // rbp
  unsigned int v12; // r12d
  int v14; // eax
  int v15; // eax
  int v16; // ebx
  unsigned int v17; // eax
  unsigned int v18; // eax
  int v19; // [rsp+4h] [rbp-6Ch]
  __int64 v20; // [rsp+8h] [rbp-68h] BYREF
  __int64 tinfo_property; // [rsp+10h] [rbp-60h] BYREF
  char *s1; // [rsp+18h] [rbp-58h] BYREF
  __int128 v23; // [rsp+20h] [rbp-50h]
  unsigned __int64 v24; // [rsp+30h] [rbp-40h]

  v1 = *a1;
  v24 = __readfsqword(0x28u);
  v23 = 0;
  s1 = nullptr;
  if ( (v1 & 0x100) == 0 )
    goto LABEL_2;
  tinfo_pdata = get_tinfo_pdata(&s1, v1, 0);
  v9 = *a1;
  v10 = *a1 & 0x100;
  if ( !tinfo_pdata )
  {
    if ( v10 )
    {
LABEL_7:
      v11 = s1;
LABEL_8:
      v12 = ((v9 & 0x3F) == 61) - 2;
      goto LABEL_9;
    }
LABEL_2:
    v20 = 0;
    copy_tinfo_t(&v20);
    LOBYTE(v2) = v20;
    v3 = 0;
    goto LABEL_3;
  }
  if ( !(_QWORD)v23 )
  {
    if ( v10 )
      goto LABEL_7;
    goto LABEL_2;
  }
  v11 = s1;
  v14 = strcmp(s1, "LPVOID");
  if ( v10 )
  {
    if ( !v14 )
    {
      v20 = 0;
      copy_tinfo_t(&v20);
      goto LABEL_18;
    }
    goto LABEL_8;
  }
  v19 = v14;
  v20 = 0;
  copy_tinfo_t(&v20);
  v2 = v20;
  v3 = 0;
  if ( !v19 )
    goto LABEL_19;
LABEL_3:
  while ( 2 )
  {
    v4 = 0;
LABEL_4:
    v5 = v2 & 0x30;
    v6 = v2 & 0xF;
    v7 = (unsigned __int8)(v2 & 0x30) >> 4;
    switch ( v2 & 0xF )
    {
      case 1LL:
        v12 = v3 + v7 + 5;
        goto LABEL_25;
      case 2LL:
      case 3LL:
      case 4LL:
      case 5LL:
      case 6LL:
      case 7LL:
        if ( (unsigned __int8)getinf_flag(3, 4) )
        {
          if ( v6 == 5 )
          {
            v15 = (unsigned __int8)(v7 + 1);
            goto LABEL_43;
          }
        }
        else
        {
          v15 = v7;
          if ( v6 == 7 )
            goto LABEL_43;
        }
        v16 = sub_565B80(v6, &byte_4);
        if ( (unsigned __int8)getinf(59) != v16 || v7 && v5 != 16 )
        {
          v12 = v3 + v7 + 10;
          goto LABEL_25;
        }
        v15 = v7 + (v6 != 7);
LABEL_43:
        v12 = v15 + v3 + 1;
        goto LABEL_25;
      case 8LL:
        v12 = v3 + v7 + 15;
        goto LABEL_25;
      case 9LL:
        v12 = v3 + v7 + 20;
        goto LABEL_25;
      case 0xALL:
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(v20, 9);
        copy_tinfo_t(&v20);
        clear_tinfo_t(&tinfo_property);
        v17 = v3 + 30;
        v3 = 100 * (v3 + 30);
        if ( 100 * v17 < v17 )
          goto LABEL_45;
        goto LABEL_28;
      case 0xBLL:
        tinfo_property = 0;
        tinfo_property = get_tinfo_property(v20, 11);
        copy_tinfo_t(&v20);
        clear_tinfo_t(&tinfo_property);
        v3 += 40;
        if ( !v3 )
        {
LABEL_28:
          LOBYTE(v2) = v20;
          continue;
        }
        if ( 100 * v3 >= v3 )
        {
          LOBYTE(v2) = v20;
          v3 *= 100;
          continue;
        }
LABEL_45:
        v12 = -1;
LABEL_25:
        clear_tinfo_t(&v20);
        v11 = s1;
LABEL_9:
        if ( v11 )
        {
          *(_QWORD *)&v23 = 0;
          qfree(v11);
        }
        return v12;
      case 0xCLL:
        v12 = v3 + 50;
        goto LABEL_25;
      case 0xDLL:
        v12 = v3 + 60;
        if ( (v20 & 0x100) == 0 || v4 || !(unsigned __int8)get_tinfo_property(v20, 2) )
          goto LABEL_25;
        if ( (v2 & 0x3F) == 0x3D )
        {
          v18 = v3 + 61;
          v3 = 100 * (v3 + 61);
          if ( v3 < v18 )
            goto LABEL_45;
        }
        else
        {
          if ( v3 == -60 )
          {
LABEL_18:
            v2 = v20;
            v3 = 0;
            goto LABEL_19;
          }
          v3 = 100 * v12;
          if ( 100 * v12 < v12 )
            goto LABEL_45;
        }
        v2 = v20;
LABEL_19:
        LOBYTE(v2) = get_tinfo_property(v2, 2);
        v4 = 1;
        goto LABEL_4;
      default:
        v12 = v3;
        goto LABEL_25;
    }
  }
}
