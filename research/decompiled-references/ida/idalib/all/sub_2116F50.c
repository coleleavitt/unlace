_BYTE *__fastcall sub_2116F50(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  void *v6; // rdx
  __int64 v7; // r12
  __int64 v8; // r13
  unsigned __int64 v9; // rdx
  _QWORD *v10; // rdi
  size_t v11; // rax
  __int64 v12; // rax
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rcx
  void *v15; // rdi
  unsigned __int64 v16; // r13
  const void *v17; // rsi
  int v18; // r14d
  _BYTE *result; // rax
  unsigned __int64 v20; // rdx
  const void **v21; // r12
  unsigned __int64 v22; // rdx
  _WORD *v23; // rdi
  const void *v24; // rsi
  size_t v25; // r12
  unsigned int v26; // r14d
  _QWORD *v27; // r13
  __int64 v28; // rsi
  int v29; // eax
  _WORD *v30; // rdi
  unsigned __int64 v31; // r12
  unsigned __int64 v32; // rax
  const void *v33; // rsi
  size_t v34; // rdx
  __int64 v35; // rdi
  unsigned __int64 v36; // r8
  char *v37; // rdi
  __int64 v38; // r13
  unsigned int v39; // edx
  __int64 v40; // rsi
  __int64 v41; // rax
  _WORD *v42; // rdi
  __int64 v43; // r12
  unsigned __int64 v44; // r15
  const void *v45; // rsi
  unsigned __int64 v46; // rax
  __int64 v47; // rax
  __int64 v48; // rax
  __int64 v49; // rdi

  v6 = *(void **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) - (_QWORD)v6 > 9u )
  {
    v7 = a4;
    qmemcpy(v6, "\t.section\t", 10);
    *(_QWORD *)(a4 + 32) += 10LL;
  }
  else
  {
    v7 = sub_227BF10(a4, "\t.section\t", 10);
  }
  v8 = a1 + 172;
  if ( *(_BYTE *)(a1 + 187) )
  {
    v9 = *(_QWORD *)(v7 + 24);
    v10 = *(_QWORD **)(v7 + 32);
    v11 = 16;
    if ( v9 - (unsigned __int64)v10 <= 0xF )
    {
LABEL_5:
      v12 = sub_227BF10(v7, a1 + 172, v11);
      v13 = *(_QWORD *)(v12 + 24);
      v14 = *(_BYTE **)(v12 + 32);
      v7 = v12;
      goto LABEL_6;
    }
    goto LABEL_36;
  }
  v11 = strlen((const char *)(a1 + 172));
  v9 = *(_QWORD *)(v7 + 24);
  v10 = *(_QWORD **)(v7 + 32);
  v13 = v9;
  v14 = v10;
  if ( v11 > v9 - (unsigned __int64)v10 )
    goto LABEL_5;
  if ( v11 )
  {
LABEL_36:
    if ( (unsigned int)v11 >= 8 )
    {
      v36 = (unsigned __int64)(v10 + 1) & 0xFFFFFFFFFFFFFFF8LL;
      *v10 = *(_QWORD *)(a1 + 172);
      *(_QWORD *)((char *)v10 + (unsigned int)v11 - 8) = *(_QWORD *)(v8 + (unsigned int)v11 - 8);
      v37 = (char *)v10 - v36;
      v38 = v8 - (_QWORD)v37;
      if ( (((_DWORD)v11 + (_DWORD)v37) & 0xFFFFFFF8) >= 8 )
      {
        v39 = 0;
        do
        {
          v40 = v39;
          v39 += 8;
          *(_QWORD *)(v36 + v40) = *(_QWORD *)(v38 + v40);
        }
        while ( v39 < (((_DWORD)v11 + (_DWORD)v37) & 0xFFFFFFF8) );
      }
      goto LABEL_40;
    }
    if ( (v11 & 4) != 0 )
    {
      *(_DWORD *)v10 = *(_DWORD *)(a1 + 172);
      *(_DWORD *)((char *)v10 + (unsigned int)v11 - 4) = *(_DWORD *)(v8 + (unsigned int)v11 - 4);
      v10 = *(_QWORD **)(v7 + 32);
      v9 = *(_QWORD *)(v7 + 24);
    }
    else if ( (_DWORD)v11 )
    {
      *(_BYTE *)v10 = *(_BYTE *)(a1 + 172);
      if ( (v11 & 2) == 0 )
      {
LABEL_40:
        v10 = *(_QWORD **)(v7 + 32);
        v9 = *(_QWORD *)(v7 + 24);
        goto LABEL_41;
      }
      *(_WORD *)((char *)v10 + (unsigned int)v11 - 2) = *(_WORD *)(v8 + (unsigned int)v11 - 2);
      v10 = *(_QWORD **)(v7 + 32);
      v9 = *(_QWORD *)(v7 + 24);
    }
LABEL_41:
    v14 = (char *)v10 + v11;
    *(_QWORD *)(v7 + 32) = (char *)v10 + v11;
    if ( (unsigned __int64)v10 + v11 < v9 )
      goto LABEL_7;
    goto LABEL_42;
  }
LABEL_6:
  if ( (unsigned __int64)v14 < v13 )
  {
LABEL_7:
    *(_QWORD *)(v7 + 32) = v14 + 1;
    *v14 = 44;
    goto LABEL_8;
  }
LABEL_42:
  v7 = sub_227BA10(v7, 44);
LABEL_8:
  v15 = *(void **)(v7 + 32);
  v16 = *(_QWORD *)(a1 + 160);
  v17 = *(const void **)(a1 + 152);
  if ( v16 > *(_QWORD *)(v7 + 24) - (_QWORD)v15 )
  {
    sub_227BF10(v7, v17, *(_QWORD *)(a1 + 160));
  }
  else if ( v16 )
  {
    memcpy(v15, v17, *(_QWORD *)(a1 + 160));
    *(_QWORD *)(v7 + 32) += v16;
  }
  v18 = *(_DWORD *)(a1 + 188);
  result = *(_BYTE **)(a4 + 32);
  v20 = *(_QWORD *)(a4 + 24);
  if ( v18 && (v21 = (const void **)(&off_2BE8F40 + 4 * (unsigned __int8)v18), v21[1]) )
  {
    if ( v20 <= (unsigned __int64)result )
    {
      sub_227BA10(a4, 44);
    }
    else
    {
      *(_QWORD *)(a4 + 32) = result + 1;
      *result = 44;
    }
    v22 = *(_QWORD *)(a4 + 24);
    v23 = *(_WORD **)(a4 + 32);
    v24 = *v21;
    v25 = (size_t)v21[1];
    if ( v22 - (unsigned __int64)v23 < v25 )
    {
      sub_227BF10(a4, v24, v25);
      v22 = *(_QWORD *)(a4 + 24);
      v23 = *(_WORD **)(a4 + 32);
    }
    else if ( v25 )
    {
      memcpy(v23, v24, v25);
      v22 = *(_QWORD *)(a4 + 24);
      v23 = (_WORD *)(v25 + *(_QWORD *)(a4 + 32));
      *(_QWORD *)(a4 + 32) = v23;
    }
    v26 = v18 & 0xFFFFFF00;
    v27 = &unk_2BE8D80;
    v28 = 44;
    if ( v26 )
    {
LABEL_19:
      v29 = *(_DWORD *)v27;
      if ( *(_DWORD *)v27 )
      {
        while ( 1 )
        {
          if ( (v26 & v29) == 0 )
          {
            v27 += 5;
            goto LABEL_19;
          }
          v26 &= ~v29;
          if ( v22 <= (unsigned __int64)v23 )
          {
            sub_227BA10(a4, v28);
          }
          else
          {
            *(_QWORD *)(a4 + 32) = (char *)v23 + 1;
            *(_BYTE *)v23 = v28;
          }
          v30 = *(_WORD **)(a4 + 32);
          v31 = v27[2];
          v32 = *(_QWORD *)(a4 + 24) - (_QWORD)v30;
          if ( v31 )
          {
            v33 = (const void *)v27[1];
            v34 = v27[2];
            if ( v31 > v32 )
            {
              sub_227BF10(a4, v33, v34);
              v23 = *(_WORD **)(a4 + 32);
              v22 = *(_QWORD *)(a4 + 24);
            }
            else
            {
              memcpy(v30, v33, v34);
              v22 = *(_QWORD *)(a4 + 24);
              v23 = (_WORD *)(v31 + *(_QWORD *)(a4 + 32));
              *(_QWORD *)(a4 + 32) = v23;
            }
            goto LABEL_26;
          }
          if ( v32 > 1 )
          {
            v43 = a4;
            *v30 = 15420;
            v42 = (_WORD *)(*(_QWORD *)(a4 + 32) + 2LL);
            *(_QWORD *)(a4 + 32) = v42;
          }
          else
          {
            v41 = sub_227BF10(a4, "<<", 2);
            v42 = *(_WORD **)(v41 + 32);
            v43 = v41;
          }
          v44 = v27[4];
          v45 = (const void *)v27[3];
          v46 = *(_QWORD *)(v43 + 24) - (_QWORD)v42;
          if ( v44 > v46 )
          {
            v47 = sub_227BF10(v43, v45, v27[4]);
            v42 = *(_WORD **)(v47 + 32);
            v43 = v47;
            if ( *(_QWORD *)(v47 + 24) - (_QWORD)v42 > 1u )
              goto LABEL_61;
          }
          else
          {
            if ( v44 )
            {
              memcpy(v42, v45, v27[4]);
              v48 = *(_QWORD *)(v43 + 24);
              v42 = (_WORD *)(v44 + *(_QWORD *)(v43 + 32));
              *(_QWORD *)(v43 + 32) = v42;
              v46 = v48 - (_QWORD)v42;
            }
            if ( v46 > 1 )
            {
LABEL_61:
              *v42 = 15934;
              *(_QWORD *)(v43 + 32) += 2LL;
              goto LABEL_50;
            }
          }
          sub_227BF10(v43, ">>", 2);
LABEL_50:
          v23 = *(_WORD **)(a4 + 32);
          v22 = *(_QWORD *)(a4 + 24);
LABEL_26:
          v27 += 5;
          if ( v26 )
          {
            v29 = *(_DWORD *)v27;
            v28 = 43;
            if ( *(_DWORD *)v27 )
              continue;
          }
          break;
        }
      }
      if ( *(_DWORD *)(a1 + 192) )
      {
        if ( (unsigned __int64)v23 >= v22 )
        {
          v35 = sub_227BA10(a4, 44);
        }
        else
        {
          *(_QWORD *)(a4 + 32) = (char *)v23 + 1;
          *(_BYTE *)v23 = 44;
          v35 = a4;
        }
        sub_227B910(v35, *(unsigned int *)(a1 + 192));
        v23 = *(_WORD **)(a4 + 32);
        v22 = *(_QWORD *)(a4 + 24);
      }
      if ( v22 > (unsigned __int64)v23 )
        goto LABEL_33;
    }
    else
    {
      if ( *(_DWORD *)(a1 + 192) )
      {
        if ( v22 - (unsigned __int64)v23 > 5 )
        {
          *(_DWORD *)v23 = 1852796460;
          v23[2] = 11365;
          v49 = a4;
          *(_QWORD *)(a4 + 32) += 6LL;
        }
        else
        {
          v49 = sub_227BF10(a4, ",none,", 6);
        }
        sub_227B910(v49, *(unsigned int *)(a1 + 192));
        v23 = *(_WORD **)(a4 + 32);
        v22 = *(_QWORD *)(a4 + 24);
      }
      if ( (unsigned __int64)v23 < v22 )
      {
LABEL_33:
        *(_QWORD *)(a4 + 32) = (char *)v23 + 1;
        *(_BYTE *)v23 = 10;
        return (char *)v23 + 1;
      }
    }
  }
  else if ( v20 > (unsigned __int64)result )
  {
    *(_QWORD *)(a4 + 32) = result + 1;
    *result = 10;
    return result;
  }
  return (_BYTE *)sub_227BA10(a4, 10);
}
