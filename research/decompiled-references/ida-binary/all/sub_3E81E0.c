__int64 __fastcall watch_view_t__::vfunc_5(QT::QAbstractItemView *this, QT::QEvent *a2)
{
  __int64 v4; // r13
  __int64 v5; // r14
  __int64 v6; // rbx
  __int64 v7; // r12
  int v8; // eax
  __int64 v9; // rbx
  char *v10; // rsi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // [rsp+8h] [rbp-40h]

  if ( *((_WORD *)a2 + 4) == 2004 )
  {
    v4 = *((int *)this + 279);
    if ( (_DWORD)v4 != -1 )
    {
      v5 = *((_QWORD *)a2 + 3);
      v13 = *((_QWORD *)a2 + 2);
      if ( v5 )
      {
        v6 = *((_QWORD *)a2 + 2);
        v7 = 0;
        while ( !*(_QWORD *)(v6 + 8) || strcmp(*(const char **)v6, "index") )
        {
          ++v7;
          v6 += 40;
          if ( v5 == v7 )
            goto LABEL_12;
        }
      }
      else
      {
LABEL_12:
        if ( *((_QWORD *)a2 + 4) < (unsigned __int64)(v5 + 1) )
        {
          v11 = qvector_reserve((char *)a2 + 16, v13, v5 + 1, 40);
          v5 = *((_QWORD *)a2 + 3);
          v13 = v11;
          *((_QWORD *)a2 + 2) = v11;
        }
        v6 = v13 + 40 * v5;
        *(_QWORD *)v6 = 0;
        *(_OWORD *)(v6 + 8) = 0;
        *(_DWORD *)(v6 + 24) = 0;
        *(_QWORD *)(v6 + 32) = 0;
        ++*((_QWORD *)a2 + 3);
        v10 = *(char **)v6;
        if ( *(_QWORD *)(v6 + 16) <= 5u )
        {
          v12 = qvector_reserve(v6, v10, 6, 1);
          *(_QWORD *)v6 = v12;
          v10 = (char *)v12;
        }
        *(_QWORD *)(v6 + 8) = 6;
        *(_DWORD *)v10 = 1701080681;
        v10[4] = 120;
        *(_BYTE *)(*(_QWORD *)v6 + 5LL) = 0;
      }
      v8 = *(_DWORD *)(v6 + 24);
      v9 = v6 + 24;
      if ( v8 )
        jvalue_t_clear(v9);
      *(_DWORD *)v9 = 1;
      *(_QWORD *)(v9 + 8) = v4;
    }
  }
  return QT::QAbstractItemView::event(this, a2);
}
