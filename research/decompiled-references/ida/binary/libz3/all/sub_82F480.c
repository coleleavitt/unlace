void __fastcall sub_82F480(__int64 a1, unsigned int a2, int *a3, __int64 a4)
{
  unsigned int v5; // ebp
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  unsigned int v9; // eax
  int v10; // r13d
  int v11; // ecx
  __int64 v12; // rax
  int v13; // ecx
  _DWORD *v14; // r13
  unsigned int v15; // edx
  _DWORD *v16; // r15
  __int64 v17; // rdx
  _DWORD *v18; // r8
  int v19; // eax
  bool v20; // al
  int v21; // eax
  bool v22; // al
  void *v23; // [rsp+8h] [rbp-80h]
  bool v24; // [rsp+8h] [rbp-80h]
  _DWORD *v25; // [rsp+8h] [rbp-80h]
  _DWORD *v26; // [rsp+8h] [rbp-80h]
  bool v27; // [rsp+14h] [rbp-74h]
  int v28; // [rsp+14h] [rbp-74h]
  int v29; // [rsp+14h] [rbp-74h]
  __int64 v31; // [rsp+20h] [rbp-68h] BYREF
  __int64 v32; // [rsp+28h] [rbp-60h]
  __int64 v33; // [rsp+30h] [rbp-58h] BYREF
  __int64 v34; // [rsp+38h] [rbp-50h]
  __int64 v35; // [rsp+40h] [rbp-48h]

  v31 = 1;
  v32 = 0;
  v33 = 1;
  v34 = 0;
  sub_182CBA0(qword_1C7F2C0, &v33);
  BYTE4(v33) &= ~1u;
  LODWORD(v33) = 1;
  v27 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)a3, (__int64)&v31);
  v23 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, &v31);
  sub_182CBA0(v23, &v33);
  if ( v27 )
  {
    v5 = *(_DWORD *)(a1 + 192);
    goto LABEL_3;
  }
  v31 = 0;
  v32 = 0;
  v33 = 1;
  v34 = 0;
  sub_182CBA0(qword_1C7F2C0, &v33);
  BYTE4(v33) &= ~1u;
  LODWORD(v33) = 1;
  v24 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)a3, (__int64)&v31);
  sub_25A130((char *)&v31);
  if ( v24 )
  {
    v5 = *(_DWORD *)(a1 + 196);
LABEL_3:
    if ( (int)sub_FF9E10(*(_QWORD *)(a1 + 496), a2) >= 0 )
    {
      v9 = sub_852640(a1, v5, v6, v7, v8);
      sub_82F0A0(a1, v9, a2, a4, 1);
    }
    return;
  }
  v31 = 0;
  v32 = 0;
  v33 = 1;
  v34 = 0;
  v35 = 0;
  sub_27B950((__int64)qword_1C7F2C0, (__int64)&v31, a3);
  v10 = sub_182DB30(&v31);
  v11 = 3 * sub_182DB30(&v33);
  v12 = *(unsigned int *)(a1 + 896);
  v13 = v10 + v11;
  v14 = *(_DWORD **)(a1 + 888);
  v15 = v12 - 1;
  v12 *= 48;
  v16 = (_DWORD *)((char *)v14 + v12);
  v17 = 48LL * (v13 & v15);
  v18 = &v14[(unsigned __int64)v17 / 4];
  if ( v17 != v12 )
  {
    v14 = (_DWORD *)((char *)v14 + v17);
    do
    {
      v19 = v14[1];
      if ( v19 == 2 )
      {
        if ( *v14 == v13 )
        {
          v28 = v13;
          v25 = v18;
          v20 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v14 + 2), (__int64)&v31);
          v18 = v25;
          v13 = v28;
          if ( v20 )
          {
LABEL_16:
            sub_25A130((char *)&v31);
            v5 = v14[10];
            goto LABEL_3;
          }
        }
      }
      else if ( !v19 )
      {
        goto LABEL_5;
      }
      v14 += 12;
    }
    while ( v16 != v14 );
    v14 = *(_DWORD **)(a1 + 888);
  }
  for ( ; v18 != v14; v14 += 12 )
  {
    v21 = v14[1];
    if ( v21 == 2 )
    {
      if ( *v14 == v13 )
      {
        v29 = v13;
        v26 = v18;
        v22 = sub_3ED680((__int64)qword_1C7F2C0, (__int64)(v14 + 2), (__int64)&v31);
        v18 = v26;
        v13 = v29;
        if ( v22 )
          goto LABEL_16;
      }
    }
    else if ( !v21 )
    {
      break;
    }
  }
LABEL_5:
  sub_25A130((char *)&v31);
}

