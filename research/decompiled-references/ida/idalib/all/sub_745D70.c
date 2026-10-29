void *__fastcall sub_745D70(__int64 a1, __int64 a2, unsigned int a3, unsigned __int16 *a4, int a5)
{
  __int64 v9; // rbp
  __int64 v10; // rcx
  int v11; // eax
  __int64 v12; // r8
  unsigned __int16 v13; // dx
  unsigned int v14; // r10d
  unsigned __int16 *v15; // rdi
  __int64 v16; // r9
  unsigned int v17; // eax
  unsigned int v18; // r9d
  unsigned int v19; // eax
  unsigned int v20; // r9d
  unsigned int v21; // r11d
  unsigned int v22; // r15d
  __int64 v23; // rcx
  unsigned __int16 v24; // di
  unsigned __int16 v25; // di
  bool v26; // sf
  unsigned __int16 v27; // ax
  unsigned int v29; // eax
  int v30; // ebp
  __int64 v31; // [rsp+8h] [rbp-50h]
  __int64 v32; // [rsp+8h] [rbp-50h]
  __int64 v33; // [rsp+10h] [rbp-48h]
  __int16 v34; // [rsp+1Ch] [rbp-3Ch]

  v9 = *(_QWORD *)a2;
  if ( a5 && *(_DWORD *)v9 )
  {
    if ( !under_debugger )
      interr(853);
LABEL_41:
    BUG();
  }
  v10 = v9 + 6;
  v11 = *(_DWORD *)(a2 + 32) + 1;
  if ( *(_DWORD *)(a2 + 32) == -1 )
    v11 = -1;
  *(_DWORD *)(a2 + 32) = v11;
  v12 = v10 + 6LL * (int)a3;
  v13 = *(_WORD *)(v12 + 4);
  if ( v13 > 1u && *(__int16 *)(a2 + 8) >= 0 )
  {
    v14 = *(_DWORD *)(v9 - 8);
    if ( v13 >= v14 )
      goto LABEL_39;
    v15 = (unsigned __int16 *)(v9 + v13);
    v16 = *v15;
    v17 = *v15;
    if ( v13 + (unsigned int)v16 + 3 >= v14 )
      goto LABEL_39;
    v18 = *(unsigned __int16 *)((char *)v15 + v16 + 2);
    if ( v13 + v17 + v18 + 4 - 1 >= v14 )
      goto LABEL_39;
    if ( v17 > 0x204 )
      goto LABEL_39;
    if ( v18 > 0x404 )
      goto LABEL_39;
    v19 = v18 + v17;
    v20 = v19 + 4;
    if ( *(_DWORD *)a1 < v19 + 4 + v13 )
      goto LABEL_39;
    v21 = *(unsigned __int16 *)((char *)a4 + *a4 + 2);
    if ( *a4 > 0x204u || v21 > 0x404 )
      goto LABEL_39;
    v22 = *a4 + v21 + 4 - a5;
    if ( v22 == v20 )
      return sub_73D720((__int64)v15, a4, a5);
    v23 = v10 + 6LL * *(__int16 *)(v9 + 4);
    v24 = *(_WORD *)(v23 + 4);
    if ( v24 < v13 )
    {
      v34 = v19 + 4;
      v33 = v23;
      v31 = v12;
      sub_741790(v9, v13, -4 - v19);
      v12 = v31;
      v23 = v33;
      LOWORD(v20) = v34;
    }
    else
    {
      v25 = v20 + v24;
      if ( *(_DWORD *)a1 < (unsigned int)v25 )
        goto LABEL_39;
      *(_WORD *)(v23 + 4) = v25;
    }
    v26 = (__int16)(*(_WORD *)(a2 + 8) - (v22 - v20)) < 0;
    *(_WORD *)(a2 + 8) -= v22 - v20;
    if ( !v26 )
    {
      v27 = *(_WORD *)(v23 + 4) - v22;
      if ( *(_DWORD *)a1 >= (unsigned int)v27 )
      {
        *(_WORD *)(v23 + 4) = v27;
        if ( *(_DWORD *)a1 >= (unsigned int)v27 )
        {
          *(_WORD *)(v12 + 4) = v27;
          if ( (unsigned int)v27 < *(_DWORD *)(v9 - 8) )
          {
            v15 = (unsigned __int16 *)(v9 + v27);
            return sub_73D720((__int64)v15, a4, a5);
          }
        }
      }
LABEL_39:
      sub_743130();
    }
    if ( *(_QWORD *)(a2 + 16) )
    {
      if ( *(_QWORD *)(a2 + 24) )
      {
        if ( !under_debugger )
          interr(1259);
        goto LABEL_41;
      }
      v30 = 1;
    }
    else
    {
      v30 = 0;
    }
    v32 = v12;
    v15 = (unsigned __int16 *)sub_73F210(*(_QWORD *)(a1 + 16));
    *(_QWORD *)(a2 + 8LL * v30 + 16) = v15;
    if ( !v15 )
    {
      dword_2CCC638 = 16;
      sub_743100(16, 0);
    }
    *(_WORD *)(v32 + 4) = v30;
    return sub_73D720((__int64)v15, a4, a5);
  }
  v29 = sub_746060(a1, a2, a3);
  if ( **(_DWORD **)a2 )
    return sub_745920(a1, (__int64 *)a2, a3, a4, v29);
  else
    return (void *)sub_745C40(a1, a2, a3, a4, a5);
}
