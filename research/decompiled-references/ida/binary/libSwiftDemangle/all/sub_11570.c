unsigned __int64 __fastcall sub_11570(__int64 a1, char a2)
{
  int v2; // ecx
  __int64 v3; // r9
  __int64 v4; // rax
  __int64 v5; // rdx
  __int16 v6; // r8
  unsigned int v8; // ecx
  __int64 v9; // r9

  v2 = *(_DWORD *)(a1 + 96);
  if ( !v2 )
    return sub_CD20((_QWORD *)a1, 322, 0);
  v3 = *(_QWORD *)(a1 + 88);
  v4 = (unsigned int)(v2 - 1);
  v5 = *(_QWORD *)(v3 + 8 * v4);
  v6 = *(_WORD *)(v5 + 16);
  if ( v6 != 221 )
  {
    if ( a2 == 71 )
    {
      v9 = *(_QWORD *)(v3 + 8 * v4);
      v5 = 0;
      goto LABEL_9;
    }
    return sub_CD20((_QWORD *)a1, 322, 0);
  }
  *(_DWORD *)(a1 + 96) = v4;
  if ( a2 != 71 || v2 == 1 )
    return sub_CD20((_QWORD *)a1, 322, v5);
  v8 = v2 - 2;
  v9 = *(_QWORD *)(v3 + 8LL * v8);
  LODWORD(v4) = v8;
  v6 = *(_WORD *)(v9 + 16);
LABEL_9:
  if ( v6 != 40 )
    return sub_CD20((_QWORD *)a1, 322, v5);
  *(_DWORD *)(a1 + 96) = v4;
  if ( !v9 )
    return sub_CD20((_QWORD *)a1, 322, v5);
  return sub_CE00((_QWORD *)a1, 322, v9, v5);
}

