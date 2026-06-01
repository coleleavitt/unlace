__int64 __fastcall sub_1067A0(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax

  v2 = sub_105590(a1, a2, 0);
  if ( v2 > 3 )
    return v2;
  v4 = sub_19D0F0(*(_QWORD *)(a2 + 72));
  if ( !v4 )
    return v2;
  sub_19C000(v4, 1, "Metadata History");
  return v2;
}

