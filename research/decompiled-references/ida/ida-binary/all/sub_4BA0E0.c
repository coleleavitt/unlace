int __fastcall sub_4BA0E0(const char *a1, char *a2, __int64 a3, __int64 a4, double a5)
{
  __int64 v5; // r12
  __int64 *v6; // rax
  const char *v7; // r13
  __int64 v8; // r14
  __int64 v9; // rbx
  __int64 v10; // rbp
  __int64 v11; // rbx
  __int64 *v12; // rax
  __int64 v13; // r14
  __int64 v14; // rbx
  __int64 v15; // rbp
  QT::QWidget *v16; // rbp
  __int64 v17; // rdx
  __int64 v18; // rcx

  if ( !a2[16] )
    goto LABEL_21;
  v5 = (__int64)a2;
  if ( *(_DWORD *)a2 != 3 )
  {
LABEL_20:
    sub_4B56A0(a5, (__int64)a1, (__int64)a2, a3, a4);
LABEL_21:
    sub_4B56C0(a5, (__int64)a1, (__int64)a2, a3, a4);
    LODWORD(v12) = sub_4BA230();
    return (int)v12;
  }
  v6 = *((__int64 **)a2 + 1);
  v7 = a1;
  v8 = v6[1];
  if ( v8 )
  {
    v9 = *v6;
    v10 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v9 + 8) )
      {
        a1 = *(const char **)v9;
        a2 = "layout";
        if ( !strcmp(*(const char **)v9, "layout") )
          break;
      }
      ++v10;
      v9 += 40;
      if ( v8 == v10 )
        goto LABEL_9;
    }
    v11 = v9 + 24;
  }
  else
  {
LABEL_9:
    v11 = 0;
  }
  if ( *(_DWORD *)v11 != 3 )
  {
    sub_4B5660(a5, (__int64)a1, (__int64)a2, a3, a4);
    goto LABEL_20;
  }
  v12 = *(__int64 **)(v11 + 8);
  v13 = v12[1];
  if ( v13 )
  {
    v14 = *v12;
    v15 = 0;
    while ( 1 )
    {
      if ( *(_QWORD *)(v14 + 8) )
      {
        LODWORD(v12) = strcmp(*(const char **)v14, "main");
        if ( !(_DWORD)v12 )
          break;
      }
      ++v15;
      v14 += 40;
      if ( v13 == v15 )
        return (int)v12;
    }
    if ( *(_DWORD *)(v14 + 24) == 3 )
    {
      v16 = (QT::QWidget *)(*(__int64 (__fastcall **)(const char *))(*(_QWORD *)v7 + 224LL))(v7);
      sub_4B8D00(v14 + 24, v16);
      sub_4BA010(v16, v5, v17, v18);
      LODWORD(v12) = sub_4B9D50(v16, v5);
    }
  }
  return (int)v12;
}
