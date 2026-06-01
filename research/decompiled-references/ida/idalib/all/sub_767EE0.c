__int64 __fastcall sub_767EE0(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  char *v5; // rax
  __int64 v6; // rdx
  int v8; // eax
  __int64 v9; // rdx
  int v10; // eax
  __int64 v11; // rsi
  unsigned int v12; // eax

  v5 = qword_2CD44C0++;
  v6 = (unsigned __int8)*v5;
  if ( (_BYTE)v6 == 100 )
  {
    v9 = (unsigned __int8)v5[1];
    if ( (_BYTE)v9 == 95 )
    {
      v11 = 1;
      qword_2CD44C0 = v5 + 2;
    }
    else
    {
      v9 = (unsigned int)(v9 - 48);
      if ( (unsigned __int8)v9 > 9u
        || (v10 = sub_76E990(a1, a2, v9, a4, a5),
            v9 = (__int64)qword_2CD44C0,
            a4 = qword_2CD44C0 + 1,
            ++qword_2CD44C0,
            *(_BYTE *)v9 != 95) )
      {
        sub_76E6C0(a1, a2, v9, a4);
      }
      v11 = (unsigned int)(v10 + 2);
    }
    v12 = sub_767640(a1, v11, v9, a4, a5);
    return sub_7670C0(v12, v11);
  }
  else if ( (_BYTE)v6 == 120 )
  {
    return sub_7670C0(0, 0);
  }
  else
  {
    qword_2CD44C0 = v5;
    v8 = sub_767640(a1, a2, v6, a4, a5);
    return sub_7670C0(v8 + 1, 0);
  }
}
