void __fastcall sub_4224C0(_QWORD *a1)
{
  __int64 v2; // rax
  void *v3; // rdi
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  int v12; // edx

  *a1 = &off_2AFE828;
  v2 = a1[75];
  if ( (_UNKNOWN *)(v2 - 24) != &std::string::_Rep::_S_empty_rep_storage )
  {
    if ( &_pthread_key_create )
    {
      v12 = _InterlockedExchangeAdd((volatile signed __int32 *)(v2 - 8), 0xFFFFFFFF);
    }
    else
    {
      v12 = *(_DWORD *)(v2 - 8);
      *(_DWORD *)(v2 - 8) = v12 - 1;
    }
    if ( v12 <= 0 )
      std::string::_Rep::_M_destroy();
  }
  v3 = (void *)a1[72];
  if ( v3 )
  {
    a1[73] = 0;
    qfree(v3);
  }
  v4 = (void *)a1[68];
  if ( v4 )
    operator delete(v4, a1[70] - (_QWORD)v4);
  v5 = (void *)a1[64];
  if ( v5 )
    operator delete(v5, a1[66] - (_QWORD)v5);
  v6 = (void *)a1[61];
  if ( v6 )
    operator delete(v6, a1[63] - (_QWORD)v6);
  v7 = (void *)a1[58];
  if ( v7 )
    operator delete(v7, a1[60] - (_QWORD)v7);
  v8 = (void *)a1[55];
  if ( v8 )
    operator delete(v8, a1[57] - (_QWORD)v8);
  v9 = (void *)a1[51];
  if ( v9 )
    operator delete(v9, a1[53] - (_QWORD)v9);
  v10 = (void *)a1[48];
  if ( v10 )
    operator delete(v10, a1[50] - (_QWORD)v10);
  v11 = (void *)a1[45];
  if ( v11 )
    operator delete(v11, a1[47] - (_QWORD)v11);
  sub_422210((__int64)a1);
  operator delete(a1, 0x260u);
}

