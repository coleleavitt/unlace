__int64 __fastcall sub_2DE3A0(double a1, __int64 a2, __int64 a3, const char *a4, __int64 a5)
{
  _QWORD *v5; // r14
  int v6; // eax
  __m128i si128; // xmm1
  int v9; // eax
  size_t v10; // rax
  size_t v11; // r13
  QT::QWidget *v12; // rax
  __int64 v13; // r13
  const char *v14; // rsi
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rdi
  __int64 v20; // r12
  __int64 v21; // rbx
  __int64 *v22; // rbp
  __int64 v23; // rdi
  size_t v25; // r14
  _BYTE *v26; // rax
  _BYTE *v27; // [rsp+0h] [rbp-98h] BYREF
  __int128 v28; // [rsp+8h] [rbp-90h]
  __int64 v29; // [rsp+18h] [rbp-80h]
  __int128 v30; // [rsp+20h] [rbp-78h]
  __m128i v31; // [rsp+30h] [rbp-68h]
  void *ptr[2]; // [rsp+40h] [rbp-58h]
  __int64 v33; // [rsp+50h] [rbp-48h]
  int v34; // [rsp+58h] [rbp-40h]
  unsigned __int64 v35; // [rsp+68h] [rbp-30h]

  v35 = __readfsqword(0x28u);
  v5 = QT::QCoreApplication::self;
  if ( *((_BYTE *)QT::QCoreApplication::self + 529) )
  {
    if ( !under_debugger )
      interr(40635, a3, a4, a5, a1);
    BUG();
  }
  v6 = a3;
  si128 = _mm_load_si128((const __m128i *)&xmmword_5DC310);
  BYTE1(v6) = BYTE1(a3) & 0xFD;
  v27 = nullptr;
  v9 = v6 | 0x1000000;
  v28 = 0;
  if ( (a3 & 0x200) != 0 )
    LODWORD(a3) = v9;
  v30 = 0;
  v29 = 0;
  v31 = si128;
  *(_OWORD *)ptr = 0;
  v33 = 0;
  if ( (a3 & 2) != 0 )
    LODWORD(a3) = a3 & 0xFFBFFFFD | 0x400000;
  v34 = a3;
  if ( a4 )
  {
    v10 = strlen(a4);
    v11 = v10;
    if ( v10 )
    {
      v25 = v10 + 1;
      v26 = (_BYTE *)qvector_reserve(&v27, 0, v10 + 1, 1);
      *(_QWORD *)&v28 = v25;
      v27 = v26;
      memmove(v26, a4, v11);
      v27[v11] = 0;
      v5 = QT::QCoreApplication::self;
    }
  }
  v12 = (QT::QWidget *)sub_47A690(v5);
  v13 = sub_4CBD90(v12);
  v14 = (const char *)sub_4CD6B0(v13, 0);
  sub_2DE260(1, (__int64)v14);
  if ( qword_8CD748 )
    sub_313F40(qword_8CD748);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    free(ptr[0]);
  v19 = v29;
  if ( v29 )
  {
    v20 = v30;
    if ( (_QWORD)v30 )
    {
      v21 = 0;
      do
      {
        v22 = (__int64 *)(v19 + 40 * v21);
        jvalue_t_clear(v22 + 3);
        v23 = *v22;
        if ( *v22 )
        {
          v22[1] = 0;
          qfree(v23, v14);
        }
        ++v21;
        v19 = v29;
      }
      while ( v20 != v21 );
    }
    *(_QWORD *)&v30 = 0;
    qfree(v19, v14, v15, v16, v17, v18, v27, v28);
  }
  if ( v27 )
  {
    *(_QWORD *)&v28 = 0;
    qfree(v27, v14);
  }
  return v13;
}
