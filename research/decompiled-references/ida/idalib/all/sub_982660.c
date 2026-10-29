_QWORD *__fastcall sub_982660(_QWORD *a1)
{
  __int64 v1; // rax
  _BYTE v3[2]; // [rsp+6h] [rbp-22h] BYREF
  unsigned __int64 v4; // [rsp+8h] [rbp-20h]

  v4 = __readfsqword(0x28u);
  std::_Sp_locker::_Sp_locker((std::_Sp_locker *)v3, &xmmword_2CCB640);
  *a1 = xmmword_2CCB640;
  v1 = *((_QWORD *)&xmmword_2CCB640 + 1);
  a1[1] = *((_QWORD *)&xmmword_2CCB640 + 1);
  if ( v1 )
  {
    if ( &_pthread_key_create )
      _InterlockedAdd((volatile signed __int32 *)(v1 + 8), 1u);
    else
      ++*(_DWORD *)(v1 + 8);
  }
  std::_Sp_locker::~_Sp_locker((std::_Sp_locker *)v3);
  return a1;
}
