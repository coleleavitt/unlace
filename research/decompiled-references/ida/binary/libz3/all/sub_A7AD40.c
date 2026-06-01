__m128 *__fastcall sub_A7AD40(__m128 *a1, _QWORD *a2, __int64 a3, __int64 a4)
{
  bool v5; // zf
  _DWORD *v6; // rax
  __int64 v7; // r12
  int v8; // ecx
  int v9; // r8d
  int v10; // r9d
  _DWORD *v11; // rax
  bool v12; // r12
  __int64 v13; // rdi
  __int64 v14; // rax
  void *v15; // rbx
  _DWORD *v17; // rax
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // [rsp+0h] [rbp-68h] BYREF
  _QWORD *v21; // [rsp+8h] [rbp-60h]
  _QWORD v22[2]; // [rsp+10h] [rbp-58h] BYREF
  _QWORD v23[9]; // [rsp+20h] [rbp-48h] BYREF

  v5 = *(_WORD *)(a4 + 4) == 0;
  v20 = a2[1];
  if ( v5 )
  {
    v6 = *(_DWORD **)(*(_QWORD *)(a4 + 16) + 24LL);
    if ( v6 )
    {
      if ( *v6 == 5 && !v6[1] )
      {
        v18 = a2[2];
LABEL_20:
        v19 = sub_15E1B70(v18);
        *a1 = _mm_loadh_ps((const double *)&v20);
        if ( v19 )
          ++*(_DWORD *)(v19 + 8);
        return a1;
      }
    }
  }
  if ( !*(_WORD *)(a3 + 4) )
  {
    v17 = *(_DWORD **)(*(_QWORD *)(a3 + 16) + 24LL);
    if ( v17 )
    {
      if ( *v17 == 5 && !v17[1] )
      {
        v18 = a2[2];
        goto LABEL_20;
      }
    }
  }
  v22[0] = 0;
  v22[1] = 0;
  v7 = sub_15D1F10(a3);
  v23[0] = 1;
  v23[1] = 0;
  v21 = v23;
  sub_182CBA0(qword_1C7F2C0, v23);
  v11 = *(_DWORD **)(v7 + 24);
  v12 = 0;
  BYTE4(v23[0]) &= ~1u;
  LODWORD(v23[0]) = 1;
  if ( v11 && *v11 == 5 )
    v12 = v11[1] == 1;
  v13 = a2[3];
  if ( !v13 )
  {
    sub_16669E0(a2 + 2);
    v13 = a2[3];
  }
  sub_166A700(v13, (unsigned int)v22, v12, v8, v9, v10);
  sub_15E1B70(a2[2]);
  v14 = sub_15E1B70(a2[2]);
  *a1 = _mm_loadh_ps((const double *)&v20);
  if ( v14 )
    ++*(_DWORD *)(v14 + 8);
  v15 = qword_1C7F2C0;
  sub_182CBA0(qword_1C7F2C0, v22);
  sub_182CBA0(v15, v21);
  return a1;
}

