void __fastcall sub_736030(unsigned int *a1, __int64 a2, unsigned int a3)
{
  int v3; // r12d
  __int16 v4; // bp
  __int64 v6; // rdi
  unsigned __int64 v7; // rsi
  unsigned int *v8; // r14
  __int16 v9; // ax

  if ( *((_BYTE *)a1 + 5800) )
  {
    v3 = a2;
    v4 = a3;
    *((_BYTE *)a1 + 5800) = 0;
    a1[405] = a3;
    a1[406] = a3 & 0xFFFFFFEF;
    v6 = *((_QWORD *)a1 + 528);
    if ( !v6 || !(unsigned __int8)qfileexist(v6, a2) )
    {
      if ( v4 < 0 )
      {
        v7 = *a1;
        byte_2CCC4CC = 1;
        dword_2CCC4C8 = v3;
        sub_735C40((__int64)a1, v7);
      }
      else
      {
        dword_2CCC510 = 7;
        qword_2CCC508(7, 0);
      }
      goto LABEL_6;
    }
    v8 = (unsigned int *)operator new(0x18u);
    sub_7347D0((__int64)v8, (_QWORD *)a1 + 528, (~(_BYTE)v4 & 7) != 0, (__int64)qword_2CCC508);
    if ( sub_7347F0(v8) )
    {
      sub_734810((__int64)v8, (__int64)qword_2CCC508);
      if ( !(unsigned int)sub_734910(v8, 0, 0x27u, (__int64)&xmmword_2CCC4E0) )
      {
        if ( !strcmp((const char *)&xmmword_2CCC4E0 + 13, aBTreeV15CPol19) )
        {
          *((_WORD *)a1 + 816) = 0;
        }
        else
        {
          if ( strcmp((const char *)&xmmword_2CCC4E0 + 13, aBTreeV2) )
          {
            dword_2CCC510 = 12;
            qword_2CCC508(12, 0);
            goto LABEL_9;
          }
          v9 = word_2CCC4F7;
          if ( (unsigned __int16)word_2CCC4F7 > 1u )
          {
            dword_2CCC510 = 23;
            qword_2CCC508(23, (unsigned __int16)word_2CCC4F7);
            v9 = word_2CCC4F7;
          }
          qword_2CCC4F9 = 0;
          *((_WORD *)a1 + 816) = v9;
          *(__int64 *)((char *)&qword_2CCC4F9 + 6) = 0;
        }
        if ( !BYTE12(xmmword_2CCC4E0) )
        {
          sub_735930(a1, v8, a2);
LABEL_6:
          *((_BYTE *)a1 + 5800) = 1;
          return;
        }
        dword_2CCC510 = 13;
        qword_2CCC508(13, 0);
      }
    }
LABEL_9:
    if ( v8 )
    {
      sub_7345F0(v8);
      operator delete(v8, 0x18u);
    }
    goto LABEL_6;
  }
  nullsub_1539();
}
