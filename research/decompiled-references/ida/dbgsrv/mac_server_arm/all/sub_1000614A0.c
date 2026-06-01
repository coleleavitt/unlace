/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000614A0
// Address: 0x00000001000614A0

//----- (00000001000614A0) ----------------------------------------------------
__int64 __fastcall sub_1000614A0(__int64 a1)
{
  void (__fastcall **v2)(_QWORD); // x0
  void *v3; // x0
  void *v4; // x0

  qmutex_free(*(pthread_mutex_t **)(a1 + 16));
  *(_QWORD *)(a1 + 16) = 0;
  v2 = *(void (__fastcall ***)(_QWORD))a1;
  if ( *(_QWORD *)a1 )
  {
    if ( *(_QWORD *)(a1 + 40) )
    {
      v2[15](*(_QWORD *)(a1 + 40));
      v2 = *(void (__fastcall ***)(_QWORD))a1;
    }
    if ( *(_QWORD *)(a1 + 48) )
    {
      v2[15](*(_QWORD *)(a1 + 48));
      v2 = *(void (__fastcall ***)(_QWORD))a1;
    }
    if ( *(_QWORD *)(a1 + 8) )
    {
      (*((void (__fastcall **)(_QWORD))*v2 + 20))(v2);
      v2 = *(void (__fastcall ***)(_QWORD))a1;
    }
    if ( v2 )
      (*((void (__fastcall **)(_QWORD))*v2 + 1))(v2);
  }
  *(_QWORD *)(a1 + 8) = 0;
  *(_QWORD *)(a1 + 40) = 0;
  *(_QWORD *)(a1 + 48) = 0;
  v3 = *(void **)(a1 + 32);
  if ( v3 )
    dlclose(v3);
  *(_QWORD *)(a1 + 32) = 0;
  v4 = *(void **)(a1 + 24);
  if ( v4 )
    dlclose(v4);
  *(_QWORD *)(a1 + 24) = 0;
  return a1;
}
