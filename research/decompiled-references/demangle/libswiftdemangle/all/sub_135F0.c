unsigned __int64 __fastcall sub_135F0(__int64 a1)
{
  int v2; // eax
  __int64 v3; // rcx
  __int64 v4; // r15
  unsigned __int64 v5; // r13
  unsigned __int64 v6; // rax
  int v7; // ecx
  __int64 v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rax
  unsigned __int64 v11; // rdx
  __int16 v12; // di
  bool v13; // bl
  __int64 v14; // rbp
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // r13
  __int64 v19; // r8
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rax
  unsigned __int64 v23; // rcx

  v2 = *(_DWORD *)(a1 + 96);
  if ( v2 && (v3 = (unsigned int)(v2 - 1), v4 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v3), *(_WORD *)(v4 + 16) == 40) )
  {
    *(_DWORD *)(a1 + 96) = v3;
    v5 = sub_12FF0(a1);
    v6 = sub_13360(a1);
    v7 = *(_DWORD *)(a1 + 96);
    v8 = v6;
    if ( !v7 )
    {
LABEL_17:
      if ( v4 )
      {
        v13 = 1;
        v14 = 0;
        v11 = 0;
        goto LABEL_8;
      }
      goto LABEL_29;
    }
  }
  else
  {
    v5 = sub_12FF0(a1);
    v21 = sub_13360(a1);
    v7 = *(_DWORD *)(a1 + 96);
    v8 = v21;
    if ( !v7 )
    {
LABEL_29:
      v19 = v5;
      v20 = v8;
      v11 = 0;
      return sub_CEE0((_QWORD *)a1, 171, v11, v20, v19);
    }
    v4 = 0;
  }
  v9 = *(_QWORD *)(a1 + 88);
  v10 = (unsigned int)(v7 - 1);
  v11 = *(_QWORD *)(v9 + 8 * v10);
  v12 = *(_WORD *)(v11 + 16);
  if ( v12 != 221 )
    goto LABEL_21;
  *(_DWORD *)(a1 + 96) = v10;
  if ( !v11 )
  {
    if ( v7 != 1 )
    {
      v10 = (unsigned int)(v7 - 2);
      v11 = *(_QWORD *)(v9 + 8 * v10);
      v12 = *(_WORD *)(v11 + 16);
LABEL_21:
      if ( v12 == 98 )
      {
        *(_DWORD *)(a1 + 96) = v10;
        v13 = v11 == 0;
        if ( !(_DWORD)v10 )
          goto LABEL_28;
      }
      else
      {
        LODWORD(v10) = *(_DWORD *)(a1 + 96);
        v13 = 1;
        v11 = 0;
      }
      v22 = (unsigned int)(v10 - 1);
      v23 = *(_QWORD *)(v9 + 8 * v22);
      if ( *(_WORD *)(v23 + 16) == 221 )
      {
        *(_DWORD *)(a1 + 96) = v22;
        v14 = v11;
        v11 = v23;
        goto LABEL_25;
      }
LABEL_28:
      v14 = v11;
      v11 = 0;
LABEL_25:
      if ( !v4 )
        goto LABEL_9;
      goto LABEL_8;
    }
    goto LABEL_17;
  }
  if ( !v4 )
  {
    v19 = v5;
    v20 = v8;
    return sub_CEE0((_QWORD *)a1, 171, v11, v20, v19);
  }
  v13 = 1;
  v14 = 0;
LABEL_8:
  v15 = sub_CE00((_QWORD *)a1, 41, v4, v11);
  v11 = sub_CD20((_QWORD *)a1, 221, v15);
LABEL_9:
  v16 = sub_CEE0((_QWORD *)a1, 171, v11, v8, v5);
  v17 = v16;
  if ( v16 )
  {
    if ( !v13 )
      sub_C080(v16, v14, (_QWORD *)a1);
  }
  return v17;
}
