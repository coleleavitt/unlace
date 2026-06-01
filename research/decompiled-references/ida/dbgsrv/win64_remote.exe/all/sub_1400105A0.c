/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400105A0
// Address: 0x00000001400105A0

//----- (00000001400105A0) ----------------------------------------------------
char __fastcall sub_1400105A0(__int64 a1, double a2)
{
  HANDLE EventA; // rax
  DWORD v4; // eax

  *(_BYTE *)(a1 + 692) = 1;
  if ( sub_140044530((_QWORD *)a1, a2) )
  {
    EventA = CreateEventA(nullptr, 0, 0, nullptr);
    *(_QWORD *)(a1 + 1248) = EventA;
    if ( EventA )
    {
      do
        v4 = WaitForSingleObject(*(HANDLE *)(a1 + 1248), 0x64u);
      while ( v4 == 258 );
      if ( !v4 )
      {
        sub_14001BD70((_QWORD *)a1, a1 + 1224);
        if ( (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a1 + 112LL))(a1) == 1 )
          SetEvent(*(HANDLE *)(a1 + 1248));
      }
    }
  }
  return 0;
}
