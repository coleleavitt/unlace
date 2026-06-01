__int64 __fastcall sub_1ECF50(QT::QAbstractScrollArea *this, __int64 a2, const char *a3, char a4, double a5)
{
  unsigned int v5; // r13d
  unsigned int v6; // r12d
  QT::QAbstractScrollArea *v7; // rbx
  __int64 v8; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  int v14; // eax
  __int64 v15; // rdi
  __int64 v16; // rdx
  _DWORD *v17; // rax
  __int64 v18; // rcx
  int v19; // edx
  int v20; // eax
  int v21; // esi
  int v22; // eax
  struct _Unwind_Exception *v24; // rbx
  unsigned __int8 v26; // [rsp+1Fh] [rbp-59h] BYREF
  __int64 v27; // [rsp+20h] [rbp-58h] BYREF
  __int64 v28; // [rsp+28h] [rbp-50h]
  unsigned __int64 v29; // [rsp+38h] [rbp-40h]

  v5 = 0;
  v6 = a4 & 1;
  v7 = this;
  v8 = *(_QWORD *)this;
  v29 = __readfsqword(0x28u);
  v13 = (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *, const char *, _QWORD, unsigned __int8 *))(v8 + 952))(
          this,
          a3,
          a4 & 1,
          &v26);
  if ( v13 || (v5 = 2 * (v26 ^ 1), (a4 & 2) == 0) )
  {
    if ( !*((_BYTE *)this + 968) )
    {
LABEL_28:
      v15 = 0;
      goto LABEL_8;
    }
  }
  else
  {
    this = *((QT::QAbstractScrollArea **)this + 116);
    if ( !v6 )
      this = *((QT::QAbstractScrollArea **)v7 + 115);
    v13 = (*(__int64 (__fastcall **)(QT::QAbstractScrollArea *))(*(_QWORD *)this + 16LL))(this);
    if ( !*((_BYTE *)v7 + 968) )
      goto LABEL_28;
  }
  if ( !*((_QWORD *)v7 + 53) )
  {
    v24 = (struct _Unwind_Exception *)sub_1E69C0(a5, (__int64)this, (__int64)a3, v11, v12);
    if ( v13 )
      qfree(v13, a3);
    _Unwind_Resume(v24);
  }
  v14 = *((_DWORD *)v7 + 104);
  if ( v14 == 2 )
  {
    v15 = *((_QWORD *)v7 + 112);
  }
  else if ( v14 == 3 )
  {
    v15 = *((_QWORD *)v7 + 113);
  }
  else
  {
    v15 = 0;
    if ( v14 == 1 )
      v15 = *((_QWORD *)v7 + 111);
  }
LABEL_8:
  v27 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, unsigned __int8 *))(*(_QWORD *)v15 + 368LL))(
          v15,
          v13,
          0,
          &v26);
  v28 = v16;
  v17 = *(_DWORD **)(QT::QAbstractScrollArea::viewport(v7) + 32LL);
  v18 = (unsigned int)(v17[8] - v17[6]);
  v19 = v17[7] - v17[5];
  if ( v19 < 0 )
  {
    v20 = v17[7] - v17[5];
    v19 = 0;
  }
  else
  {
    v20 = 0;
  }
  v21 = 0;
  if ( (int)v18 < 0 )
  {
    v21 = v18;
    v18 = 0;
  }
  if ( (int)v28 <= v20 || (int)v27 >= v19 || SHIDWORD(v28) <= v21 || SHIDWORD(v27) >= (int)v18 )
    v5 |= 1u;
  v22 = 2;
  if ( !v6 )
  {
    v22 = 1;
    v6 = 2;
  }
  if ( v26 )
    v6 = v22;
  sub_277B80(a2, &v27, v6, v18);
  if ( v13 )
    qfree(v13, (const char *)&v27);
  return v5;
}
