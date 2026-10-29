__int64 __fastcall sub_767690(__int64 a1, __int64 a2, __int64 a3, char *a4, __int64 a5)
{
  int v5; // eax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  unsigned int v11; // [rsp+Ch] [rbp-2Ch] BYREF
  __int16 v12; // [rsp+10h] [rbp-28h] BYREF
  char v13; // [rsp+12h] [rbp-26h]
  char v14; // [rsp+13h] [rbp-25h]
  int v15; // [rsp+14h] [rbp-24h] BYREF
  unsigned __int64 v16; // [rsp+18h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v5 = (unsigned __int8)*qword_2CD44C0;
  if ( (unsigned __int8)v5 > 0x60u )
  {
    if ( (unsigned __int8)v5 <= 0x69u )
    {
      a3 = (unsigned int)(v5 - 97);
      if ( (char)(v5 - 97) > 3 )
      {
        if ( (_BYTE)v5 == 102 )
        {
          sub_76FB60(&v11, &off_2B39180);
        }
        else
        {
          if ( (_BYTE)v5 != 105 )
            goto LABEL_5;
          sub_76FB60(&v11, &off_2B39190);
        }
      }
      else
      {
        sub_76FB60(&v11, &off_2B39140 + 2 * (char)(v5 - 97));
      }
      goto LABEL_9;
    }
    if ( (unsigned __int8)v5 > 0x6Fu )
    {
      if ( (unsigned __int8)(v5 - 112) <= 2u )
      {
        a2 = 16LL * (char)(v5 - 106);
      }
      else
      {
        a3 = (unsigned int)(v5 - 114);
        if ( (_BYTE)v5 == 117 )
        {
          a2 = 144;
        }
        else
        {
          a2 = 160;
          if ( (_BYTE)v5 != 118 )
            goto LABEL_5;
        }
      }
LABEL_26:
      sub_76FB60(&v11, (char *)&off_2B39140 + a2);
LABEL_9:
      if ( (dword_2CD44CC & 0xA0) == 0 )
      {
        sub_76FA20(&v15, "Swift", 5);
        v13 = 64;
        v12 = v15;
        v14 = HIBYTE(v15);
        v15 = sub_771250(&v12, 46);
        v11 = sub_771320(&v15, &v11);
        BYTE2(v11) = 0;
      }
      goto LABEL_11;
    }
    if ( (_BYTE)v5 != 111 )
      goto LABEL_5;
    sub_76FB60(&v11, &off_2B39240);
  }
  else
  {
    if ( (unsigned __int8)v5 > 0x4Fu )
    {
      a3 = (unsigned int)(v5 - 80);
      if ( (char)(v5 - 80) <= 3 )
      {
        a2 = 16LL * (char)(v5 - 69);
      }
      else
      {
        a2 = 240;
        if ( (_BYTE)v5 != 86 )
        {
LABEL_5:
          v6 = qword_2CD44D0;
          v7 = sub_767640(a1, a2, a3, a4, a5);
          return *(unsigned int *)sub_772CD0(v6, v7, v8, v9);
        }
      }
      goto LABEL_26;
    }
    if ( (_BYTE)v5 != 67 )
      goto LABEL_5;
    sub_76FB60(&v11, &off_2B39250);
  }
  BYTE2(v11) = 64;
LABEL_11:
  ++qword_2CD44C0;
  return v11;
}
