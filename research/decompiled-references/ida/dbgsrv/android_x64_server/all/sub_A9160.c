/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_A9160
// Address: 0x00000000000A9160

//----- (00000000000A9160) ----------------------------------------------------
void __fastcall __noreturn sub_A9160(__int64 a1, unsigned int a2)
{
  char *v3; // rax
  __int64 v4; // r12
  _QWORD *v5; // rbx
  _QWORD *v6; // rbp
  pthread_t v7; // rdi
  _QWORD *v8; // rax
  _QWORD **v9; // rbp
  __int64 v10; // rbx
  bool v11; // zf

  v3 = strsignal(a2);
  sub_AD470("%s: terminating the server\n", v3);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD *)(a1 + 88);
  v5 = *(_QWORD **)(v4 + 8);
  if ( v5 == (_QWORD *)(v4 + 16) )
  {
    v9 = *(_QWORD ***)(v4 + 8);
  }
  else
  {
    do
    {
      v6 = (_QWORD *)v5[4];
      v7 = v5[5];
      if ( v7 )
        qthread_free(v7);
      if ( v6 && v6[17] )
      {
        (*(void (__fastcall **)(_QWORD *, _QWORD))(*v6 + 24LL))(v6, a2);
        sub_A7D60((__int64)v6);
      }
      v8 = (_QWORD *)v5[1];
      if ( v8 )
      {
        do
        {
          v9 = (_QWORD **)v8;
          v8 = (_QWORD *)*v8;
        }
        while ( v8 );
      }
      else
      {
        v9 = (_QWORD **)v5[2];
        if ( *v9 != v5 )
        {
          v10 = (__int64)(v5 + 2);
          do
          {
            v9 = *(_QWORD ***)(*(_QWORD *)v10 + 16LL);
            v11 = *v9 == *(_QWORD **)v10;
            v10 = *(_QWORD *)v10 + 16LL;
          }
          while ( !v11 );
        }
      }
      v4 = *(_QWORD *)(a1 + 88);
      v5 = v9;
    }
    while ( v9 != (_QWORD **)(v4 + 16) );
  }
  sub_A9510(v4 + 8, *v9);
  *(_QWORD *)(v4 + 24) = 0;
  *(_QWORD *)(v4 + 8) = v9;
  *v9 = nullptr;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_A96B0((_QWORD *)(a1 + 80));
  _exit(a2 != 15);
}
