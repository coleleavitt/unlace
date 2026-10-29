/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100055EC0
// Address: 0x0000000100055EC0

//----- (0000000100055EC0) ----------------------------------------------------
__int64 __fastcall sub_100055EC0(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  _QWORD *v3; // rdi
  __int64 *v4; // r14
  _QWORD *v6; // r15
  __int64 v7; // r12
  __int64 *v8; // rcx
  __int64 *v9; // rax
  bool v10; // zf
  __int64 v11; // rdi
  _opaque_pthread_t *v12; // rdi
  __int64 v13; // rax
  __int64 *v14; // rdx
  __int64 *v15; // rcx
  __int64 *v16; // rdx

  v2 = a1;
  (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL) + 16LL))(*(_QWORD *)(*(_QWORD *)(a1 + 448)
                                                                                                  + 88LL));
  v3 = *(_QWORD **)(*(_QWORD *)(a1 + 448) + 88LL);
  v4 = (__int64 *)v3[1];
  if ( v4 == v3 + 2 )
  {
LABEL_2:
    LODWORD(v2) = 0;
  }
  else
  {
    while ( 1 )
    {
      v6 = (_QWORD *)v4[4];
      if ( v6 != (_QWORD *)v2 )
      {
        v7 = v6[55];
        if ( *(_BYTE *)(v7 + 732) == 1
          && *(_DWORD *)(v7 + 528) == a2
          && (*(unsigned __int8 (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)v7 + 512LL))(v6[55], a2) )
        {
          break;
        }
      }
      v8 = (__int64 *)v4[1];
      if ( v8 )
      {
        do
        {
          v9 = v8;
          v8 = (__int64 *)*v8;
        }
        while ( v8 );
      }
      else
      {
        do
        {
          v9 = (__int64 *)v4[2];
          v10 = *v9 == (_QWORD)v4;
          v4 = v9;
        }
        while ( !v10 );
      }
      v3 = *(_QWORD **)(*(_QWORD *)(v2 + 448) + 88LL);
      v4 = v9;
      if ( v9 == v3 + 2 )
        goto LABEL_2;
    }
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)(v2 + 440) + 112LL))(*(_QWORD *)(v2 + 440));
    v11 = *(_QWORD *)(v2 + 440);
    if ( v11 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 40LL))(v11);
    *(_QWORD *)(v2 + 440) = v7;
    if ( *(_BYTE *)(v2 + 184) == 1 )
      sub_100000AE0((int)"reusing previously broken debugging session\n");
    v12 = (_opaque_pthread_t *)v4[5];
    if ( v12 )
      qthread_free(v12);
    sub_100069400((__int64)v6);
    v13 = *(_QWORD *)(*(_QWORD *)(v2 + 448) + 88LL);
    v14 = (__int64 *)v4[1];
    if ( v14 )
    {
      do
      {
        v15 = v14;
        v14 = (__int64 *)*v14;
      }
      while ( v14 );
    }
    else
    {
      v16 = v4;
      do
      {
        v15 = (__int64 *)v16[2];
        v10 = *v15 == (_QWORD)v16;
        v16 = v15;
      }
      while ( !v10 );
    }
    if ( *(__int64 **)(v13 + 8) == v4 )
      *(_QWORD *)(v13 + 8) = v15;
    --*(_QWORD *)(v13 + 24);
    sub_10000C9E0(*(__int64 **)(v13 + 16), v4);
    operator delete(v4);
    if ( v6 )
      (*(void (__fastcall **)(_QWORD *))(*v6 + 8LL))(v6);
    *(_BYTE *)(v7 + 732) = 0;
    v3 = *(_QWORD **)(*(_QWORD *)(v2 + 448) + 88LL);
    LOBYTE(v2) = 1;
  }
  (*(void (__fastcall **)(_QWORD *))(*v3 + 24LL))(v3);
  return (unsigned int)v2;
}
