__int64 *__fastcall sub_578670(_QWORD *a1)
{
  __int64 v2; // rax
  __int64 v3; // r13
  __int64 v4; // r13
  __int64 v5; // rbx
  void *v6; // rbp
  __int64 (__fastcall *v7)(void (__fastcall ***)(_QWORD)); // rdx
  __int64 v8; // rdi
  __int64 v9; // rdi
  __int64 v10; // rdi
  __int64 *result; // rax

  *a1 = &off_1C67CA0;
  v2 = a1[4];
  if ( v2 )
  {
    v3 = *(unsigned int *)(v2 - 4);
    if ( (_DWORD)v3 )
    {
      v4 = 8 * v3;
      v5 = 0;
      while ( 1 )
      {
        v6 = *(void **)(v2 + v5);
        v7 = *(__int64 (__fastcall **)(void (__fastcall ***)(_QWORD)))(*(_QWORD *)v6 + 16LL);
        if ( v7 == sub_4C9C10 )
        {
          (**(void (__fastcall ***)(void *))v6)(v6);
          v5 += 8;
          sub_186B220(v6);
          if ( v4 == v5 )
            break;
        }
        else
        {
          v7((void (__fastcall ***)(_QWORD))v6);
          v5 += 8;
          if ( v4 == v5 )
            break;
        }
        v2 = a1[4];
      }
    }
  }
  v8 = a1[5];
  if ( v8 )
    sub_186B220((void *)(v8 - 8));
  v9 = a1[4];
  if ( v9 )
    sub_186B220((void *)(v9 - 8));
  v10 = a1[2];
  result = qword_1C665B0;
  *a1 = qword_1C665B0;
  if ( v10 )
    return (__int64 *)sub_186B220((void *)(v10 - 8));
  return result;
}

