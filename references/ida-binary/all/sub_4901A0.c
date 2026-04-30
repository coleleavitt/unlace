__int64 __fastcall sub_4901A0(__int64 a1, __int64 a2, double a3)
{
  unsigned __int64 v3; // r12
  __int64 (**v5)(void); // rax
  char v6; // al
  __int64 v7; // rdx
  __int64 *v8; // rax
  const char *v9; // rdx
  __int64 v10; // rsi
  __int64 *v11; // rax
  __int64 **v12; // rcx
  unsigned __int64 v14; // r8
  unsigned __int64 v15; // r10
  __int64 v16; // r11
  __int64 *v17; // rax
  _QWORD *v18; // rdi
  __int64 *v19; // rdi
  __int64 v20; // r8
  __int64 *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // rdx
  unsigned __int64 v24; // [rsp+Fh] [rbp-29h] BYREF
  char v25; // [rsp+17h] [rbp-21h]
  unsigned __int64 v26; // [rsp+18h] [rbp-20h]

  v3 = -1;
  v5 = *(__int64 (***)(void))a1;
  v26 = __readfsqword(0x28u);
  *(_BYTE *)(a1 + 64) = 1;
  v6 = (*v5)();
  *(_BYTE *)(a1 + 64) = 0;
  if ( !v6 )
    return v3;
  v7 = *(_QWORD *)(a1 + 72);
  v8 = *(__int64 **)(v7 + 216);
  if ( !v8 )
  {
    v8 = *(__int64 **)(v7 + 208);
    v9 = &s1;
    if ( !*(_QWORD *)(a2 + 8) )
      goto LABEL_4;
    goto LABEL_14;
  }
  v9 = &s1;
  if ( *(_QWORD *)(a2 + 8) )
LABEL_14:
    v9 = *(const char **)a2;
LABEL_4:
  v10 = *v8;
  v25 = 0;
  v24 = -1;
  dirtree_resolve_path(&v24, v10, v9, a3);
  v3 = v24;
  if ( v24 != -1 )
  {
    if ( !v25 )
      return -1;
    if ( sub_487330((_QWORD *)(a1 + 8), v24) )
    {
      if ( !*(_QWORD *)(a1 + 32) )
      {
        v11 = *(__int64 **)(a1 + 24);
        v12 = (__int64 **)(a1 + 24);
        if ( !v11 )
          return v3;
        while ( v3 != v11[1] )
        {
          v12 = (__int64 **)v11;
          if ( !*v11 )
            return v3;
          v11 = (__int64 *)*v11;
        }
        v19 = *v12;
        v15 = (unsigned __int64)(*v12)[1] % *(_QWORD *)(a1 + 16);
        v16 = 8 * v15;
LABEL_25:
        v20 = *(_QWORD *)(a1 + 8);
        v21 = (__int64 *)*v19;
        if ( v12 == *(__int64 ***)(v20 + v16) )
        {
          if ( v21 )
          {
            v23 = (unsigned __int64)v21[1] % *(_QWORD *)(a1 + 16);
            if ( v15 != v23 )
            {
              *(_QWORD *)(v20 + 8 * v23) = v12;
              *(_QWORD *)(*(_QWORD *)(a1 + 8) + v16) = 0;
              v21 = (__int64 *)*v19;
            }
          }
          else
          {
            *(_QWORD *)(v20 + v16) = 0;
            v21 = (__int64 *)*v19;
          }
        }
        else if ( v21 )
        {
          v22 = (unsigned __int64)v21[1] % *(_QWORD *)(a1 + 16);
          if ( v15 != v22 )
          {
            *(_QWORD *)(v20 + 8 * v22) = v12;
            v21 = (__int64 *)*v19;
          }
        }
        *v12 = v21;
        operator delete(v19, 0x10u);
        --*(_QWORD *)(a1 + 32);
        return v3;
      }
      v14 = *(_QWORD *)(a1 + 16);
      v12 = *(__int64 ***)(*(_QWORD *)(a1 + 8) + 8 * (v3 % v14));
      v15 = v3 % v14;
      v16 = 8 * (v3 % v14);
      if ( !v12 )
        return v3;
      v17 = *v12;
      if ( v3 == (*v12)[1] )
      {
LABEL_23:
        if ( !v12 )
          return v3;
        v19 = *v12;
        goto LABEL_25;
      }
      while ( 1 )
      {
        v18 = (_QWORD *)*v17;
        if ( !*v17 )
          break;
        v12 = (__int64 **)v17;
        if ( v3 % v14 != v18[1] % v14 )
          break;
        v17 = (__int64 *)*v17;
        if ( v3 == v18[1] )
          goto LABEL_23;
      }
    }
  }
  return v3;
}
