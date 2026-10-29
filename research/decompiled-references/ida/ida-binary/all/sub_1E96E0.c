unsigned __int64 __fastcall sub_1E96E0(QT::QObject *a1, double a2, __int64 a3, int a4)
{
  char *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // r14
  __int64 (__fastcall *v11)(__int64, _BYTE *, __int64); // rax
  _QWORD *view_options; // rax
  unsigned __int8 v13; // al
  __int64 v14; // rax
  int v16; // eax
  _BYTE v17[15]; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v18; // [rsp+18h] [rbp-30h]

  v18 = __readfsqword(0x28u);
  QT::QObject::QObject(a1, nullptr);
  *((_QWORD *)a1 + 2) = 0;
  *(_QWORD *)a1 = &object_lifecycle_monitor_t___vtable;
  sub_478D00((char *)a1, *(__int64 *)v17);
  v6 = (char *)a1 + 32;
  dto_init(v6, 0);
  if ( *((_BYTE *)a1 + 24) )
    return v18 - __readfsqword(0x28u);
  v9 = *((_QWORD *)a1 + 2);
  if ( !v9 )
    return v18 - __readfsqword(0x28u);
  if ( !a4 )
  {
    if ( !*(_BYTE *)(v9 + 968) )
      return v18 - __readfsqword(0x28u);
    if ( !*(_QWORD *)(v9 + 424) )
      sub_1E69C0(a2, (__int64)v6, 0, v7, v8);
    v16 = *(_DWORD *)(v9 + 416);
    if ( v16 != 2 )
    {
      if ( v16 != 3 )
      {
        if ( v16 != 1 )
          return v18 - __readfsqword(0x28u);
LABEL_7:
        v10 = *(_QWORD *)(v9 + 888);
        goto LABEL_8;
      }
      goto LABEL_22;
    }
LABEL_15:
    v10 = *(_QWORD *)(v9 + 896);
    goto LABEL_8;
  }
  if ( a4 == 2 )
    goto LABEL_15;
  if ( a4 != 3 )
  {
    if ( a4 != 1 )
      return v18 - __readfsqword(0x28u);
    goto LABEL_7;
  }
LABEL_22:
  v10 = *(_QWORD *)(v9 + 904);
LABEL_8:
  if ( v10 )
  {
    if ( *(_DWORD *)(v9 + 964) == 1 )
      dto_copy_from_inf((char *)a1 + 32);
    dto_init(v17, 0);
    v11 = *(__int64 (__fastcall **)(__int64, _BYTE *, __int64))(*(_QWORD *)v9 + 560LL);
    if ( (char *)v11 == (char *)sub_1E6860 )
    {
      view_options = (_QWORD *)get_view_options(v10 != *(_QWORD *)(v9 + 888));
      *(_QWORD *)v17 = *view_options;
      *(_QWORD *)&v17[7] = *(_QWORD *)((char *)view_options + 7);
    }
    else
    {
      v11(v9, v17, v10);
    }
    v13 = getinf_flag(2, 128);
    v14 = get_view_options(v13);
    dto_copy_from_inf(v14);
    dto_copy_to_inf(v17);
  }
  return v18 - __readfsqword(0x28u);
}
