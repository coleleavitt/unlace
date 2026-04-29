__int64 __fastcall sub_1C7E0(__int64 a1)
{
  int v2; // esi
  int v3; // edi
  int v4; // esi
  __int64 i; // r10
  unsigned __int16 *v6; // rcx
  int v7; // r8d
  unsigned int v8; // r9d
  unsigned int v9; // edi
  unsigned int v10; // edx
  unsigned int v11; // eax

  v2 = *(_DWORD *)(a1 + 136);
  v3 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 108LL) + *(_DWORD *)(*(_QWORD *)(a1 + 40) + 104LL);
  v4 = v2 - 1;
  if ( v4 < 0 )
    return 1;
  for ( i = 32LL * (unsigned int)v4; ; i -= 32 )
  {
    v6 = (unsigned __int16 *)(i + *(_QWORD *)(a1 + 128));
    v7 = *((_DWORD *)v6 + 6);
    if ( v7 == -1 )
      goto LABEL_4;
    v8 = v6[1];
    v9 = v3 - v7;
    *((_DWORD *)v6 + 7) = v9;
    if ( (_WORD)v8 )
      break;
LABEL_3:
    v3 = v7;
LABEL_4:
    if ( --v4 == -1 )
      return 1;
  }
  v10 = *((_DWORD *)v6 + 5);
  if ( !v10 || (v11 = v10 * v8, is_mul_ok(v10, v8)) && (v10 *= v8, v9 >= v11) )
  {
    *((_DWORD *)v6 + 7) = v10;
    goto LABEL_3;
  }
  sub_72E0((__int64)"Size of section %x is wrong", *v6);
  return 0;
}
