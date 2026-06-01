void __fastcall sub_509EB0(_QWORD *a1, __int64 a2)
{
  volatile signed __int32 *v3; // rdi
  volatile signed __int32 *v4; // rbp
  volatile signed __int32 *v5; // rdx
  signed __int32 v6; // eax
  std::__future_base::_Result_base *v7; // rbp
  void (__fastcall *v8)(std::__future_base::_Result_base *); // rdx
  void (__fastcall *v9)(std::__future_base::_Result_base *); // rax
  void (__fastcall ***v10)(_QWORD); // rdi
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rdi

  *a1 = &off_2B2D730;
  v3 = (volatile signed __int32 *)a1[12];
  if ( v3 )
  {
    if ( &_pthread_key_create )
    {
      if ( _InterlockedExchangeAdd(v3 + 3, 0xFFFFFFFF) != 1 )
        goto LABEL_4;
    }
    else
    {
      v11 = *((_DWORD *)v3 + 3);
      *((_DWORD *)v3 + 3) = v11 - 1;
      if ( v11 != 1 )
        goto LABEL_4;
    }
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 24LL))(v3);
  }
LABEL_4:
  v4 = (volatile signed __int32 *)a1[7];
  if ( v4 )
  {
    v5 = v4 + 2;
    if ( *((_QWORD *)v4 + 1) == 0x100000001LL )
    {
      v12 = *(_QWORD *)v4;
      v13 = a1[7];
      *((_QWORD *)v4 + 1) = 0;
      (*(void (__fastcall **)(__int64, __int64, volatile signed __int32 *))(v12 + 16))(v13, a2, v5);
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v4 + 24LL))(v4);
    }
    else
    {
      if ( &_pthread_key_create )
      {
        v6 = _InterlockedExchangeAdd(v5, 0xFFFFFFFF);
      }
      else
      {
        v6 = *((_DWORD *)v4 + 2);
        *((_DWORD *)v4 + 2) = v6 - 1;
      }
      if ( v6 == 1 )
        sub_434350(v4);
    }
  }
  v7 = (std::__future_base::_Result_base *)a1[4];
  *a1 = &unk_2BFAEF0;
  if ( v7 )
  {
    v8 = **(void (__fastcall ***)(std::__future_base::_Result_base *))v7;
    if ( v8 == sub_509220 )
    {
      v9 = *(void (__fastcall **)(std::__future_base::_Result_base *))(*(_QWORD *)v7 + 16LL);
      if ( v9 == sub_509090 )
      {
        *(_QWORD *)v7 = &off_2B2D698;
        std::__future_base::_Result_base::~_Result_base(v7);
        operator delete(v7, 0x38u);
      }
      else
      {
        v9(v7);
      }
    }
    else
    {
      v8(v7);
    }
  }
  v10 = (void (__fastcall ***)(_QWORD))a1[1];
  *a1 = &off_2B287B8;
  if ( v10 )
    (**v10)(v10);
  operator delete(a1, 0x68u);
}
