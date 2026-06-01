void __fastcall sub_186DA30(__int64 a1, __int64 a2, __int64 a3, unsigned __int64 a4, __int64 a5, __int64 a6)
{
  bool v6; // sf
  char v7; // al
  int v8; // ebp
  int v9; // eax
  __int64 *v10; // rax
  __int64 *i; // rax
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 *v16; // rax
  unsigned __int64 *v17; // rax
  __int64 *v18; // rdx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rax
  int v21; // edx
  __int64 *j; // rax
  __int64 v23; // rcx
  char v24; // [rsp+Ch] [rbp-4Ch] BYREF
  __int64 v25; // [rsp+18h] [rbp-40h] BYREF
  char *v26; // [rsp+20h] [rbp-38h] BYREF
  __int64 v27; // [rsp+28h] [rbp-30h]
  __int64 *v28; // [rsp+30h] [rbp-28h]

  v6 = *(char *)(a2 + 28) < 0;
  v24 = a3;
  if ( v6 )
    return;
  if ( (*(_BYTE *)(a2 + 29) & 1) != 0 )
  {
    v10 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
    a3 = *v10;
    a4 = *v10 + 8LL * *((unsigned int *)v10 + 2);
    if ( *v10 < a4 )
    {
      v16 = (__int64 *)*v10;
      while ( 1 )
      {
        a3 = *v16;
        if ( *(_WORD *)(*v16 + 36) == 322 )
          break;
        if ( (__int64 *)a4 == ++v16 )
          goto LABEL_3;
      }
      if ( (__int64 *)a4 != v16 )
        return;
    }
    else if ( a3 != a4 )
    {
      if ( *(_WORD *)(*(_QWORD *)a4 + 36LL) == 322 )
        return;
      for ( i = (__int64 *)(a4 + 8); ; ++i )
      {
        a4 = (unsigned __int64)i;
        if ( i == (__int64 *)a3 )
          break;
        v12 = *i;
        if ( *(_WORD *)(v12 + 36) == 322 )
          return;
      }
    }
  }
LABEL_3:
  if ( (*(_BYTE *)(a2 + 28) & 0x7Fu) - 35 > 3 )
    return;
  v7 = *(_BYTE *)(a2 + 29);
  v25 = a2;
  if ( (v7 & 2) != 0 )
    return;
  if ( (v7 & 1) == 0 )
    goto LABEL_6;
  v17 = sub_B8C3D0(a2, a2, a3, a4, a5, a6);
  v18 = (__int64 *)*v17;
  v19 = *v17 + 8LL * *((unsigned int *)v17 + 2);
  if ( *v17 >= v19 )
  {
    if ( v18 != (__int64 *)v19 )
    {
      if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 214 )
        return;
      for ( j = (__int64 *)(v19 + 8); j != v18; ++j )
      {
        v23 = *j;
        if ( *(_WORD *)(v23 + 36) == 214 )
          return;
      }
    }
    goto LABEL_32;
  }
  v20 = *v17;
  while ( *(_WORD *)(*(_QWORD *)v20 + 36LL) != 214 )
  {
    v20 += 8LL;
    if ( v19 == v20 )
      goto LABEL_32;
  }
  if ( v19 == v20 )
  {
LABEL_32:
    a2 = v25;
LABEL_6:
    v8 = *(_DWORD *)(a2 + 24);
    if ( (unsigned __int8)sub_1020490(*(_QWORD *)(a1 + 272), v8, nullptr) )
    {
      v26 = (char *)sub_101FC50(*(_QWORD *)(a1 + 272), v8);
      v8 = (int)v26;
      LODWORD(v27) = v21;
    }
    if ( v8 < 0 )
      v8 = sub_1021B90(*(_QWORD *)(a1 + 272), v8);
    if ( !v8 || (v9 = sub_1021680(*(_QWORD *)(a1 + 272), v8)) == 0 || v9 == 3 )
    {
      if ( (unsigned int)sub_B984E0(v25) )
      {
        v27 = a1;
        v26 = &v24;
        v28 = &v25;
        if ( (*(_BYTE *)(v25 + 28) & 0x7F) == 0x24 )
          sub_186D8F0((__int64)&v26, 0x1B7Du, 0x1CE7u, v13, v14, v15);
        else
          sub_186D8F0((__int64)&v26, 0x1B7Eu, 0x1CE8u, v13, v14, v15);
      }
    }
  }
}
