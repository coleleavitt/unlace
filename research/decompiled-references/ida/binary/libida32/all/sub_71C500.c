__int64 __fastcall sub_71C500(unsigned int *a1, __int64 a2, unsigned int a3, char a4)
{
  __int64 result; // rax
  int v5; // r12d
  __int16 v6; // bp
  __int64 v8; // rdi
  unsigned __int64 v10; // rsi
  unsigned int *v11; // r14
  __int16 v12; // ax

  result = *((unsigned __int8 *)a1 + 5804);
  if ( (_BYTE)result )
  {
    v5 = a2;
    v6 = a3;
    *((_BYTE *)a1 + 5804) = 0;
    a1[405] = a3;
    a1[406] = a3 & 0xFFFFFFEF;
    v8 = *((_QWORD *)a1 + 528);
    if ( !v8 || !(unsigned __int8)qfileexist(v8, a2) )
    {
      if ( v6 < 0 )
      {
        v10 = *a1;
        byte_2CA26E0 = 1;
        dword_2CA26DC = v5;
        result = sub_71C350((__int64)a1, v10);
        goto LABEL_7;
      }
      dword_2CA2738 = 7;
      qword_2CA2730(7, 0);
LABEL_6:
      result = 0;
LABEL_7:
      *((_BYTE *)a1 + 5804) = 1;
      return result;
    }
    v11 = (unsigned int *)operator new(0x18u);
    sub_71AD90((__int64)v11, (_QWORD *)a1 + 528, (~(_BYTE)v6 & 7) != 0, (__int64)qword_2CA2730);
    if ( sub_71ADB0(v11) )
    {
      sub_71ADD0((__int64)v11, (__int64)qword_2CA2730);
      if ( !(unsigned int)sub_71AED0(v11, 0, 0x2Du, (__int64)&xmmword_2CA2700) )
      {
        if ( !strcmp(byte_2CA2713, aBTreeV16CPol19) )
        {
          *((_WORD *)a1 + 816) = 0;
LABEL_16:
          if ( !a4 || !byte_2CA2712 )
          {
            result = sub_71C070(a1, v11, a2);
            goto LABEL_7;
          }
          dword_2CA2738 = 13;
          qword_2CA2730(13, 0);
          goto LABEL_11;
        }
        if ( !strcmp(byte_2CA2713, aBTreeV2_0) )
        {
          v12 = xmmword_2CA271D;
          if ( (unsigned __int16)xmmword_2CA271D > 1u )
          {
            dword_2CA2738 = 23;
            qword_2CA2730(23, (unsigned __int16)xmmword_2CA271D);
            v12 = xmmword_2CA271D;
          }
          *(_QWORD *)((char *)&xmmword_2CA271D + 2) = 0;
          *((_WORD *)a1 + 816) = v12;
          *((_QWORD *)&xmmword_2CA271D + 1) = 0;
          goto LABEL_16;
        }
        dword_2CA2738 = 12;
        qword_2CA2730(12, 0);
      }
    }
LABEL_11:
    if ( v11 )
    {
      sub_71ABB0(v11);
      operator delete(v11, 0x18u);
    }
    goto LABEL_6;
  }
  return result;
}

