__int64 __fastcall sub_2056F70(char *src, size_t n, __int64 **a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rdx
  char *v8; // rax
  __int64 result; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  __int64 v12; // rdx
  __int64 v13; // r9
  __int64 *v14; // rcx
  __int64 *v15; // rax
  __int64 v16; // rax
  unsigned int v17; // r8d
  __int64 *v18; // rcx
  _QWORD *v19; // r14
  unsigned int v20; // eax
  __int64 v21; // rcx
  __int64 v22; // rdx
  __int64 v23; // rbx
  __int64 v24; // r12
  __int64 v25; // rbp
  __int64 v26; // r12
  __int64 v27; // r13
  __int64 v28; // r12
  unsigned int v29; // [rsp+0h] [rbp-58h]
  __int64 v30; // [rsp+0h] [rbp-58h]
  __int64 v31; // [rsp+0h] [rbp-58h]
  __int64 *v32; // [rsp+8h] [rbp-50h]
  __int64 *v33[8]; // [rsp+18h] [rbp-40h] BYREF

  v7 = &src[n];
  if ( &src[n] == src )
    return sub_2056DA0(a3, n, (__int64)v7, a4, a5, a6);
  if ( !*src )
  {
    v8 = src;
    while ( ++v8 != v7 )
    {
      if ( *v8 )
        goto LABEL_8;
    }
    return sub_2056DA0(a3, n, (__int64)v7, a4, a5, a6);
  }
LABEL_8:
  v10 = **a3;
  v11 = sub_2244B30(src, n);
  v12 = (unsigned int)sub_2244CB0(v10 + 1584, src, n, v11);
  v14 = (__int64 *)(*(_QWORD *)(v10 + 1584) + 8 * v12);
  if ( *v14 )
  {
    if ( *v14 != -8 )
    {
      sub_20540B0(v33, v14, 0);
      v15 = v33[0];
      goto LABEL_15;
    }
    --*(_DWORD *)(v10 + 1600);
  }
  v32 = v14;
  v29 = v12;
  v16 = sub_22300B0(n + 17, 8, v12, v14, v12, v13);
  v17 = v29;
  v18 = v32;
  v19 = (_QWORD *)v16;
  if ( n )
  {
    memcpy((void *)(v16 + 16), src, n);
    v18 = v32;
    v17 = v29;
  }
  *((_BYTE *)v19 + n + 16) = 0;
  *v19 = n;
  v19[1] = 0;
  *v18 = (__int64)v19;
  ++*(_DWORD *)(v10 + 1596);
  v20 = sub_22450D0(v10 + 1584, v17);
  sub_20540B0(v33, (__int64 *)(*(_QWORD *)(v10 + 1584) + 8LL * v20), 0);
  v15 = v33[0];
LABEL_15:
  v21 = *v15;
  v22 = *(_QWORD *)(*v15 + 8);
  v23 = *v15 + 8;
  if ( v22 )
  {
    if ( a3 == *(__int64 ***)(v22 + 8) )
      return *(_QWORD *)(*v15 + 8);
    while ( 1 )
    {
      result = *(_QWORD *)(v22 + 32);
      if ( !result )
        break;
      v22 = *(_QWORD *)(v22 + 32);
      if ( *(__int64 ***)(result + 8) == a3 )
        return result;
    }
    v23 = v22 + 32;
  }
  v24 = v21 + 16;
  if ( *((_BYTE *)a3 + 8) == 16 )
  {
    v31 = sub_20C9AC0(40, unk_2673580);
    sub_20CA190(v31, a3, 3);
    result = v31;
    *(_QWORD *)(v31 + 32) = 0;
    v25 = *(_QWORD *)v23;
    *(_DWORD *)(v31 + 4) &= 0x38000000u;
    *(_QWORD *)(v31 + 24) = v24;
    *(_QWORD *)v23 = v31;
    if ( v25 )
    {
      v28 = *(_QWORD *)(v25 + 32);
      if ( v28 )
      {
        sub_20510B0(*(_QWORD *)(v25 + 32));
        sub_20C9BF0(v28);
      }
      goto LABEL_27;
    }
  }
  else
  {
    v30 = sub_20C9AC0(48, unk_2673580);
    sub_20CA190(v30, a3, 4);
    result = v30;
    *(_QWORD *)(v30 + 32) = 0;
    *(_BYTE *)(v30 + 40) &= ~1u;
    v25 = *(_QWORD *)v23;
    *(_DWORD *)(v30 + 4) &= 0x38000000u;
    *(_QWORD *)(v30 + 24) = v24;
    *(_QWORD *)v23 = v30;
    if ( v25 )
    {
      v26 = *(_QWORD *)(v25 + 32);
      if ( v26 )
      {
        v27 = *(_QWORD *)(v26 + 32);
        if ( v27 )
        {
          sub_20510B0(*(_QWORD *)(v26 + 32));
          sub_20C9BF0(v27);
        }
        sub_20CC0C0(v26);
        sub_20C9BF0(v26);
      }
LABEL_27:
      sub_20CC0C0(v25);
      sub_20C9BF0(v25);
      return *(_QWORD *)v23;
    }
  }
  return result;
}
