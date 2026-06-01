/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10005D3F8
// Address: 0x000000010005D3F8

//----- (000000010005D3F8) ----------------------------------------------------
void __fastcall sub_10005D3F8(__int64 a1, __int64 *a2)
{
  _QWORD *v4; // x20
  pthread_t v5; // x0
  __int64 v6; // x0
  char v7; // w0
  __int64 v8; // x2
  __int64 v9; // x3
  __int64 v10; // x4
  __int64 v11; // x5
  __int64 v12; // x6
  __int64 v13; // x7

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v4 = operator new(0x18u);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = qsem_create(nullptr, 0);
    v5 = qthread_create((void *(__cdecl *)(void *))sub_10005CFFC, v4);
    if ( v5 )
    {
      sub_10005D534(a1, a2, &v5->__sig);
      v6 = v4[2];
      if ( v6 )
        qsem_post(v6);
    }
    else
    {
      v7 = qerrstr(-1);
      sub_10004B8FC((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v8, v9, v10, v11, v12, v13, v7);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      *v4 = 0;
      v4[1] = 0;
      qsem_free(v4[2]);
      operator delete(v4);
    }
  }
  else
  {
    sub_10005D534(a1, a2, nullptr);
    sub_10005D048(a1, a2);
  }
}
// 10005D4CC: variable 'v8' is possibly undefined
// 10005D4CC: variable 'v9' is possibly undefined
// 10005D4CC: variable 'v10' is possibly undefined
// 10005D4CC: variable 'v11' is possibly undefined
// 10005D4CC: variable 'v12' is possibly undefined
// 10005D4CC: variable 'v13' is possibly undefined
