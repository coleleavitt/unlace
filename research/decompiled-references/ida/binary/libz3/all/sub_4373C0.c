__int64 (__fastcall **__fastcall sub_4373C0(_QWORD *a1))()
{
  void *v2; // rdi
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  __int64 (__fastcall **result)(); // rax
  void *v10; // rdi
  __int64 v11; // rsi
  __int64 v12; // rdi

  v2 = (void *)a1[27];
  if ( v2 )
    sub_186B220(v2);
  v3 = (void *)a1[24];
  if ( v3 )
    sub_186B220(v3);
  v4 = (void *)a1[23];
  a1[17] = &off_1C62200;
  if ( v4 )
    sub_186B220(v4);
  v5 = (void *)a1[20];
  if ( v5 )
    sub_186B220(v5);
  v6 = (void *)a1[16];
  a1[10] = &off_1C62200;
  if ( v6 )
    sub_186B220(v6);
  v7 = (void *)a1[13];
  if ( v7 )
    sub_186B220(v7);
  v8 = (void *)a1[9];
  result = &off_1C62200;
  a1[3] = &off_1C62200;
  if ( v8 )
    result = (__int64 (__fastcall **)())sub_186B220(v8);
  v10 = (void *)a1[6];
  if ( v10 )
    result = (__int64 (__fastcall **)())sub_186B220(v10);
  v11 = a1[1];
  if ( v11 )
  {
    v12 = a1[2];
    if ( (*(_DWORD *)(v11 + 8))-- == 1 )
      return (__int64 (__fastcall **)())sub_15D7BC0(v12, v11);
  }
  return result;
}

