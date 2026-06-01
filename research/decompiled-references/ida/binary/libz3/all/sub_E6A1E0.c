void __fastcall sub_E6A1E0(__int64 *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // r12
  void *v4; // rbp
  __int64 v5; // rdi

  v2 = (_QWORD *)a1[1];
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 == v3 )
    {
      if ( *a1 )
        *(_DWORD *)(*a1 - 4) = 0;
    }
    else
    {
      do
      {
        v4 = (void *)*v2;
        if ( *v2 )
        {
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v4 + 8LL))(*v2);
          sub_186B220(v4);
        }
        ++v2;
      }
      while ( v3 != v2 );
      v5 = *a1;
      v2 = (_QWORD *)a1[1];
      if ( *a1 )
        *(_DWORD *)(v5 - 4) = 0;
      if ( !v2 )
        goto LABEL_10;
    }
    *((_DWORD *)v2 - 1) = 0;
    sub_186B220(v2 - 1);
    v5 = *a1;
  }
  else
  {
    v5 = *a1;
    if ( !v5 )
      return;
    *(_DWORD *)(v5 - 4) = 0;
  }
LABEL_10:
  if ( v5 )
    sub_186B220((void *)(v5 - 8));
}

