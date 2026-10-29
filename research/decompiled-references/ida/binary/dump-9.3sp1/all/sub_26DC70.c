__int64 __fastcall sub_26DC70(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // r12
  __int64 *v5; // rbp
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  int v9; // r13d
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rbx
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rsi
  __int64 v18; // rbx
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rbp
  __int64 v23; // [rsp+8h] [rbp-50h]
  __int64 *v24; // [rsp+10h] [rbp-48h]
  __int64 v25; // [rsp+18h] [rbp-40h]

  v4 = 0;
  v5 = *(__int64 **)(a1 + 56);
  v25 = a2;
  v24 = &v5[4 * *(_QWORD *)(a1 + 64)];
  if ( v24 != v5 )
  {
    while ( 1 )
    {
      v11 = j__qalloc_or_throw(64, a2, a3, a4);
      a2 = *v5;
      *(_QWORD *)v11 = -1;
      v12 = v11;
      *(_DWORD *)(v11 + 8) = 0;
      *(_QWORD *)(v11 + 12) = -1;
      *(_QWORD *)(v11 + 48) = 0;
      *(_DWORD *)(v11 + 56) = 0;
      sub_25AFF0(v11, a2);
      v13 = v5[3];
      v14 = -v13;
      if ( v13 > 0 )
        v14 = v5[3];
      if ( v14 != 1 )
        goto LABEL_10;
      if ( v13 == -1 )
        break;
LABEL_11:
      if ( v4 )
      {
LABEL_3:
        v6 = 2;
        v9 = (v13 == -1) + 35;
        if ( (unsigned __int8)((get_tinfo_property() & 0xF) - 10) <= 2u )
        {
          v6 = 2;
          if ( v9 == ((unsigned __int8)((get_tinfo_property() & 0xF) - 10) > 2u) + 35 )
          {
            v6 = *(_QWORD *)a1;
            sub_246B40(v12, *(_QWORD *)a1, (_QWORD *)(*(_QWORD *)a1 + 280LL));
          }
        }
        v5 += 4;
        v10 = j__qalloc_or_throw(64, v6, v7, v8);
        *(_QWORD *)v10 = -1;
        *(_QWORD *)(v10 + 24) = v4;
        *(_DWORD *)(v10 + 8) = v9;
        *(_QWORD *)(v10 + 12) = -1;
        *(_QWORD *)(v10 + 32) = v12;
        *(_QWORD *)(v10 + 40) = 0;
        *(_QWORD *)(v10 + 48) = 0;
        *(_DWORD *)(v10 + 56) = 0;
        v23 = v10;
        *(_QWORD *)v10 = *(v5 - 3);
        a2 = *(_QWORD *)(*(_QWORD *)a1 + 112LL);
        sub_2441C0(v10, a2, 0);
        *(_DWORD *)(v23 + 56) |= 1u;
        v4 = v23;
        if ( v24 == v5 )
          goto LABEL_13;
      }
      else
      {
        v4 = v12;
        v5 += 4;
        if ( v24 == v5 )
          goto LABEL_13;
      }
    }
    if ( v4 )
      goto LABEL_3;
LABEL_10:
    a2 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL);
    v15 = sub_26A690(v12, a2, (__int64)(v5 + 1), v5[3]);
    *(_DWORD *)(v15 + 56) |= 1u;
    v12 = v15;
    goto LABEL_11;
  }
LABEL_13:
  if ( !*(_BYTE *)(a1 + 452) )
    return sub_269F60(v4, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL), *(_QWORD *)(a1 + 104), *(_DWORD *)(a1 + 112), v25);
  v16 = j__qalloc_or_throw(64, a2, a3, a4);
  v17 = *(_QWORD *)(a1 + 48);
  *(_QWORD *)v16 = -1;
  v18 = v16;
  *(_DWORD *)(v16 + 8) = 0;
  *(_QWORD *)(v16 + 12) = -1;
  *(_QWORD *)(v16 + 48) = 0;
  *(_DWORD *)(v16 + 56) = 0;
  sub_25AFF0(v16, v17);
  if ( v4 )
  {
    v21 = j__qalloc_or_throw(64, v17, v19, v20);
    *(_QWORD *)(v21 + 32) = v18;
    *(_QWORD *)v21 = -1;
    v18 = v21;
    *(_DWORD *)(v21 + 8) = 35;
    *(_QWORD *)(v21 + 12) = -1;
    *(_QWORD *)(v21 + 24) = v4;
    *(_QWORD *)(v21 + 40) = 0;
    *(_QWORD *)(v21 + 48) = 0;
    *(_DWORD *)(v21 + 56) = 0;
    sub_2441C0(v21, *(_QWORD *)(*(_QWORD *)a1 + 112LL), 0);
    *(_DWORD *)(v21 + 56) |= 1u;
  }
  return v18;
}
