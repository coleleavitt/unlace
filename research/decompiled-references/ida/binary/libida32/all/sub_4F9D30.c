__int64 __fastcall sub_4F9D30(__int64 a1, unsigned int a2, int a3)
{
  __int64 v5; // r13
  __int64 v6; // r14
  char *v7; // rsi
  __int64 v8; // r8
  unsigned __int64 v9; // r15
  int v10; // r14d
  int v11; // r8d
  __int64 result; // rax
  __int64 v13; // rax
  unsigned int v14; // r14d
  __int64 func; // rax
  int func_chunknum; // eax
  unsigned __int64 v17; // r15
  size_t v18; // r9
  __int64 v19; // r8
  size_t v20; // r10
  char *v21; // rsi
  unsigned int *v22; // rax
  __int64 v23; // rax
  __int64 v24; // [rsp+8h] [rbp-90h]
  __int64 v25; // [rsp+8h] [rbp-90h]
  size_t v26; // [rsp+8h] [rbp-90h]
  __int64 v27; // [rsp+10h] [rbp-88h]
  size_t v28; // [rsp+18h] [rbp-80h]
  __int64 v29; // [rsp+20h] [rbp-78h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-70h]
  __int64 v31; // [rsp+30h] [rbp-68h]
  void *src; // [rsp+40h] [rbp-58h] BYREF
  __int128 v33; // [rsp+48h] [rbp-50h]
  unsigned __int64 v34; // [rsp+58h] [rbp-40h]

  v34 = __readfsqword(0x28u);
  v5 = qword_2CA1698;
  if ( *(_QWORD *)(qword_2CA1698 + 1080) )
  {
    sub_3573A0((char **)a1);
    v6 = *(_QWORD *)(a1 + 8);
    if ( v6 )
    {
      v9 = v6 + 1;
      v8 = *(_QWORD *)(a1 + 8);
      v7 = *(char **)a1;
      --v6;
      if ( *(_QWORD *)(a1 + 16) >= v9 )
        goto LABEL_4;
    }
    else
    {
      v7 = *(char **)a1;
      v8 = 1;
      v9 = 2;
      if ( *(_QWORD *)(a1 + 16) >= 2u )
      {
LABEL_4:
        *(_QWORD *)(a1 + 8) = v9;
        v7[v6] = 32;
        *(_BYTE *)(*(_QWORD *)a1 + v8) = 0;
        goto LABEL_5;
      }
    }
    v24 = v8;
    v13 = qvector_reserve(a1, v7, v9, 1);
    v8 = v24;
    *(_QWORD *)a1 = v13;
    v7 = (char *)v13;
    goto LABEL_4;
  }
LABEL_5:
  v29 = 0;
  v30 = 0xFFFFFFFF00000000LL;
  v31 = 0;
  if ( !(unsigned __int8)get_fixup(&v29, a2) )
    goto LABEL_7;
  v10 = BYTE4(v29) & 4;
  if ( (v29 & 0x400000000LL) != 0 )
    goto LABEL_7;
  if ( (v29 & 0x200000000LL) == 0 )
  {
    v11 = HIDWORD(v30);
    if ( HIDWORD(v30) != -1 )
    {
LABEL_8:
      if ( sub_4F9C00(*(_QWORD *)(v5 + 1480), (__int64 *)a1, a2, a3, v11) < 0 )
        return -1;
      else
        return (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
    }
LABEL_7:
    v11 = a3;
    goto LABEL_8;
  }
  if ( (v29 & 0x100000000LL) != 0 )
  {
    v10 = v30;
  }
  else if ( HIDWORD(v30) != -1 )
  {
    v10 = 16 * sel2para(HIDWORD(v30));
  }
  v14 = v31 + v10;
  src = nullptr;
  v33 = 0;
  func = get_func(a2);
  func_chunknum = get_func_chunknum(func, v14);
  if ( sub_4B8DF0(*(__int64 **)(v5 + 1480), &src, v14, ((func_chunknum >= 0) << 6) | 3u, nullptr) <= 0 )
    goto LABEL_17;
  v17 = v33;
  if ( (_QWORD)v33 )
  {
    v18 = v33 - 1;
    if ( (_QWORD)v33 != 1 )
    {
      v19 = *(_QWORD *)(a1 + 8);
      v20 = v33 - 1;
      if ( v19 )
      {
        --v19;
        v20 = v18 + v19;
        v17 = v33 + v19;
      }
      v21 = *(char **)a1;
      if ( *(_QWORD *)(a1 + 16) < v17 )
      {
        v28 = v20;
        v27 = v19;
        v26 = v33 - 1;
        v23 = qvector_reserve(a1, v21, v17, 1);
        v20 = v28;
        v19 = v27;
        *(_QWORD *)a1 = v23;
        v21 = (char *)v23;
        v18 = v26;
      }
      *(_QWORD *)(a1 + 8) = v17;
      v21[v20] = 0;
      memcpy((void *)(v19 + *(_QWORD *)a1), src, v18);
    }
  }
  v22 = sub_4EE820(*(_QWORD *)(v5 + 1480) + 1552LL, v14);
  if ( !v22 )
  {
LABEL_17:
    if ( src )
    {
      *(_QWORD *)&v33 = 0;
      qfree(src);
    }
    goto LABEL_7;
  }
  append_disp(a1, v22[7] - a3, 1);
  result = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
  if ( src )
  {
    v25 = (*(_QWORD *)(a1 + 8) == 0) + *(_QWORD *)(a1 + 8) - 1LL;
    *(_QWORD *)&v33 = 0;
    qfree(src);
    return v25;
  }
  return result;
}

