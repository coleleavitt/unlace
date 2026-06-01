/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005DE80
// Address: 0x000000010005DE80

//----- (000000010005DE80) ----------------------------------------------------
void __fastcall __noreturn sub_10005DE80(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        __int64 a5,
        __int64 a6,
        __int64 a7,
        __int64 a8)
{
  __int64 v10; // x9
  _QWORD *v11; // x22
  _opaque_pthread_t *v12; // x0
  _QWORD *v13; // x21
  _QWORD *v14; // x9
  _QWORD *v15; // x8
  bool v16; // zf

  sub_100060EB4("got signal #%d, terminating\n", a2, a3, a4, a5, a6, a7, a8, a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v10 = *(_QWORD *)(a1 + 88);
  v11 = *(_QWORD **)(v10 + 8);
  if ( v11 != (_QWORD *)(v10 + 16) )
  {
    do
    {
      v13 = (_QWORD *)v11[4];
      v12 = (_opaque_pthread_t *)v11[5];
      if ( v12 )
        qthread_free(v12);
      if ( v13 && v13[17] )
      {
        (*(void (__fastcall **)(_QWORD *, __int64))(*v13 + 24LL))(v13, a2);
        sub_10005CDDC((__int64)v13);
      }
      v14 = (_QWORD *)v11[1];
      if ( v14 )
      {
        do
        {
          v15 = v14;
          v14 = (_QWORD *)*v14;
        }
        while ( v14 );
      }
      else
      {
        do
        {
          v15 = (_QWORD *)v11[2];
          v16 = *v15 == (_QWORD)v11;
          v11 = v15;
        }
        while ( !v16 );
      }
      v10 = *(_QWORD *)(a1 + 88);
      v11 = v15;
    }
    while ( v15 != (_QWORD *)(v10 + 16) );
  }
  sub_10005DF78(v10 + 8);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_10005E374((_QWORD *)(a1 + 80));
  _exit(a2 != 15);
}
