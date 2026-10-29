__int64 __fastcall diff_source_panel_t__::vfunc_5(QT::QSplitter *this, QT::QEvent *a2)
{
  __int16 v3; // ax
  __int64 *v5; // rax
  __int64 v6; // r14
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rdi
  __int64 v10; // rbx
  char *v12; // rsi
  __int64 v13; // rax
  __int64 v14; // rbp
  __int64 v15; // r15
  __int64 v16; // rbx
  __int64 v17; // r14
  int v18; // edx
  __int64 v19; // rbx
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-60h]
  __int64 v22; // [rsp+10h] [rbp-58h] BYREF
  __int128 v23; // [rsp+18h] [rbp-50h]
  unsigned __int64 v24; // [rsp+28h] [rbp-40h]

  v3 = *((_WORD *)a2 + 4);
  v24 = __readfsqword(0x28u);
  if ( v3 == 2004 )
  {
    v12 = (char *)this;
    v22 = 0;
    v23 = 0;
    if ( (unsigned __int8)sub_51B3C0(&v22, this) )
    {
      v13 = operator new(0x18u);
      *(_QWORD *)v13 = 0;
      v14 = v13;
      *(_OWORD *)(v13 + 8) = 0;
      sub_519010(v13, &v22);
      v15 = *((_QWORD *)a2 + 3);
      v21 = *((_QWORD *)a2 + 2);
      if ( v15 )
      {
        v16 = *((_QWORD *)a2 + 2);
        v17 = 0;
        while ( 1 )
        {
          if ( *(_QWORD *)(v16 + 8) )
          {
            v12 = "partitions";
            if ( !strcmp(*(const char **)v16, "partitions") )
              break;
          }
          ++v17;
          v16 += 40;
          if ( v15 == v17 )
            goto LABEL_24;
        }
      }
      else
      {
LABEL_24:
        if ( *((_QWORD *)a2 + 4) < (unsigned __int64)(v15 + 1) )
        {
          v21 = qvector_reserve((char *)a2 + 16, v21, v15 + 1, 40);
          v15 = *((_QWORD *)a2 + 3);
          *((_QWORD *)a2 + 2) = v21;
        }
        v16 = v21 + 40 * v15;
        *(_QWORD *)v16 = 0;
        *(_OWORD *)(v16 + 8) = 0;
        *(_DWORD *)(v16 + 24) = 0;
        *(_QWORD *)(v16 + 32) = 0;
        ++*((_QWORD *)a2 + 3);
        v12 = *(char **)v16;
        if ( *(_QWORD *)(v16 + 16) <= 0xAu )
        {
          v20 = qvector_reserve(v16, v12, 11, 1);
          *(_QWORD *)v16 = v20;
          v12 = (char *)v20;
        }
        *(_QWORD *)(v16 + 8) = 11;
        qmemcpy(v12, "partitions", 10);
        *(_BYTE *)(*(_QWORD *)v16 + 10LL) = 0;
      }
      v18 = *(_DWORD *)(v16 + 24);
      v19 = v16 + 24;
      if ( v18 )
        jvalue_t_clear(v19);
      *(_DWORD *)v19 = 4;
      *(_QWORD *)(v19 + 8) = v14;
    }
    if ( v22 )
    {
      *(_QWORD *)&v23 = 0;
      qfree(v22, v12);
    }
  }
  else if ( v3 == 2005 )
  {
    v5 = *((__int64 **)a2 + 2);
    v6 = v5[1];
    if ( v6 )
    {
      v7 = *v5;
      v8 = 0;
      while ( !*(_QWORD *)(v7 + 8) || strcmp(*(const char **)v7, "partitions") )
      {
        ++v8;
        v7 += 40;
        if ( v6 == v8 )
          return QT::QSplitter::event(this, a2);
      }
      if ( *(_DWORD *)(v7 + 24) == 4 )
      {
        v9 = *((_QWORD *)this + 9);
        v10 = *(_QWORD *)(v7 + 32);
        if ( v9 )
        {
          *((_QWORD *)this + 10) = 0;
          qfree(v9, "partitions");
          *((_QWORD *)this + 9) = 0;
          *((_QWORD *)this + 11) = 0;
        }
        sub_518DE0((char *)this + 72, v10);
      }
    }
  }
  return QT::QSplitter::event(this, a2);
}
