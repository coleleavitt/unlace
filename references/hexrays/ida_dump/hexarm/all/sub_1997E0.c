__int64 __fastcall sub_1997E0(__int64 a1, __int64 a2, int a3, unsigned __int64 a4, int a5)
{
  __int64 v10; // rax
  _DWORD *v11; // r8
  int v12; // ecx
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // edx
  __int64 v16; // rsi
  _DWORD *v17; // r12
  int v18; // ecx
  unsigned __int64 v19; // rdi
  char v20; // bp
  __int64 v21; // rsi
  int v22; // ecx
  int v24; // edi
  _DWORD *v25; // rax

  v10 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 48) + 24LL))(*(_QWORD *)(a1 + 48));
  v11 = (_DWORD *)(a2 + 24);
  v12 = *(__int16 *)(v10 + 6);
  v13 = v10;
  v14 = v12;
  if ( v12 != a3 )
  {
    v15 = 0;
    if ( *(__int16 *)(v13 + 8) != a3 )
      return v15;
    v11 = (_DWORD *)(a2 + 28);
  }
  v16 = (unsigned int)*(char *)(v13 + 11);
  if ( 2 * (_DWORD)v16 != a5 )
  {
    v15 = 0;
    if ( (_DWORD)v16 != a5 )
      return v15;
    v17 = nullptr;
    goto LABEL_7;
  }
  v24 = *(__int16 *)(v13 + 8);
  if ( (__int16)v12 < *(__int16 *)(v13 + 8) )
  {
    if ( v12 + (_DWORD)v16 == v24 )
    {
LABEL_21:
      if ( (__int16)v12 > *(__int16 *)(v13 + 8) )
        v14 = *(__int16 *)(v13 + 8);
      goto LABEL_23;
    }
  }
  else if ( v12 == (_DWORD)v16 + v24 )
  {
    goto LABEL_21;
  }
  v14 = -1;
LABEL_23:
  v15 = 0;
  if ( a3 != v14 )
    return v15;
  v25 = (_DWORD *)(a2 + 28);
  v17 = (_DWORD *)(a2 + 24);
  if ( v12 == a3 )
    v17 = v25;
LABEL_7:
  v18 = 8 * v16;
  v19 = a4 >> (8 * *(_BYTE *)(v13 + 11));
  v20 = *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 48) + 280LL) + 1496LL) + 145LL);
  if ( !v20 )
    v19 = a4;
  if ( (unsigned __int64)v18 <= 0x3F )
    v19 &= (1LL << v18) - 1;
  *v11 = sub_32AEF0(v19, v16, 0);
  if ( v17 )
  {
    v21 = (unsigned int)*(char *)(v13 + 11);
    v22 = 8 * v21;
    if ( !v20 )
      a4 >>= 8 * *(_BYTE *)(v13 + 11);
    if ( (unsigned __int64)v22 <= 0x3F )
      a4 &= (1LL << v22) - 1;
    *v17 = sub_32AEF0(a4, v21, 0);
  }
  return 1;
}
