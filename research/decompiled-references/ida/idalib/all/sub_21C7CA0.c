_QWORD *__fastcall sub_21C7CA0(_QWORD *a1, __int64 *a2, __int64 a3)
{
  size_t v3; // rbp
  __int64 v4; // r12
  const void *v5; // r13
  unsigned int v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 *v10; // r8
  __int64 v11; // rax
  unsigned int v12; // r9d
  __int64 *v13; // r8
  _QWORD *v14; // rcx
  unsigned int v15; // eax
  unsigned int v16; // [rsp+Ch] [rbp-5Ch]
  __int64 *v17; // [rsp+10h] [rbp-58h]
  _QWORD *v18; // [rsp+18h] [rbp-50h]
  __int64 *v19[8]; // [rsp+28h] [rbp-40h] BYREF

  v3 = *(_QWORD *)(a3 + 8);
  v4 = *a2;
  v5 = *(const void **)a3;
  sub_21C7AF0(v19, *a2, *(const void **)a3, v3);
  if ( !v19[0] )
  {
    v7 = sub_2244B30(v5, v3);
    v8 = (unsigned int)sub_2244CB0(v4 + 48, v5, v3, v7);
    v10 = (__int64 *)(*(_QWORD *)(v4 + 48) + 8 * v8);
    if ( *v10 )
    {
      if ( *v10 != -8 )
      {
        sub_A45C10(v19, v10, 0);
LABEL_7:
        *a1 = 0;
        return a1;
      }
      --*(_DWORD *)(v4 + 64);
    }
    v17 = v10;
    v16 = v8;
    v11 = sub_22300B0(v3 + 9, 8, v8, v9, v10, v8);
    v12 = v16;
    v13 = v17;
    v14 = (_QWORD *)v11;
    if ( v3 )
    {
      v18 = (_QWORD *)v11;
      memcpy((void *)(v11 + 8), v5, v3);
      v14 = v18;
      v13 = v17;
      v12 = v16;
    }
    *((_BYTE *)v14 + v3 + 8) = 0;
    *v14 = v3;
    *v13 = (__int64)v14;
    ++*(_DWORD *)(v4 + 60);
    v15 = sub_22450D0(v4 + 48, v12);
    sub_A45C10(v19, (__int64 *)(*(_QWORD *)(v4 + 48) + 8LL * v15), 0);
    goto LABEL_7;
  }
  *a1 = v19[0];
  return a1;
}
