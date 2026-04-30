__int64 __fastcall sub_312650(__int64 a1)
{
  __int64 v1; // rdx
  __int64 v2; // rsi
  unsigned int v3; // eax
  int v4; // ecx
  __int64 result; // rax

  v1 = *(_QWORD *)(a1 + 352);
  v2 = *(unsigned int *)(v1 + 164);
  if ( !(_DWORD)v2 )
    return sub_3D8A20(*(unsigned int *)(v1 + 160), v2);
  v3 = sub_47B6A0(QT::QCoreApplication::self, 0);
  v1 = *(_QWORD *)(a1 + 352);
  v4 = *(_DWORD *)(v1 + 164);
  result = v4 & v3;
  v2 = (unsigned int)result;
  if ( v4 == (_DWORD)result )
    return sub_3D8A20(*(unsigned int *)(v1 + 160), v2);
  return result;
}
