void __fastcall sub_14EE070(__int64 a1, __int64 a2, __int64 a3, char a4)
{
  unsigned int v4; // eax

  *(_QWORD *)a1 = a2;
  *(_BYTE *)(a1 + 8) = 0;
  if ( a4 )
  {
    v4 = *(_DWORD *)(*(_QWORD *)(a2 + 4616) + 640LL * *(unsigned int *)(a2 + 4624) - 640);
    if ( (v4 == 3 || v4 <= 1) && (*(_BYTE *)(*(_QWORD *)(a2 + 232) + 1LL) & 0x10) != 0 )
    {
      sub_18C74E0(a2, 1, 0, 4);
      *(_BYTE *)(a1 + 8) = 1;
    }
  }
}
