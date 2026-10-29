__int64 __fastcall sub_4F3B70(__int64 *a1, void (__fastcall ****a2)(_QWORD))
{
  __int64 v3; // rdi
  __int64 v4; // rax
  void (__fastcall ***v5)(std::__future_base::_Result_base *); // rbp
  void (__fastcall *v6)(std::__future_base::_Result_base *); // rdx
  void (__fastcall *v7)(std::__future_base::_Result_base *); // rax
  std::__future_base::_Result_base *v8; // rdi
  volatile signed __int32 *v9; // rbx
  volatile signed __int32 *v10; // rdx
  signed __int32 v11; // eax
  void (__fastcall ***v13)(_QWORD); // rax
  __int64 v14; // rax
  void (__fastcall ***v15)(_QWORD); // [rsp+0h] [rbp-28h] BYREF
  unsigned __int64 v16; // [rsp+8h] [rbp-20h]

  v16 = __readfsqword(0x28u);
  v3 = *a1;
  if ( v3 )
  {
    v4 = a1[1];
    if ( !v4 || *(_DWORD *)(v4 + 8) != 1 )
    {
      v13 = (void (__fastcall ***)(_QWORD))a1[2];
      a1[2] = 0;
      a2 = &v15;
      v15 = v13;
      sub_4F2010(v3, &v15);
      if ( v15 )
        (**v15)(v15);
    }
  }
  v5 = (void (__fastcall ***)(std::__future_base::_Result_base *))a1[2];
  if ( v5 )
  {
    v6 = **v5;
    if ( v6 == sub_4F1B60 )
    {
      v7 = (*v5)[2];
      if ( v7 == sub_4F19D0 )
      {
        v8 = (std::__future_base::_Result_base *)a1[2];
        *v5 = (void (__fastcall **)(std::__future_base::_Result_base *))&off_2B036D8;
        std::__future_base::_Result_base::~_Result_base(v8);
        a2 = (void (__fastcall ****)(_QWORD))&word_38;
        operator delete(v5, 0x38u);
      }
      else
      {
        v7((std::__future_base::_Result_base *)a1[2]);
      }
    }
    else
    {
      v6((std::__future_base::_Result_base *)a1[2]);
    }
  }
  v9 = (volatile signed __int32 *)a1[1];
  if ( !v9 )
    return v16 - __readfsqword(0x28u);
  v10 = v9 + 2;
  if ( *((_QWORD *)v9 + 1) == 0x100000001LL )
  {
    v14 = *(_QWORD *)v9;
    *((_QWORD *)v9 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, void (__fastcall ****)(_QWORD), volatile signed __int32 *))(v14 + 16))(
      v9,
      a2,
      v10);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v9 + 24LL))(v9);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v11 = _InterlockedExchangeAdd(v10, 0xFFFFFFFF);
    }
    else
    {
      v11 = *((_DWORD *)v9 + 2);
      *((_DWORD *)v9 + 2) = v11 - 1;
    }
    if ( v11 != 1 )
      return v16 - __readfsqword(0x28u);
    return sub_420480(v9);
  }
}

