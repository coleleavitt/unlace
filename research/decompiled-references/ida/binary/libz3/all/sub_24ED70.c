__int64 __fastcall sub_24ED70(_QWORD *a1, __int64 a2)
{
  _BYTE *v3; // rax
  _BYTE *v5; // rdi
  _BYTE *v6; // rsi
  size_t v7; // rdx
  bool v8; // zf
  _BYTE *v9; // rax
  __int64 v10; // rcx

  v3 = a1 + 188;
  v5 = (_BYTE *)a1[186];
  v6 = *(_BYTE **)a2;
  v7 = *(_QWORD *)(a2 + 8);
  v8 = v5 == v3;
  v9 = (_BYTE *)(a2 + 16);
  if ( v8 )
  {
    if ( v9 != v6 )
    {
      a1[186] = v6;
      v5 = (_BYTE *)(a2 + 16);
      a1[187] = v7;
      a1[188] = *(_QWORD *)(a2 + 16);
      goto LABEL_8;
    }
  }
  else if ( v9 != v6 )
  {
    a1[186] = v6;
    v10 = a1[188];
    a1[187] = v7;
    a1[188] = *(_QWORD *)(a2 + 16);
    if ( v5 )
    {
      *(_QWORD *)a2 = v5;
      *(_QWORD *)(a2 + 16) = v10;
      goto LABEL_5;
    }
    v5 = (_BYTE *)(a2 + 16);
LABEL_8:
    *(_QWORD *)a2 = v5;
    goto LABEL_5;
  }
  if ( (_QWORD *)a2 == a1 + 186 )
  {
    v5 = v6;
  }
  else
  {
    if ( v7 )
    {
      if ( v7 == 1 )
        *v5 = *v6;
      else
        memcpy(v5, v6, v7);
      v7 = *(_QWORD *)(a2 + 8);
      v5 = (_BYTE *)a1[186];
    }
    a1[187] = v7;
    v5[v7] = 0;
    v5 = *(_BYTE **)a2;
  }
LABEL_5:
  *(_QWORD *)(a2 + 8) = 0;
  *v5 = 0;
  return a1[186];
}

