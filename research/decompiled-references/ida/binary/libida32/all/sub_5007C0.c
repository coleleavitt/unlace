unsigned int *__fastcall sub_5007C0(__int64 *a1, int a2, unsigned int a3)
{
  unsigned int *result; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r11
  __int64 v11; // r13
  unsigned __int64 v12; // r15
  __int64 v13; // rax
  unsigned int *v14; // rax
  unsigned __int64 v15; // r9
  unsigned int *v16; // r10
  unsigned __int64 v17; // r11
  unsigned int *v18; // r12
  unsigned int *v19; // r13
  unsigned int v20; // edx
  unsigned int v21; // eax
  unsigned int v22; // esi
  char *v23; // rcx
  unsigned int v24; // ecx
  unsigned int *v25; // rsi
  unsigned int v26; // ecx
  unsigned int *v27; // rax
  unsigned int *v28; // r15
  unsigned int *v29; // rax
  unsigned int *v30; // rax
  unsigned int *v31; // r13

  result = sub_4EE820(*(_QWORD *)(*a1 + 1480) + 1552LL, a3);
  if ( result )
  {
    if ( !*((_BYTE *)a1 + 144) )
    {
      if ( !under_debugger )
        interr(1336);
      BUG();
    }
    v7 = a2 - *(_DWORD *)(a1[1] + 68);
    if ( v7 >= a1[5] )
      sub_4FC970();
    v8 = v7 << 6;
    *(_DWORD *)(a1[4] + v8 + 56) = a2;
    v9 = a1[4] + v8;
    v10 = *(_QWORD *)(v9 + 8);
    v11 = 17 * v10;
    if ( !(_DWORD)v10 )
      goto LABEL_39;
    v12 = (unsigned int)(v10 - 1);
    v13 = 0;
    if ( v12 < v10 )
      v13 = *(_QWORD *)v9 + 17 * v12;
    if ( a3 >= *(_DWORD *)(v13 + 4) )
    {
      v14 = sub_4FED00((unsigned int **)v9, a3);
      v18 = *(unsigned int **)v9;
      v19 = (unsigned int *)(*(_QWORD *)v9 + v11);
      if ( v14 != v19 )
      {
        v20 = *v16;
        if ( a3 < *v14 || a3 >= v14[1] )
        {
          v21 = -252645135 * ((_DWORD)v14 - (_DWORD)v18);
          v22 = v21;
LABEL_11:
          v23 = nullptr;
          if ( v15 < v17 )
            v23 = (char *)v18 + 17 * v15;
          v24 = *((_DWORD *)v23 + 1);
          if ( v20 < v24 )
            v20 = v24;
LABEL_15:
          if ( v22 != -1 )
            goto LABEL_16;
LABEL_29:
          v26 = v16[1];
          return (unsigned int *)sub_500520(a1, a2, v20, v26);
        }
        v29 = (unsigned int *)((char *)v14 + 17);
        if ( v19 == v29 )
          goto LABEL_33;
LABEL_27:
        v21 = -252645135 * ((_DWORD)v29 - (_DWORD)v18);
        v22 = v21;
        if ( (_DWORD)v15 == -1 )
        {
          if ( v21 == -1 )
            goto LABEL_29;
LABEL_16:
          v25 = nullptr;
          if ( v21 < v17 )
            v25 = (unsigned int *)((char *)v18 + 17 * v21);
          v26 = v16[1];
          if ( v26 > *v25 )
            v26 = *v25;
          return (unsigned int *)sub_500520(a1, a2, v20, v26);
        }
        goto LABEL_11;
      }
      goto LABEL_45;
    }
    v27 = sub_4FED00((unsigned int **)v9, a3);
    v18 = *(unsigned int **)v9;
    v28 = (unsigned int *)(*(_QWORD *)v9 + v11);
    if ( v27 == v28 || -252645135 * ((_DWORD)v27 - (_DWORD)v18) == -1 )
    {
LABEL_39:
      v30 = sub_4FED00((unsigned int **)v9, a3);
      v18 = *(unsigned int **)v9;
      v31 = (unsigned int *)(*(_QWORD *)v9 + v11);
      if ( v30 != v31 )
      {
        v20 = *v16;
        if ( a3 < *v30 || a3 >= v30[1] )
        {
          v21 = -252645135 * ((_DWORD)v30 - (_DWORD)v18);
          v22 = v21;
          goto LABEL_15;
        }
        v29 = (unsigned int *)((char *)v30 + 17);
        v15 = 0xFFFFFFFFLL;
        if ( v31 == v29 )
          goto LABEL_29;
        goto LABEL_27;
      }
    }
    else
    {
      v29 = sub_4FED00((unsigned int **)v9, a3);
      if ( v29 != v28 )
      {
        v20 = *v16;
        if ( a3 >= *v29 && a3 < v29[1] )
        {
          v29 = (unsigned int *)((char *)v29 + 17);
          if ( v29 == v28 )
          {
            if ( (_DWORD)v15 != -1 )
            {
LABEL_33:
              if ( v15 < v17 )
              {
                if ( v20 < *(unsigned int *)((char *)v18 + 17 * v15 + 4) )
                  v20 = *(unsigned int *)((char *)v18 + 17 * v15 + 4);
                goto LABEL_29;
              }
LABEL_49:
              if ( v20 < 0x10102 )
                v20 = 65794;
              goto LABEL_29;
            }
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
        if ( v12 < v17 )
        {
          if ( v20 < *(unsigned int *)((char *)v18 + 17 * v12 + 4) )
            v20 = *(unsigned int *)((char *)v18 + 17 * v12 + 4);
          goto LABEL_29;
        }
        goto LABEL_49;
      }
    }
    v20 = *v16;
    goto LABEL_29;
  }
  return result;
}

