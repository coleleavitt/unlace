void __fastcall sub_5C9720(__int64 a1)
{
  unsigned __int64 v1; // r13
  _BYTE *v2; // rbp
  _BYTE *v4; // rbx
  unsigned int v5; // edi
  __int64 v6; // r15
  unsigned __int64 v7; // r14
  _BYTE *v8; // rbx
  __int64 v9; // rax

  v1 = *(_QWORD *)(a1 + 8);
  if ( v1 > 1 )
  {
    v2 = *(_BYTE **)a1;
    v4 = (_BYTE *)(*(_QWORD *)a1 + v1 - 1);
    if ( *(_QWORD *)a1 < (unsigned __int64)v4 )
    {
      while ( 1 )
      {
        v5 = (char)*(v4 - 1);
        if ( v5 > 0x7F || !isspace(v5) )
          break;
        if ( v2 == --v4 )
          goto LABEL_12;
      }
    }
    v6 = v4 - v2;
    if ( v4 == v2 )
    {
LABEL_12:
      if ( v2 )
      {
        *(_QWORD *)(a1 + 8) = 0;
        qfree(v2);
        *(_QWORD *)a1 = 0;
        *(_QWORD *)(a1 + 16) = 0;
      }
    }
    else
    {
      v7 = v6 + 1;
      if ( v1 < v6 + 1 )
      {
        if ( *(_QWORD *)(a1 + 16) < v7 )
        {
          v9 = qvector_reserve(a1, v2, v6 + 1, 1);
          v1 = *(_QWORD *)(a1 + 8);
          *(_QWORD *)a1 = v9;
          v2 = (_BYTE *)v9;
        }
        memset(&v2[v1], 0, v7 - v1);
        v8 = *(_BYTE **)a1;
        *(_QWORD *)(a1 + 8) = v7;
        v4 = &v8[v6];
      }
      else if ( v1 != v6 + 1 )
      {
        *(_QWORD *)(a1 + 8) = v7;
      }
      *v4 = 0;
    }
  }
}

