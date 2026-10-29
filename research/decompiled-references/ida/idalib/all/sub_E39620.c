_BYTE *__fastcall sub_E39620(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r12
  __int64 v6; // rdi
  _BYTE *v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // rdi
  __int64 v10; // rdi
  _BYTE *v11; // rax
  __int64 v12; // rdi
  __int64 v13; // rsi
  __int64 v14; // rdi
  _BYTE *result; // rax
  _BYTE *v16; // rax
  _BYTE *v17; // rax
  _BYTE *v18; // rax

  v3 = a2;
  v6 = *(_QWORD *)(a1 + 8);
  v7 = *(_BYTE **)(v6 + 32);
  v8 = *(_QWORD *)(v6 + 24);
  if ( a3 )
  {
    if ( (unsigned __int64)v7 >= v8 )
    {
      sub_227BA10(v6, 118);
      v9 = *(_QWORD *)(a1 + 8);
      if ( a2 >= 0 )
        goto LABEL_4;
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v7 + 1;
      *v7 = 118;
      v9 = *(_QWORD *)(a1 + 8);
      if ( a2 >= 0 )
      {
LABEL_4:
        sub_227B930(v9, v3);
        v10 = *(_QWORD *)(a1 + 8);
        v11 = *(_BYTE **)(v10 + 32);
        if ( (unsigned __int64)v11 >= *(_QWORD *)(v10 + 24) )
        {
          sub_227BA10(v10, 95);
        }
        else
        {
          *(_QWORD *)(v10 + 32) = v11 + 1;
          *v11 = 95;
        }
        v12 = *(_QWORD *)(a1 + 8);
        if ( a3 < 0 )
        {
          v17 = *(_BYTE **)(v12 + 32);
          if ( (unsigned __int64)v17 >= *(_QWORD *)(v12 + 24) )
          {
            sub_227BA10(v12, 110);
          }
          else
          {
            *(_QWORD *)(v12 + 32) = v17 + 1;
            *v17 = 110;
          }
          a3 = -a3;
          v12 = *(_QWORD *)(a1 + 8);
        }
        v13 = a3;
        goto LABEL_8;
      }
    }
    v16 = *(_BYTE **)(v9 + 32);
    if ( (unsigned __int64)v16 >= *(_QWORD *)(v9 + 24) )
    {
      sub_227BA10(v9, 110);
    }
    else
    {
      *(_QWORD *)(v9 + 32) = v16 + 1;
      *v16 = 110;
    }
    v3 = -a2;
    v9 = *(_QWORD *)(a1 + 8);
    goto LABEL_4;
  }
  if ( (unsigned __int64)v7 >= v8 )
  {
    sub_227BA10(v6, 104);
  }
  else
  {
    *(_QWORD *)(v6 + 32) = v7 + 1;
    *v7 = 104;
  }
  v12 = *(_QWORD *)(a1 + 8);
  if ( a2 < 0 )
  {
    v18 = *(_BYTE **)(v12 + 32);
    if ( (unsigned __int64)v18 >= *(_QWORD *)(v12 + 24) )
    {
      sub_227BA10(v12, 110);
    }
    else
    {
      *(_QWORD *)(v12 + 32) = v18 + 1;
      *v18 = 110;
    }
    v3 = -a2;
    v12 = *(_QWORD *)(a1 + 8);
  }
  v13 = v3;
LABEL_8:
  sub_227B930(v12, v13);
  v14 = *(_QWORD *)(a1 + 8);
  result = *(_BYTE **)(v14 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v14 + 24) )
    return (_BYTE *)sub_227BA10(v14, 95);
  *(_QWORD *)(v14 + 32) = result + 1;
  *result = 95;
  return result;
}
