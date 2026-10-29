__int64 __fastcall sub_11897A0(__int64 a1)
{
  unsigned int v1; // ebp
  int v3; // eax

  v1 = 0;
  if ( !a1 || strlen((const char *)a1) != 17 )
    return 0;
  if ( *(_QWORD *)a1 ^ 0x747561727470662DLL | *(_QWORD *)(a1 + 8) ^ 0x6E72757465722D68LL
    || (v3 = 0, *(_BYTE *)(a1 + 16) != 115) )
  {
    v3 = 1;
  }
  LOBYTE(v1) = v3 == 0;
  return v1;
}
