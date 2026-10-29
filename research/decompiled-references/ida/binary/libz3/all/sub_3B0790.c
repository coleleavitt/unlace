__int64 __fastcall sub_3B0790(__int64 *a1, __int64 a2)
{
  __int64 v2; // r12
  _QWORD *v3; // rax
  void *v4; // r15
  __int64 v5; // rdi
  int v6; // ebp
  __int64 v7; // rax
  __int64 v8; // rbx
  unsigned int v9; // edx
  __int64 v10; // r13
  __int64 v11; // rdx
  __int64 v12; // r14
  __int64 v13; // rbx
  unsigned __int64 v14; // rax
  unsigned int v15; // ebx
  unsigned __int64 v17; // rax

  v2 = *a1;
  v3 = (_QWORD *)sub_186B270(0x80u);
  v3[1] = 0;
  v4 = v3;
  v5 = *(_QWORD *)(v2 + 600);
  v3[3] = 0;
  v3[5] = 0;
  v3[7] = 0;
  v3[9] = 0;
  v3[11] = 0;
  v3[13] = 0;
  v3[15] = 0;
  v6 = sub_182A670(v5, a2);
  v7 = *(unsigned int *)(v2 + 624);
  v8 = *(_QWORD *)(v2 + 616);
  v9 = v7 - 1;
  v7 *= 16;
  v10 = v8 + v7;
  v11 = 16LL * (v6 & v9);
  v12 = v8 + v11;
  if ( v11 != v7 )
  {
    v13 = v8 + v11;
    do
    {
      v14 = *(_QWORD *)(v13 + 8);
      if ( v14 > 1 )
      {
        if ( v6 == *(_DWORD *)v13 && (unsigned __int8)sub_182A660(*(_QWORD *)(v2 + 608), *(_QWORD *)(v14 + 8), a2) )
        {
LABEL_10:
          v15 = 1;
          goto LABEL_8;
        }
      }
      else if ( !v14 )
      {
        goto LABEL_7;
      }
      v13 += 16;
    }
    while ( v10 != v13 );
    v8 = *(_QWORD *)(v2 + 616);
  }
  for ( ; v12 != v8; v8 += 16 )
  {
    v17 = *(_QWORD *)(v8 + 8);
    if ( v17 > 1 )
    {
      if ( v6 == *(_DWORD *)v8 && (unsigned __int8)sub_182A660(*(_QWORD *)(v2 + 608), *(_QWORD *)(v17 + 8), a2) )
        goto LABEL_10;
    }
    else if ( !v17 )
    {
      break;
    }
  }
LABEL_7:
  v15 = 0;
LABEL_8:
  sub_186B220(v4);
  return v15;
}

