__int64 __fastcall sub_4CC2D0(__int64 *a1, __int64 a2, unsigned int a3, unsigned int a4, int a5, char a6)
{
  __int64 v9; // rax
  char v11; // dl
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rsi
  bool v15; // zf
  __int64 v16; // rdx
  __int64 v17; // rbx
  unsigned __int64 v19; // rbx
  size_t v20; // r13
  __int64 v21; // rbp
  size_t v22; // r14
  char *v23; // rsi
  __int64 v24; // rax
  void *src; // [rsp+0h] [rbp-458h] BYREF
  __int128 v26; // [rsp+8h] [rbp-450h]
  _BYTE v27[1032]; // [rsp+20h] [rbp-438h] BYREF
  unsigned __int64 v28; // [rsp+428h] [rbp-30h]

  v9 = *a1;
  v28 = __readfsqword(0x28u);
  if ( a6 )
  {
    if ( !*(_QWORD *)(v9 + 1296) )
      return -1;
    v11 = getinf_flag(2, 2);
    v9 = *a1;
    if ( v11 )
    {
      v12 = *(_QWORD *)(v9 + 1296);
      *((_BYTE *)a1 + 64) = 1;
      if ( v12 )
        goto LABEL_15;
    }
  }
  if ( (*(_BYTE *)(v9 + 904) & 1) != 0 )
LABEL_15:
    sub_3573A0((char **)a2);
  v13 = *((_DWORD *)a1 + 10);
  v14 = *((unsigned int *)a1 + 6);
  v15 = (*(_BYTE *)(a1[2] + 13) & 0x20) == 0;
  v16 = *((unsigned int *)a1 + 7);
  v26 = 0;
  if ( !v15 )
    a5 |= 2u;
  src = nullptr;
  if ( get_name_expr(&src, v14, v16, a3, a4, (unsigned int)(a5 + v13)) > 0 )
  {
    v19 = v26;
    if ( (_QWORD)v26 )
    {
      v20 = v26 - 1;
      if ( (_QWORD)v26 != 1 )
      {
        v21 = *(_QWORD *)(a2 + 8);
        v22 = v26 - 1;
        if ( v21 )
        {
          --v21;
          v22 = v20 + v21;
          v19 = v26 + v21;
        }
        v23 = *(char **)a2;
        if ( *(_QWORD *)(a2 + 16) < v19 )
        {
          v24 = qvector_reserve(a2, v23, v19, 1);
          *(_QWORD *)a2 = v24;
          v23 = (char *)v24;
        }
        *(_QWORD *)(a2 + 8) = v19;
        v23[v22] = 0;
        memcpy((void *)(v21 + *(_QWORD *)a2), src, v20);
      }
    }
    v17 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
  }
  else if ( *((_BYTE *)a1 + 36) )
  {
    btoa32(v27, 1024, a4, 0);
    sub_3573A0((char **)a2);
    v17 = (*(_QWORD *)(a2 + 8) == 0) + *(_QWORD *)(a2 + 8) - 1LL;
  }
  else
  {
    if ( (debug & 2) != 0 )
      sub_383DA0();
    v17 = -1;
  }
  if ( src )
  {
    *(_QWORD *)&v26 = 0;
    qfree(src);
  }
  return v17;
}

