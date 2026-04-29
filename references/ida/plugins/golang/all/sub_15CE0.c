__int64 __fastcall sub_15CE0(_QWORD *a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r14d
  __int64 v4; // r12
  unsigned __int64 v5; // rsi
  _QWORD *v6; // rax
  _QWORD *v7; // rbx
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned __int64 v12; // [rsp+98h] [rbp-2C0h]
  __int64 v13; // [rsp+C8h] [rbp-290h]
  char *s1; // [rsp+110h] [rbp-248h]
  __int128 v15; // [rsp+118h] [rbp-240h]
  unsigned __int64 v16; // [rsp+318h] [rbp-40h]

  v4 = a1[52];
  v16 = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a1[3] + 16LL) & a2;
  v12 = v5;
  if ( v4 == -1 )
  {
    return 0;
  }
  else
  {
    v6 = (_QWORD *)a1[41];
    if ( !v6 )
      goto LABEL_9;
    v7 = a1 + 40;
    do
    {
      while ( 1 )
      {
        v8 = v6[2];
        v9 = v6[3];
        if ( v6[4] >= v5 )
          break;
        v6 = (_QWORD *)v6[3];
        if ( !v9 )
          goto LABEL_7;
      }
      v7 = v6;
      v6 = (_QWORD *)v6[2];
    }
    while ( v8 );
LABEL_7:
    if ( a1 + 40 != v7 && v5 >= v7[4] )
    {
      if ( a3 )
        copy_tinfo_t();
      LOBYTE(v3) = *((_BYTE *)v7 + 40) != 0;
    }
    else
    {
LABEL_9:
      s1 = nullptr;
      v15 = 0;
      v13 = 0;
      get_data_value();
      return 0;
    }
  }
  return v3;
}
