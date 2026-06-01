__int64 __fastcall sub_106A30(__int64 a1, __int64 a2)
{
  unsigned int v2; // ebx
  __int64 v4; // rax

  v2 = sub_105830(a1, a2, 0);
  if ( v2 > 3 )
    return v2;
  v4 = sub_19DCF0(*(_QWORD *)(a2 + 72));
  if ( !v4 )
    return v2;
  sub_19CC00(v4, 1, "Metadata History");
  return v2;
}

