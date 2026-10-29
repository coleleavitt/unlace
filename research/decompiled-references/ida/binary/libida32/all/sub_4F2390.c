__int64 __fastcall sub_4F2390(__int64 a1, void (__fastcall ****a2)(_QWORD))
{
  __int64 v3; // rdi
  __int64 v4; // rax
  volatile signed __int32 *v5; // rbx
  volatile signed __int32 *v6; // rdx
  signed __int32 v7; // eax
  void (__fastcall ***v9)(_QWORD); // rax
  __int64 v10; // rax
  void (__fastcall ***v11)(_QWORD); // [rsp+0h] [rbp-18h] BYREF
  unsigned __int64 v12; // [rsp+8h] [rbp-10h]

  v12 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = *(_QWORD *)(a1 + 24);
    if ( !v4 || *(_DWORD *)(v4 + 8) != 1 )
    {
      v9 = *(void (__fastcall ****)(_QWORD))(v3 + 32);
      *(_QWORD *)(v3 + 32) = 0;
      a2 = &v11;
      v11 = v9;
      sub_4F2010(v3, &v11);
      if ( v11 )
        (**v11)(v11);
    }
  }
  v5 = *(volatile signed __int32 **)(a1 + 24);
  if ( !v5 )
    return v12 - __readfsqword(0x28u);
  v6 = v5 + 2;
  if ( *((_QWORD *)v5 + 1) == 0x100000001LL )
  {
    v10 = *(_QWORD *)v5;
    *((_QWORD *)v5 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, void (__fastcall ****)(_QWORD), volatile signed __int32 *))(v10 + 16))(
      v5,
      a2,
      v6);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v5 + 24LL))(v5);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v7 = _InterlockedExchangeAdd(v6, 0xFFFFFFFF);
    }
    else
    {
      v7 = *((_DWORD *)v5 + 2);
      *((_DWORD *)v5 + 2) = v7 - 1;
    }
    if ( v7 != 1 )
      return v12 - __readfsqword(0x28u);
    return sub_420480(v5);
  }
}

