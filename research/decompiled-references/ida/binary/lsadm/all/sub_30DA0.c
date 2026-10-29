unsigned __int64 __fastcall sub_30DA0(__int64 a1, __int64 a2)
{
  unsigned __int64 v2; // rdx
  size_t v4; // rax
  __int64 v5; // rax
  char v6; // bp
  char *v7; // rsi
  char *v9; // rax
  _BYTE v10[10]; // [rsp+Eh] [rbp-2Ah] BYREF
  unsigned __int64 v11[4]; // [rsp+18h] [rbp-20h] BYREF

  v2 = *(_QWORD *)(a1 + 16);
  v11[0] = __readfsqword(0x28u);
  v4 = sub_28F50(v10, (unsigned __int64)v11, v2) - v10;
  if ( v4 )
    sub_30190((char **)a2, v10, v4);
  v5 = *(_QWORD *)(a2 + 8);
  v6 = *(_BYTE *)(a1 + 24);
  v7 = *(char **)a2;
  if ( *(_QWORD *)(a2 + 16) < (unsigned __int64)(v5 + 1) )
  {
    v9 = (char *)sub_29E60(a2, v7, v5 + 1, 1u);
    *(_QWORD *)a2 = v9;
    v7 = v9;
    v5 = *(_QWORD *)(a2 + 8);
  }
  v7[v5] = v6;
  ++*(_QWORD *)(a2 + 8);
  return v11[0] - __readfsqword(0x28u);
}

