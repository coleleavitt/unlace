void *__fastcall sub_73CFE0(__int64 a1, unsigned __int64 a2)
{
  __int64 v2; // r12
  __int64 v3; // rsi
  void *result; // rax
  __int64 v5; // rbx
  __int64 v6; // rcx
  __int64 v7; // rdx
  unsigned int *v8; // rbx
  __int64 v9; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 2664) + 8LL);
  if ( !v2 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v8 = (unsigned int *)(a1 + 1640);
    do
    {
      v9 = *v8;
      a2 = (unsigned __int64)v8;
      LODWORD(v2) = v2 + 1;
      v8 += 8;
      sub_745040(a1, a2, v9);
    }
    while ( (int)v2 < *(__int16 *)(a1 + 1634) );
    v2 = *(_QWORD *)(*(_QWORD *)(a1 + 2664) + 8LL);
  }
  while ( 1 )
  {
    v5 = sub_744F40(a1, a2);
    if ( *(__int16 *)(v2 + 8) >= 0 )
      break;
    v6 = *(unsigned int *)(v5 + 24);
    v7 = *(_QWORD *)(v5 + 8);
    byte_2CCC5CA = 1;
    sub_744680(a1, v2, v7, v6);
    if ( unk_2CCC5C8 )
      return sub_73CF10(a1, *(_DWORD *)(a1 + 5796), a1 + 4244, *(_DWORD *)(a1 + 5792));
LABEL_6:
    v2 = *(_QWORD *)(v5 + 8);
    a2 = (unsigned int)(__int16)(*(_WORD *)(a1 + 1634) - 1);
    result = (void *)sub_7450E0(a1, a2);
    if ( !(_BYTE)result )
      return result;
  }
  sub_73AB60(a1, v2);
  if ( *(__int16 *)(v2 + 8) <= *(_DWORD *)a1 >> 1 )
    goto LABEL_6;
  v3 = *(_QWORD *)(v5 + 8);
  byte_2CCC5CA = 1;
  if ( v3 )
  {
    sub_740180(a1, v3, v2, *(unsigned int *)(v5 + 24), 0);
    goto LABEL_6;
  }
  return (void *)sub_73A820((int *)a1);
}
