__int64 __fastcall sub_40BB50(__int64 a1, __int64 a2, char a3, __int64 a4)
{
  bool v4; // zf
  __int64 v7; // rdi
  const char *v10; // r13
  double v11; // xmm0_8
  size_t v12; // rax
  double v13; // xmm0_8
  size_t v14; // rax
  char *v15; // r13
  unsigned __int64 v16; // rdx
  double v17; // xmm0_8
  void **v18; // rsi
  double v19; // xmm0_8
  size_t v20; // rax
  double v21; // xmm0_8
  size_t v22; // rax
  char *v23; // r14
  unsigned __int64 v24; // rdx
  double v25; // xmm0_8
  char *s; // [rsp+30h] [rbp-198h] BYREF
  __int128 v27; // [rsp+38h] [rbp-190h]
  void *v28[4]; // [rsp+50h] [rbp-178h] BYREF
  void *v29[4]; // [rsp+70h] [rbp-158h] BYREF
  void *v30[4]; // [rsp+90h] [rbp-138h] BYREF
  void *v31; // [rsp+B0h] [rbp-118h] BYREF
  void *v32[4]; // [rsp+D0h] [rbp-F8h] BYREF
  void *v33[4]; // [rsp+F0h] [rbp-D8h] BYREF
  void *ptr[4]; // [rsp+110h] [rbp-B8h] BYREF
  void *v35[4]; // [rsp+130h] [rbp-98h] BYREF
  void *v36[4]; // [rsp+150h] [rbp-78h] BYREF
  void *v37[11]; // [rsp+170h] [rbp-58h] BYREF

  v4 = *(_BYTE *)(a2 + 232) == 0;
  v37[3] = (void *)__readfsqword(0x28u);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 16) = 0;
    *(_OWORD *)a1 = 0;
  }
  else
  {
    v7 = *(_QWORD *)(a2 + 240);
    s = nullptr;
    v27 = 0;
    if ( (v7 & 0x100) != 0 )
    {
      get_tinfo_pdata(&s, v7, 0);
      v7 = *(_QWORD *)(a2 + 240);
    }
    v10 = "struct";
    if ( (get_tinfo_property(v7, 2) & 0x3F) != 0xD )
    {
      v10 = "union";
      if ( (get_tinfo_property(*(_QWORD *)(a2 + 240), 2) & 0x3F) != 0x1D )
      {
        v10 = "enum";
        if ( (get_tinfo_property(*(_QWORD *)(a2 + 240), 2) & 0x3F) != 0x2D )
          v10 = "type";
      }
    }
    if ( (a3 & 1) != 0 )
    {
      v11 = QT::QString::fromUtf8(v28, 53, "<font color=\"%1\">%2</font> <font color=\"%3\">%4</font>");
      sub_40BAA0((__int64)v29, 32, a4);
      QT::QString::arg(v30, v28, v29, 0, 32, v11);
      v12 = strlen(v10);
      v13 = QT::QString::fromUtf8(&v31, v12, v10);
      QT::QString::toHtmlEscaped((QT::QString *)v32);
      QT::QString::arg(v33, v30, v32, 0, 32, v13);
      sub_40BAA0((__int64)ptr, 32, a4);
      QT::QString::arg(v35, v33, ptr, 0, 32, v13);
      if ( (_QWORD)v27 )
      {
        v14 = v27 - 1;
        v15 = s;
        v16 = (unsigned __int64)(v27 - 1) >> 63;
      }
      else
      {
        LOBYTE(v16) = 0;
        v14 = 0;
        v15 = (char *)&s1;
      }
      if ( !v15 || (_BYTE)v16 )
      {
        v14 = 0;
        if ( v15 )
          v14 = strlen(v15);
      }
      v17 = QT::QString::fromUtf8(v36, v14, v15);
      QT::QString::toHtmlEscaped((QT::QString *)v37);
      v18 = v35;
      QT::QString::arg(a1, v35, v37, 0, 32, v17);
      if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
        free(v37[0]);
      if ( v36[0] && !_InterlockedSub((volatile signed __int32 *)v36[0], 1u) )
        free(v36[0]);
      if ( v35[0] && !_InterlockedSub((volatile signed __int32 *)v35[0], 1u) )
        free(v35[0]);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
      if ( v33[0] && !_InterlockedSub((volatile signed __int32 *)v33[0], 1u) )
        free(v33[0]);
      if ( v32[0] && !_InterlockedSub((volatile signed __int32 *)v32[0], 1u) )
        free(v32[0]);
      if ( v31 && !_InterlockedSub((volatile signed __int32 *)v31, 1u) )
        free(v31);
      if ( v30[0] && !_InterlockedSub((volatile signed __int32 *)v30[0], 1u) )
        free(v30[0]);
      if ( v29[0] && !_InterlockedSub((volatile signed __int32 *)v29[0], 1u) )
        free(v29[0]);
      if ( v28[0] && !_InterlockedSub((volatile signed __int32 *)v28[0], 1u) )
        free(v28[0]);
    }
    else
    {
      v19 = QT::QString::fromUtf8(ptr, 5, "%1 %2");
      v20 = strlen(v10);
      v21 = QT::QString::fromUtf8(v35, v20, v10, v19);
      QT::QString::arg(v36, ptr, v35, 0, 32, v21);
      if ( (_QWORD)v27 )
      {
        v22 = v27 - 1;
        v23 = s;
        v24 = (unsigned __int64)(v27 - 1) >> 63;
      }
      else
      {
        LOBYTE(v24) = 0;
        v22 = 0;
        v23 = (char *)&s1;
      }
      if ( !v23 || (_BYTE)v24 )
      {
        v22 = 0;
        if ( v23 )
          v22 = strlen(v23);
      }
      v25 = QT::QString::fromUtf8(v37, v22, v23);
      v18 = v36;
      QT::QString::arg(a1, v36, v37, 0, 32, v25);
      if ( v37[0] && !_InterlockedSub((volatile signed __int32 *)v37[0], 1u) )
        free(v37[0]);
      if ( v36[0] && !_InterlockedSub((volatile signed __int32 *)v36[0], 1u) )
        free(v36[0]);
      if ( v35[0] && !_InterlockedSub((volatile signed __int32 *)v35[0], 1u) )
        free(v35[0]);
      if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
        free(ptr[0]);
    }
    if ( s )
    {
      *(_QWORD *)&v27 = 0;
      qfree(s, (const char *)v18);
    }
  }
  return a1;
}
