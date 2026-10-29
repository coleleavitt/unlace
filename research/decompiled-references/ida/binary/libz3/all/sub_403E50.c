__int64 __fastcall sub_403E50(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbx
  _QWORD *v6; // r14
  __int64 v7; // rsi
  __int64 v8; // rdi
  bool v9; // zf
  unsigned int v10; // edx
  unsigned int v11; // eax
  char v12; // dl
  char v13; // al
  __int64 result; // rax
  __int64 *v15; // r12
  _QWORD *v16; // rbx
  __int64 v17; // rax
  _QWORD *v18; // r13
  __int64 v19; // rsi
  __int64 v20; // rdi

  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a2 + 24) != v4 )
    sub_3D8450(v4, (__int64 *)(a1 + 24), 0, 0);
  v5 = *(_QWORD **)(a1 + 48);
  if ( v5 )
  {
    v6 = &v5[*((unsigned int *)v5 - 1)];
    if ( v5 >= v6 )
      goto LABEL_11;
    do
    {
      while ( 1 )
      {
        v7 = *v5;
        if ( *v5 )
        {
          v8 = *(_QWORD *)(a1 + 40);
          v9 = (*(_DWORD *)(v7 + 8))-- == 1;
          if ( v9 )
            break;
        }
        if ( ++v5 >= v6 )
          goto LABEL_10;
      }
      sub_15D7BC0(v8, v7);
      ++v5;
    }
    while ( v5 < v6 );
LABEL_10:
    v5 = *(_QWORD **)(a1 + 48);
    if ( v5 )
LABEL_11:
      *((_DWORD *)v5 - 1) = 0;
  }
  sub_3EE030(a1 + 40, a2 + 40);
  v10 = *(unsigned __int16 *)(a1 + 76);
  *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72);
  v11 = *(unsigned __int16 *)(a2 + 76);
  if ( v11 < v10 )
    LOWORD(v11) = v10;
  v12 = *(_BYTE *)(a2 + 78);
  *(_WORD *)(a1 + 76) = v11;
  v13 = v12 & 1 | *(_BYTE *)(a1 + 78) & 0xFE;
  *(_BYTE *)(a1 + 78) = v13;
  *(_BYTE *)(a1 + 78) = *(_BYTE *)(a2 + 78) & 2 | v13 & 0xFD;
  result = *(unsigned int *)(a2 + 80);
  v15 = *(__int64 **)(a1 + 88);
  *(_DWORD *)(a1 + 80) = result;
  if ( v15 )
  {
    sub_2B4F40(v15 + 6);
    sub_3FCDF0(v15[4], v15[5]);
    v16 = (_QWORD *)v15[2];
    if ( v16 )
    {
      v17 = *((unsigned int *)v16 - 1);
      if ( (_DWORD)v17 )
      {
        v18 = &v16[7 * v17];
        do
        {
          while ( 1 )
          {
            sub_2B4F40(v16 + 5);
            v19 = v16[2];
            if ( v19 )
            {
              v20 = v16[3];
              v9 = (*(_DWORD *)(v19 + 8))-- == 1;
              if ( v9 )
                break;
            }
            v16 += 7;
            if ( v18 == v16 )
              goto LABEL_22;
          }
          sub_15D7BC0(v20, v19);
          v16 += 7;
        }
        while ( v18 != v16 );
LABEL_22:
        v16 = (_QWORD *)v15[2];
      }
      sub_186B220(v16 - 1);
    }
    result = sub_186B220(v15);
    *(_QWORD *)(a1 + 88) = 0;
  }
  return result;
}

