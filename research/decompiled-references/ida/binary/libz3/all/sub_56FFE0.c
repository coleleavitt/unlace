__int64 (__fastcall **__fastcall sub_56FFE0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  __int64 v5; // rdi
  __int64 v6; // rdi
  __int64 v7; // rdi

  result = &off_1C514F8;
  *a1 = &off_1C514F8;
  v3 = a1[5];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[4];
  if ( v4 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
  v5 = a1[3];
  if ( v5 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v5 - 8));
  v6 = a1[2];
  if ( v6 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v6 - 8));
  v7 = a1[1];
  if ( v7 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v7 - 8));
  return result;
}

