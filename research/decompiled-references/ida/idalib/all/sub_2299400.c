__int64 __fastcall sub_2299400(__int64 a1, __int64 a2)
{
  char **v2; // rbx
  unsigned int v3; // ecx
  __int64 result; // rax

  v2 = (char **)&unk_2B414C8;
  *(_QWORD *)(a1 + 48) = a2;
  do
  {
    while ( 1 )
    {
      v3 = *(_DWORD *)v2;
      result = *(_DWORD *)v2 >> 6;
      if ( ((1LL << *(_DWORD *)v2) & *(_QWORD *)(a2 + 8 * result + 56)) != 0 )
        break;
      v2 += 14;
      if ( v2 == &off_2B44FD8 )
        return result;
    }
    v2 += 14;
    result = sub_2299030(a1, v3);
  }
  while ( v2 != &off_2B44FD8 );
  return result;
}
