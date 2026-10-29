void __fastcall sub_436540(_QWORD *a1)
{
  _QWORD *v1; // rbx
  void (__fastcall *v2)(_QWORD *); // rax
  __int64 v3; // rax
  void *v4; // rdi
  void *v5; // rdi
  void *v6; // rdi
  void *v7; // rdi
  void *v8; // rdi
  void *v9; // rdi
  void *v10; // rdi
  void *v11; // rdi
  void *v12; // rdi
  int v13; // edx
  char v14; // [rsp+7h] [rbp-11h] BYREF
  unsigned __int64 v15; // [rsp+8h] [rbp-10h]

  v15 = __readfsqword(0x28u);
  v1 = (_QWORD *)*a1;
  if ( *a1 )
  {
    v2 = *(void (__fastcall **)(_QWORD *))(*v1 + 8LL);
    if ( v2 == sub_4363A0 )
    {
      *v1 = &off_2B287E8;
      v3 = v1[75];
      if ( (_UNKNOWN *)(v3 - 24) != &std::string::_Rep::_S_empty_rep_storage )
      {
        if ( &_pthread_key_create )
        {
          v13 = _InterlockedExchangeAdd((volatile signed __int32 *)(v3 - 8), 0xFFFFFFFF);
        }
        else
        {
          v13 = *(_DWORD *)(v3 - 8);
          *(_DWORD *)(v3 - 8) = v13 - 1;
        }
        if ( v13 <= 0 )
          std::string::_Rep::_M_destroy(v3 - 24, &v14);
      }
      v4 = (void *)v1[72];
      if ( v4 )
      {
        v1[73] = 0;
        qfree(v4);
      }
      v5 = (void *)v1[68];
      if ( v5 )
        operator delete(v5, v1[70] - (_QWORD)v5);
      v6 = (void *)v1[64];
      if ( v6 )
        operator delete(v6, v1[66] - (_QWORD)v6);
      v7 = (void *)v1[61];
      if ( v7 )
        operator delete(v7, v1[63] - (_QWORD)v7);
      v8 = (void *)v1[58];
      if ( v8 )
        operator delete(v8, v1[60] - (_QWORD)v8);
      v9 = (void *)v1[55];
      if ( v9 )
        operator delete(v9, v1[57] - (_QWORD)v9);
      v10 = (void *)v1[51];
      if ( v10 )
        operator delete(v10, v1[53] - (_QWORD)v10);
      v11 = (void *)v1[48];
      if ( v11 )
        operator delete(v11, v1[50] - (_QWORD)v11);
      v12 = (void *)v1[45];
      if ( v12 )
        operator delete(v12, v1[47] - (_QWORD)v12);
      sub_4360F0((__int64)v1);
      operator delete(v1, 0x260u);
    }
    else
    {
      v2((_QWORD *)*a1);
    }
  }
}
