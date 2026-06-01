__int64 __fastcall sub_4457D0(QT::QAbstractItemView *this, __int64 a2)
{
  const char *v2; // rcx
  bool v3; // zf
  __int64 v4; // rax
  const char **v5; // rbx
  const char *v6; // rdx
  const char *v7; // rsi
  __int64 v8; // r12
  __int64 v10; // [rsp+Eh] [rbp-5Ah] BYREF
  char v11; // [rsp+16h] [rbp-52h]
  __int64 v12; // [rsp+17h] [rbp-51h] BYREF
  char v13; // [rsp+1Fh] [rbp-49h]
  __int128 v14; // [rsp+20h] [rbp-48h] BYREF
  const char *v15; // [rsp+30h] [rbp-38h] BYREF
  __int128 v16; // [rsp+38h] [rbp-30h]
  unsigned __int64 v17; // [rsp+48h] [rbp-20h]

  v2 = &s1;
  v3 = *(_QWORD *)(a2 + 8) == 0;
  v17 = __readfsqword(0x28u);
  v16 = 0;
  v15 = nullptr;
  if ( !v3 )
    v2 = *(const char **)a2;
  sub_169A50((__int64 *)&v15, (__int64)"/%d@%s", *(_DWORD *)(a2 + 24), v2);
  v4 = QT::QAbstractItemView::model(this);
  v5 = *(const char ***)(v4 + 216);
  if ( !v5 )
    v5 = *(const char ***)(v4 + 208);
  v6 = &s1;
  if ( (_QWORD)v16 )
    v6 = v15;
  v7 = *v5;
  v13 = 0;
  v12 = -1;
  dirtree_resolve_path(&v12, v7, v6, 0.0);
  v10 = v12;
  v11 = v13;
  if ( v12 != -1 && v13 )
  {
    v7 = (const char *)v5;
    v14 = -1;
    dirtree_find_entry(&v14, v5, &v10);
    v8 = v14;
  }
  else
  {
    v8 = -1;
  }
  if ( v15 )
  {
    *(_QWORD *)&v16 = 0;
    qfree(v15, v7);
  }
  return v8;
}
