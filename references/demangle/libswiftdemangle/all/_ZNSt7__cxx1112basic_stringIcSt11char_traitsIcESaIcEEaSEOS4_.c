__int64 __fastcall std::string::operator=(__int64 a1, _QWORD *a2)
{
  _QWORD *v4; // rsi
  _QWORD *v5; // rax
  _BYTE *v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // rcx
  size_t v10; // rdx

  v4 = a2 + 2;
  v5 = (_QWORD *)*(v4 - 2);
  v6 = *(_BYTE **)a1;
  if ( v4 != v5 )
  {
    v7 = a2[1];
    if ( v6 == (_BYTE *)(a1 + 16) )
    {
      *(_QWORD *)a1 = v5;
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = a2[2];
    }
    else
    {
      *(_QWORD *)a1 = v5;
      v8 = *(_QWORD *)(a1 + 16);
      *(_QWORD *)(a1 + 8) = v7;
      *(_QWORD *)(a1 + 16) = a2[2];
      if ( v6 )
      {
        *a2 = v6;
        a2[2] = v8;
        goto LABEL_5;
      }
    }
    *a2 = v4;
    v6 = v4;
    goto LABEL_5;
  }
  if ( (_QWORD *)a1 == a2 )
  {
    v6 = v4;
  }
  else
  {
    v10 = a2[1];
    if ( v10 )
    {
      if ( v10 == 1 )
        *v6 = *((_BYTE *)a2 + 16);
      else
        memcpy(v6, v4, v10);
      v6 = *(_BYTE **)a1;
      v10 = a2[1];
    }
    *(_QWORD *)(a1 + 8) = v10;
    v6[v10] = 0;
    v6 = (_BYTE *)*a2;
  }
LABEL_5:
  a2[1] = 0;
  *v6 = 0;
  return a1;
}
