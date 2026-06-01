void __noreturn sub_2CC80()
{
  __int64 v0; // rbx
  int v1; // eax
  int v2; // eax
  int v3; // edi
  pthread_mutex_t *v4; // rdi

  v0 = qword_7BCE8;
  sub_2C8D0(qword_7BCE8);
  v1 = *(_DWORD *)(v0 + 5728);
  *(_QWORD *)(v0 + 5720) = 0;
  if ( v1 )
  {
    v2 = v1 - 1;
    *(_DWORD *)(v0 + 5728) = v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(v0 + 5712);
      if ( v3 == -1 )
      {
        sub_2B520(*(pthread_mutex_t **)v0);
      }
      else
      {
        sub_29700(v3);
        v4 = *(pthread_mutex_t **)v0;
        *(_DWORD *)(v0 + 5712) = -1;
        sub_2B520(v4);
      }
    }
  }
  sub_23D50((const __m128i *)"registry");
}

