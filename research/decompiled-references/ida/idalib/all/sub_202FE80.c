__int64 __fastcall sub_202FE80(char *a1, __int64 a2, __int64 a3)
{
  int v3; // r15d
  int v5; // r13d
  char v6; // bl
  int v7; // eax
  _BYTE *v8; // rdx
  unsigned __int64 v9; // rcx
  __int64 result; // rax
  int v11; // r13d
  unsigned int v12; // ebx
  int v13; // r14d
  unsigned __int8 v14; // r15
  int v15; // eax
  unsigned __int8 *v16; // rdx
  unsigned __int64 v17; // rsi
  __int64 v18; // rcx
  __int64 v19; // rsi
  _BYTE *v20; // rcx
  unsigned __int8 v21; // cl
  unsigned __int8 *v22; // rdx
  __int64 v23; // rsi
  _BYTE *v24; // rcx
  __int64 v25; // rsi
  _BYTE *v26; // rdx
  __int64 v27; // rsi

  if ( !a2 )
    return sub_995540(a3, "<empty name> ");
  v3 = a2;
  v5 = (unsigned __int8)*a1;
  v6 = *a1;
  v7 = isalpha(v5);
  v8 = *(_BYTE **)(a3 + 32);
  v9 = *(_QWORD *)(a3 + 24);
  if ( v7 )
  {
    if ( (unsigned __int64)v8 < v9 )
    {
LABEL_4:
      result = (__int64)(v8 + 1);
      *(_QWORD *)(a3 + 32) = v8 + 1;
      *v8 = v6;
      goto LABEL_5;
    }
    goto LABEL_32;
  }
  if ( (unsigned __int8)(v5 - 36) <= 0x3Bu )
  {
    v27 = 0x800000000000601LL;
    if ( _bittest64(&v27, (unsigned int)(v5 - 36)) )
    {
      if ( (unsigned __int64)v8 < v9 )
        goto LABEL_4;
LABEL_32:
      result = sub_227BA10(a3, (unsigned int)v5);
      goto LABEL_5;
    }
  }
  if ( (unsigned __int64)v8 >= v9 )
  {
    result = sub_227BA10(a3, 92);
  }
  else
  {
    *(_QWORD *)(a3 + 32) = v8 + 1;
    result = a3;
    *v8 = 92;
  }
  v19 = (unsigned __int8)a0123456789abcd_3[v5 >> 4];
  v20 = *(_BYTE **)(result + 32);
  if ( (unsigned __int64)v20 >= *(_QWORD *)(result + 24) )
  {
    result = sub_227BA10(result, v19);
  }
  else
  {
    *(_QWORD *)(result + 32) = v20 + 1;
    *v20 = v19;
  }
  v21 = a0123456789abcd_3[v6 & 0xF];
  v22 = *(unsigned __int8 **)(result + 32);
  if ( (unsigned __int64)v22 >= *(_QWORD *)(result + 24) )
  {
    result = sub_227BA10(result, v21);
  }
  else
  {
    *(_QWORD *)(result + 32) = v22 + 1;
    *v22 = v21;
  }
LABEL_5:
  v11 = v3;
  v12 = 1;
  if ( v3 != 1 )
  {
    while ( 1 )
    {
      v13 = (unsigned __int8)a1[v12];
      v14 = a1[v12];
      v15 = isalnum(v13);
      v16 = *(unsigned __int8 **)(a3 + 32);
      v17 = *(_QWORD *)(a3 + 24);
      if ( !v15 )
      {
        if ( (unsigned __int8)(v13 - 36) > 0x3Bu )
          break;
        v18 = 0x800000000000601LL;
        if ( !_bittest64(&v18, (unsigned int)(v13 - 36)) )
          break;
      }
      if ( (unsigned __int64)v16 < v17 )
      {
        result = (__int64)(v16 + 1);
        *(_QWORD *)(a3 + 32) = v16 + 1;
        *v16 = v14;
LABEL_8:
        if ( v11 == ++v12 )
          return result;
      }
      else
      {
        ++v12;
        result = sub_227BA10(a3, (unsigned int)v13);
        if ( v11 == v12 )
          return result;
      }
    }
    if ( (unsigned __int64)v16 >= v17 )
    {
      result = sub_227BA10(a3, 92);
    }
    else
    {
      *(_QWORD *)(a3 + 32) = v16 + 1;
      result = a3;
      *v16 = 92;
    }
    v23 = (unsigned __int8)a0123456789abcd_3[v13 >> 4];
    v24 = *(_BYTE **)(result + 32);
    if ( (unsigned __int64)v24 >= *(_QWORD *)(result + 24) )
    {
      result = sub_227BA10(result, v23);
    }
    else
    {
      *(_QWORD *)(result + 32) = v24 + 1;
      *v24 = v23;
    }
    v25 = (unsigned __int8)a0123456789abcd_3[v14 & 0xF];
    v26 = *(_BYTE **)(result + 32);
    if ( (unsigned __int64)v26 >= *(_QWORD *)(result + 24) )
    {
      result = sub_227BA10(result, v25);
    }
    else
    {
      *(_QWORD *)(result + 32) = v26 + 1;
      *v26 = v25;
    }
    goto LABEL_8;
  }
  return result;
}
