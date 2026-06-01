/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_1400483A0
// Address: 0x00000001400483A0

//----- (00000001400483A0) ----------------------------------------------------
__int64 __fastcall sub_1400483A0(__int64 a1, __int64 a2, void *a3, _DWORD *a4)
{
  unsigned int v4; // ebx
  int v6; // eax

  v4 = *(_DWORD *)(a2 + 8);
  v6 = sub_140063BD0(a1, a3, v4);
  if ( v6 == v4 )
  {
    if ( qword_1400CB068 && *(_BYTE *)(qword_1400CB068 + 184) )
      sub_140002CE0((struct __crt_locale_pointers *)"Section loaded (%d bytes).\n", v4);
    return 0;
  }
  else
  {
    if ( qword_1400CB068 )
    {
      if ( *(_BYTE *)(qword_1400CB068 + 184) )
        sub_140002CE0((struct __crt_locale_pointers *)"Couldn't read %d bytes of data (read %d).\n", v4, v6);
    }
    *a4 = 10;
    return 1;
  }
}
// 1400CB068: using guessed type __int64 qword_1400CB068;
