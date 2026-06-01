__int64 __fastcall sub_122A80(int *a1)
{
  const char *v1; // rsi
  __int16 v3; // [rsp+8h] [rbp-60h] BYREF
  __int16 v4; // [rsp+Ah] [rbp-5Eh] BYREF
  int v5; // [rsp+Ch] [rbp-5Ch] BYREF
  __int64 v6; // [rsp+10h] [rbp-58h]
  __int128 v7; // [rsp+18h] [rbp-50h]
  unsigned __int64 v8; // [rsp+28h] [rbp-40h]

  v8 = __readfsqword(0x28u);
  if ( a1 )
  {
    v3 = 0;
    v4 = 0;
    v6 = 0;
    v7 = 0;
    get_segm_name();
    v5 = *a1;
    while ( 1 )
    {
      v1 = s1;
      if ( (_QWORD)v7 )
        LODWORD(v1) = v6;
      if ( !(unsigned int)sub_18BA90(
                            1040,
                            (_DWORD)v1,
                            (unsigned int)&v5,
                            (int)a1 + 4,
                            (unsigned int)&v3,
                            (unsigned int)&v4) )
        break;
      if ( v3 )
      {
        del_segm();
        if ( !v6 )
          return 1;
LABEL_9:
        *(_QWORD *)&v7 = 0;
        qfree();
        return 1;
      }
      sub_92120((__int64)"Please check \"CONFIRM DELETION\" checkbox");
    }
    if ( !v6 )
      return 1;
    goto LABEL_9;
  }
  return 1;
}

