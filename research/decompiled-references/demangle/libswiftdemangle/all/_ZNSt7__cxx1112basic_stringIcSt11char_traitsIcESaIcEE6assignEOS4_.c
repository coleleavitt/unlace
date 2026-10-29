__int64 __fastcall std::string::assign(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v10; // rdx

  v4 = (_BYTE *)(a2 + 16);
  v5 = *(_BYTE **)a2;
  v6 = *(_BYTE **)a1;
  if ( v5 != v4 )
  {
    v7 = *(_QWORD *)(a2 + 8);
    if ( v6 == (_BYTE *)(a1 + 16) )
    {
      *(_QWORD *)a1 = v5;
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
    }
    else
    {
      *(_QWORD *)a1 = v5;
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      if ( v6 )
      {
        *(_QWORD *)a2 = v6;
        *(_QWORD *)(a2 + 16) = v8;
        goto LABEL_5;
      }
    }
    *(_QWORD *)a2 = v4;
    v6 = v4;
    goto LABEL_5;
  }
  if ( a2 == a1 )
  {
    v6 = v5;
  }
  else
  {
    v10 = *(_QWORD *)(a2 + 8);
    if ( v10 )
    {
      if ( v10 == 1 )
        *v6 = *(_BYTE *)(a2 + 16);
      else
        memcpy(v6, v5, v10);
      v10 = *(_QWORD *)(a2 + 8);
      v6 = *(_BYTE **)a1;
    }
    *(_QWORD *)(a1 + 8) = v10;
    v6[v10] = 0;
    v6 = *(_BYTE **)a2;
  }
LABEL_5:
  *(_QWORD *)(a2 + 8) = 0;
  *v6 = 0;
  return a1;
}
