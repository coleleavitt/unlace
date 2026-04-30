__int64 __fastcall debnames_chooser_t__::vfunc_22(__int64 a1, __int64 a2, __int64 a3)
{
  const char **v3; // rbx
  size_t v5; // rbp
  size_t v6; // rdx
  const char *v7; // rsi
  const char *v8; // rdx
  const char *v9; // rsi
  int v10; // eax
  const char *v11; // rdi
  char *v13; // rax
  const char *v14; // rsi
  unsigned int v15; // eax
  const char *v16; // [rsp+0h] [rbp-48h] BYREF
  __int128 v17; // [rsp+8h] [rbp-40h]
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v3 = (const char **)(*(_QWORD *)(a1 + 224) + 32 * a3);
  v18 = __readfsqword(0x28u);
  v17 = 0;
  v5 = (size_t)v3[2];
  v16 = nullptr;
  if ( v5 )
  {
    v13 = (char *)qalloc_or_throw(v5);
    *((_QWORD *)&v17 + 1) = v5;
    v14 = v3[1];
    v16 = v13;
    memcpy(v13, v14, v5);
    *(_QWORD *)&v17 = v5;
    if ( !*((_BYTE *)QT::QCoreApplication::self + 745) )
      goto LABEL_13;
  }
  else if ( !*((_BYTE *)QT::QCoreApplication::self + 745) )
  {
LABEL_3:
    v6 = 0;
    v7 = &s1;
    goto LABEL_4;
  }
  v15 = getinf(36);
  demangle_name(&v16, v16, v15, 2);
  v5 = v17;
  if ( !(_QWORD)v17 )
    goto LABEL_3;
LABEL_13:
  v7 = v16;
  v6 = v5 - 1;
LABEL_4:
  sub_4DC370(a2, v7, v6);
  if ( *((_BYTE *)QT::QCoreApplication::self + 744) )
  {
    *(_QWORD *)&v17 = 0;
    get_nice_colored_name(&v16, *v3, 2);
    v8 = &s1;
    if ( (_QWORD)v17 )
      v8 = v16;
    sub_4DC470(a2, *v3, v8);
  }
  else
  {
    sub_4DC3F0(a2, *v3);
  }
  v9 = *v3;
  v10 = sub_304FC0(QT::QCoreApplication::self, *v3);
  v11 = v16;
  *(_DWORD *)(a2 + 124) = v10;
  if ( v11 )
  {
    *(_QWORD *)&v17 = 0;
    qfree(v11, v9);
  }
  return 1;
}
