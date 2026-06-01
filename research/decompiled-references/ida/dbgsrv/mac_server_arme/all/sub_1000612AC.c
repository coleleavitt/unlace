/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1000612AC
// Address: 0x00000001000612AC

//----- (00000001000612AC) ----------------------------------------------------
void __fastcall sub_1000612AC(__int64 a1, __int64 *a2)
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
  __int64 _38; // [xsp+38h] [xbp+8h]

  if ( (*(unsigned int (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 88) + 32LL))(*(_QWORD *)(a1 + 88)) )
  {
    v4 = operator new(0x18u);
    *v4 = a1;
    v4[1] = a2;
    v4[2] = qsem_create(nullptr, 0);
    v5 = qthread_create((void *(__cdecl *)(void *))sub_100060E10, v4);
    if ( v5 )
    {
      sub_100061454(a1, a2, &v5->__sig);
      v6 = v4[2];
      if ( v6 )
      {
        if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
          __break(0xC471u);
        qsem_post(v6);
      }
    }
    else
    {
      v7 = qerrstr(-1);
      sub_10004E2F8((__int64)a2, "Failed to create thread: %s; cannot handle session\n", v8, v9, v10, v11, v12, v13, v7);
      if ( a2 )
        (*(void (__fastcall **)(__int64 *))(*a2 + 8))(a2);
      *v4 = 0;
      v4[1] = 0;
      qsem_free(v4[2]);
      if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      operator delete(v4);
    }
  }
  else
  {
    sub_100061454(a1, a2, nullptr);
    if ( ((_38 ^ (2 * _38)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    sub_100060E60(a1, a2);
  }
}
// 100061360: variable '_38' is possibly undefined
// 1000613C4: variable 'v8' is possibly undefined
// 1000613C4: variable 'v9' is possibly undefined
// 1000613C4: variable 'v10' is possibly undefined
// 1000613C4: variable 'v11' is possibly undefined
// 1000613C4: variable 'v12' is possibly undefined
// 1000613C4: variable 'v13' is possibly undefined
