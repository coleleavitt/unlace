__int64 __fastcall sub_BFDFD0(__int64 a1, double a2)
{
  __int64 v2; // rax
  unsigned int v3; // ebp
  unsigned int v4; // ebx
  unsigned int v5; // ebx
  int v6; // r12d

  v2 = *(_QWORD *)(a1 + 16);
  v3 = *(_DWORD *)(a1 + 240);
  v4 = 214013 * *(_DWORD *)(v2 + 7504) + 2531011;
  *(_DWORD *)(v2 + 7504) = v4;
  v5 = HIWORD(v4) & 0x7FFF;
  if ( v3 )
  {
    v6 = v5 + v3;
    while ( !(unsigned __int8)sub_BFDDE0(
                                a1,
                                *(_QWORD *)(a1 + 256)
                              + 48LL * *(unsigned int *)(*(_QWORD *)(a1 + 272) + 4LL * (v5 % v3)),
                                a2) )
    {
      if ( ++v5 == v6 )
      {
        v2 = *(_QWORD *)(a1 + 16);
        goto LABEL_7;
      }
    }
    return 1;
  }
LABEL_7:
  if ( *(_QWORD *)(v2 + 8984) != qword_1C7EDB0 )
    return 1;
  return *(unsigned __int8 *)(v2 + 2416);
}

