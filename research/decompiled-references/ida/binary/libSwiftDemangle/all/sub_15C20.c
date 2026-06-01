__int64 __fastcall sub_15C20(__int64 a1)
{
  int v1; // eax
  __int64 v2; // rcx
  __int64 v3; // r13
  unsigned __int64 v4; // r12
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // rax
  int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // r13
  unsigned __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rsi
  __int64 v15; // rcx

  v1 = *(_DWORD *)(a1 + 96);
  if ( v1 && (v2 = (unsigned int)(v1 - 1), v3 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v2), *(_WORD *)(v3 + 16) == 40) )
  {
    *(_DWORD *)(a1 + 96) = v2;
    v4 = sub_F7F0(a1, 79, 0);
    v5 = sub_15540(a1, v4);
    if ( v3 )
    {
      v6 = sub_CE00((_QWORD *)a1, 41, v3, v4);
      v4 = sub_CD20((_QWORD *)a1, 221, v6);
    }
  }
  else
  {
    v4 = sub_F7F0(a1, 79, 0);
    v5 = sub_15540(a1, v4);
  }
  v7 = *(_DWORD *)(a1 + 96);
  if ( v7 )
  {
    v8 = (unsigned int)(v7 - 1);
    v9 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v8);
    v10 = *(unsigned __int16 *)(v9 + 16);
    if ( (unsigned __int16)v10 > 0x80u )
    {
      LOWORD(v10) = v10 - 163;
      if ( (unsigned __int16)v10 > 0x3Bu )
        goto LABEL_9;
      v11 = 0x800000080000087LL;
      if ( !_bittest64(&v11, v10) )
        goto LABEL_9;
LABEL_14:
      *(_DWORD *)(a1 + 96) = v8;
      v12 = sub_132E0(a1);
      if ( v5 )
        goto LABEL_10;
LABEL_15:
      v13 = sub_CEE0((_QWORD *)a1, 73, v12, v9, v4);
      return sub_13F20((_QWORD *)a1, v13, v4);
    }
    if ( (unsigned __int16)v10 > 0x61u )
    {
      v15 = 1074790401;
      if ( _bittest64(&v15, (unsigned int)(v10 - 98)) )
        goto LABEL_14;
    }
  }
LABEL_9:
  v9 = 0;
  v12 = sub_132E0(a1);
  if ( !v5 )
    goto LABEL_15;
LABEL_10:
  v13 = sub_CFE0((_QWORD *)a1, 73, v12, v9, v5, v4);
  return sub_13F20((_QWORD *)a1, v13, v4);
}

