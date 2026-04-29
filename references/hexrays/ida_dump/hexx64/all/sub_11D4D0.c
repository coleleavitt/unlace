__int64 __fastcall sub_11D4D0(__int64 a1, _QWORD *a2, __int64 **a3, unsigned __int64 a4)
{
  __int64 *v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rbx
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  int v12; // ecx
  _QWORD *v13; // rax

  if ( a3[1] != (__int64 *)&byte_1 )
    return 0;
  sub_11CDA0(a1);
  v7 = *a3;
  v8 = **a3;
  v9 = *(_QWORD *)(*(_QWORD *)(a2[187] + 24LL) + 16LL) & (v8 - a2[180]);
  if ( v9 >= 0 && (v10 = v7[1], v10 < a4) && v9 < a4 - v10 )
  {
    *(_BYTE *)a1 = 5;
    v13 = (_QWORD *)j__qalloc_or_throw(16);
    *v13 = a2;
    v13[1] = v9;
    *(_QWORD *)(a1 + 8) = v13;
  }
  else
  {
    v11 = a2[188];
    *(_BYTE *)a1 = 6;
    v12 = 8 * *(_DWORD *)(v11 + 84);
    if ( (unsigned __int64)v12 <= 0x3F )
      v8 &= ~(-1LL << v12);
    *(_QWORD *)(a1 + 8) = v8;
  }
  *(_DWORD *)(a1 + 4) = v7[1];
  return 1;
}
