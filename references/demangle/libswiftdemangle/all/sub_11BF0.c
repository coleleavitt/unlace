unsigned __int64 __fastcall sub_11BF0(__int64 a1)
{
  int v1; // edx
  __int64 v2; // rsi
  __int64 v3; // rax
  __int64 v4; // r8
  __int16 v5; // cx
  __int64 v6; // rdx
  __int64 v7; // r9
  unsigned __int64 v8; // rax

  v1 = *(_DWORD *)(a1 + 96);
  if ( !v1 )
  {
    v4 = 0;
    v7 = 0;
    goto LABEL_6;
  }
  v2 = *(_QWORD *)(a1 + 88);
  v3 = (unsigned int)(v1 - 1);
  v4 = *(_QWORD *)(v2 + 8 * v3);
  v5 = *(_WORD *)(v4 + 16);
  if ( v5 == 40 )
  {
    *(_DWORD *)(a1 + 96) = v3;
    if ( v1 != 1 )
    {
      v6 = (unsigned int)(v1 - 2);
      v7 = *(_QWORD *)(v2 + 8 * v6);
      LODWORD(v3) = v6;
      if ( *(_WORD *)(v7 + 16) == 221 )
        goto LABEL_5;
    }
LABEL_8:
    v7 = 0;
    goto LABEL_6;
  }
  v7 = *(_QWORD *)(v2 + 8 * v3);
  v4 = 0;
  if ( v5 != 221 )
    goto LABEL_8;
LABEL_5:
  *(_DWORD *)(a1 + 96) = v3;
LABEL_6:
  v8 = sub_CE00((_QWORD *)a1, 41, v4, v7);
  return sub_CD20((_QWORD *)a1, 221, v8);
}
