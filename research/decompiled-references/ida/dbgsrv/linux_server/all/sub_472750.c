/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_472750
// Address: 0x0000000000472750

//----- (0000000000472750) ----------------------------------------------------
void sub_472750()
{
  pthread_mutex_t *v0; // rbx
  _QWORD *v1; // r12
  __int64 v2; // rbp
  _QWORD *v3; // rbp
  _QWORD *v4; // rbx

  v0 = (pthread_mutex_t *)qword_4C8360;
  sub_482EC0((pthread_mutex_t *)qword_4C8360);
  v1 = ptr;
  v2 = xmmword_4C8370;
  ptr = nullptr;
  xmmword_4C8370 = 0;
  sub_482F10(v0);
  v3 = &v1[v2];
  if ( v1 != v3 )
  {
    v4 = v1;
    do
    {
      (**(void (__fastcall ***)(_QWORD, __int64))*v4)(*v4, 0xFFFFFFFFLL);
      ++v4;
    }
    while ( v3 != v4 );
  }
  if ( v1 )
    j__free(v1);
}
// 4C8360: using guessed type __int64 qword_4C8360;
// 4C8370: using guessed type __int128 xmmword_4C8370;
