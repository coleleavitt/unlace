__int64 (__fastcall **__fastcall sub_7004A0(_QWORD *a1))()
{
  __int64 (__fastcall **result)(); // rax
  __int64 v3; // rdi
  __int64 v4; // rsi
  __int64 v5; // r12
  __int64 v6; // r12
  __int64 v7; // rbx
  __int64 v8; // rsi

  result = &off_1C53508;
  *a1 = &off_1C53508;
  v3 = a1[3];
  if ( v3 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v3 - 8));
  v4 = a1[1];
  if ( v4 )
  {
    v5 = *(unsigned int *)(v4 - 4);
    if ( !(_DWORD)v5 )
      goto LABEL_8;
    v6 = 8 * v5;
    v7 = 0;
    do
    {
      v8 = v7 + v4;
      v7 += 8;
      result = (__int64 (__fastcall **)())sub_17B1E70(a1[2], v8);
      v4 = a1[1];
    }
    while ( v6 != v7 );
    if ( v4 )
    {
LABEL_8:
      *(_DWORD *)(v4 - 4) = 0;
      return (__int64 (__fastcall **)())sub_186B220((void *)(v4 - 8));
    }
  }
  return result;
}

