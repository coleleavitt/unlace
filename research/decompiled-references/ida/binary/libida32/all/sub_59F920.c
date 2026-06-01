__int64 __fastcall sub_59F920(_QWORD *a1, __int64 a2)
{
  int v4; // eax
  __int64 v5; // r12
  int v6; // eax
  unsigned __int64 v7; // r15
  int v8; // r14d
  char *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rdx
  __int64 v12; // rax
  size_t v13; // r14
  size_t v14; // r9
  unsigned __int64 v15; // r10
  char *v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  void *v19; // rax
  int v20; // edx
  __int64 v21; // r10
  size_t v22; // r9
  unsigned __int64 v23; // r11
  unsigned __int64 *v24; // [rsp+8h] [rbp-90h]
  unsigned int v25; // [rsp+14h] [rbp-84h]
  unsigned __int64 v26; // [rsp+18h] [rbp-80h]
  size_t n; // [rsp+20h] [rbp-78h]
  __int64 v28; // [rsp+28h] [rbp-70h]
  void *ptr; // [rsp+30h] [rbp-68h] BYREF
  __int128 v30; // [rsp+38h] [rbp-60h]
  _BYTE src[5]; // [rsp+53h] [rbp-45h] BYREF
  unsigned __int64 v32; // [rsp+58h] [rbp-40h] BYREF

  v32 = __readfsqword(0x28u);
  if ( !(unsigned __int8)sub_5B56B0(a1, a2, 1) )
    return 0;
  v25 = sub_3B90A0(a1, *(_DWORD *)a2);
  v4 = *(_DWORD *)(a2 + 40);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    if ( !v5 )
      return sub_5ACD60(a1, a2, 0);
    ptr = nullptr;
    v30 = 0;
    if ( 10 * v4 )
    {
      v19 = (void *)qvector_reserve(&ptr, 0, (unsigned int)(10 * v4), 1);
      v20 = *(_DWORD *)(a2 + 40);
      ptr = v19;
      if ( !v20 )
      {
LABEL_31:
        netnode_setblob(v25, ptr, v30, 4096, 83);
        if ( ptr )
        {
          *(_QWORD *)&v30 = 0;
          qfree(ptr);
        }
        return sub_5ACD60(a1, a2, 0);
      }
      v5 = *(_QWORD *)(a2 + 48);
    }
    v6 = *(_DWORD *)a2;
    v7 = 0;
    v8 = 0;
    v24 = &v32;
    while ( 1 )
    {
      v18 = pack_dd(src, v24, (unsigned int)(*(_DWORD *)(v5 + 8 * v7) - v6)) - (_QWORD)src;
      v22 = v18;
      if ( v18 )
        break;
LABEL_13:
      v11 = (unsigned int)(2 * (*(_DWORD *)(v5 + 8 * v7 + 4) - v8) + 1);
      if ( *(_DWORD *)(v5 + 8 * v7 + 4) - v8 < 0 )
        v11 = (unsigned int)(2 * (v8 - *(_DWORD *)(v5 + 8 * v7 + 4)));
      v12 = pack_dd(src, v24, v11) - (_QWORD)src;
      v13 = v12;
      if ( !v12 )
        goto LABEL_21;
      v14 = v30;
      v15 = v30 + v12;
      if ( __CFADD__((_QWORD)v30, v12) )
      {
        if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
        {
          if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
            *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
          goto LABEL_20;
        }
        v15 = 0x7FFFFFFFFFFFFFFFLL;
      }
      v16 = (char *)ptr;
      v17 = v30;
      if ( *((_QWORD *)&v30 + 1) < v15 )
      {
        n = v30;
        v26 = v15;
        ptr = (void *)qvector_reserve(&ptr, ptr, v15, 1);
        v16 = (char *)ptr;
        v14 = n;
        v17 = v30;
        v15 = v26;
      }
      n = v14;
      v26 = v15;
      memset(&v16[v17], 0, v15 - v17);
      v14 = n;
      *(_QWORD *)&v30 = v26;
LABEL_20:
      memcpy((char *)ptr + v14, src, v13);
LABEL_21:
      v6 = *(_DWORD *)(v5 + 8 * v7);
      v8 = *(_DWORD *)(v5 + 8 * v7++ + 4);
      if ( v7 >= *(unsigned int *)(a2 + 40) )
        goto LABEL_31;
    }
    v21 = v30;
    v23 = v30 + v18;
    if ( __CFADD__((_QWORD)v30, v18) )
    {
      if ( (unsigned __int64)v30 > 0x7FFFFFFFFFFFFFFELL )
      {
        if ( (_QWORD)v30 != 0x7FFFFFFFFFFFFFFFLL )
          *(_QWORD *)&v30 = 0x7FFFFFFFFFFFFFFFLL;
LABEL_12:
        memcpy((char *)ptr + v21, src, v22);
        goto LABEL_13;
      }
      v23 = 0x7FFFFFFFFFFFFFFFLL;
    }
    v9 = (char *)ptr;
    v10 = v30;
    if ( *((_QWORD *)&v30 + 1) < v23 )
    {
      v28 = v30;
      n = v22;
      v26 = v23;
      ptr = (void *)qvector_reserve(&ptr, ptr, v23, 1);
      v9 = (char *)ptr;
      v21 = v28;
      v10 = v30;
      v22 = n;
      v23 = v26;
    }
    v28 = v21;
    n = v22;
    v26 = v23;
    memset(&v9[v10], 0, v23 - v10);
    v22 = n;
    v21 = v28;
    *(_QWORD *)&v30 = v26;
    goto LABEL_12;
  }
  netnode_delblob(v25, 4096, 83);
  return sub_5ACD60(a1, a2, 0);
}

