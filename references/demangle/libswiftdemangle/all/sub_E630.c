unsigned __int64 __fastcall sub_E630(__int64 a1, __int16 a2)
{
  int v4; // eax
  __int64 v5; // rdi
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int16 v8; // si
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  _QWORD *v13; // rax
  __int64 v14; // rdx
  unsigned __int64 v15; // rax
  unsigned int v17; // eax

  v4 = *(_DWORD *)(a1 + 96);
  if ( !v4 )
    return sub_CD20((_QWORD *)a1, a2, 0);
  v5 = *(_QWORD *)(a1 + 88);
  v6 = (unsigned int)(v4 - 1);
  v7 = *(_QWORD *)(v5 + 8 * v6);
  v8 = *(_WORD *)(v7 + 16);
  if ( v8 != 262 )
    goto LABEL_12;
  *(_DWORD *)(a1 + 96) = v6;
  if ( !v7 )
  {
    if ( v4 != 1 )
    {
      v17 = v4 - 2;
      v7 = *(_QWORD *)(v5 + 8LL * v17);
      LODWORD(v6) = v17;
      v8 = *(_WORD *)(v7 + 16);
LABEL_12:
      if ( v8 == 221 )
      {
        *(_DWORD *)(a1 + 96) = v6;
        return sub_CD20((_QWORD *)a1, a2, v7);
      }
    }
    return sub_CD20((_QWORD *)a1, a2, 0);
  }
  v9 = (*(_QWORD *)(a1 + 8) + 7LL) & 0xFFFFFFFFFFFFFFF8LL;
  *(_QWORD *)(a1 + 8) = v9;
  if ( !v9 || (v10 = v9 + 24, v9 + 24 > *(_QWORD *)(a1 + 16)) )
  {
    v11 = 2LL * *(_QWORD *)(a1 + 32);
    if ( v11 < 0x20 )
      v11 = 32;
    *(_QWORD *)(a1 + 32) = v11;
    v12 = v11 + 8;
    v13 = malloc(v11 + 8);
    v14 = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(a1 + 24) = v13;
    *v13 = v14;
    v9 = ((unsigned __int64)v13 + 15) & 0xFFFFFFFFFFFFFFF8LL;
    *(_QWORD *)(a1 + 16) = (char *)v13 + v12;
    v10 = v9 + 24;
  }
  *(_QWORD *)(a1 + 8) = v10;
  *(_WORD *)(v9 + 16) = 212;
  *(_BYTE *)(v9 + 18) = 0;
  v15 = sub_CD20((_QWORD *)a1, 221, v9);
  return sub_CD20((_QWORD *)a1, a2, v15);
}
