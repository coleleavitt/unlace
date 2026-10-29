__int64 __fastcall sub_838EF0(__int64 a1, __int64 a2, double a3)
{
  __int64 v3; // rbx
  int v5; // eax
  unsigned int v6; // ebp
  int v8; // eax
  char v9; // r12
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rbp
  unsigned int v13; // eax
  const char *v14; // rax
  unsigned int v15; // eax
  const char *v16; // rax
  __int64 v17; // rax

  v3 = a1;
  if ( *(_DWORD *)(a1 + 104) )
  {
    do
    {
      a1 = v3;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v3 + 512LL))(v3);
    }
    while ( (*(_DWORD *)(v3 + 104))-- != 1 );
  }
  *(_BYTE *)(v3 + 952) = 0;
  if ( (unsigned int)sub_180B130(a1) > 0xB )
  {
    if ( (unsigned __int8)sub_186A530(a3) )
    {
      sub_186A4C0(a3);
      v12 = sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v13 = sub_FF9DB0(*(_QWORD *)(v3 + 496));
      v14 = (const char *)sub_10213D0(v13, "final-check ");
      if ( v14 )
      {
        strlen(v14);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
      sub_186A500(v12, "\n");
    }
    else
    {
      sub_180B150(a1, a2);
      std::__ostream_insert<char,std::char_traits<char>>();
      v15 = sub_FF9DB0(*(_QWORD *)(v3 + 496));
      v16 = (const char *)sub_10213D0(v15, "final-check ");
      if ( v16 )
      {
        strlen(v16);
        std::__ostream_insert<char,std::char_traits<char>>();
      }
      else
      {
        std::ios::clear();
      }
      std::__ostream_insert<char,std::char_traits<char>>();
    }
  }
  *(_BYTE *)(v3 + 480) = 0;
  if ( !(unsigned __int8)sub_FFA850(*(_QWORD *)(v3 + 496)) || (unsigned __int8)sub_FF9CD0(*(_QWORD *)(v3 + 496)) )
  {
    v5 = sub_1010850(*(_QWORD *)(v3 + 496));
    if ( v5 != 3 )
    {
      if ( v5 <= 3 )
      {
        if ( v5 == 1 )
          sub_82FEE0(v3);
        return 1;
      }
      if ( (unsigned int)(v5 - 10) > 1 )
        return 1;
    }
  }
  v8 = sub_831D00(v3);
  if ( v8 == -1 )
    return 1;
  if ( v8 )
  {
    v9 = 0;
    v6 = 0;
  }
  else
  {
    v9 = 1;
    v6 = 1;
  }
  v10 = *(_QWORD *)(v3 + 240);
  if ( v10 )
  {
    if ( *(_DWORD *)(v10 - 4) && !(unsigned __int8)sub_834840((_QWORD *)v3) )
      return 1;
  }
  if ( (unsigned __int8)sub_18290A0(*(_QWORD *)(v3 + 72)) )
  {
    if ( !*(_QWORD *)(v3 + 472) || !(unsigned __int8)sub_1021C70() )
    {
LABEL_25:
      *(_BYTE *)(v3 + 480) = 1;
      goto LABEL_35;
    }
    v11 = sub_1021C80(*(_QWORD *)(v3 + 472));
    if ( v11 == -1 )
    {
      sub_838C10(v3);
      return 1;
    }
    if ( v11 )
    {
      if ( v11 != 1 )
        goto LABEL_35;
      goto LABEL_25;
    }
  }
  v6 = 2;
LABEL_35:
  if ( (unsigned __int8)sub_8354F0(v3) )
  {
    ++*(_DWORD *)(v3 + 448);
  }
  else
  {
    v17 = *(_QWORD *)(v3 + 240);
    if ( !v17 || !*(_DWORD *)(v17 - 4) || (unsigned __int8)sub_834840((_QWORD *)v3) )
    {
      if ( v9 )
      {
        if ( *(_BYTE *)(*(_QWORD *)(v3 + 80) + 1117LL) )
          return 2;
LABEL_43:
        if ( !*(_QWORD *)(v3 + 256) )
          return v6;
        return 2;
      }
      if ( (unsigned __int8)sub_88BF70(v3) )
        goto LABEL_43;
    }
  }
  return 1;
}

