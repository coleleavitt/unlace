QT::QWidget *__fastcall type_editor_field_handler_t__::vfunc_2(__int64 a1, int a2, __int64 a3)
{
  __int64 v3; // rax
  const char *v5; // r13
  __int64 v6; // r14
  __int64 v7; // r12
  __int64 tinfo_property; // rax
  int v9; // r14d
  int v10; // r8d
  int v11; // r9d
  int v12; // edx
  int v13; // ecx
  QT::QWidget *v14; // r12
  size_t v16; // rax
  size_t v17; // r14
  _BYTE *v18; // rax
  int v19; // [rsp-10h] [rbp-90h]
  int v20; // [rsp-8h] [rbp-88h]
  int v21; // [rsp+0h] [rbp-80h]
  int v22; // [rsp+8h] [rbp-78h]
  int v23; // [rsp+10h] [rbp-70h]
  QT::QObject *n; // [rsp+18h] [rbp-68h]
  size_t na; // [rsp+18h] [rbp-68h]
  int v26; // [rsp+20h] [rbp-60h]
  __int64 v27; // [rsp+28h] [rbp-58h]
  _BYTE *v28; // [rsp+30h] [rbp-50h] BYREF
  __int128 v29; // [rsp+38h] [rbp-48h]
  unsigned __int64 v30; // [rsp+48h] [rbp-38h]

  v23 = a2;
  v3 = *(_QWORD *)(a3 + 40);
  v30 = __readfsqword(0x28u);
  v28 = nullptr;
  v29 = 0;
  if ( v3 )
  {
    v5 = *(const char **)(v3 + 16);
    v6 = v3;
    v7 = *(_QWORD *)(v3 + 112);
    v22 = v3 + 8;
    if ( *(_BYTE *)(v3 + 8) )
    {
      print_tinfo(
        &v28,
        0,
        *(unsigned int *)(v3 + 124),
        *(unsigned int *)(v3 + 128),
        *(unsigned int *)(v3 + 120),
        v3 + 8,
        v5,
        *(_QWORD *)(v3 + 40));
      tinfo_property = get_tinfo_property(*(_QWORD *)(v6 + 8), 22);
      v9 = 388;
      if ( tinfo_property )
        goto LABEL_5;
      goto LABEL_4;
    }
    if ( !v5 )
    {
LABEL_4:
      v9 = 260;
      goto LABEL_5;
    }
    v9 = 260;
    v16 = strlen(v5);
    na = v16;
    if ( v16 )
    {
      v17 = v16 + 1;
      v18 = (_BYTE *)qvector_reserve(&v28, 0, v16 + 1, 1);
      *(_QWORD *)&v29 = v17;
      v28 = v18;
      memmove(v18, v5, na);
      v28[na] = 0;
      goto LABEL_4;
    }
  }
  else
  {
    v7 = 0;
    v9 = 260;
    v22 = 0;
  }
LABEL_5:
  n = (QT::QObject *)operator new(0x138u);
  sub_3D4300(n, v9);
  v12 = v19;
  v13 = v20;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 12);
    sub_526EF0(n, v21, v22, a2, (int)n, v26, v7, (__int64)v28);
    if ( v27 )
      --*(_DWORD *)(v27 + 12);
    --*(_DWORD *)(v7 + 12);
  }
  sub_504300(v23, (_DWORD)n, v12, v13, v10, v11, v21, v22, v23, (_DWORD)n, v26, v27, (__int64)v28);
  v14 = (QT::QWidget *)operator new(0x40u);
  sub_50FBA0(v14);
  *(_QWORD *)v14 = &type_editor_container_t___vtable;
  *((_QWORD *)v14 + 2) = type_editor_container_t___vtable_at__16;
  sub_50FDE0(v14);
  if ( v28 )
  {
    *(_QWORD *)&v29 = 0;
    qfree(v28, (const char *)(a3 + 56));
  }
  return v14;
}
