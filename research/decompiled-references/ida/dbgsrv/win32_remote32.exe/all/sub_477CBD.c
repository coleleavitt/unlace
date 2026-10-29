/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_477CBD
// Address: 0x00477CBD

//----- (00477CBD) --------------------------------------------------------
int __cdecl sub_477CBD(int a1, int a2)
{
  int v2; // edi
  int v3; // edx
  int v4; // esi
  char v5; // al
  char v6; // bl

  v2 = a1 >> 6;
  v3 = 56 * (a1 & 0x3F);
  v4 = (int)*(&dword_4B7B38 + (a1 >> 6));
  v5 = *(_BYTE *)(v4 + v3 + 40);
  v6 = *(_BYTE *)(v4 + v3 + 41);
  switch ( a2 )
  {
    case 0x4000:
      *(_BYTE *)(v4 + v3 + 40) = v5 | 0x80;
      *((_BYTE *)&(*(&dword_4B7B38 + v2))[1].LockSemaphore + v3 + 1) = 0;
      break;
    case 0x8000:
      *(_BYTE *)(v4 + v3 + 40) = v5 & 0x7F;
      break;
    case 0x10000:
    case 0x20000:
      *(_BYTE *)(v4 + v3 + 40) = v5 | 0x80;
      *((_BYTE *)&(*(&dword_4B7B38 + v2))[1].LockSemaphore + v3 + 1) = 2;
      break;
    case 0x40000:
      *(_BYTE *)(v4 + v3 + 40) = v5 | 0x80;
      *((_BYTE *)&(*(&dword_4B7B38 + v2))[1].LockSemaphore + v3 + 1) = 1;
      break;
  }
  if ( (v5 & 0x80) == 0 )
    return 0x8000;
  if ( v6 )
    return v6 != 1 ? 0x10000 : 0x40000;
  return 0x4000;
}
