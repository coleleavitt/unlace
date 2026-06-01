__int64 __fastcall sub_4A40C0(QT::QWidget *this, __int64 *a2, double a3, __int64 a4, __int64 a5)
{
  void (*v5)(); // rdx
  void (*v8)(void); // rax
  __int64 v9; // rax
  __int64 v10; // rax
  char *v11; // rsi
  char *v12; // rdi
  unsigned __int64 v13; // rbp
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  __int64 v17; // rsi
  char *v18; // rdi
  __int64 v19; // rcx
  int v20; // edx
  unsigned int v21; // eax
  int v22; // edx
  unsigned int v23; // edx
  unsigned int v24; // eax
  int v25; // edx
  __int64 v26; // rdx
  int v27; // eax
  __int64 v28; // rax
  __int64 v29; // rsi
  __int64 v30; // rax
  _DWORD *v31; // rdi
  __int64 v32; // rax
  int v33; // edx
  __int64 (*v34)(); // rcx
  __int64 v35; // rax
  __int64 v36; // rsi
  const void *v38; // r14
  void *v39; // rax

  v5 = nullsub_263;
  v8 = *(void (**)(void))(*(_QWORD *)this + 672LL);
  if ( v8 != nullsub_263 )
    v8();
  v9 = *a2;
  *((_QWORD *)this + 299) = *a2;
  if ( !*(_BYTE *)(v9 + 8) )
  {
    if ( !under_debugger )
      interr(40217, a2, v5, a5, a3);
    goto LABEL_35;
  }
  v10 = a2[1];
  v11 = (char *)&s1;
  *((_QWORD *)this + 300) = v10;
  if ( a2[3] )
    v11 = (char *)a2[2];
  sub_4A3940(this, v11);
  v12 = (char *)this + 2448;
  if ( (__int64 *)((char *)this + 2448) != a2 + 5 )
  {
    v13 = a2[6];
    if ( v13 > 1 )
    {
      v38 = (const void *)a2[5];
      v39 = *((void **)this + 306);
      if ( *((_QWORD *)this + 308) < v13 )
      {
        v39 = (void *)qvector_reserve(v12, *((_QWORD *)this + 306), a2[6], 1);
        *((_QWORD *)this + 306) = v39;
      }
      *((_QWORD *)this + 307) = v13;
      memmove(v39, v38, v13 - 1);
      *(_BYTE *)(*((_QWORD *)this + 306) + v13 - 1) = 0;
    }
    else
    {
      *((_QWORD *)this + 307) = 0;
    }
  }
  v14 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v15 = (*(__int64 (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v14 + 40LL))(v14, this);
  *((_BYTE *)this + 2024) = 0;
  v16 = *((_QWORD *)this + 299);
  *((_QWORD *)this + 264) = v15;
  *((_QWORD *)this + 251) = 0;
  *((_QWORD *)this + 224) = -1;
  *((_DWORD *)this + 450) = -1;
  sub_4A3DA0((__int64)this + 2032, v16, 0);
  v17 = *((_QWORD *)this + 299);
  v18 = (char *)this + 2056;
  sub_4A3DA0((__int64)this + 2056, v17, 1);
  v20 = *((_DWORD *)this + 502);
  v21 = v20 & 0xFFFFFFFE;
  v22 = v20 | 1;
  if ( (a2[8] & 1) != 0 )
    v21 = v22;
  v23 = v21;
  *((_DWORD *)this + 502) = v21;
  v24 = v21 & 0xFFFFFFFD;
  v25 = v23 | 2;
  if ( (a2[8] & 2) != 0 )
    v24 = v25;
  v26 = *((_QWORD *)this + 299);
  *((_DWORD *)this + 502) = v24;
  v27 = ((*(_DWORD *)(v26 + 12) >> 19) & 0x3F) - 1;
  if ( *(_BYTE *)(v26 + 8) > 3u )
  {
    if ( ((*(_DWORD *)(v26 + 12) >> 19) & 0x3F) != 0 )
      goto LABEL_34;
    v27 = *(char *)(v26 + 11);
  }
  *((_DWORD *)this + 520) = v27;
  *((_DWORD *)this + 526) = 0;
  if ( *(int *)(v26 + 48) <= 0 )
  {
    if ( !under_debugger )
    {
      v18 = (_BYTE *)(&stru_9E80 + 7);
      interr(40583, v17, v26, v19, a3);
LABEL_34:
      sub_49AF50(a3, (__int64)v18, v17, v26, v19);
    }
LABEL_35:
    BUG();
  }
  v28 = xmmword_8D1C28;
  v29 = qword_8D1C20;
  if ( *((_QWORD *)&xmmword_8D1C28 + 1) < (unsigned __int64)(xmmword_8D1C28 + 1) )
  {
    qword_8D1C20 = qvector_reserve(&qword_8D1C20, qword_8D1C20, xmmword_8D1C28 + 1, 8);
    v29 = qword_8D1C20;
    v28 = xmmword_8D1C28;
  }
  *(_QWORD *)(v29 + 8 * v28) = this;
  v30 = *((int *)this + 520);
  *(_QWORD *)&xmmword_8D1C28 = xmmword_8D1C28 + 1;
  if ( (unsigned int)v30 <= 0x7F )
    qword_8D1820[v30] = this;
  v31 = *((_DWORD **)this + 299);
  v32 = 0;
  v33 = v31[3];
  if ( (v33 & 0x2000000) != 0 )
  {
    v34 = *(__int64 (**)())(*(_QWORD *)v31 + 128LL);
    if ( (v33 & 4) != 0 )
    {
      if ( v34 == exc_chooser_t__::vfunc_16 )
        goto LABEL_24;
    }
    else if ( v34 == addon_chooser_t__::vfunc_16 )
    {
      goto LABEL_24;
    }
    v32 = ((__int64 (__fastcall *)(_DWORD *))v34)(v31);
  }
LABEL_24:
  *((_QWORD *)this + 305) = v32;
  v35 = (*(__int64 (__fastcall **)(_QWORD *))(QT::QCoreApplication::self[2] + 88LL))(QT::QCoreApplication::self + 2);
  v36 = (*(__int64 (__fastcall **)(__int64, QT::QWidget *))(*(_QWORD *)v35 + 48LL))(v35, this);
  return sub_4DFDA0((char *)this + 104, v36);
}
