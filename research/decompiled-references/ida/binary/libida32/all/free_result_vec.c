void __fastcall free_result_vec(__int64 a1)
{
  _QWORD *v1; // rbx
  __int64 v2; // rbp

  v1 = *(_QWORD **)a1;
  v2 = *(_QWORD *)a1 + 8LL * *(_QWORD *)(a1 + 8);
  if ( v2 != *(_QWORD *)a1 )
  {
    do
    {
      if ( *v1 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v1 + 8LL))(*v1);
      ++v1;
    }
    while ( (_QWORD *)v2 != v1 );
    v1 = *(_QWORD **)a1;
  }
  if ( v1 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    qfree(v1);
    *(_QWORD *)a1 = 0;
    *(_QWORD *)(a1 + 16) = 0;
  }
}

