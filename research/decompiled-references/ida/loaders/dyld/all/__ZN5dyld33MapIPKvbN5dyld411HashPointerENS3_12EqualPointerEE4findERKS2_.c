__int64 __fastcall dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::find(_QWORD *a1, _QWORD *a2)
{
  unsigned __int64 v2; // x10
  unsigned __int64 v3; // x12
  __int64 v4; // x14
  unsigned __int64 v5; // x8
  _QWORD *v6; // x8

  v2 = a1[4];
  v3 = (v2 - 1) & *a2;
  if ( v2 <= v3 )
LABEL_7:
    dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::find();
  v4 = 1;
  while ( 1 )
  {
    v5 = *(_QWORD *)(a1[2] + 8 * v3);
    if ( v5 == -1 )
      return a1[7] + 16LL * a1[9];
    if ( a1[9] <= v5 )
      dyld3::Map<void const*,bool,dyld4::HashPointer,dyld4::EqualPointer>::find();
    v6 = (_QWORD *)(a1[7] + 16 * v5);
    if ( *v6 == *a2 )
      return (__int64)v6;
    v3 = (v3 + v4++) & (v2 - 1);
    if ( v2 <= v3 )
      goto LABEL_7;
  }
}
