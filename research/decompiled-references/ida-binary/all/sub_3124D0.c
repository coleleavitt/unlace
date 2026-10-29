__int64 __fastcall sub_3124D0(unsigned int a1, const QT::QObject *a2, double a3)
{
  __int64 v3; // rbx
  __int64 result; // rax
  __int64 v5; // r9
  unsigned int v6; // [rsp+Ch] [rbp-2Ch] BYREF
  const char *v7[5]; // [rsp+10h] [rbp-28h] BYREF

  v7[1] = (const char *)__readfsqword(0x28u);
  v3 = QT::QMetaObject::cast((QT::QMetaObject *)&off_87B020, a2);
  result = 0;
  if ( v3 )
  {
    sub_1E93D0(v3 + 576, v7, &v6);
    return (unsigned __int8)sub_3123B0(v3, (const char *)a1, (__int64)v7[0], v6, 1, v5, a3);
  }
  return result;
}
