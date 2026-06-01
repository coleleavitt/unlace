unsigned __int64 *__fastcall sub_518410(__int64 *a1, int a2, unsigned __int64 a3)
{
  unsigned __int64 *result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r11
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned __int64 *v14; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // r11
  unsigned __int64 *v18; // r12
  unsigned __int64 *v19; // r13
  unsigned __int64 v20; // rdx
  unsigned int v21; // eax
  unsigned int v22; // esi
  char *v23; // rcx
  unsigned __int64 v24; // rcx
  unsigned __int64 *v25; // rsi
  unsigned __int64 v26; // rcx
  unsigned __int64 *v27; // rax
  unsigned __int64 *v28; // r15
  unsigned __int64 *v29; // rax
  unsigned __int64 *v30; // rax
  unsigned __int64 *v31; // r13

  result = sub_505D70(*(_QWORD *)(*a1 + 1672) + 1624LL, a3);
  if ( result )
  {
    if ( !*((_BYTE *)a1 + 152) )
    {
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    v7 = a2 - *(_DWORD *)(a1[1] + 68);
    if ( v7 >= a1[5] )
      sub_5144F0();
    v8 = v7 << 6;
    *(_DWORD *)(a1[4] + v8 + 56) = a2;
    v9 = a1[4] + v8;
    v10 = *(_QWORD *)(v9 + 8);
    v11 = 33 * v10;
    if ( !(_DWORD)v10 )
      goto LABEL_39;
    v12 = (unsigned int)(v10 - 1);
    v13 = 0;
    if ( v12 < v10 )
      v13 = *(_QWORD *)v9 + 33 * v12;
    if ( a3 >= *(_QWORD *)(v13 + 8) )
    {
      v14 = sub_5168B0((unsigned __int64 **)v9, a3);
      v18 = *(unsigned __int64 **)v9;
      v19 = (unsigned __int64 *)(*(_QWORD *)v9 + v11);
      if ( v14 != v19 )
      {
        v20 = *v16;
        if ( a3 < *v14 || a3 >= v14[1] )
        {
          v21 = 1041204193 * ((_DWORD)v14 - (_DWORD)v18);
          v22 = v21;
LABEL_11:
          v23 = nullptr;
          if ( v15 < v17 )
            v23 = (char *)v18 + 33 * v15;
          v24 = *((_QWORD *)v23 + 1);
          if ( v20 < v24 )
            v20 = v24;
LABEL_15:
          if ( v22 != -1 )
            goto LABEL_16;
LABEL_29:
          v26 = v16[1];
          return (unsigned __int64 *)sub_518160(a1, a2, v20, v26);
        }
        v29 = (unsigned __int64 *)((char *)v14 + 33);
        if ( v19 == v29 )
        {
LABEL_33:
          if ( v15 < v17 && v20 < *(unsigned __int64 *)((char *)v18 + 33 * v15 + 8) )
            v20 = *(unsigned __int64 *)((char *)v18 + 33 * v15 + 8);
          goto LABEL_29;
        }
LABEL_27:
        v21 = 1041204193 * ((_DWORD)v29 - (_DWORD)v18);
        v22 = v21;
        if ( (_DWORD)v15 == -1 )
        {
          if ( v21 == -1 )
            goto LABEL_29;
LABEL_16:
          v25 = nullptr;
          if ( v21 < v17 )
            v25 = (unsigned __int64 *)((char *)v18 + 33 * v21);
          v26 = v16[1];
          if ( v26 > *v25 )
            v26 = *v25;
          return (unsigned __int64 *)sub_518160(a1, a2, v20, v26);
        }
        goto LABEL_11;
      }
      goto LABEL_45;
    }
    v27 = sub_5168B0((unsigned __int64 **)v9, a3);
    v18 = *(unsigned __int64 **)v9;
    v28 = (unsigned __int64 *)(*(_QWORD *)v9 + v11);
    if ( v27 == v28 || 1041204193 * ((_DWORD)v27 - (_DWORD)v18) == -1 )
    {
LABEL_39:
      v30 = sub_5168B0((unsigned __int64 **)v9, a3);
      v18 = *(unsigned __int64 **)v9;
      v31 = (unsigned __int64 *)(*(_QWORD *)v9 + v11);
      if ( v30 != v31 )
      {
        v20 = *v16;
        if ( a3 < *v30 || a3 >= v30[1] )
        {
          v21 = 1041204193 * ((_DWORD)v30 - (_DWORD)v18);
          v22 = v21;
          goto LABEL_15;
        }
        v29 = (unsigned __int64 *)((char *)v30 + 33);
        v15 = 0xFFFFFFFFLL;
        if ( v31 == v29 )
          goto LABEL_29;
        goto LABEL_27;
      }
    }
    else
    {
      v29 = sub_5168B0((unsigned __int64 **)v9, a3);
      if ( v29 != v28 )
      {
        v20 = *v16;
        if ( a3 >= *v29 && a3 < v29[1] )
        {
          v29 = (unsigned __int64 *)((char *)v29 + 33);
          if ( v29 == v28 )
          {
            if ( (_DWORD)v15 != -1 )
              goto LABEL_33;
            goto LABEL_29;
          }
        }
        goto LABEL_27;
      }
      v12 = (unsigned int)v15;
      if ( (_DWORD)v15 != -1 )
      {
LABEL_45:
        v20 = *v16;
        if ( v12 < v17 && v20 < *(unsigned __int64 *)((char *)v18 + 33 * v12 + 8) )
          v20 = *(unsigned __int64 *)((char *)v18 + 33 * v12 + 8);
        goto LABEL_29;
      }
    }
    v20 = *v16;
    goto LABEL_29;
  }
  return result;
}
