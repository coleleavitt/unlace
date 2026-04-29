__int64 __fastcall sub_B98E0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  unsigned int v6; // eax
  __int64 v7; // r14
  __int64 result; // rax
  int v9; // r14d
  __int64 v10; // [rsp-10h] [rbp-38h]

  if ( !a3 )
  {
    if ( !under_debugger )
      sub_37B760(50967);
LABEL_20:
    BUG();
  }
  if ( *(_DWORD *)(a1 + 420) != -1 )
  {
    if ( !under_debugger )
      sub_37B760(51673);
    goto LABEL_20;
  }
  v4 = sub_B97F0(a1, a2);
  v5 = v4;
  if ( *(_BYTE *)(a3 + 64) || *(_BYTE *)(v4 + 64) == 8 )
  {
    v6 = *(_DWORD *)(a1 + 416);
  }
  else
  {
    v9 = *(_DWORD *)(v4 + 68);
    sub_1166E0(v4 + 64);
    *(_DWORD *)(v5 + 68) = v9;
    v6 = *(_DWORD *)(a1 + 416);
    if ( (v6 & 2) != 0 )
    {
      v6 = v6 & 0xFFFFFFFD ^ 1;
      *(_DWORD *)(a1 + 416) = v6;
    }
  }
  v7 = *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL);
  if ( (v6 & 1) != 0 )
    sub_125030(v5, v7, 6, 0xFFFFFFFFLL, 1);
  sub_11BBD0(v5, *(_QWORD *)(a3 + 24));
  if ( (*(_BYTE *)(a1 + 416) & 2) != 0 )
  {
    sub_11FC20(a3 + 32, v5);
    sub_11A350(a3 + 48, v7, 0, *(unsigned int *)(a3 + 36), -1, 0);
    *(_DWORD *)a3 = 43;
  }
  else
  {
    sub_1171D0(a3, v5);
  }
  sub_1555B0(a3, *(_QWORD *)(*(_QWORD *)(a1 + 320) + 1504LL), a2, 0, 0, 0, 0);
  result = v10;
  if ( v5 )
  {
    sub_1166E0(v5 + 64);
    sub_1166E0(v5 + 48);
    sub_1166E0(v5 + 32);
    return j__qfree(v5);
  }
  return result;
}
