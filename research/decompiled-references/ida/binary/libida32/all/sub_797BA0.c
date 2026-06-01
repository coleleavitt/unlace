__int64 __fastcall sub_797BA0(__int64 a1, unsigned __int32 a2)
{
  __int64 v3; // rdi
  unsigned __int32 v4; // ebx
  unsigned __int32 v5; // ebp
  unsigned __int16 *v6; // rax

  v3 = *(_QWORD *)a1;
  v4 = a2;
  v5 = *(_DWORD *)(v3 + 5880);
  *(_WORD *)(a1 + 45) = 5;
  *(_DWORD *)(a1 + 48) = _byteswap_ulong(a2 + 1);
  sub_723E90(v3, (unsigned __int16 *)(a1 + 45));
  do
  {
    v6 = (unsigned __int16 *)sub_720F10(*(_QWORD *)a1);
    if ( (unsigned __int64)v6 < 2 || *v6 <= 4u )
      break;
    v4 = _byteswap_ulong(*(_DWORD *)((char *)v6 + 3));
    if ( v5 >= v4 )
      return v5;
  }
  while ( *v6 == 10 && *((_BYTE *)v6 + 7) == 68 );
  return v4;
}

