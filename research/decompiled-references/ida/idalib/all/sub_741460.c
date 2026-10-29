void __fastcall sub_741460(__int64 a1)
{
  bool v1; // zf
  _DWORD **v2; // rax

  if ( *(_BYTE *)(a1 + 5804) )
  {
    v1 = *(_QWORD *)(a1 + 8) == 0;
    *(_BYTE *)(a1 + 5804) = 0;
    if ( !v1 && *(_DWORD *)(a1 + 24) && *(__int16 *)(a1 + 1634) > 0 )
    {
      v2 = *(_DWORD ***)(*(_QWORD *)(a1 + 2664) + 8LL);
      if ( v2 )
      {
        if ( **v2 )
          JUMPOUT(0x741350);
        JUMPOUT(0x741360);
      }
      JUMPOUT(0x7413E8);
    }
    JUMPOUT(0x741380);
  }
  JUMPOUT(0x741398);
}
