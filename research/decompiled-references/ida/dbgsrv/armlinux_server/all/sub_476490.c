/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_476490
// Address: 0x0000000000476490

//----- (0000000000476490) ----------------------------------------------------
void __fastcall __noreturn sub_476490(__int64 a1, unsigned int a2)
{
  _QWORD *v4; // x20
  __int64 v5; // x0
  __int64 v6; // x19
  _QWORD *v7; // x21
  pthread_t v8; // x0
  _QWORD *v9; // x20
  __int64 v10; // x0
  _QWORD *v11; // x1
  _QWORD *v12; // x20

  sub_47B4D0("got signal #%d, terminating\n", a2);
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 16LL))(*(_QWORD *)(a1 + 88));
  v4 = *(_QWORD **)(a1 + 88);
  v5 = (__int64)(v4 + 1);
  v6 = v4[4];
  v7 = v4 + 2;
  if ( (_QWORD *)v6 != v4 + 2 )
  {
    do
    {
      v9 = *(_QWORD **)(v6 + 32);
      v8 = *(_QWORD *)(v6 + 40);
      if ( v8 )
        j__pthread_detach(v8);
      if ( v9 )
      {
        if ( v9[17] )
        {
          (*(void (__fastcall **)(_QWORD *, _QWORD))(*v9 + 24LL))(v9, a2);
          sub_4759C8((__int64)v9);
        }
      }
      v10 = sub_49F6E8(v6);
      v4 = *(_QWORD **)(a1 + 88);
      v6 = v10;
      v5 = (__int64)(v4 + 1);
      v7 = v4 + 2;
    }
    while ( v4 + 2 != (_QWORD *)v6 );
  }
  v11 = (_QWORD *)v4[3];
  v12 = v4 + 2;
  sub_476268(v5, v11);
  v12[1] = 0;
  v12[2] = v7;
  v12[3] = v7;
  v12[4] = 0;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 24LL))(*(_QWORD *)(a1 + 88));
  sub_4770D8((_QWORD *)(a1 + 80));
  _exit(a2 != 15);
}
