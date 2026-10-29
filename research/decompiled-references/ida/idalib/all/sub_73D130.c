void *__fastcall sub_73D130(__int64 a1, unsigned __int16 *a2)
{
  char v3; // al
  __int64 v4; // r13
  char v5; // r14
  __int16 *v6; // r12
  __int64 v7; // r8
  unsigned __int64 v8; // rsi
  unsigned int *v10; // r12
  int v11; // r13d
  __int64 v12; // rdx
  unsigned int *v13; // rsi

  v3 = sub_743770(a1, a2, 1);
  v4 = *(_QWORD *)(a1 + 2664);
  v5 = v3;
  v6 = *(__int16 **)(v4 + 8);
  if ( !v6 && *(__int16 *)(a1 + 1634) > 0 )
  {
    v10 = (unsigned int *)(a1 + 1640);
    v11 = 0;
    do
    {
      v12 = *v10;
      v13 = v10;
      ++v11;
      v10 += 8;
      sub_745040(a1, v13, v12);
    }
    while ( v11 < *(__int16 *)(a1 + 1634) );
    v4 = *(_QWORD *)(a1 + 2664);
    v6 = *(__int16 **)(v4 + 8);
  }
  v7 = *(unsigned int *)(v4 + 24);
  if ( (int)v7 > *(__int16 *)(*(_QWORD *)v6 + 4LL) )
  {
    if ( !under_debugger )
      interr(837);
    goto LABEL_18;
  }
  if ( v5 )
  {
    if ( *(_BYTE *)(v4 + 28) )
    {
      sub_7466F0(a1, 2, a2, v6, v7, (char *)a2 + *a2 + 2);
      v8 = (unsigned __int64)v6;
      sub_745D70(a1, v6, *(unsigned int *)(v4 + 24), a2, *(unsigned __int16 *)(v4 + 30));
      goto LABEL_6;
    }
    if ( !under_debugger )
      interr(838);
LABEL_18:
    BUG();
  }
  sub_7465B0(a1 + 48, 1, a2, 0, (char *)a2 + *a2 + 2);
  v8 = (unsigned __int64)v6;
  sub_745C40(a1, v6, *(unsigned int *)(v4 + 24), a2, *(unsigned __int16 *)(v4 + 30));
  *(_BYTE *)(v4 + 28) = 1;
  ++*(_DWORD *)(a1 + 28);
LABEL_6:
  if ( v6[4] < 0 )
    return sub_73CFE0(a1, v8);
  else
    return (void *)sub_73AB60(a1, (__int64)v6);
}
