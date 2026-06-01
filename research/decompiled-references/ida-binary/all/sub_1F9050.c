unsigned __int64 __fastcall sub_1F9050(__int64 a1, __int64 *a2, __int64 *a3, __int64 *a4)
{
  const char *v9; // rsi
  __int64 v10; // rax
  const char *v11; // rdi
  QT::QWidget *v12; // r13
  const char *v13; // rsi
  const char *v14; // rsi
  __int64 v15; // rax
  const char *v16; // rdi
  QT::QWidget *v17; // r12
  const char *v18; // rsi
  const char *v19; // rsi
  __int64 v20; // rax
  const char *v21; // rdi
  QT::QWidget *v22; // [rsp+8h] [rbp-60h]
  const char *v23; // [rsp+10h] [rbp-58h] BYREF
  __int64 v24; // [rsp+18h] [rbp-50h]
  unsigned __int64 v25; // [rsp+28h] [rbp-40h]

  v25 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 784) > 1u )
  {
    v22 = qword_8CD748;
    sub_314450(&v23, *(_QWORD *)(a1 + 776), "Edit");
    v9 = &s1;
    if ( v24 )
      v9 = v23;
    v10 = sub_53DC50(v22, v9);
    v11 = v23;
    *a2 = v10;
    if ( v11 )
    {
      v24 = 0;
      qfree(v11, v9);
    }
    v12 = qword_8CD748;
    v13 = &s1;
    if ( *(_QWORD *)(a1 + 784) )
      v13 = *(const char **)(a1 + 776);
    sub_314450(&v23, v13, "Search");
    v14 = &s1;
    if ( v24 )
      v14 = v23;
    v15 = sub_53DC50(v12, v14);
    v16 = v23;
    *a3 = v15;
    if ( v16 )
    {
      v24 = 0;
      qfree(v16, v14);
    }
    v17 = qword_8CD748;
    v18 = &s1;
    if ( *(_QWORD *)(a1 + 784) )
      v18 = *(const char **)(a1 + 776);
    sub_314450(&v23, v18, "Jump");
    v19 = &s1;
    if ( v24 )
      v19 = v23;
    v20 = sub_53DC50(v17, v19);
    v21 = v23;
    *a4 = v20;
    if ( v21 )
    {
      v24 = 0;
      qfree(v21, v19);
    }
  }
  return v25 - __readfsqword(0x28u);
}
