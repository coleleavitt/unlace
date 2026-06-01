/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: handler
// Address: 0x0000000000472680

//----- (0000000000472680) ----------------------------------------------------
void __fastcall __noreturn handler(unsigned int a1)
{
  pthread_mutex_t *v1; // rbx
  _QWORD *v2; // r13
  __int64 v3; // r12
  _QWORD *v4; // r12
  _QWORD *v5; // rbx

  v1 = (pthread_mutex_t *)qword_4C8360;
  sub_482EC0((pthread_mutex_t *)qword_4C8360);
  v2 = ptr;
  v3 = xmmword_4C8370;
  ptr = nullptr;
  xmmword_4C8370 = 0;
  sub_482F10(v1);
  v4 = &v2[v3];
  if ( v2 != v4 )
  {
    v5 = v2;
    do
    {
      (**(void (__fastcall ***)(_QWORD, _QWORD))*v5)(*v5, a1);
      ++v5;
    }
    while ( v4 != v5 );
  }
  if ( v2 )
    j__free(v2);
  _exit((a1 == 15) - 1);
}
// 4C8360: using guessed type __int64 qword_4C8360;
// 4C8370: using guessed type __int128 xmmword_4C8370;
