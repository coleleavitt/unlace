__int64 __fastcall sub_11EAB60(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  unsigned int v6; // r14d
  int v7; // r15d
  __int64 result; // rax
  int v9; // eax
  _QWORD *v10; // r15
  __int64 v11; // rdx
  unsigned int v12; // r12d
  _QWORD *v13; // r13
  _QWORD *v14; // r14
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // r15
  __int64 v18; // rdx
  unsigned int v19; // r12d
  _QWORD *v20; // r14
  _QWORD *v21; // rbx
  __int64 v22; // rax
  _QWORD *v23; // r15
  __int64 v24; // rdx
  unsigned int v25; // r12d
  _QWORD *v26; // r14
  _QWORD *v27; // rbx
  __int64 v28; // rax
  _QWORD *v29; // [rsp+8h] [rbp-70h]
  _QWORD *v30; // [rsp+8h] [rbp-70h]
  __int64 v31; // [rsp+10h] [rbp-68h] BYREF
  _QWORD *v32; // [rsp+18h] [rbp-60h]
  unsigned int v33; // [rsp+20h] [rbp-58h]
  _QWORD *v34; // [rsp+28h] [rbp-50h]

  v6 = sub_11EA4A0(a2, a3);
  v7 = sub_229CAC0(a2, a3);
  sub_22BB2C0(a1, v6, 0);
  if ( v6 )
    sub_22BAF00(a1, a2, a3);
  result = (unsigned int)(v7 - 14);
  if ( (unsigned int)result > 1 && v7 != 10 )
    return result;
  v9 = *(_DWORD *)(a1 + 44);
  if ( v9 == 5 )
  {
    sub_10DC500((__int64)&v31, a4, 0x97Du);
    v17 = v32;
    v18 = v31;
    v19 = v33;
    v20 = v34;
    v29 = v32 - 2;
    while ( v20 != (_QWORD *)v18 )
    {
      while ( 1 )
      {
        v21 = (_QWORD *)(v18 + 8);
        v22 = *(_QWORD *)(*(_QWORD *)v18 + 16LL);
        if ( !v22 )
          v22 = *(_QWORD *)v18;
        *(_BYTE *)(v22 + 44) |= 2u;
        if ( v21 != v17 )
          break;
LABEL_30:
        v18 = (__int64)v17;
        if ( v20 == v17 )
          goto LABEL_31;
      }
      if ( v19 )
      {
        while ( !*v21 || !(unsigned __int8)sub_21B9810(*v21, v19) )
        {
          if ( v17 == ++v21 )
            goto LABEL_30;
        }
        v18 = (__int64)v21;
      }
      else
      {
        v18 = (__int64)&v21[(((unsigned __int64)v29 - v18) >> 3) + 1];
      }
    }
LABEL_31:
    v9 = *(_DWORD *)(a1 + 44);
    if ( v9 != 28 )
      goto LABEL_7;
    goto LABEL_32;
  }
  if ( v9 == 28 )
  {
LABEL_32:
    sub_10DC500((__int64)&v31, a4, 0xB97u);
    v23 = v32;
    v24 = v31;
    v25 = v33;
    v26 = v34;
    v30 = v32 - 2;
    while ( v26 != (_QWORD *)v24 )
    {
      while ( 1 )
      {
        v27 = (_QWORD *)(v24 + 8);
        v28 = *(_QWORD *)(*(_QWORD *)v24 + 16LL);
        if ( !v28 )
          v28 = *(_QWORD *)v24;
        *(_BYTE *)(v28 + 44) |= 2u;
        if ( v27 != v23 )
          break;
LABEL_41:
        v24 = (__int64)v23;
        if ( v26 == v23 )
          goto LABEL_42;
      }
      if ( v25 )
      {
        while ( !*v27 || !(unsigned __int8)sub_21B9810(*v27, v25) )
        {
          if ( ++v27 == v23 )
            goto LABEL_41;
        }
        v24 = (__int64)v27;
      }
      else
      {
        v24 = (__int64)&v27[(((unsigned __int64)v30 - v24) >> 3) + 1];
      }
    }
LABEL_42:
    v9 = *(_DWORD *)(a1 + 44);
  }
LABEL_7:
  if ( v9 == 27 )
  {
    sub_10DC500((__int64)&v31, a4, 0xB66u);
    v10 = v32;
    v11 = v31;
    v12 = v33;
    v13 = v34;
    v14 = v32 - 2;
    while ( v13 != (_QWORD *)v11 )
    {
      v15 = (_QWORD *)(v11 + 8);
      v16 = *(_QWORD *)(*(_QWORD *)v11 + 16LL);
      if ( !v16 )
        v16 = *(_QWORD *)v11;
      *(_BYTE *)(v16 + 44) |= 2u;
      if ( v15 == v10 )
      {
LABEL_19:
        v11 = (__int64)v10;
      }
      else if ( v12 )
      {
        while ( !*v15 || !(unsigned __int8)sub_21B9810(*v15, v12) )
        {
          if ( ++v15 == v10 )
            goto LABEL_19;
        }
        v11 = (__int64)v15;
      }
      else
      {
        v11 = (__int64)&v15[(((unsigned __int64)v14 - v11) >> 3) + 1];
      }
    }
  }
  sub_22BA940(a1, 0);
  return sub_22BA500(a1, 5);
}
