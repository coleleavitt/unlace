__int64 __fastcall sub_1BE5E80(__int64 a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  int *v7; // rbx
  __int64 v8; // rax
  _QWORD *v9; // rdi
  unsigned __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // r15
  char i; // r14
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rsi
  unsigned __int64 v20; // rdi
  int v21; // eax
  __int64 v22; // rdx
  unsigned __int64 v23; // rax
  _QWORD *v24; // r15
  unsigned __int64 v25; // rax
  unsigned __int64 v26; // rsi
  bool v27; // zf
  unsigned __int64 v28; // rax
  __int64 v29; // rsi
  unsigned __int64 v30; // rdi
  unsigned __int64 v31; // rdx
  __int64 v32; // rdx
  _QWORD *v33; // rsi
  __int64 v34; // rdx
  _QWORD *v35; // rsi
  unsigned int v36; // eax
  __int64 v38; // r9
  int v39; // eax
  __int64 v40; // [rsp-8h] [rbp-90h]
  int v41; // [rsp+1Ch] [rbp-6Ch]
  char v43; // [rsp+23h] [rbp-65h] BYREF
  char v44; // [rsp+24h] [rbp-64h] BYREF
  unsigned __int64 v45; // [rsp+28h] [rbp-60h] BYREF
  unsigned __int64 v46; // [rsp+30h] [rbp-58h] BYREF
  __int64 v47; // [rsp+38h] [rbp-50h] BYREF
  __int64 v48; // [rsp+40h] [rbp-48h] BYREF
  __int64 v49[8]; // [rsp+48h] [rbp-40h] BYREF

  v7 = (int *)a5;
  v8 = *(_QWORD *)&byte_8[a3 & 0xFFFFFFFFFFFFFFF0LL];
  v9 = *(_QWORD **)(a1 + 248);
  v47 = 0;
  v48 = 0;
  v45 = v8 & 0xFFFFFFFFFFFFFFF8LL | ((unsigned __int8)v8 | (unsigned __int8)a3) & 7;
  v46 = *(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF8LL
      | ((unsigned __int8)*(_QWORD *)&byte_8[a4 & 0xFFFFFFFFFFFFFFF0LL] | (unsigned __int8)a4) & 7;
  v10 = sub_A725A0(v9, v45, &v47, a4, a5);
  v41 = 0;
  v15 = sub_A725A0(*(_QWORD **)(a1 + 248), v46, &v48, v11, v12);
  if ( !v7 )
    v7 = (int *)&v44;
  *v7 = 0;
  if ( v15 != v10 )
  {
    if ( (unsigned __int8)sub_1E63330(a1, a2, a4, 1, 0) || !(unsigned __int8)sub_183BD10(a1, a2, v15, v10, v14, v38) )
    {
      v39 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                           & 0xFFFFFFFFFFFFFFF0LL)
                               + 16LL);
      if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                  & 0xFFFFFFFFFFFFFFF0LL)
                                      + 16LL)
                           - 35) <= 1u
        && (unsigned __int8)(v39 - 35) <= 1u )
      {
        if ( (unsigned __int8)sub_AABFE0(*(_QWORD *)(a1 + 248), v10, v15) )
        {
          v41 = *v7 | 0x10;
          *v7 = v41;
          goto LABEL_4;
        }
        v39 = *(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v15 & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                             & 0xFFFFFFFFFFFFFFF0LL)
                                 + 16LL);
      }
      if ( (unsigned int)(v39 - 25) <= 1 && sub_1BE5710(a1, v15, v10, nullptr, nullptr) )
      {
        *v7 |= 4u;
        return 2;
      }
      v41 = *v7;
    }
    else
    {
      v41 = *v7 | 8;
      *v7 = v41;
    }
  }
LABEL_4:
  v43 = 1;
  for ( i = 1; ; i = 0 )
  {
    v19 = v45;
    v20 = v46;
    if ( v45 == v46 )
      break;
    v21 = *v7 | 1;
    if ( !i )
      v21 = *v7 | 3;
    *v7 = v21;
    v22 = *(_QWORD *)&byte_8[v19 & 0xFFFFFFFFFFFFFFF0LL];
    v23 = v19;
    v24 = *(_QWORD **)(a1 + 248);
    if ( (v22 & 8) != 0 && (*((_BYTE *)&qword_18 + (v22 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    {
      v49[0] = 0;
      v25 = sub_A725A0(v24, v19, v49, v13, v14);
      v26 = v49[0] & 0xFFFFFFFFFFFFFFF7LL;
      v27 = (v49[0] & 0xFFFFFFFFFFFFFFF0LL) == 0;
      v49[0] &= ~8uLL;
      if ( v27 )
      {
        v23 = (unsigned int)v26 | v25 & 7 | v25 & 0xFFFFFFFFFFFFFFF8LL;
      }
      else
      {
        v32 = v26 | v25 & 7;
        v33 = (_QWORD *)(v25 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v25 & 8) != 0 )
        {
          v32 |= *(__int64 *)((char *)&qword_18 + (v25 & 0xFFFFFFFFFFFFFFF0LL));
          v33 = (_QWORD *)*v33;
        }
        v23 = sub_A70C40((__int64)v24, (__int64)v33, v32);
      }
      v24 = *(_QWORD **)(a1 + 248);
      v20 = v46;
    }
    v45 = v23;
    v17 = *(_QWORD *)&byte_8[v20 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v17 & 8) != 0 && (*((_BYTE *)&qword_18 + (v17 & 0xFFFFFFFFFFFFFFF0LL)) & 8) != 0 )
    {
      v49[0] = 0;
      v28 = sub_A725A0(v24, v20, v49, v13, v14);
      v29 = v49[0];
      v30 = v28 & 7;
      v31 = v49[0] & 0xFFFFFFFFFFFFFFF7LL;
      v49[0] &= ~8uLL;
      if ( (v29 & 0xFFFFFFFFFFFFFFF0LL) != 0 )
      {
        v34 = v30 | v31;
        v35 = (_QWORD *)(v28 & 0xFFFFFFFFFFFFFFF0LL);
        if ( (v28 & 8) != 0 )
        {
          v34 |= *(__int64 *)((char *)&qword_18 + (v28 & 0xFFFFFFFFFFFFFFF0LL));
          v35 = (_QWORD *)*v35;
        }
        v20 = sub_A70C40((__int64)v24, (__int64)v35, v34);
      }
      else
      {
        v20 = v28 & 0xFFFFFFFFFFFFFFF8LL | (unsigned int)v31 | (unsigned int)v30;
      }
      v24 = *(_QWORD **)(a1 + 248);
    }
    v46 = v20;
    LOBYTE(v49[0]) = 0;
    if ( !(unsigned __int8)sub_1BCBEB0(v20, v45, 0, i, &v43, v49, (__int64)v24) )
    {
      if ( v41 )
        return 1;
      else
        return (unsigned __int8)sub_AC0070(*(_QWORD **)(a1 + 248), v45, v46, v40, v18);
    }
    if ( LOBYTE(v49[0]) )
      *v7 |= 0x20u;
    if ( !(unsigned __int8)sub_ABFC30(*(_QWORD **)(a1 + 248), (__int64 *)&v45, (__int64 *)&v46, 1) )
      break;
  }
  if ( v41 )
  {
    return 2;
  }
  else
  {
    v27 = !sub_1BC70C0(v45, v46);
    v36 = 2;
    if ( v27 )
      return 0;
    return v36;
  }
}
