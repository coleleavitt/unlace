__int64 __fastcall sub_15D90(__int64 a1, __int16 a2)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r14
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // r13
  unsigned __int64 v9; // rax
  __int64 v10; // rcx
  __int64 v11; // rdx
  unsigned __int64 v12; // rsi
  __int64 v14; // rcx

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 && (v3 = (unsigned int)(v2 - 1), v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3), *(_WORD *)(v4 + 16) == 221) )
    *(_DWORD *)(a1 + 96) = v3;
  else
    v4 = 0;
  v5 = sub_15540(a1, v4);
  v6 = *(_DWORD *)(a1 + 96);
  if ( v6 )
  {
    v7 = (unsigned int)(v6 - 1);
    v8 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v7);
    v9 = *(unsigned __int16 *)(v8 + 16);
    if ( (unsigned __int16)v9 > 0x80u )
    {
      LOWORD(v9) = v9 - 163;
      if ( (unsigned __int16)v9 > 0x3Bu )
        goto LABEL_8;
      v10 = 0x800000080000087LL;
      if ( !_bittest64(&v10, v9) )
        goto LABEL_8;
LABEL_13:
      *(_DWORD *)(a1 + 96) = v7;
      v11 = sub_132E0(a1);
      if ( v5 )
        goto LABEL_9;
LABEL_14:
      v12 = sub_CEE0((_QWORD *)a1, a2, v11, v8, v4);
      return sub_13F20((_QWORD *)a1, v12, v4);
    }
    if ( (unsigned __int16)v9 > 0x61u )
    {
      v14 = 1074790401;
      if ( _bittest64(&v14, (unsigned int)(v9 - 98)) )
        goto LABEL_13;
    }
  }
LABEL_8:
  v8 = 0;
  v11 = sub_132E0(a1);
  if ( !v5 )
    goto LABEL_14;
LABEL_9:
  v12 = sub_CFE0((_QWORD *)a1, a2, v11, v8, v5, v4);
  return sub_13F20((_QWORD *)a1, v12, v4);
}

