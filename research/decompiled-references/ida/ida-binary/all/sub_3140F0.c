unsigned __int64 __fastcall sub_3140F0(__int64 a1, char a2)
{
  unsigned __int64 v2; // rbx
  QT::QWidget *v3; // rdi
  __int64 v4; // rax
  QT::QWidget *v5; // rdi
  volatile signed __int32 *v6; // rax
  void *ptr[2]; // [rsp+0h] [rbp-48h] BYREF
  __int64 v9; // [rsp+10h] [rbp-38h]
  unsigned __int64 v10; // [rsp+18h] [rbp-30h]

  v10 = __readfsqword(0x28u);
  if ( *(_BYTE *)(a1 + 360) == a2 )
    return v10 - __readfsqword(0x28u);
  *(_BYTE *)(a1 + 360) = a2;
  v2 = 0;
  sub_2DDEB0((__int64)ptr, -2147483645);
  if ( v9 <= 0 )
    goto LABEL_12;
  do
  {
    while ( 1 )
    {
      v3 = *((QT::QWidget **)ptr[1] + v2);
      if ( v2 > 8 || !a2 )
        break;
      sub_4D0750(v3);
      if ( ++v2 >= v9 )
        goto LABEL_8;
    }
    sub_4D0760(v3);
    ++v2;
  }
  while ( v2 < v9 );
LABEL_8:
  v4 = *((_QWORD *)qword_8CD748 + 40);
  if ( !v4 )
    goto LABEL_12;
  v5 = (QT::QWidget *)QT::QMetaObject::cast(
                        (QT::QMetaObject *)&off_887F00,
                        *(const QT::QObject **)(*(_QWORD *)(v4 + 8) + 16LL));
  if ( !v5 )
    goto LABEL_12;
  if ( a2 )
  {
    sub_4D0750(v5);
LABEL_12:
    v6 = (volatile signed __int32 *)ptr[0];
    if ( !ptr[0] )
      return v10 - __readfsqword(0x28u);
    goto LABEL_13;
  }
  sub_4D0760(v5);
  v6 = (volatile signed __int32 *)ptr[0];
  if ( !ptr[0] )
    return v10 - __readfsqword(0x28u);
LABEL_13:
  if ( !_InterlockedSub(v6, 1u) )
    free(ptr[0]);
  return v10 - __readfsqword(0x28u);
}
