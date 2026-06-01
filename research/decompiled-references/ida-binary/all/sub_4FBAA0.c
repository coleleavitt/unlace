QT::QLabel *__fastcall sub_4FBAA0(__int64 a1, __int64 a2)
{
  QT::QLabel *v2; // r12
  char *v3; // rbx
  char *v4; // rax
  volatile signed __int32 *v5; // rax
  void *v7; // [rsp+0h] [rbp-68h] BYREF
  char *s; // [rsp+8h] [rbp-60h]
  void *ptr[2]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  unsigned __int64 v11; // [rsp+38h] [rbp-30h]

  v11 = __readfsqword(0x28u);
  v2 = (QT::QLabel *)operator new(0x40u);
  *(_OWORD *)ptr = 0;
  v10 = 0;
  sub_498520(v2, (const QT::QString *)ptr, 0);
  if ( !ptr[0] || _InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    if ( *(_BYTE *)(a2 + 16) != 104 )
      goto LABEL_4;
LABEL_17:
    sub_4980D0(v2, (QT::QString *)(a2 + 56), 0);
    return v2;
  }
  free(ptr[0]);
  if ( *(_BYTE *)(a2 + 16) == 104 )
    goto LABEL_17;
LABEL_4:
  QT::QString::toUtf8_helper((QT::QString *)&v7, (const QT::QString *)(a2 + 56));
  v3 = s;
  if ( s )
  {
    if ( *(_BYTE *)(a2 + 16) == 32 )
      goto LABEL_10;
  }
  else
  {
    v3 = (char *)&QT::QByteArray::_empty;
    if ( *(_BYTE *)(a2 + 16) == 32 )
      goto LABEL_10;
  }
  v4 = strrchr(v3, 35);
  if ( v4 )
    v3 = v4 + 1;
  for ( ; *v3 == 32; ++v3 )
    ;
LABEL_10:
  sub_518A60((QT::QString *)ptr);
  sub_498220(v2, (const QT::QString *)ptr, 0);
  if ( ptr[0] && !_InterlockedSub((volatile signed __int32 *)ptr[0], 1u) )
  {
    free(ptr[0]);
    v5 = (volatile signed __int32 *)v7;
    if ( !v7 )
      return v2;
  }
  else
  {
    v5 = (volatile signed __int32 *)v7;
    if ( !v7 )
      return v2;
  }
  if ( !_InterlockedSub(v5, 1u) )
    free(v7);
  return v2;
}
