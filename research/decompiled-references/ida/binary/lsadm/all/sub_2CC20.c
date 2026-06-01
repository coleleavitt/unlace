char __fastcall sub_2CC20(__int64 a1)
{
  int v2; // eax
  int v3; // edi
  pthread_mutex_t *v4; // rdi

  sub_2C8D0(a1);
  v2 = *(_DWORD *)(a1 + 5728);
  *(_QWORD *)(a1 + 5720) = 0;
  if ( v2 )
  {
    *(_DWORD *)(a1 + 5728) = --v2;
    if ( !v2 )
    {
      v3 = *(_DWORD *)(a1 + 5712);
      if ( v3 == -1 )
      {
        LOBYTE(v2) = sub_2B520(*(pthread_mutex_t **)a1);
      }
      else
      {
        sub_29700(v3);
        v4 = *(pthread_mutex_t **)a1;
        *(_DWORD *)(a1 + 5712) = -1;
        LOBYTE(v2) = sub_2B520(v4);
      }
    }
  }
  return v2;
}

