unsigned __int64 __fastcall sub_37650(__int64 a1, __int64 a2, unsigned __int8 *a3)
{
  __int64 v6; // rdx
  __int64 v7; // rsi
  char v8; // al
  _QWORD *v9; // rdx
  _QWORD *v10; // rdi
  __int64 v11; // r14
  _QWORD *v12; // rax
  unsigned __int64 v13; // rbp
  __int64 v15; // r14
  __int64 not_tail; // rdi
  __int64 v17; // rdx
  char v18; // al
  __int64 v19; // rdx
  _QWORD *v20; // rax
  _QWORD *v21; // rdx
  _QWORD *v22; // [rsp+0h] [rbp-108h] BYREF
  __int128 v23; // [rsp+8h] [rbp-100h]
  char v24; // [rsp+18h] [rbp-F0h]
  _QWORD v25[2]; // [rsp+20h] [rbp-E8h] BYREF
  __int64 v26; // [rsp+30h] [rbp-D8h]
  __int128 v27; // [rsp+38h] [rbp-D0h]
  __int64 v28; // [rsp+48h] [rbp-C0h]
  __int128 v29; // [rsp+50h] [rbp-B8h]
  __int64 v30; // [rsp+60h] [rbp-A8h]
  __int128 v31; // [rsp+68h] [rbp-A0h]
  __int64 v32; // [rsp+78h] [rbp-90h]
  __int128 v33; // [rsp+80h] [rbp-88h]
  __int64 v34; // [rsp+90h] [rbp-78h]
  __int128 v35; // [rsp+98h] [rbp-70h]
  char v36; // [rsp+A8h] [rbp-60h]
  __int64 v37; // [rsp+B0h] [rbp-58h]
  char v38; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v39; // [rsp+C8h] [rbp-40h]

  v39 = __readfsqword(0x28u);
  v6 = *(_QWORD *)(a2 + 16);
  v7 = (__int64)&v22;
  v24 = 0;
  v22 = nullptr;
  v23 = 0;
  v8 = sub_5B9B0(a1, &v22, v6, *((unsigned __int16 *)a3 + 3), 0xFFFFFFFFLL, 0);
  v10 = v22;
  if ( !v8 || (unsigned __int8)(v24 - 10) > 1u )
  {
LABEL_8:
    v13 = -1;
    goto LABEL_9;
  }
  v11 = *v22;
  if ( (_QWORD)v23 != 1 )
  {
    v12 = v22 + 3;
    v9 = &v22[3 * v23];
    if ( 24LL * (_QWORD)v23 != 24 )
    {
      while ( v11 == *v12 )
      {
        v12 += 3;
        if ( v12 == v9 )
          goto LABEL_12;
      }
      goto LABEL_8;
    }
  }
LABEL_12:
  v15 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 16LL) & (*((_QWORD *)a3 + 2) + v11);
  v13 = use_mapping(v15);
  if ( v13 <= 0x40 )
  {
    if ( (unsigned int)getinf(5) == 18 )
    {
      v7 = 4;
      if ( get_bytes(v25, 4, 0, 0, 0) == 4 && LODWORD(v25[0]) == 1179403647 )
        goto LABEL_41;
    }
    if ( v13 <= 0x20 )
    {
      v20 = v22;
      v21 = &v22[3 * v23];
      if ( v22 != v21 )
      {
        while ( (*((_BYTE *)v20 + 18) & 0x10) != 0 )
        {
          v20 += 3;
          if ( v21 == v20 )
            goto LABEL_13;
        }
        if ( (unsigned __int8)segtype(v13) != 2 )
          goto LABEL_41;
      }
    }
  }
LABEL_13:
  if ( !(unsigned __int8)is_mapped(v13) )
    goto LABEL_41;
  not_tail = v13;
  if ( (get_flags_ex(v13, 4) & 0x600) == 0x200 )
    not_tail = prev_not_tail(v13);
  v7 = 4;
  if ( (~(unsigned __int16)get_flags_ex(not_tail, 4) & 0x600) == 0
    || *((_QWORD *)a3 + 2) && (unsigned __int8)is_spec_ea(v13) )
  {
LABEL_41:
    v10 = v22;
    v13 = -1;
    goto LABEL_9;
  }
  v25[1] = v15;
  v25[0] = a1;
  v26 = 0;
  v28 = 0;
  v30 = 0;
  v32 = 0;
  v34 = 0;
  v36 = 1;
  v37 = 0;
  v38 = 1;
  v27 = 0;
  v29 = 0;
  v31 = 0;
  v33 = 0;
  v35 = 0;
  if ( (unsigned __int8)sub_5D2E0(v25, &v22, a2, a3, 10) )
  {
    v7 = 0;
    sub_5D950(v25, 0);
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34, 0, v9, 0.0);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, 0, v9, 0.0);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30, 0, v9, 0.0);
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, 0, v9, 0.0);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, 0, v9, 0.0);
    }
  }
  else
  {
    if ( v34 )
    {
      *(_QWORD *)&v35 = 0;
      qfree(v34, &v22, v17, 0.0);
    }
    if ( v32 )
    {
      *(_QWORD *)&v33 = 0;
      qfree(v32, &v22, v17, 0.0);
    }
    if ( v30 )
    {
      *(_QWORD *)&v31 = 0;
      qfree(v30, &v22, v17, 0.0);
    }
    if ( v28 )
    {
      *(_QWORD *)&v29 = 0;
      qfree(v28, &v22, v17, 0.0);
    }
    if ( v26 )
    {
      *(_QWORD *)&v27 = 0;
      qfree(v26, &v22, v17, 0.0);
    }
    v18 = sub_5DEA0(a1, &v22, 0);
    v19 = *((_QWORD *)a3 + 2);
    if ( !v18 && !v19 )
    {
      sub_5E140(a1, &v22);
      v19 = *((_QWORD *)a3 + 2);
    }
    v7 = *a3;
    sub_5DA70(a2, v7, v19, &v22);
  }
  v10 = v22;
LABEL_9:
  if ( v10 )
  {
    *(_QWORD *)&v23 = 0;
    qfree(v10, v7, v9, 0.0);
  }
  return v13;
}
