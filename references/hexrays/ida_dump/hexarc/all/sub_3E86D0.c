__int64 __fastcall sub_3E86D0(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  unsigned int v6; // ebx
  __int64 v8; // rax

  if ( !(unsigned __int8)sub_152D50(a2 + 32, a3, 0) )
    return 0;
  v6 = sub_152D50(a2 + 48, a4, 0);
  if ( !(_BYTE)v6 )
    return 0;
  v8 = *(_QWORD *)(a1 + 352);
  if ( *a3 == v8 )
    goto LABEL_8;
  if ( (unsigned __int8)is_spec_ea(*a4) )
    return 0;
  v8 = *(_QWORD *)(a1 + 352);
LABEL_8:
  if ( *a4 != v8 )
    return (unsigned int)is_spec_ea(*a3) ^ 1;
  return v6;
}
