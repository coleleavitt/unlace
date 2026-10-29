__int64 __fastcall sub_316770(__int64 a1)
{
  unsigned int v2; // ebp
  _QWORD *v4; // r13
  __int64 v5; // rdi
  __int64 v6; // r15
  _DWORD *v7; // rax
  __int64 v8; // r13
  __int64 v9; // rsi
  void (__fastcall ***v10)(void *, __int64); // r13
  bool v11; // zf
  int v12; // eax
  _QWORD *v13; // r13
  __int64 v14; // rdi
  _DWORD *v15; // rax
  __int64 v16; // r14
  void (__fastcall ***v17)(_QWORD); // r13
  int v18; // [rsp+8h] [rbp-50h]
  int v19[2]; // [rsp+8h] [rbp-50h]
  int v20; // [rsp+8h] [rbp-50h]
  void *ptr[8]; // [rsp+18h] [rbp-40h] BYREF

  v2 = sub_E60CB0(*(std::ios_base **)(a1 + 24), 0, 0);
  if ( v2 == 1 )
  {
    v4 = *(_QWORD **)(a1 + 24);
    (*(void (__fastcall **)(_QWORD *, __int64))(*v4 + 32LL))(v4, a1 + 40);
    if ( *(_QWORD *)(a1 + 40) )
    {
      v5 = v4[7];
      if ( v5 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v5 + 32LL))(v5, a1 + 40);
    }
    v6 = *(_QWORD *)(a1 + 24);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 192LL))(v6);
    while ( (unsigned __int8)sub_18290A0(*(_QWORD *)(a1 + 8)) && *(_QWORD *)(a1 + 40) )
    {
      (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(a1 + 24) + 64LL))(*(_QWORD *)(a1 + 24), a1 + 48);
      sub_1360B80(*(_QWORD *)(a1 + 40) + 128LL, 1);
      if ( (unsigned int)sub_180B130() )
      {
        if ( (unsigned __int8)sub_186A530() )
        {
          sub_186A4C0();
          v15 = *(_DWORD **)(a1 + 40);
          ptr[0] = v15;
          if ( v15 )
            ++v15[4];
          (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16), ptr);
          v16 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)v19 = sub_180B150();
          std::__ostream_insert<char,std::char_traits<char>>();
          sub_1352510(v19[0]);
          sub_186A500(*(_QWORD *)v19, v16);
          v17 = (void (__fastcall ***)(_QWORD))ptr[0];
          if ( ptr[0] )
          {
            v11 = (*((_DWORD *)ptr[0] + 4))-- == 1;
            if ( v11 )
            {
              (**v17)(v17);
              sub_186B220(v17);
            }
          }
        }
        else
        {
          v7 = *(_DWORD **)(a1 + 40);
          ptr[0] = v7;
          if ( v7 )
            ++v7[4];
          (*(void (__fastcall **)(_QWORD, void **))(**(_QWORD **)(a1 + 16) + 48LL))(*(_QWORD *)(a1 + 16), ptr);
          v8 = *(_QWORD *)(a1 + 8);
          v18 = sub_180B150();
          std::__ostream_insert<char,std::char_traits<char>>();
          v9 = v8;
          sub_1352510(v18);
          v10 = (void (__fastcall ***)(void *, __int64))ptr[0];
          if ( ptr[0] )
          {
            v11 = (*((_DWORD *)ptr[0] + 4))-- == 1;
            if ( v11 )
            {
              (**v10)(v10, v9);
              sub_186B220(v10);
            }
          }
        }
      }
      sub_316280(a1);
      v12 = sub_E60CB0(*(std::ios_base **)(a1 + 24), 0, 0);
      if ( v12 != 1 )
      {
        v20 = v12;
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 200LL))(v6, 1);
        if ( v20 )
        {
          sub_315E80(a1);
          return v2;
        }
        return 0;
      }
      v13 = *(_QWORD **)(a1 + 24);
      (*(void (__fastcall **)(_QWORD *, __int64))(*v13 + 32LL))(v13, a1 + 40);
      if ( *(_QWORD *)(a1 + 40) )
      {
        v14 = v13[7];
        if ( v14 )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14 + 32LL))(v14, a1 + 40);
      }
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 200LL))(v6, 1);
    return 0;
  }
  return v2;
}

