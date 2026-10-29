unsigned __int64 __fastcall sub_3B0140(__int64 a1)
{
  _QWORD *v3; // rbp
  char v4; // al
  __int64 v5; // rax
  int v6; // edx
  unsigned __int64 v7; // rbp
  unsigned __int64 v8; // rsi
  char *v9; // rdi
  unsigned __int64 v10; // r13
  __int64 v11; // r13
  unsigned __int64 *v12; // r12
  __int64 v13; // r8
  unsigned __int64 *v14; // rbp
  char *v15; // rcx
  __int64 i; // r9
  unsigned __int64 *v17; // rax
  unsigned __int64 v18; // rsi
  unsigned __int64 v19; // rax
  __int64 v20; // rax
  void *ptr; // [rsp+0h] [rbp-48h] BYREF
  __int128 v22; // [rsp+8h] [rbp-40h]
  unsigned __int64 v23; // [rsp+18h] [rbp-30h]

  v23 = __readfsqword(0x28u);
  if ( (*(_BYTE *)(a1 + 76) & 0x18) != 0 )
    return v23 - __readfsqword(0x28u);
  ptr = nullptr;
  v22 = 0;
  v3 = *(_QWORD **)(qword_2CCB598 + 1576);
  v3[34] = a1;
  v4 = sub_3AFBD0(a1, (__int64 *)&ptr);
  v3[34] = 0;
  if ( v4 )
  {
    v5 = v22;
    v6 = *(_DWORD *)(a1 + 44);
    if ( (_QWORD)v22 )
    {
      *(_DWORD *)(a1 + 76) |= 0x40u;
      if ( v6 != 3 )
      {
        v7 = *(_QWORD *)ptr;
LABEL_7:
        v8 = *(_QWORD *)(a1 + 56);
        if ( v8 != v7 )
        {
          sub_3AD8A0(a1, v8);
          *(_QWORD *)(a1 + 56) = v7;
          sub_3ABAC0(a1, v7);
        }
        goto LABEL_9;
      }
    }
    else if ( v6 != 3 )
    {
      v7 = -1;
      goto LABEL_7;
    }
    v10 = *(_QWORD *)(a1 + 56);
    if ( v10 >= v3[7] )
    {
      if ( !under_debugger )
        interr(40037);
      BUG();
    }
    v11 = v3[6] + 32 * v10;
    v12 = (unsigned __int64 *)ptr;
    v13 = 8 * v5;
    v14 = *(unsigned __int64 **)v11;
    v15 = (char *)ptr;
    v9 = *(char **)v11;
    for ( i = 8LL * *(_QWORD *)(v11 + 8); ; i = 8LL * *(_QWORD *)(v11 + 8) )
    {
      v17 = (unsigned __int64 *)&v15[v13];
      if ( v14 == (unsigned __int64 *)&v9[i] )
      {
LABEL_22:
        if ( v12 == v17 || (v19 = *v12, *v12 == -1) )
        {
LABEL_28:
          *(_QWORD *)v11 = v15;
          v20 = *(_QWORD *)(v11 + 16);
          ptr = v9;
          *(_OWORD *)(v11 + 8) = v22;
          *((_QWORD *)&v22 + 1) = v20;
          goto LABEL_10;
        }
LABEL_24:
        sub_3ABAC0(a1, v19);
        ++v12;
      }
      else
      {
        while ( 1 )
        {
          v18 = *v14;
          if ( v12 == v17 )
            break;
          v19 = *v12;
          if ( (*v12 & v18) == 0xFFFFFFFFFFFFFFFFLL )
            goto LABEL_28;
          if ( v18 < v19 )
            goto LABEL_27;
          if ( v19 < v18 )
            goto LABEL_24;
          ++v14;
          v17 = (unsigned __int64 *)&v15[v13];
          ++v12;
          if ( v14 == (unsigned __int64 *)&v9[i] )
            goto LABEL_22;
        }
        if ( v18 == -1 )
          goto LABEL_28;
LABEL_27:
        sub_3AD8A0(a1, v18);
        ++v14;
      }
      v9 = *(char **)v11;
      v15 = (char *)ptr;
      v13 = 8 * v22;
    }
  }
LABEL_9:
  v9 = (char *)ptr;
LABEL_10:
  if ( v9 )
  {
    *(_QWORD *)&v22 = 0;
    qfree(v9);
  }
  return v23 - __readfsqword(0x28u);
}
