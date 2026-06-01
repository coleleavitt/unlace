__int64 __fastcall sub_21574B0(__int64 a1, _QWORD *a2)
{
  char v2; // al
  __int64 v3; // rax
  __int64 v5; // [rsp+0h] [rbp-38h] BYREF
  __int64 v6; // [rsp+8h] [rbp-30h]
  char v7; // [rsp+10h] [rbp-28h]

  (*(void (__fastcall **)(__int64 *))(*a2 + 24LL))(&v5);
  v2 = v7 & 1;
  if ( (v7 & 1) != 0 )
  {
    v3 = v5;
    *(_BYTE *)(a1 + 8) |= 1u;
    v5 = 0;
    *(_QWORD *)a1 = v3;
  }
  else
  {
    if ( (*(_BYTE *)(a2[1] + 114LL) & 8) != 0 )
    {
      switch ( v6 )
      {
        case 1LL:
          v2 = *(_BYTE *)v5 != 47;
          break;
        case 2LL:
          v2 = *(_WORD *)v5 != 12079;
          break;
        case 7LL:
          if ( *(_DWORD *)v5 != 1297699631 || *(_WORD *)(v5 + 4) != 13366 || (v2 = 0, *(_BYTE *)(v5 + 6) != 47) )
            v2 = 1;
          break;
        default:
          v2 = 1;
          break;
      }
    }
    *(_BYTE *)(a1 + 8) &= ~1u;
    *(_BYTE *)a1 = v2;
  }
  sub_111DFC0(&v5);
  return a1;
}
