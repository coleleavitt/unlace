__int64 __fastcall sub_1804F80(__int64 a1, const void *a2, size_t a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  unsigned __int64 v12; // r12
  __int64 *v13; // rbx
  bool v14; // zf
  __int64 *v15; // rax
  __int64 v17; // rax
  __int64 *v18; // rax
  __int64 v19; // rdx

  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v7 = sub_B8C3D0(a1, (__int64)a2, a3, a4, a5, a6);
    v11 = *((unsigned int *)v7 + 2);
    v12 = *v7 + 8 * v11;
    if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
      v13 = (__int64 *)*sub_B8C3D0(a1, (__int64)a2, v11, v8, v9, v10);
    else
      v13 = nullptr;
  }
  else
  {
    v12 = 0;
    v13 = nullptr;
  }
  v14 = v12 == (_QWORD)v13;
  if ( v12 <= (unsigned __int64)v13 )
    goto LABEL_15;
LABEL_5:
  v15 = v13;
  while ( *(_WORD *)(*v15 + 36) != 147 )
  {
    if ( (__int64 *)v12 == ++v15 )
      return 0;
  }
  do
  {
LABEL_10:
    while ( 1 )
    {
      v17 = *v13;
      if ( *(_WORD *)(*v13 + 36) == 147 )
        break;
      ++v13;
    }
    if ( *(_DWORD *)(v17 + 40) == a3 && (!a3 || !memcmp(*(const void **)(v17 + 48), a2, a3)) )
      return 1;
    v14 = v12 == (_QWORD)++v13;
    if ( v12 > (unsigned __int64)v13 )
      goto LABEL_5;
LABEL_15:
    if ( v14 )
      return 0;
    v18 = (__int64 *)(v12 + 8);
  }
  while ( *(_WORD *)(*(_QWORD *)v12 + 36LL) == 147 );
  while ( v13 != v18 )
  {
    v19 = *v18++;
    if ( *(_WORD *)(v19 + 36) == 147 )
      goto LABEL_10;
  }
  return 0;
}
