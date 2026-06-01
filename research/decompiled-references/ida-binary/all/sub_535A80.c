unsigned __int64 __fastcall sub_535A80(__int64 *a1, const char *a2)
{
  void **v2; // rbx
  void **v3; // r12
  void *ptr; // [rsp+0h] [rbp-68h] BYREF
  void **v6; // [rsp+8h] [rbp-60h]
  __int64 v7; // [rsp+10h] [rbp-58h]
  _BYTE v8[24]; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+38h] [rbp-30h]
  unsigned __int64 v10; // [rsp+48h] [rbp-20h]

  v10 = __readfsqword(0x28u);
  QT::QObject::property((QT::QObject *)v8, a2);
  ptr = (void *)(v9 & 0xFFFFFFFFFFFFFFFCLL);
  if ( (unsigned __int8)QT::QMetaType::isValid((QT::QMetaType *)&ptr) )
  {
    QT::QVariant::toStringList((QT::QVariant *)&ptr);
    sub_535860(a1, (__int64)&ptr);
    if ( ptr )
    {
      if ( !_InterlockedSub((volatile signed __int32 *)ptr, 1u) )
      {
        v2 = v6;
        v3 = &v6[3 * v7];
        if ( v6 != v3 )
        {
          do
          {
            if ( *v2 && !_InterlockedSub((volatile signed __int32 *)*v2, 1u) )
              free(*v2);
            v2 += 3;
          }
          while ( v3 != v2 );
        }
        free(ptr);
      }
    }
  }
  QT::QVariant::~QVariant((QT::QVariant *)v8);
  return v10 - __readfsqword(0x28u);
}
