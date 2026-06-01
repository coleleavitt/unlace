__int64 __fastcall sub_1370(__int64 a1, _QWORD *a2)
{
  __int64 v3; // r8
  unsigned __int64 v4; // rdx
  __int64 v5; // rdx
  unsigned __int64 v6; // rdx
  unsigned __int8 v8; // si

  v3 = 0;
  for ( *a2 = 0; ; *a2 |= v5 )
  {
    v6 = *(_QWORD *)(a1 + 32);
    if ( v6 < *(_QWORD *)(a1 + 8) && *(_BYTE *)(*(_QWORD *)a1 + v6) == 95 )
    {
      *(_QWORD *)(a1 + 32) = v6 + 1;
      return v3;
    }
    *a2 *= 16LL;
    v4 = *(_QWORD *)(a1 + 32);
    if ( v4 < *(_QWORD *)(a1 + 8) )
    {
      v8 = *(_BYTE *)(*(_QWORD *)a1 + v4);
      if ( v8 )
        break;
    }
    *(_DWORD *)(a1 + 40) = 1;
    if ( (byte_4220[0] & 4) == 0 )
      goto LABEL_13;
    v5 = -48;
LABEL_5:
    ++v3;
  }
  *(_QWORD *)(a1 + 32) = v4 + 1;
  if ( (byte_4220[2 * v8] & 4) != 0 )
  {
    v5 = (char)v8 - 48;
    goto LABEL_5;
  }
  if ( (unsigned __int8)(v8 - 97) <= 5u )
  {
    v5 = (char)v8 - 87;
    goto LABEL_5;
  }
LABEL_13:
  *(_DWORD *)(a1 + 40) = 1;
  return 0;
}

