char __fastcall sub_1B880(_QWORD *a1, __int64 a2, __int64 a3)
{
  char result; // al
  __int64 v5; // rax
  __int64 v6; // r13
  __int64 v7; // rcx

  result = get_data_value();
  if ( result )
  {
    result = 0;
    if ( !a1[52] )
    {
      if ( a1[53] )
      {
        v5 = a1[41];
        if ( !v5 )
          goto LABEL_11;
        do
        {
          v7 = *(_QWORD *)(v5 + 16);
          v6 = v5;
          v5 = *(_QWORD *)(v5 + 16);
        }
        while ( v7 );
        if ( (_QWORD *)v6 == a1 + 40 || *(_QWORD *)(v6 + 32) )
        {
LABEL_11:
          sub_FE10((__int64)a1, 0xCu, 0, 0);
          create_data();
          return sub_15CE0(a1, 0, a3);
        }
        else
        {
          if ( a3 )
            copy_tinfo_t();
          return *(_BYTE *)(v6 + 40) != 0;
        }
      }
    }
  }
  return result;
}
