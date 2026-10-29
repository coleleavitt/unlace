__int64 __fastcall sub_2233DC0(__int64 a1, const char *a2, __int64 a3, __int64 a4, _QWORD *a5)
{
  const char *v8; // r13
  unsigned __int64 v10; // rdx
  __int64 v11; // rdi
  __int64 v12; // r9
  unsigned int v13; // ebx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  char *v16; // rdx
  int v17; // r10d
  char *v18; // rdi
  unsigned __int64 v19; // rax
  unsigned __int64 v20; // rdi
  unsigned __int64 v21; // rsi
  __int64 v22; // rdi
  int v23; // eax
  unsigned int v24; // ecx
  __int64 v25; // r14
  __int64 v26; // rax
  __int64 v27; // r15
  const char *v28; // r9
  const char *v29; // r8
  const char **v30; // rax
  unsigned __int64 v31; // rdx
  unsigned __int64 v32; // rdi
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 v36; // [rsp+0h] [rbp-D8h]
  unsigned __int8 v37; // [rsp+0h] [rbp-D8h]
  __int64 v38; // [rsp+0h] [rbp-D8h]
  const char *v39; // [rsp+0h] [rbp-D8h]
  __int64 v40; // [rsp+8h] [rbp-D0h]
  const char *v41; // [rsp+8h] [rbp-D0h]
  void *ptr; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v43; // [rsp+18h] [rbp-C0h]
  _BYTE v44[16]; // [rsp+20h] [rbp-B8h] BYREF
  _BYTE v45[168]; // [rsp+30h] [rbp-A8h] BYREF

  v8 = a2;
  if ( a5 )
  {
    v10 = a5[1];
    if ( v10 )
    {
      v38 = a3;
      sub_99BDC0(a5, 0, v10, &byte_22F0C30, 0);
      v11 = *(unsigned int *)(a1 + 8);
      a3 = v38;
      if ( !(_DWORD)v11 )
      {
LABEL_4:
        if ( a4 )
          goto LABEL_5;
LABEL_36:
        if ( !a2 )
        {
          v14 = 0;
          v12 = 0;
          v13 = 0;
          v15 = v44;
          v8 = &byte_22F0C30;
          v17 = 1;
          ptr = v44;
          v18 = v45;
          v16 = v44;
          v43 = 0x800000000LL;
          goto LABEL_11;
        }
        v12 = 0;
        v13 = 0;
        goto LABEL_6;
      }
    }
    else
    {
      v11 = *(unsigned int *)(a1 + 8);
      if ( !(_DWORD)v11 )
        goto LABEL_4;
    }
    sub_2233A20(v11, *(_QWORD *)a1, a5);
    return 0;
  }
  v24 = 0;
  if ( *(_DWORD *)(a1 + 8) )
    return v24;
  if ( !a4 )
    goto LABEL_36;
LABEL_5:
  v12 = (unsigned int)*(_QWORD *)(*(_QWORD *)a1 + 8LL) + 1;
  v13 = *(_QWORD *)(*(_QWORD *)a1 + 8LL) + 1;
  if ( a2 )
  {
LABEL_6:
    v14 = a3;
    goto LABEL_7;
  }
  v14 = 0;
  v8 = &byte_22F0C30;
LABEL_7:
  v43 = 0x800000000LL;
  ptr = v44;
  if ( v13 )
  {
    if ( v13 <= 8 )
    {
      v16 = v44;
      v15 = v44;
    }
    else
    {
      v40 = v14;
      v36 = v12;
      sub_2237220(&ptr, v44, v12, 16);
      v15 = ptr;
      v12 = v36;
      v14 = v40;
      v16 = (char *)ptr + 16 * (unsigned int)v43;
    }
    v17 = v13;
    v18 = (char *)&v15[2 * v12];
    if ( v18 == v16 )
      goto LABEL_13;
  }
  else
  {
    v17 = 1;
    v18 = v45;
    v15 = v44;
    v16 = v44;
  }
LABEL_11:
  v19 = 0;
  v20 = ((unsigned __int64)(v18 - 16 - v16) >> 4) + 1;
  do
  {
    v21 = v19++;
    *(_OWORD *)&v16[16 * v21] = 0;
  }
  while ( v20 > v19 );
LABEL_13:
  LODWORD(v43) = v17;
  v22 = *(_QWORD *)a1;
  v15[1] = v14;
  *v15 = 0;
  v23 = sub_2285F10(v22, v8, v12, v15, 4);
  v24 = 0;
  if ( v23 != 1 )
  {
    if ( v23 )
    {
      if ( a5 )
      {
        sub_2233A20(*(unsigned int *)(a1 + 8), *(_QWORD *)a1, a5);
        v24 = 0;
      }
    }
    else
    {
      if ( a4 )
      {
        *(_DWORD *)(a4 + 8) = 0;
        if ( v13 )
        {
          v25 = 0;
          v26 = 0;
          v27 = 16 * (v13 - 1 + 1LL);
          do
          {
            while ( 1 )
            {
              v31 = v26 + 1;
              v32 = *(unsigned int *)(a4 + 12);
              v33 = *(_QWORD *)((char *)ptr + v25);
              if ( v33 != -1 )
                break;
              if ( v31 > v32 )
              {
                sub_2237220(a4, a4 + 16, v31, 16);
                v26 = *(unsigned int *)(a4 + 8);
              }
              v34 = (_QWORD *)(*(_QWORD *)a4 + 16 * v26);
              v25 += 16;
              *v34 = 0;
              v34[1] = 0;
              v26 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
              *(_DWORD *)(a4 + 8) = v26;
              if ( v25 == v27 )
                goto LABEL_25;
            }
            v28 = &v8[v33];
            v29 = (const char *)(*(_QWORD *)((char *)ptr + v25 + 8) - v33);
            if ( v31 > v32 )
            {
              v41 = &v8[v33];
              v39 = (const char *)(*(_QWORD *)((char *)ptr + v25 + 8) - v33);
              sub_2237220(a4, a4 + 16, v31, 16);
              v26 = *(unsigned int *)(a4 + 8);
              v28 = v41;
              v29 = v39;
            }
            v30 = (const char **)(*(_QWORD *)a4 + 16 * v26);
            v25 += 16;
            *v30 = v28;
            v30[1] = v29;
            v26 = (unsigned int)(*(_DWORD *)(a4 + 8) + 1);
            *(_DWORD *)(a4 + 8) = v26;
          }
          while ( v25 != v27 );
        }
      }
LABEL_25:
      v24 = 1;
    }
  }
  if ( ptr != v44 )
  {
    v37 = v24;
    free(ptr);
    return v37;
  }
  return v24;
}
