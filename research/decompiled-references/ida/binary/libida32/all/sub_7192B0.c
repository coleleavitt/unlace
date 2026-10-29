__int64 __fastcall sub_7192B0(__int64 a1, char *a2, void (__fastcall *a3)(_QWORD), int a4)
{
  void *v6; // rbp
  void *v7; // rbp
  __int64 result; // rax
  void *v9; // r14
  unsigned int v10; // r15d
  __int64 v11; // rax
  void *v12; // r14
  void *v13; // r14
  unsigned int v14; // r12d
  unsigned __int64 v15; // r14
  _BYTE *v16; // r13
  _BYTE *v17; // rdx
  int v18; // eax

  filename = a2;
  qword_2CA26A8 = (__int64 (__fastcall *)(_QWORD, _QWORD))off_2C57CC0;
  off_2C57CC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))sub_718B40;
  v6 = (void *)operator new(0x16D0u);
  sub_722C00(v6, a1, 2048, 0);
  qword_2CA26C0 = v6;
  v7 = (void *)operator new(0x16D0u);
  sub_722C00(v7, a2, 2048, 0);
  qword_2CA26B8 = v7;
  result = sub_71C740(qword_2CA26C0, 32, 7);
  if ( (_BYTE)result )
  {
    if ( a4 == -1 )
      a4 = *(_DWORD *)qword_2CA26C0;
    if ( (unsigned __int8)sub_71C350(qword_2CA26B8, a4) && (unsigned __int8)sub_71C740(qword_2CA26B8, 64, 0) )
    {
      sub_722BB0(qword_2CA26B8, 0);
      sub_7191B0((__int64)qword_2CA26B8, (__int64)qword_2CA26C0, a3);
      v9 = qword_2CA26B8;
      v10 = *(_DWORD *)qword_2CA26C0;
      v11 = sub_71C900();
      sub_71C930(v9, v11, v10);
      v12 = qword_2CA26C0;
      if ( qword_2CA26C0 )
      {
        sub_722E10(qword_2CA26C0);
        operator delete(v12, 0x16D0u);
      }
      v13 = qword_2CA26B8;
      if ( qword_2CA26B8 )
      {
        sub_722E10(qword_2CA26B8);
        operator delete(v13, 0x16D0u);
      }
      off_2C57CC0 = (void (__fastcall __noreturn *)(unsigned int, __int64, __int64, __int64, __int64, int))qword_2CA26A8;
      result = qopen(a2, 2);
      v14 = result;
      if ( (_DWORD)result != -1 )
      {
        v15 = qfilelength((unsigned int)result);
        v16 = (_BYTE *)qalloc(a4);
        while ( v15 )
        {
          qseek(v14, v15 - a4, 0);
          if ( a4 != (unsigned int)qread(v14, v16, a4) )
            break;
          if ( a4 <= 0 )
          {
            v18 = 0;
          }
          else
          {
            v17 = v16;
            v18 = 0;
            do
            {
              if ( *v17 )
                break;
              ++v18;
              ++v17;
            }
            while ( a4 != v18 );
          }
          if ( v15 < a4 || a4 != v18 )
            break;
          v15 -= a4;
        }
        qfree(v16);
        qchsize(v14, v15);
        return qclose(v14);
      }
    }
    else
    {
      return sub_722B40();
    }
  }
  return result;
}

