__int64 *__fastcall sub_569590(__int64 a1)
{
  char *v2; // r13
  __int64 v3; // rax
  __int64 v4; // rbx
  char *v5; // r12
  __int64 v6; // rdi
  void *v7; // rdi
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 *result; // rax

  *(_QWORD *)a1 = &off_1C67AE0;
  sub_5692F0(a1);
  v2 = *(char **)(a1 + 160);
  if ( v2 )
  {
    v3 = *(unsigned int *)(a1 + 168);
    if ( (_DWORD)v3 )
    {
      v4 = *(_QWORD *)(a1 + 160);
      v5 = &v2[24 * v3];
      do
      {
        while ( 1 )
        {
          v6 = *(_QWORD *)(v4 + 8);
          if ( !v6 )
            break;
          v4 += 24;
          sub_186B220((void *)(v6 - 8));
          if ( v5 == (char *)v4 )
            goto LABEL_6;
        }
        v4 += 24;
      }
      while ( v5 != (char *)v4 );
    }
LABEL_6:
    sub_186B220(v2);
  }
  v7 = *(void **)(a1 + 128);
  if ( v7 )
    sub_186B220(v7);
  v8 = *(_QWORD *)(a1 + 88);
  if ( v8 )
    sub_186B220((void *)(v8 - 16));
  v9 = *(_QWORD *)(a1 + 40);
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = *(_QWORD *)(a1 + 16);
  result = qword_1C67518;
  *(_QWORD *)a1 = qword_1C67518;
  if ( v10 )
    return (__int64 *)sub_186B220((void *)(v10 - 8));
  return result;
}

