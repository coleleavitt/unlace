void __fastcall sub_2123400(__int64 a1, __int64 a2, _BYTE *a3)
{
  size_t *v5; // rbx
  size_t v6; // r13
  unsigned __int8 *v7; // rbx
  void *v8; // rdi
  _BYTE *v9; // rax
  unsigned __int8 *v10; // r13
  _WORD *v11; // rax
  __int64 v12; // rsi
  unsigned __int64 v13; // rcx

  if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
  {
    v5 = *(size_t **)(a1 - 8);
    v6 = *v5;
    v7 = (unsigned __int8 *)(v5 + 3);
    if ( !a3
      || (*(unsigned __int8 (__fastcall **)(_BYTE *, unsigned __int8 *, size_t))(*(_QWORD *)a3 + 48LL))(a3, v7, v6) )
    {
      v8 = *(void **)(a2 + 32);
      if ( v6 <= *(_QWORD *)(a2 + 24) - (_QWORD)v8 )
      {
        if ( v6 )
        {
          memcpy(v8, v7, v6);
          *(_QWORD *)(a2 + 32) += v6;
        }
      }
      else
      {
        sub_227BF10(a2, v7, v6);
      }
      return;
    }
  }
  else
  {
    if ( !a3 || (*(unsigned __int8 (__fastcall **)(_BYTE *, _QWORD, _QWORD))(*(_QWORD *)a3 + 48LL))(a3, 0, 0) )
      return;
    v7 = nullptr;
    v6 = 0;
  }
  if ( !a3[160] )
    sub_2221C70("Symbol name with unsupported characters", 1);
  v9 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v9 >= *(_QWORD *)(a2 + 24) )
  {
    sub_227BA10(a2, 34);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v9 + 1;
    *v9 = 34;
  }
  v10 = &v7[v6];
  v11 = *(_WORD **)(a2 + 32);
  if ( v10 != v7 )
  {
    while ( 1 )
    {
      v12 = *v7;
      v13 = *(_QWORD *)(a2 + 24);
      if ( (_BYTE)v12 != 10 )
        break;
      if ( v13 - (unsigned __int64)v11 > 1 )
      {
        *v11 = 28252;
        v11 = (_WORD *)(*(_QWORD *)(a2 + 32) + 2LL);
        *(_QWORD *)(a2 + 32) = v11;
LABEL_19:
        if ( v10 == ++v7 )
          goto LABEL_23;
      }
      else
      {
        ++v7;
        sub_227BF10(a2, "\\n", 2);
        v11 = *(_WORD **)(a2 + 32);
        if ( v10 == v7 )
          goto LABEL_23;
      }
    }
    if ( (_BYTE)v12 == 34 )
    {
      if ( v13 - (unsigned __int64)v11 > 1 )
      {
        *v11 = 8796;
        v11 = (_WORD *)(*(_QWORD *)(a2 + 32) + 2LL);
        *(_QWORD *)(a2 + 32) = v11;
      }
      else
      {
        sub_227BF10(a2, "\\\"", 2);
        v11 = *(_WORD **)(a2 + 32);
      }
    }
    else if ( (_BYTE)v12 == 92 )
    {
      if ( v13 - (unsigned __int64)v11 > 1 )
      {
        *v11 = 23644;
        v11 = (_WORD *)(*(_QWORD *)(a2 + 32) + 2LL);
        *(_QWORD *)(a2 + 32) = v11;
      }
      else
      {
        sub_227BF10(a2, "\\\\", 2);
        v11 = *(_WORD **)(a2 + 32);
      }
    }
    else
    {
      if ( v13 <= (unsigned __int64)v11 )
      {
        sub_227BA10(a2, v12);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = (char *)v11 + 1;
        *(_BYTE *)v11 = v12;
      }
      v11 = *(_WORD **)(a2 + 32);
    }
    goto LABEL_19;
  }
LABEL_23:
  if ( *(_QWORD *)(a2 + 24) <= (unsigned __int64)v11 )
  {
    sub_227BA10(a2, 34);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = (char *)v11 + 1;
    *(_BYTE *)v11 = 34;
  }
}
