__int64 __fastcall sub_BFFA0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 v6; // rbx
  unsigned int v7; // eax
  __int64 v8; // r14
  __int64 result; // rax
  int v10; // r14d
  __int64 v11; // [rsp-10h] [rbp-38h]

  if ( !a3 )
  {
    if ( !under_debugger )
      sub_383060(50967);
LABEL_20:
    BUG();
  }
  if ( *(_DWORD *)(a1 + 420) != -1 )
  {
    if ( !under_debugger )
      sub_383060(51673);
    goto LABEL_20;
  }
  v5 = sub_BFEB0(a1, a2, a3, a4);
  v6 = v5;
  if ( *(_BYTE *)(a3 + 64) || *(_BYTE *)(v5 + 64) == 8 )
  {
    v7 = *(_DWORD *)(a1 + 416);
  }
  else
  {
    v10 = *(_DWORD *)(v5 + 68);
    sub_11CDA0(v5 + 64);
    *(_DWORD *)(v6 + 68) = v10;
    v7 = *(_DWORD *)(a1 + 416);
    if ( (v7 & 2) != 0 )
    {
      v7 = v7 & 0xFFFFFFFD ^ 1;
      *(_DWORD *)(a1 + 416) = v7;
    }
  }
  v8 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL);
  if ( (v7 & 1) != 0 )
    sub_12B6F0(v6, v8, 6, 0xFFFFFFFFLL, 1);
  sub_122290(v6, *(_QWORD *)(a3 + 24));
  if ( (*(_BYTE *)(a1 + 416) & 2) != 0 )
  {
    sub_1262E0(a3 + 32, v6);
    sub_120A10(a3 + 48, v8, 0, *(unsigned int *)(a3 + 36), -1, 0);
    *(_DWORD *)a3 = 43;
  }
  else
  {
    sub_11D890(a3, v6);
  }
  sub_15BC70(a3, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), a2, 0, 0, 0, 0);
  result = v11;
  if ( v6 )
  {
    sub_11CDA0(v6 + 64);
    sub_11CDA0(v6 + 48);
    sub_11CDA0(v6 + 32);
    return j__qfree(v6);
  }
  return result;
}
