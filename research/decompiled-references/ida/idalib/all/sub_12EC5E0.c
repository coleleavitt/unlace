__int64 __fastcall sub_12EC5E0(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 *a6)
{
  __int64 v6; // r8
  __int64 v10; // rbx
  __int64 v11; // r15
  size_t v12; // r9
  size_t v13; // rdx
  int v14; // eax
  size_t v15; // rbx
  size_t v16; // rdx
  int v17; // eax
  __int64 result; // rax
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 v21; // [rsp+8h] [rbp-70h]
  __int64 v22; // [rsp+8h] [rbp-70h]
  size_t v23; // [rsp+10h] [rbp-68h]
  void *v24[2]; // [rsp+20h] [rbp-58h] BYREF
  _BYTE v25[72]; // [rsp+30h] [rbp-48h] BYREF

  v6 = a5 + 8;
  v10 = *(_QWORD *)(v6 + 8);
  if ( !v10 )
    goto LABEL_24;
  v11 = v6;
  do
  {
    while ( 1 )
    {
      v12 = *(_QWORD *)(v10 + 40);
      v13 = a3;
      if ( v12 <= a3 )
        v13 = *(_QWORD *)(v10 + 40);
      if ( v13 )
      {
        v23 = *(_QWORD *)(v10 + 40);
        v21 = v6;
        v14 = memcmp(*(const void **)(v10 + 32), a2, v13);
        v6 = v21;
        v12 = v23;
        if ( v14 )
          break;
      }
      if ( v12 == a3 || v12 >= a3 )
      {
        v11 = v10;
        v10 = *(_QWORD *)(v10 + 16);
        goto LABEL_11;
      }
LABEL_3:
      v10 = *(_QWORD *)(v10 + 24);
      if ( !v10 )
        goto LABEL_12;
    }
    if ( v14 < 0 )
      goto LABEL_3;
    v11 = v10;
    v10 = *(_QWORD *)(v10 + 16);
LABEL_11:
    ;
  }
  while ( v10 );
LABEL_12:
  if ( v6 != v11 )
  {
    v15 = *(_QWORD *)(v11 + 40);
    v16 = a3;
    if ( v15 <= a3 )
      v16 = *(_QWORD *)(v11 + 40);
    if ( v16 && (v17 = memcmp(a2, *(const void **)(v11 + 32), v16)) != 0 )
    {
      if ( v17 >= 0 )
        goto LABEL_19;
    }
    else if ( v15 == a3 || v15 <= a3 )
    {
LABEL_19:
      sub_9EE8A0(a4, v11 + 64);
      return 3;
    }
  }
LABEL_24:
  if ( *(_QWORD *)(*a6 + 216) || *(_QWORD *)(*a6 + 232) != *(_QWORD *)(*a6 + 224) )
  {
    v22 = *a6;
    sub_13C2FD0(v24, a6, a2, a3, 0);
    sub_A0AAD0(a4, v24);
    v19 = v22;
    if ( v24[0] != v25 )
    {
      operator delete(v24[0]);
      v19 = v22;
    }
    v20 = *(_QWORD *)(a4 + 8);
    if ( (*(_BYTE *)(v19 + 280) & 0x10) != 0 )
    {
      if ( v20 )
        return 2;
      sub_13C2BF0(v24, a6, a1);
      sub_A0AAD0(a4, v24);
      if ( v24[0] != v25 )
        operator delete(v24[0]);
      v20 = *(_QWORD *)(a4 + 8);
    }
    if ( v20 )
      return 2;
  }
  result = 0;
  if ( a1 )
  {
    sub_13C1340(v24, a6, a1);
    sub_A0AAD0(a4, v24);
    if ( v24[0] != v25 )
      operator delete(v24[0]);
    return 1;
  }
  return result;
}
