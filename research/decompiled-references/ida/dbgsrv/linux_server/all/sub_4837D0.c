/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4837D0
// Address: 0x00000000004837D0

//----- (00000000004837D0) ----------------------------------------------------
__int64 __fastcall sub_4837D0(char *name, __int64 a2)
{
  pthread_mutex_t *v2; // r12
  char *v3; // rax
  char *v4; // rbx
  size_t v5; // rax
  size_t v6; // r13
  unsigned int v7; // ebx
  void *v9; // rdi
  size_t v10; // r14
  void *v11; // rax

  if ( !qword_4C9510 )
  {
    qword_4C9510 = j__pthread_self();
    qword_4C9518 = (__int64)sub_482C40();
  }
  v2 = (pthread_mutex_t *)qword_4C9518;
  sub_482EC0((pthread_mutex_t *)qword_4C9518);
  v3 = getenv(name);
  v4 = v3;
  if ( v3 && *v3 )
  {
    if ( a2 )
    {
      v5 = strlen(v3);
      v6 = v5;
      if ( v5 )
      {
        v9 = *(void **)a2;
        v10 = v5 + 1;
        if ( *(_QWORD *)(a2 + 16) < v5 + 1 )
        {
          v11 = sub_481540(a2, *(void **)a2, v5 + 1, 1u);
          *(_QWORD *)a2 = v11;
          v9 = v11;
        }
        *(_QWORD *)(a2 + 8) = v10;
        memmove(v9, v4, v6);
        *(_BYTE *)(*(_QWORD *)a2 + v6) = 0;
      }
      else
      {
        *(_QWORD *)(a2 + 8) = 0;
      }
    }
    v7 = 1;
  }
  else
  {
    v7 = 0;
  }
  sub_482F10(v2);
  return v7;
}
// 4C9510: using guessed type __int64 qword_4C9510;
// 4C9518: using guessed type __int64 qword_4C9518;
