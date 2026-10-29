__int64 __fastcall sub_DA3AE0(__int64 a1)
{
  __int64 v1; // rbp
  unsigned int v2; // ebx
  unsigned int v3; // eax

  v1 = *(_QWORD *)(a1 + 176);
  v2 = *(unsigned __int8 *)sub_DFDA20(v1, 8);
  sub_DFDA50(v1, 8);
  if ( !(_BYTE)v2 )
  {
    v3 = sub_DFC980(*(_QWORD *)(a1 + 400));
    sub_E0FDF0(a1, v3, 2382, 0);
  }
  return v2;
}

