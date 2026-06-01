__int64 __fastcall sub_22A98A0(__int64 a1, __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rbx
  __int64 v4; // r13

  v2 = a1 + 8;
  v3 = *(_QWORD *)(a1 + 16);
  if ( v3 )
  {
    v4 = a1 + 8;
    do
    {
      while ( !sub_2234B00(v3 + 32, a2) )
      {
        v4 = v3;
        v3 = *(_QWORD *)(v3 + 16);
        if ( !v3 )
          goto LABEL_6;
      }
      v3 = *(_QWORD *)(v3 + 24);
    }
    while ( v3 );
LABEL_6:
    if ( v4 != v2 && !sub_2234B00(a2, v4 + 32) )
      return v4;
  }
  return v2;
}
