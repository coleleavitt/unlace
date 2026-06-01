unsigned __int64 __fastcall sub_231190(__int64 a1, _BOOL8 a2)
{
  __int64 v2; // rdi
  __int64 v3; // r12
  __int64 v4; // rbp
  _QWORD *v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rbp
  __int64 v10; // rbx
  _QWORD *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rdi
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // r15
  __int64 i; // r13
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rdi
  __int64 v21; // r15
  __int64 j; // r13
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rdi
  int v26; // ebx
  __int64 k; // rax
  int v29; // edx
  int v30; // ecx
  int v31; // r8d
  int v32; // r9d
  _DWORD *v33; // rax
  _DWORD *v34; // rax
  __int64 v35; // [rsp+0h] [rbp-58h] BYREF
  __int64 v36; // [rsp+8h] [rbp-50h]
  int v37; // [rsp+10h] [rbp-48h]
  unsigned __int64 v38; // [rsp+18h] [rbp-40h]
  int v39; // [rsp+20h] [rbp-38h]
  int v40; // [rsp+28h] [rbp-30h]
  __int64 v41; // [rsp+30h] [rbp-28h]

  v38 = __readfsqword(0x28u);
  qword_8CC550 = a1;
  qword_8CC108 = 0;
  byte_8CC559 = 0;
  byte_8CC558 = 1;
  byte_8CC5E4 = 0;
  byte_8CC5E2 = a2;
  byte_8CC5E1 = 0;
  byte_8CC5E0 = 0;
  sub_3E1200();
  v2 = qword_8CC470;
  qword_8BA5A8 = -1;
  qword_8BA5A0 = -1;
  if ( qword_8CC470 )
  {
    v3 = xmmword_8CC478;
    if ( (_QWORD)xmmword_8CC478 )
    {
      v4 = 0;
      do
      {
        v5 = (_QWORD *)(v2 + 80 * v4);
        v6 = v5[5];
        if ( v6 )
        {
          v5[6] = 0;
          qfree(v6, (const char *)a2);
        }
        v7 = v5[2];
        if ( v7 )
        {
          v5[3] = 0;
          qfree(v7, (const char *)a2);
        }
        ++v4;
        v2 = qword_8CC470;
      }
      while ( v3 != v4 );
    }
    *(_QWORD *)&xmmword_8CC478 = 0;
    qfree(v2, (const char *)a2);
    qword_8CC470 = 0;
    *((_QWORD *)&xmmword_8CC478 + 1) = 0;
  }
  v8 = qword_8CC430;
  dword_8CC06C = 0;
  if ( qword_8CC430 )
  {
    v9 = xmmword_8CC438;
    if ( (_QWORD)xmmword_8CC438 )
    {
      v10 = 0;
      do
      {
        v11 = (_QWORD *)(v8 + (v10 << 8));
        v12 = v11[24];
        if ( v12 )
        {
          v11[25] = 0;
          qfree(v12, (const char *)a2);
        }
        v13 = v11[15];
        if ( v13 )
        {
          v11[16] = 0;
          qfree(v13, (const char *)a2);
        }
        v14 = v11[11];
        if ( v14 )
        {
          v11[12] = 0;
          qfree(v14, (const char *)a2);
        }
        v15 = v11[8];
        if ( v15 )
        {
          v16 = v11[9];
          if ( v16 )
          {
            for ( i = 0; i != v16; ++i )
            {
              v18 = v15 + 32 * i;
              if ( *(int *)v18 >= -1 )
              {
                v19 = *(_QWORD *)(v18 + 8);
                if ( v19 )
                {
                  *(_QWORD *)(v18 + 16) = 0;
                  qfree(v19, (const char *)a2);
                  v15 = v11[8];
                }
              }
            }
          }
          v11[9] = 0;
          qfree(v15, (const char *)a2);
        }
        v20 = v11[5];
        if ( v20 )
        {
          v21 = v11[6];
          if ( v21 )
          {
            for ( j = 0; j != v21; ++j )
            {
              v23 = v20 + 32 * j;
              if ( *(int *)v23 >= -1 )
              {
                v24 = *(_QWORD *)(v23 + 8);
                if ( v24 )
                {
                  *(_QWORD *)(v23 + 16) = 0;
                  qfree(v24, (const char *)a2);
                  v20 = v11[5];
                }
              }
            }
          }
          v11[6] = 0;
          qfree(v20, (const char *)a2);
        }
        v25 = v11[1];
        if ( v25 )
        {
          v11[2] = 0;
          qfree(v25, (const char *)a2);
        }
        ++v10;
        v8 = qword_8CC430;
      }
      while ( v9 != v10 );
    }
    *(_QWORD *)&xmmword_8CC438 = 0;
    qfree(v8, (const char *)a2);
    qword_8CC430 = 0;
    *((_QWORD *)&xmmword_8CC438 + 1) = 0;
  }
  v26 = 0;
  for ( k = 0; v26 < (unsigned __int64)xmmword_8CC458; k = v26 )
  {
    ++v26;
    v8 = *((_QWORD *)qword_8CC450 + k);
    a2 = (*(_BYTE *)(v8 + 16) & 2) != 0;
    sub_2277E0(v8, a2);
  }
  sub_22BF20(v8, (const char *)a2);
  dword_8CC55C |= 3u;
  mark_builtin_widgets(49152, 0, 1);
  if ( !batch )
  {
    if ( (unsigned __int8)netnode_inited() )
    {
      v35 = 0;
      v36 = 0;
      LOBYTE(v37) = 0;
      if ( (unsigned __int8)sub_30EEC0(qword_8CD748) )
        sub_268600(&v35, 1, 0);
      else
        sub_268E70(&v35, 0);
      sub_2687C0((unsigned int)&v35, 1, v29, v30, v31, v32, v35, v36, v37, v38, v39, v40, v41);
      jvalue_t_clear(&v35);
    }
    unk_8BA4F8 = 0;
    if ( !(_BYTE)byte_8CBEA0 && __cxa_guard_acquire(&byte_8CBEA0) )
    {
      xmmword_8CBEC8 = 0;
      qword_8CBEC0 = 0;
      qword_8CBEC0 = qvector_reserve(&qword_8CBEC0, 0, 5, 1);
      *(_QWORD *)&xmmword_8CBEC8 = 5;
      strcpy((char *)qword_8CBEC0, "Live");
      word_8CBED8 = 513;
      qword_8CBEE0 = 0;
      qword_8CBEF8 = 0;
      xmmword_8CBEE8 = 0;
      xmmword_8CBF00 = 0;
      v33 = (_DWORD *)qvector_reserve(&qword_8CBEF8, 0, 8, 1);
      qword_8CBEF8 = (__int64)v33;
      *(_QWORD *)&xmmword_8CBF00 = 8;
      *v33 = 1634100548;
      *(_DWORD *)((char *)v33 + 3) = 1953264993;
      *(_BYTE *)(qword_8CBEF8 + 7) = 0;
      word_8CBF10 = 513;
      qword_8CBF18 = 0;
      qword_8CBF30 = 0;
      xmmword_8CBF20 = 0;
      xmmword_8CBF38 = 0;
      v34 = (_DWORD *)qvector_reserve(&qword_8CBF30, 0, 8, 1);
      qword_8CBF30 = (__int64)v34;
      *(_QWORD *)&xmmword_8CBF38 = 8;
      *v34 = 1634100548;
      *(_DWORD *)((char *)v34 + 3) = 1953264993;
      *(_BYTE *)(qword_8CBF30 + 7) = 0;
      word_8CBF48 = 512;
      qword_8CBF50 = 0;
      qword_8CBF68 = 0;
      xmmword_8CBF58 = 0;
      xmmword_8CBF70 = 0;
      qword_8CBF68 = qvector_reserve(&qword_8CBF68, 0, 9, 1);
      *(_QWORD *)&xmmword_8CBF70 = 9;
      strcpy((char *)qword_8CBF68, "Original");
      word_8CBF80 = 512;
      qword_8CBF88 = 0;
      xmmword_8CBF90 = 0;
      __cxa_atexit((void (*)(void *))sub_2285D0, nullptr, &off_85BC80);
      __cxa_guard_release(&byte_8CBEA0);
    }
    sub_269140(&qword_8CBEC0, 4, 0);
    unk_8BA4F8 = 1;
    QT::QWidget::setEnabled(*((QT::QWidget **)qword_8CD748 + 46), 0);
  }
  sub_22FC60(4u);
  if ( (*(_BYTE *)(dbg + 32) & 0x40) == 0 )
    return v38 - __readfsqword(0x28u);
  if ( dword_8CC5F0 <= 0 )
    return v38 - __readfsqword(0x28u);
  sub_541EF0();
  if ( (unsigned __int8)QT::QElapsedTimer::isValid((QT::QElapsedTimer *)&unk_8BA570) )
    return v38 - __readfsqword(0x28u);
  else
    return QT::QElapsedTimer::start((QT::QElapsedTimer *)&unk_8BA570);
}
