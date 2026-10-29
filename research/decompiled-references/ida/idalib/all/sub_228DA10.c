__int64 __fastcall sub_228DA10(__int64 a1, __int64 a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rsi
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  size_t v9; // rdx

  v4 = (_BYTE *)(a2 + 24);
  v5 = *(_BYTE **)(a2 + 8);
  v6 = *(_BYTE **)(a1 + 8);
  if ( v5 != v4 )
  {
    if ( v6 == (_BYTE *)(a1 + 24) )
    {
      *(_QWORD *)(a1 + 8) = v5;
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
    }
    else
    {
      *(_QWORD *)(a1 + 8) = v5;
      v7 = *(_QWORD *)(a1 + 24);
      *(_QWORD *)(a1 + 16) = *(_QWORD *)(a2 + 16);
      *(_QWORD *)(a1 + 24) = *(_QWORD *)(a2 + 24);
      if ( v6 )
      {
        *(_QWORD *)(a2 + 8) = v6;
        *(_QWORD *)(a2 + 24) = v7;
        goto LABEL_5;
      }
    }
    *(_QWORD *)(a2 + 8) = v4;
    v6 = v4;
    goto LABEL_5;
  }
  v9 = *(_QWORD *)(a2 + 16);
  if ( v9 )
  {
    if ( v9 == 1 )
      *v6 = *(_BYTE *)(a2 + 24);
    else
      memcpy(v6, v5, v9);
    v9 = *(_QWORD *)(a2 + 16);
    v6 = *(_BYTE **)(a1 + 8);
  }
  *(_QWORD *)(a1 + 16) = v9;
  v6[v9] = 0;
  v6 = *(_BYTE **)(a2 + 8);
LABEL_5:
  *(_QWORD *)(a2 + 16) = 0;
  *v6 = 0;
  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a2 + 40);
  *(_BYTE *)a2 = 1;
  *(_DWORD *)(a2 + 40) = -1;
  return a1;
}
