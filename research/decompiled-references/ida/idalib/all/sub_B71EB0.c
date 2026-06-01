__int64 __fastcall sub_B71EB0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rbp
  unsigned __int64 v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rbx
  unsigned int v8; // edx
  _QWORD v10[5]; // [rsp+0h] [rbp-28h] BYREF

  v4 = *(unsigned int *)(a1 + 24);
  v5 = *(_QWORD *)(a1 + 56) & 0xFFFFFFFFFFFFFFF8LL;
  if ( (*(_QWORD *)(a1 + 56) & 4) == 0 )
  {
    if ( !v5 )
      goto LABEL_7;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(v5 + 32) )
  {
    v5 = *(_QWORD *)(v5 + 32);
LABEL_3:
    if ( !*(_QWORD *)(a1 + 40) || (unsigned __int8)sub_B70AD0(*(_QWORD *)v5, a2, a3, a4) )
    {
      v6 = *(_QWORD *)v5;
      v10[1] = v5 + 8;
      v10[0] = v6;
      v4 = (unsigned int)sub_F6CE20(v10);
      sub_F6CCB0(v10);
    }
    v7 = *(_QWORD *)(a1 + 56);
    if ( (v7 & 4) == 0 )
      goto LABEL_7;
    v5 = v7 & 0xFFFFFFFFFFFFFFF8LL;
  }
  if ( *(_DWORD *)(v5 + 16) )
  {
    v8 = *(_DWORD *)(**(_QWORD **)(v5 + 24) + 8LL);
    return (v4 << 32) | v8;
  }
LABEL_7:
  v8 = *(_DWORD *)(a1 + 64);
  return (v4 << 32) | v8;
}
