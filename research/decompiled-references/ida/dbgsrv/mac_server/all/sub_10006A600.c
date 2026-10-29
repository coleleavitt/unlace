/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006A600
// Address: 0x000000010006A600

//----- (000000010006A600) ----------------------------------------------------
void __fastcall __noreturn sub_10006A600(__int64 a1, unsigned int a2)
{
  char *v3; // rax
  __int64 v4; // rdi
  _QWORD *v5; // r12
  _QWORD *v6; // r15
  _opaque_pthread_t *v7; // rdi
  _QWORD *v8; // rcx
  _QWORD *v9; // rax
  bool v10; // zf

  v3 = strsignal(a2);
  sub_10006D810("%s: terminating the server\n", v3);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD **)(v4 + 8);
  if ( v5 != (_QWORD *)(v4 + 16) )
  {
    do
    {
      v6 = (_QWORD *)v5[4];
      v7 = (_opaque_pthread_t *)v5[5];
      if ( v7 )
        qthread_free(v7);
      if ( v6 && v6[17] )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 24LL))(v6, a2);
        sub_100069400((__int64)v6);
      }
      v8 = (_QWORD *)v5[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          v9 = (_QWORD *)v5[2];
          v10 = *v9 == (_QWORD)v5;
          v5 = v9;
        }
        while ( !v10 );
      }
      v4 = *(_QWORD *)(a1 + 88);
      v5 = v9;
    }
    while ( v9 != (_QWORD *)(v4 + 16) );
  }
  sub_10006A6F0(v4 + 8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_10006AB40((_QWORD *)(a1 + 80));
  _exit(a2 != 15);
}
