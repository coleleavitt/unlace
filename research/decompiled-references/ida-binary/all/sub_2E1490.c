__int64 __fastcall sub_2E1490(__int64 a1, int a2, __int64 a3, char a4)
{
  double v4; // xmm0_8
  __int64 v8; // r12
  __int64 v9; // rsi
  unsigned __int64 v10; // r13
  __int64 v11; // r14
  const char *v13; // rsi
  const char *v14; // rdi
  __int64 ph; // rax
  int v16; // edx
  int v17; // esi
  const char *v18; // rcx
  __int64 v19; // rax
  const char *v20; // [rsp+0h] [rbp-48h] BYREF
  __int128 v21; // [rsp+8h] [rbp-40h]
  unsigned __int64 v22; // [rsp+18h] [rbp-30h]

  v4 = 0.0;
  v22 = __readfsqword(0x28u);
  *(_QWORD *)a1 = 0;
  *(_OWORD *)(a1 + 8) = 0;
  if ( a2 == 1 )
  {
    sub_169A50((__int64 *)a1, (__int64)"0x%a", 0.0);
    if ( !a4 )
      goto LABEL_7;
    v13 = *(const char **)a3;
    v4 = 0.0;
    v20 = nullptr;
    v21 = 0;
    get_ea_name(&v20, v13, 21, 0);
    if ( (unsigned __int64)v21 > 1 )
    {
      v13 = " (%s)";
      sub_16FAA0((__int64 *)a1, (__int64)" (%s)", v20);
      v14 = v20;
      if ( !v20 )
        goto LABEL_7;
    }
    else
    {
      v14 = v20;
      if ( !v20 )
        goto LABEL_7;
    }
    *(_QWORD *)&v21 = 0;
    v4 = qfree(v14, v13);
    goto LABEL_7;
  }
  if ( a2 != 2 )
  {
    if ( *(_QWORD *)(a3 + 8) == -1 )
      return a1;
    goto LABEL_4;
  }
  sub_169A50((__int64 *)a1, (__int64)"0x%a(SP)", 0.0);
LABEL_7:
  if ( *(_QWORD *)(a3 + 8) == -1 )
    return a1;
  v8 = *(_QWORD *)(a1 + 8);
  if ( v8 )
  {
    v11 = v8 + 11;
    v10 = v8 + 12;
    v9 = *(_QWORD *)a1;
    --v8;
    if ( *(_QWORD *)(a1 + 16) >= v10 )
      goto LABEL_10;
LABEL_20:
    v19 = qvector_reserve(a1, v9, v10, 1);
    *(_QWORD *)a1 = v19;
    v9 = v19;
    goto LABEL_10;
  }
  v9 = *(_QWORD *)a1;
  v10 = 13;
  v11 = 12;
  if ( *(_QWORD *)(a1 + 16) < 0xDu )
    goto LABEL_20;
LABEL_10:
  *(_QWORD *)(a1 + 8) = v10;
  *(_BYTE *)(v9 + v11) = 0;
  qmemcpy((void *)(*(_QWORD *)a1 + v8), " defined at ", 12);
LABEL_4:
  sub_16FAA0((__int64 *)a1, (__int64)"%a", v4);
  if ( *(_WORD *)(a3 + 16) )
  {
    ph = get_ph(a1, "%a", v4);
    v16 = *(unsigned __int16 *)(a3 + 16);
    v17 = *(_DWORD *)(ph + 104);
    v18 = nullptr;
    if ( v16 >= v17 && v16 < *(_DWORD *)(ph + 108) )
      v18 = *(const char **)(*(_QWORD *)(ph + 112) + 16LL * (v16 - v17));
    sub_16FAA0((__int64 *)a1, (__int64)"(%s)", v18);
  }
  return a1;
}
