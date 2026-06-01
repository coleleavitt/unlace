__int64 sub_9828C0()
{
  __int128 v0; // kr00_16
  volatile signed __int32 *v1; // rdx
  signed __int32 v2; // eax
  __int64 v4; // rax
  _BYTE v5[2]; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v6; // [rsp+8h] [rbp-20h]

  v6 = __readfsqword(0x28u);
  std::_Sp_locker::_Sp_locker((std::_Sp_locker *)v5, &xmmword_2CCB640);
  v0 = xmmword_2CCB640;
  xmmword_2CCB640 = 0;
  std::_Sp_locker::~_Sp_locker((std::_Sp_locker *)v5);
  if ( (_QWORD)v0 )
    *(_BYTE *)(v0 + 24) = 1;
  if ( !*((_QWORD *)&v0 + 1) )
    return v6 - __readfsqword(0x28u);
  v1 = (volatile signed __int32 *)(*((_QWORD *)&v0 + 1) + 8LL);
  if ( *(_QWORD *)(*((_QWORD *)&v0 + 1) + 8LL) == 0x100000001LL )
  {
    v4 = **((_QWORD **)&v0 + 1);
    *(_QWORD *)(*((_QWORD *)&v0 + 1) + 8LL) = 0;
    (*(void (__fastcall **)(_QWORD, __int128 *, volatile signed __int32 *))(v4 + 16))(
      *((_QWORD *)&v0 + 1),
      &xmmword_2CCB640,
      v1);
    return (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)&v0 + 1) + 24LL))(*((_QWORD *)&v0 + 1));
  }
  else
  {
    if ( &_pthread_key_create )
    {
      v2 = _InterlockedExchangeAdd(v1, 0xFFFFFFFF);
    }
    else
    {
      v2 = *(_DWORD *)(*((_QWORD *)&v0 + 1) + 8LL);
      *(_DWORD *)(*((_QWORD *)&v0 + 1) + 8LL) = v2 - 1;
    }
    if ( v2 != 1 )
      return v6 - __readfsqword(0x28u);
    return sub_434350(*((volatile signed __int32 **)&v0 + 1));
  }
}
