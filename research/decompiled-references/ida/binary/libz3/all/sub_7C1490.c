void __fastcall sub_7C1490(__int64 a1, __m128i a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // r12
  __int64 v5; // r12
  __int64 v6; // rbp
  unsigned int *v7; // rsi
  __int64 v8; // rax
  __int64 v9; // r12
  __int64 v10; // r12
  __int64 v11; // rbp
  unsigned int *v12; // rsi

  v2 = *(_QWORD *)(a1 + 960);
  if ( v2 && *(_DWORD *)(v2 - 4) )
  {
    sub_7B5BA0((_QWORD *)a1);
    v3 = *(_QWORD *)(a1 + 744);
    *(_BYTE *)(a1 + 954) = 0;
    if ( v3 && (v4 = *(unsigned int *)(v3 - 4), (_DWORD)v4) )
    {
      v5 = 8 * v4;
      v6 = 0;
      while ( 1 )
      {
        v7 = *(unsigned int **)(v3 + v6);
        v6 += 8;
        sub_7C11B0((_QWORD *)a1, v7, a2);
        if ( v5 == v6 )
          break;
        v3 = *(_QWORD *)(a1 + 744);
      }
      v8 = *(_QWORD *)(a1 + 752);
      if ( !v8 )
      {
LABEL_13:
        if ( *(_BYTE *)(a1 + 954) )
        {
          sub_7B7C50(a1, (__int64 *)(a1 + 744), 0);
          sub_7B7C50(a1, (__int64 *)(a1 + 752), 1);
          *(_BYTE *)(a1 + 954) = 0;
        }
        return;
      }
    }
    else
    {
      v8 = *(_QWORD *)(a1 + 752);
      if ( !v8 )
        return;
    }
    v9 = *(unsigned int *)(v8 - 4);
    if ( (_DWORD)v9 )
    {
      v10 = 8 * v9;
      v11 = 0;
      while ( 1 )
      {
        v12 = *(unsigned int **)(v8 + v11);
        v11 += 8;
        sub_7C11B0((_QWORD *)a1, v12, a2);
        if ( v10 == v11 )
          break;
        v8 = *(_QWORD *)(a1 + 752);
      }
    }
    goto LABEL_13;
  }
}

