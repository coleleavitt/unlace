__int64 __fastcall sub_5469B0(__int64 a1, _QWORD *a2, _QWORD *a3)
{
  unsigned int v3; // edi

  v3 = 0;
  if ( *a2 >= *a3 && *a3 >= *a2 )
    LOBYTE(v3) = a2[1] == a3[1];
  return v3;
}
