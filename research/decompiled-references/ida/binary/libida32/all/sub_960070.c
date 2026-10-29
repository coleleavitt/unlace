__int64 __fastcall sub_960070(std::thread *a1)
{
  unsigned int v1; // eax
  __int64 v2; // rbp
  __int64 v3; // rbx
  __int64 v4; // rbp
  __int64 v5; // rax
  volatile signed __int32 *v6; // rbx
  volatile signed __int32 *v7; // rdx
  signed __int32 v8; // eax
  volatile signed __int32 *v10; // rdi
  signed __int32 v11; // eax
  __int64 v12; // rax
  _BYTE v13[2]; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v14; // [rsp+8h] [rbp-20h]

  v14 = __readfsqword(0x28u);
  v1 = std::thread::hardware_concurrency(a1);
  v2 = v1 >> 1;
  if ( v1 <= 1 )
    v2 = 1;
  v3 = operator new(0x148u);
  sub_95E9C0(v3, v2, (char)a1, 250);
  v4 = operator new(0x18u);
  *(_QWORD *)(v4 + 16) = v3;
  *(_QWORD *)(v4 + 8) = 0x100000001LL;
  *(_QWORD *)v4 = off_2B161D0;
  if ( v3 )
  {
    v5 = *(_QWORD *)(v3 + 16);
    if ( !v5 || !*(_DWORD *)(v5 + 8) )
    {
      *(_QWORD *)(v3 + 8) = v3;
      if ( v4 )
      {
        if ( &_pthread_key_create )
          _InterlockedAdd((volatile signed __int32 *)(v4 + 12), 1u);
        else
          ++*(_DWORD *)(v4 + 12);
      }
      v10 = *(volatile signed __int32 **)(v3 + 16);
      if ( v10 )
      {
        if ( &_pthread_key_create )
        {
          v11 = _InterlockedExchangeAdd(v10 + 3, 0xFFFFFFFF);
        }
        else
        {
          v11 = *((_DWORD *)v10 + 3);
          *((_DWORD *)v10 + 3) = v11 - 1;
        }
        if ( v11 == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v10 + 24LL))(v10);
      }
      *(_QWORD *)(v3 + 16) = v4;
    }
  }
  sub_95FEB0(v3);
  std::_Sp_locker::_Sp_locker((std::_Sp_locker *)v13, &xmmword_2CA1740);
  *(_QWORD *)&xmmword_2CA1740 = v3;
  v6 = *((volatile signed __int32 **)&xmmword_2CA1740 + 1);
  *((_QWORD *)&xmmword_2CA1740 + 1) = v4;
  std::_Sp_locker::~_Sp_locker((std::_Sp_locker *)v13);
  if ( !v6 )
    return v14 - __readfsqword(0x28u);
  v7 = v6 + 2;
  if ( *((_QWORD *)v6 + 1) == 0x100000001LL )
  {
    v12 = *(_QWORD *)v6;
    *((_QWORD *)v6 + 1) = 0;
    (*(void (__fastcall **)(volatile signed __int32 *, __int128 *, volatile signed __int32 *))(v12 + 16))(
      v6,
      &xmmword_2CA1740,
      v7);
    return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v6 + 24LL))(v6);
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v8 = _InterlockedExchangeAdd(v7, 0xFFFFFFFF);
    }
    else
    {
      v8 = *((_DWORD *)v6 + 2);
      *((_DWORD *)v6 + 2) = v8 - 1;
    }
    if ( v8 != 1 )
      return v14 - __readfsqword(0x28u);
    return sub_420480(v6);
  }
}

