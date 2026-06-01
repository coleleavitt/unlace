unsigned __int64 sub_2DA680()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  int v2; // eax
  int v3; // ebx
  void *ptr[4]; // [rsp+0h] [rbp-68h] BYREF
  _OWORD v6[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v7; // [rsp+48h] [rbp-20h]

  v7 = __readfsqword(0x28u);
  if ( !dword_8CCEB8 )
  {
    strcpy((char *)&v6[1], "gDataProvider");
    v0 = 0;
    v6[0] = _mm_load_si128((const __m128i *)&xmmword_5DCDB0);
    do
      v1 = v0++;
    while ( *((_BYTE *)v6 + v0) );
    if ( v1 != 28
      || *((_QWORD *)&v6[0] + 1) ^ 0x6E697473694C656CLL | *(_QWORD *)&v6[0] ^ 0x6269737365636341LL
      || *(_QWORD *)((char *)&v6[1] + 5) ^ 0x72656469766F7250LL | *(_QWORD *)((char *)v6 + 13) ^ 0x61746144676E6974LL )
    {
      QT::QMetaObject::normalizedType((QT::QMetaObject *)ptr, "AccessibleListingDataProvider");
      v2 = sub_2DA5D0((__int64)ptr);
    }
    else
    {
      QT::QByteArray::QByteArray((QT::QByteArray *)ptr, (const char *)v6, -1);
      v2 = sub_2DA5D0((__int64)ptr);
    }
    v3 = v2;
    if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
    {
      free(ptr[0]);
      dword_8CCEB8 = v3;
    }
    else
    {
      dword_8CCEB8 = v2;
    }
  }
  return v7 - __readfsqword(0x28u);
}
