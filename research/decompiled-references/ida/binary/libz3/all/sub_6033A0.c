__int64 (__fastcall **__fastcall sub_6033A0(__int64 a1))()
{
  __int64 (__fastcall **result)(); // rax
  char *v3; // r13
  __int64 v4; // rbp
  char *v5; // rbx
  char *v6; // rbp
  __int64 v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi

  result = &off_1C52798;
  v3 = *(char **)(a1 + 48);
  *(_QWORD *)a1 = &off_1C52798;
  if ( v3 )
  {
    v4 = *(unsigned int *)(a1 + 56);
    if ( (_DWORD)v4 )
    {
      v5 = v3;
      v6 = &v3[16 * v4];
      do
      {
        while ( 1 )
        {
          v7 = *((_QWORD *)v5 + 1);
          if ( !v7 )
            break;
          v5 += 16;
          sub_186B220((void *)(v7 - 8));
          if ( v5 == v6 )
            goto LABEL_6;
        }
        v5 += 16;
      }
      while ( v5 != v6 );
    }
LABEL_6:
    result = (__int64 (__fastcall **)())sub_186B220(v3);
  }
  v8 = *(_QWORD *)(a1 + 40);
  if ( v8 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v8 - 8));
  v9 = *(_QWORD *)(a1 + 32);
  if ( v9 )
    result = (__int64 (__fastcall **)())sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 24);
  if ( v10 )
    return (__int64 (__fastcall **)())sub_186B220((void *)(v10 - 8));
  return result;
}

