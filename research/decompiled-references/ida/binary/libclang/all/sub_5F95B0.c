void __fastcall sub_5F95B0(char *a1, unsigned __int64 a2, __int64 a3)
{
  char *v3; // r12
  char v4; // al
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r15
  unsigned int v8; // ebp
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  char v11; // al
  char *i; // r15
  __int64 v13; // r13
  unsigned int v14; // r14d
  char *v16; // [rsp+8h] [rbp-50h]
  char *v17; // [rsp+18h] [rbp-40h]

  v17 = (char *)a2;
  if ( a1 != (char *)a2 )
  {
    v3 = a1 + 8;
    if ( (char *)a2 != a1 + 8 )
    {
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)v3;
          v7 = *(_QWORD *)a1;
          v8 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)v3 + 16LL))(*(_QWORD *)v3);
          v9 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
          if ( v8 == v9 )
            break;
          v4 = sub_CB1620(a3, v8);
          v5 = *(_QWORD *)v3;
          if ( !v4 )
            goto LABEL_10;
LABEL_5:
          a2 = (unsigned __int64)a1;
          if ( v3 - a1 <= 8 )
          {
            if ( v3 - a1 == 8 )
              *(_QWORD *)v3 = *(_QWORD *)a1;
          }
          else
          {
            memmove(a1 + 8, a1, v3 - a1);
          }
          v3 += 8;
          *(_QWORD *)a1 = v5;
          if ( v17 == v3 )
            return;
        }
        (*(void (__fastcall **)(__int64, unsigned __int64, _QWORD))(*(_QWORD *)v7 + 16LL))(v7, a2, v9);
        v10 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6) >> 32;
        v11 = sub_CB1620(a3, v10);
        v5 = *(_QWORD *)v3;
        if ( v11 )
          goto LABEL_5;
LABEL_10:
        for ( i = v3; ; *((_QWORD *)i + 1) = *(_QWORD *)i )
        {
          v13 = *((_QWORD *)i - 1);
          v16 = i;
          v14 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
          if ( v14 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13) )
          {
            (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
            a2 = (unsigned __int64)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5) >> 32;
          }
          else
          {
            a2 = v14;
          }
          i -= 8;
          if ( !(unsigned __int8)sub_CB1620(a3, a2) )
            break;
        }
        v3 += 8;
        *(_QWORD *)v16 = v5;
      }
      while ( v17 != v3 );
    }
  }
}

