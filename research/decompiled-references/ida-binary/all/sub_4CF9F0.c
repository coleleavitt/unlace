unsigned __int64 __fastcall sub_4CF9F0(__int64 a1, __int64 a2)
{
  const QT::QObject *v2; // rbp
  _QWORD *v3; // rbx
  __int64 v4; // r12
  __int64 (__fastcall *v5)(__int64, __m128i *); // r15
  char v6; // bp
  int v7; // eax
  __m128i ptr; // [rsp+0h] [rbp-58h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-40h]

  v10 = __readfsqword(0x28u);
  v2 = *(const QT::QObject **)(*(_QWORD *)(a1 + 8) + 16LL);
  if ( v2 )
  {
    while ( 1 )
    {
      v3 = (_QWORD *)QT::QMetaObject::cast((QT::QMetaObject *)&off_898320, v2);
      if ( v3 )
        break;
      v2 = *(const QT::QObject **)(*((_QWORD *)v2 + 1) + 16LL);
      if ( !v2 )
        return v10 - __readfsqword(0x28u);
    }
    v4 = *(_QWORD *)(a2 + 56);
    v5 = *(__int64 (__fastcall **)(__int64, __m128i *))(*(_QWORD *)v4 + 96LL);
    sub_4C7620(&ptr);
    v6 = v5(v4, &ptr);
    if ( ptr.m128i_i64[0] && !_InterlockedSub((volatile signed __int32 *)ptr.m128i_i64[0], 1u) )
    {
      free((void *)ptr.m128i_i64[0]);
      if ( v6 )
        goto LABEL_8;
    }
    else if ( v6 )
    {
LABEL_8:
      v7 = *(_DWORD *)(a2 + 48);
      *(_BYTE *)(a2 + 12) = 1;
      *(_DWORD *)(a2 + 44) = v7;
      return sub_4C6180(v3, a1);
    }
  }
  return v10 - __readfsqword(0x28u);
}
