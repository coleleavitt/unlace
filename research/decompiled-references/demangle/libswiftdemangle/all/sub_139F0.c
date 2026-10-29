unsigned __int64 __fastcall sub_139F0(__int64 a1)
{
  unsigned __int64 v2; // r8
  int v3; // eax
  __int64 v4; // rdi
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int16 v7; // si
  __int64 v8; // rsi
  __int64 v9; // r9
  unsigned int v11; // eax
  unsigned __int64 v12; // r12
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // [rsp+8h] [rbp-20h]

  v2 = sub_ED30(a1);
  v3 = *(_DWORD *)(a1 + 96);
  if ( !v3 )
    goto LABEL_13;
  v4 = *(_QWORD *)(a1 + 88);
  v5 = (unsigned int)(v3 - 1);
  v6 = *(_QWORD *)(v4 + 8 * v5);
  v7 = *(_WORD *)(v6 + 16);
  if ( v7 == 172 )
  {
    *(_DWORD *)(a1 + 96) = v5;
    if ( v6 )
      goto LABEL_4;
    if ( v3 == 1 )
    {
LABEL_13:
      v15 = v2;
      v12 = sub_12FF0(a1);
      v13 = sub_13360(a1);
      v14 = sub_CE00((_QWORD *)a1, 174, v13, v12);
      LODWORD(v5) = *(_DWORD *)(a1 + 96);
      v2 = v15;
      v6 = v14;
      goto LABEL_4;
    }
    v11 = v3 - 2;
    v6 = *(_QWORD *)(v4 + 8LL * v11);
    LODWORD(v5) = v11;
    v7 = *(_WORD *)(v6 + 16);
  }
  if ( v7 != 173 )
    goto LABEL_13;
  *(_DWORD *)(a1 + 96) = v5;
  if ( !v6 )
    goto LABEL_13;
LABEL_4:
  if ( (_DWORD)v5
    && (v8 = (unsigned int)(v5 - 1), v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8), *(_WORD *)(v9 + 16) == 221) )
  {
    *(_DWORD *)(a1 + 96) = v8;
  }
  else
  {
    v9 = 0;
  }
  return sub_CEE0((_QWORD *)a1, 24, v9, v6, v2);
}
