__int64 __fastcall sub_3412C0(QT::QWidget *this, unsigned __int64 a2, char a3, unsigned __int64 a4)
{
  unsigned int v4; // r12d
  unsigned __int64 v7; // r13
  unsigned __int64 v8; // r14
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rsi
  __int64 v12; // rdi
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  _DWORD *v16; // rdx
  int v17; // eax
  __int64 v18; // rax

  if ( a2 != -1 )
  {
    v4 = a4;
    if ( *((_QWORD *)this + 26) == a2 )
      return 1;
    v7 = *((_QWORD *)this + 23);
    *((_QWORD *)this + 26) = a2;
    if ( a2 < v7 )
    {
      if ( !*((_QWORD *)this + 21) )
        goto LABEL_13;
      sub_33FA70(this, a2);
      a2 = *((_QWORD *)this + 26);
      v7 = *((_QWORD *)this + 23);
    }
    else
    {
      if ( a2 < *((_QWORD *)this + 24) )
      {
LABEL_5:
        v8 = *((_QWORD *)this + 24);
        if ( a2 < v8 )
        {
          v9 = sub_33FA20((__int64)this, a2);
          a4 = v9;
          if ( v9 != -1 )
          {
            v10 = *((_QWORD *)this + 25);
            v11 = v9 - v10;
            if ( v9 - v10 != -1 )
            {
              if ( v11 > 4 )
              {
                v16 = *((_DWORD **)this + 4);
                if ( *((_BYTE *)this + 345) )
                  v17 = v16[8] + 1 - v16[6];
                else
                  v17 = v16[7] + 1 - v16[5];
                v18 = v17 - 5;
                if ( v18 < v11 )
                  sub_341240(this, v8 + *((_QWORD *)this + 21) * (v11 - v18));
                goto LABEL_13;
              }
              v12 = *((_QWORD *)this + 21);
              v13 = v12 * (v10 + 5 - v9);
              if ( v7 < v13 )
              {
                v14 = 0;
LABEL_11:
                if ( v12 )
                  sub_33FA70(this, v14);
                goto LABEL_13;
              }
              v14 = v7 - v13;
              if ( v7 - v13 != -1 )
                goto LABEL_11;
            }
          }
        }
LABEL_13:
        if ( a3 )
          sub_46C590(this, *((_QWORD *)this + 26), v4, a4);
        return 1;
      }
      sub_341240(this, a2);
      a2 = *((_QWORD *)this + 26);
      v7 = *((_QWORD *)this + 23);
    }
    if ( a2 < v7 )
      goto LABEL_13;
    goto LABEL_5;
  }
  return 0;
}
