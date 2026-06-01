__int64 __fastcall sub_C50830(__int64 a1, unsigned __int64 a2, _DWORD *a3, _BYTE *a4)
{
  __int64 result; // rax
  __int64 v7; // rbp
  unsigned int v8; // r15d
  unsigned __int64 v9; // rcx
  int v10; // r14d
  __int64 v11; // rax
  bool v12; // al
  char v13; // al
  _BYTE *v14; // [rsp+0h] [rbp-40h]
  _BYTE *v15; // [rsp+0h] [rbp-40h]

  if ( (*a3 & 0x20000) != 0 )
    return 0;
  v7 = *(_QWORD *)(a1 + 32);
  v8 = *(_DWORD *)(a1 + 272);
  v9 = *(unsigned int *)(v7 + 148);
  v10 = *(_DWORD *)(v7 + 160) + 1;
  v11 = *(unsigned int *)(v7 + 144);
  *(_DWORD *)(v7 + 160) = v10;
  if ( v11 + 1 > v9 )
  {
    v15 = a4;
    sub_2237220(v7 + 136, v7 + 152, v11 + 1, 4);
    v11 = *(unsigned int *)(v7 + 144);
    a4 = v15;
  }
  *(_DWORD *)(*(_QWORD *)(v7 + 136) + 4 * v11) = v10;
  ++*(_DWORD *)(v7 + 144);
  if ( a2 )
  {
    if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 40 > 6
      || (v14 = a4, *(char *)(a2 + 28) >= 0)
      && ((v12 = sub_9B48E0(a2), a4 = v14, !v12) || (v13 = sub_C4FCB0(a1, a2), a4 = v14, v13)) )
    {
      if ( (unsigned __int8)sub_C3FB70((unsigned __int64)a3, a4, a1, v9, (__int64)a4)
        && ((*(_BYTE *)(a2 + 28) & 0x7F) != 0x2E || (unsigned __int8)sub_C50070(a1, a2)) )
      {
        goto LABEL_13;
      }
    }
LABEL_15:
    if ( v8 != -1 )
      sub_C553F0(a1, 0, v8);
    result = 0;
    goto LABEL_18;
  }
  if ( !(unsigned __int8)sub_C3FB70((unsigned __int64)a3, a4, a1, v9, (__int64)a4) )
    goto LABEL_15;
LABEL_13:
  result = sub_C553F0(a1, 1, v8);
LABEL_18:
  --*(_DWORD *)(*(_QWORD *)(a1 + 32) + 144LL);
  return result;
}
