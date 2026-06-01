/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006DEC0
// Address: 0x000000010006DEC0

//----- (000000010006DEC0) ----------------------------------------------------
int __fastcall sub_10006DEC0(__int64 a1)
{
  void (__fastcall **v2)(_QWORD); // rax
  __int64 v3; // rdi
  __int64 v4; // rdi
  void *v5; // rdi
  void *v6; // rdi

  qmutex_free(*(pthread_mutex_t **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  v2 = *(void (__fastcall ***)(_QWORD))a1;
  if ( *(_QWORD *)a1 )
  {
    v3 = *(_QWORD *)(a1 + 40);
    if ( v3 )
    {
      v2[15](v3);
      v2 = *(void (__fastcall ***)(_QWORD))a1;
    }
    v4 = *(_QWORD *)(a1 + 48);
    if ( v4 )
    {
      v2[15](v4);
      v2 = *(void (__fastcall ***)(_QWORD))a1;
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      (*((void (__fastcall **)(_QWORD))*v2 + 20))(v2);
      v2 = *(void (__fastcall ***)(_QWORD))a1;
    }
    if ( v2 )
      LODWORD(v2) = (*((__int64 (__fastcall **)(_QWORD))*v2 + 1))(v2);
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_OWORD *)(a1 + 40) = 0;
  v5 = *(void **)(a1 + 32);
  if ( v5 )
    LODWORD(v2) = dlclose(v5);
  *(_QWORD *)(a1 + 32) = 0;
  v6 = *(void **)(a1 + 24);
  if ( v6 )
    LODWORD(v2) = dlclose(v6);
  *(_QWORD *)(a1 + 24) = 0;
  return (int)v2;
}
