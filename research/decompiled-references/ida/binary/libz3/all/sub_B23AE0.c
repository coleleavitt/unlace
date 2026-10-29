__int64 __fastcall sub_B23AE0(__int64 a1, unsigned int *a2)
{
  __int64 v3; // r9
  unsigned int v4; // r14d
  unsigned int *v5; // rbx
  __int64 v6; // rax
  unsigned int *v7; // r12
  __int64 v8; // rdi
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdx
  _DWORD *v12; // rax
  int v14; // ebx
  unsigned int v15; // eax
  __int64 *v16; // rbx
  __int64 v17; // r12

  v4 = sub_162B070(*(_QWORD *)(*(_QWORD *)(a1 + 64) + 16LL));
  if ( !(_BYTE)v4 )
    return v4;
  v5 = a2 + 8;
  v6 = 2LL * a2[6];
  v7 = &a2[v6 + 8];
  if ( v6 * 4 )
  {
    do
    {
      v5 += 2;
      sub_B6F780(*(_QWORD *)(a1 + 16));
    }
    while ( v7 != v5 );
  }
  v8 = *(_QWORD *)(a1 + 16);
  v9 = *(_QWORD *)(v8 + 8656);
  if ( !v9 || (v10 = *a2, (unsigned int)v10 >= *(_DWORD *)(v9 - 4)) || !*(_QWORD *)(v9 + 8LL * (unsigned int)v10) )
  {
    sub_B68280(v8, a2, 0, 1, 1, v3);
    v8 = *(_QWORD *)(a1 + 16);
    v10 = *a2;
    v11 = *(_QWORD *)(v8 + 8832);
    if ( v11 )
      goto LABEL_8;
LABEL_16:
    v14 = *(_DWORD *)(a1 + 8);
    v15 = sub_B67520(v8, a2);
    sub_8F1CE0(v8, v15, v14);
    v8 = *(_QWORD *)(a1 + 16);
    goto LABEL_10;
  }
  v11 = *(_QWORD *)(v8 + 8832);
  if ( !v11 )
    goto LABEL_16;
LABEL_8:
  if ( (unsigned int)v10 >= *(_DWORD *)(v11 - 4) || *(_DWORD *)(v11 + 4 * v10) == 0x7FFFFFFF )
    goto LABEL_16;
LABEL_10:
  if ( !(unsigned int)sub_8E7030(v8) && !*((_WORD *)a2 + 2) )
  {
    v12 = *(_DWORD **)(*((_QWORD *)a2 + 2) + 24LL);
    if ( v12 )
    {
      if ( *(_DWORD *)(*(_QWORD *)(a1 + 64) + 8LL) == *v12 && !v12[1] )
      {
        v16 = (__int64 *)sub_186B270(0x20u);
        v17 = sub_186B270(0x28u);
        sub_162B3B0(v17, *(_QWORD *)(a1 + 64), a2);
        *v16 = v17;
        v16[1] = 0;
        v16[2] = 0;
        v16[3] = 0;
        sub_B23930(a1, (__int64)v16);
      }
    }
  }
  return v4;
}

