__int64 __fastcall sub_3D420(__int64 a1)
{
  __int64 v1; // rax

  v1 = *(_QWORD *)(a1 + 864);
  if ( *(_BYTE *)(v1 + 1) )
  {
    if ( *(_BYTE *)(v1 + 41) )
      return sub_3D310(a1);
    else
      return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 792) = 1;
    return 0;
  }
}
