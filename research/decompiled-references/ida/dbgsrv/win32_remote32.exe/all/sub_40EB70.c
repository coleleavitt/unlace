/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40EB70
// Address: 0x0040EB70

//----- (0040EB70) --------------------------------------------------------
char __stdcall sub_40EB70(int a1)
{
  HANDLE EventA; // eax
  DWORD v2; // eax

  *(_BYTE *)(a1 + 372) = 1;
  if ( sub_43DA80((_DWORD *)a1) )
  {
    EventA = CreateEventA(nullptr, 0, 0, nullptr);
    *(_DWORD *)(a1 + 688) = EventA;
    if ( EventA )
    {
      do
        v2 = WaitForSingleObject(*(HANDLE *)(a1 + 688), 0x64u);
      while ( v2 == 258 );
      if ( !v2 )
      {
        sub_416D80((_DWORD *)a1, (_DWORD *)(a1 + 676));
        if ( (*(int (__stdcall **)(int))(*(_DWORD *)a1 + 56))(a1) == 1 )
          SetEvent(*(HANDLE *)(a1 + 688));
      }
    }
  }
  return 0;
}
