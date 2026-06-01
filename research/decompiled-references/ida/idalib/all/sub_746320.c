__int64 __fastcall sub_746320(__int64 a1, __int64 a2, int a3)
{
  __int64 v6; // r12
  unsigned __int16 *v7; // rbp
  unsigned __int16 v8; // r15
  unsigned __int16 v9; // cx
  __int64 result; // rax
  __int16 v11; // cx
  unsigned __int16 *v12; // rdx
  int v13; // esi
  unsigned int v14; // edx
  int v15; // r9d
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rdi
  unsigned __int16 *v19; // r8
  unsigned int v20; // eax
  char *v21; // rax
  unsigned int v22; // esi
  char *v23; // rdi
  __int64 v24; // rax
  _WORD *v25; // r8
  __int64 v26; // rax
  int v27; // edx
  unsigned __int16 v28; // ax
  unsigned __int16 *v29; // [rsp+0h] [rbp-58h]
  int v30; // [rsp+8h] [rbp-50h]
  _WORD *v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+10h] [rbp-48h]
  unsigned __int16 v33; // [rsp+1Ch] [rbp-3Ch]

  v6 = *(_QWORD *)a2;
  v7 = (unsigned __int16 *)(*(_QWORD *)a2 + 6LL * a3 + 6);
  if ( *(__int16 *)(*(_QWORD *)a2 + 4LL) - 1 == a3
    || (v8 = *v7, v9 = *(_WORD *)(*(_QWORD *)a2 + 6LL * a3 + 12), *v7 >= v9) )
  {
    result = sub_746060(a1, a2, a3);
  }
  else
  {
    v14 = *(_DWORD *)(v6 - 8);
    v29 = (unsigned __int16 *)(a1 + 4244);
    v15 = v9 - v8;
    v16 = v7[2];
    if ( (unsigned int)v16 >= v14
      || (v17 = v6 + v16,
          v33 = v9,
          v18 = *(unsigned __int16 *)(v6 + v16),
          v19 = (unsigned __int16 *)(v6 + v16 + v18 + 2),
          v20 = *(unsigned __int16 *)(v6 + v16),
          (int)v17 + (int)v18 + 3 - (int)v6 >= v14)
      || (unsigned int)v17 + v20 + *v19 + 4 - 1 - (unsigned int)v6 >= v14
      || v20 < v15
      || (v30 = v9 - v8,
          v32 = v15,
          v21 = (char *)memmove((void *)(a1 + 4246), (const void *)(v17 + 2), v15),
          v22 = *(_DWORD *)(v6 - 8),
          v23 = v21,
          v24 = v7[5],
          (unsigned int)v24 >= v22)
      || (v25 = (_WORD *)(v6 + v24), v26 = *(unsigned __int16 *)(v6 + v24), (int)v25 + (int)v26 + 3 - (int)v6 >= v22)
      || (v27 = *(unsigned __int16 *)((char *)v25 + v26 + 2) + (_DWORD)v26 + 4, (int)v25 + v27 - 1 - (int)v6 >= v22)
      || v27 + v30 > 1549 )
    {
      sub_743130();
    }
    v31 = v25;
    memmove(&v23[v32], v25 + 1, v27 - ((int)v23 - (int)v29));
    *(_WORD *)(a1 + 4244) = *v31 + v33 - v8;
    v7[3] = *v7;
    sub_746060(a1, a2, a3);
    sub_745D70(a1, a2, a3, v29, 0);
    v7[1] = 0;
    result = (unsigned int)(*(__int16 *)(v6 + 4) - 1);
    if ( (int)result > a3 )
    {
      result = *v7;
      if ( v7[3] == (_WORD)result )
      {
        result = (unsigned int)v7[4] + 1;
        v7[1] = v7[4] + 1;
      }
    }
  }
  if ( a3 > 0 )
  {
    v11 = *(v7 - 3);
    *(v7 - 2) = 0;
    result = 0;
    if ( *(__int16 *)(v6 + 4) > a3 && *v7 == v11 )
    {
      v28 = v7[1] + 1;
      *(v7 - 2) = v28;
      result = (unsigned int)v28 + 1;
      if ( a3 == 1 )
        return result;
    }
    else if ( a3 == 1 )
    {
      return result;
    }
    v12 = v7 - 6;
    if ( *(v7 - 6) == v11 )
    {
      v13 = result + a3 - 1;
      do
      {
        if ( (_DWORD)result == v13 )
          break;
        v12[1] = result;
        v12 -= 3;
        result = (unsigned int)(result + 1);
      }
      while ( *v12 == v11 );
    }
  }
  return result;
}
