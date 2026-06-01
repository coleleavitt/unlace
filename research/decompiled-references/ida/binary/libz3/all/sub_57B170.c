_QWORD *__fastcall sub_57B170(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5, __int64 a6)
{
  _QWORD *v9; // rbx
  _QWORD *v11; // r12
  __int64 v12; // rdx
  int v13; // r9d
  __int64 v14; // rcx
  int v15; // esi
  __int64 v16; // rcx
  int v17; // edx
  _QWORD *v18; // r12
  __int64 v19; // rax
  int v20; // esi
  int v21; // r9d
  _QWORD *v23; // [rsp+28h] [rbp-48h]
  _QWORD *v24; // [rsp+28h] [rbp-48h]
  __int64 v25; // [rsp+30h] [rbp-40h] BYREF
  _QWORD v26[7]; // [rsp+38h] [rbp-38h] BYREF

  sub_180C5A0(v26, "product_relation");
  if ( v26[0] == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL)
    && (sub_180C5A0(v26, "product_relation"), *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) == v26[0]) )
  {
    v9 = (_QWORD *)sub_186B270(0x58u);
    v11 = sub_5790D0((const void *)a3);
    v23 = sub_5790D0((const void *)a2);
    sub_57F300(v9, v23 + 2, v11 + 2, a4, a5, a6);
    v12 = v11[4];
    v9[5] = 0;
    *v9 = &off_1C51600;
    v9[6] = 0;
    v9[4] = a1;
    v9[7] = 0;
    v9[8] = 0;
    v9[9] = 0;
    v9[10] = 0;
    if ( v12 )
      v13 = *(_DWORD *)(v12 - 4);
    else
      v13 = 0;
    v14 = v23[4];
    if ( v14 )
      v15 = *(_DWORD *)(v14 - 4);
    else
      v15 = 0;
    sub_580290((_DWORD)v9, (_DWORD)v23 + 16, v15, v14, (_DWORD)v11 + 16, v13, v12, a4, a5, a6);
  }
  else
  {
    sub_180C5A0(v26, "product_relation");
    if ( v26[0] == *(_QWORD *)(*(_QWORD *)(a2 + 8) + 16LL) )
    {
      v9 = (_QWORD *)sub_186B270(0x58u);
      v24 = sub_5790D0((const void *)a2);
      sub_57F300(v9, v24 + 2, a3 + 16, a4, a5, a6);
      v9[5] = 0;
      *v9 = &off_1C51600;
      v16 = v24[4];
      v9[6] = 0;
      v9[4] = a1;
      v9[7] = 0;
      v9[8] = 0;
      v9[9] = 0;
      v9[10] = 0;
      v26[0] = a3;
      if ( v16 )
        v17 = *(_DWORD *)(v16 - 4);
      else
        v17 = 0;
      sub_580290((_DWORD)v9, (_DWORD)v24 + 16, v17, v16, a3 + 16, 1, (__int64)v26, a4, a5, a6);
    }
    else
    {
      sub_180C5A0(v26, "product_relation");
      if ( v26[0] == *(_QWORD *)(*(_QWORD *)(a3 + 8) + 16LL) )
      {
        v9 = (_QWORD *)sub_186B270(0x58u);
        v18 = sub_5790D0((const void *)a3);
        sub_57F300(v9, a2 + 16, v18 + 2, a4, a5, a6);
        v9[5] = 0;
        *v9 = &off_1C51600;
        v26[0] = a2;
        v19 = v18[4];
        v9[4] = a1;
        v20 = a2 + 16;
        v9[6] = 0;
        v9[7] = 0;
        v9[8] = 0;
        v9[9] = 0;
        v9[10] = 0;
        if ( v19 )
          v21 = *(_DWORD *)(v19 - 4);
        else
          v21 = 0;
        sub_580290((_DWORD)v9, v20, 1, (unsigned int)v26, (_DWORD)v18 + 16, v21, v19, a4, a5, a6);
      }
      else if ( *(_DWORD *)(a3 + 24) == *(_DWORD *)(a2 + 24) )
      {
        return nullptr;
      }
      else
      {
        v9 = (_QWORD *)sub_186B270(0x58u);
        sub_57F300(v9, a2 + 16, a3 + 16, a4, a5, a6);
        v26[0] = a3;
        v9[5] = 0;
        *v9 = &off_1C51600;
        v25 = a2;
        v9[4] = a1;
        v9[6] = 0;
        v9[7] = 0;
        v9[8] = 0;
        v9[9] = 0;
        v9[10] = 0;
        sub_580290((_DWORD)v9, a2 + 16, 1, (unsigned int)&v25, a3 + 16, 1, (__int64)v26, a4, a5, a6);
      }
    }
  }
  return v9;
}

