bool __fastcall sub_178D980(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  bool result; // al
  char v7; // bp
  char v8; // bl
  _QWORD *v9; // rax
  _QWORD *v10; // rdx
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rcx
  __int64 v14; // rax
  _QWORD *v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  _QWORD *v19; // rdi

  result = 0;
  if ( (*(_BYTE *)(a1 + 29) & 1) != 0 )
  {
    v7 = a2;
    v8 = a2;
    v9 = sub_B8C3D0(a1, a2, a3, a4, a5, a6);
    v10 = (_QWORD *)*v9;
    v11 = 8LL * *((unsigned int *)v9 + 2);
    v12 = &v10[(unsigned __int64)v11 / 8];
    v13 = v11 >> 3;
    v14 = v11 >> 5;
    if ( v14 )
    {
      v15 = &v10[4 * v14];
      while ( *(_WORD *)(*v10 + 36LL) != 165 )
      {
        v16 = v10[1];
        if ( *(_WORD *)(v16 + 36) == 165 )
        {
          v19 = v10 + 1;
          if ( !v7 )
            return v12 != v19;
LABEL_34:
          if ( (*(_BYTE *)(v16 + 38) & 4) == 0 )
            return v12 != v19;
          v17 = v10[2];
          if ( *(_WORD *)(v17 + 36) == 165 )
            goto LABEL_36;
          goto LABEL_7;
        }
        v17 = v10[2];
        if ( *(_WORD *)(v17 + 36) == 165 )
        {
          v19 = v10 + 2;
          if ( !v7 )
            return v12 != v19;
          goto LABEL_37;
        }
LABEL_7:
        v18 = v10[3];
        if ( *(_WORD *)(v18 + 36) != 165 )
          goto LABEL_8;
        v19 = v10 + 3;
        if ( !v7 )
          return v12 != v19;
LABEL_23:
        if ( (*(_BYTE *)(v18 + 38) & 4) == 0 )
          return v12 != v19;
LABEL_8:
        v10 += 4;
        if ( v15 == v10 )
        {
          v13 = v12 - v10;
          goto LABEL_10;
        }
      }
      if ( !v7 || (*(_BYTE *)(*v10 + 38LL) & 4) == 0 )
        return v12 != v10;
      v16 = v10[1];
      v19 = v10 + 1;
      if ( *(_WORD *)(v16 + 36) != 165 )
      {
        v17 = v10[2];
        if ( *(_WORD *)(v17 + 36) != 165 )
        {
LABEL_21:
          v18 = v10[3];
          if ( *(_WORD *)(v18 + 36) != 165 )
            goto LABEL_8;
          v19 = v10 + 3;
          goto LABEL_23;
        }
LABEL_36:
        v19 = v10 + 2;
LABEL_37:
        if ( (*(_BYTE *)(v17 + 38) & 4) == 0 )
          return v12 != v19;
        goto LABEL_21;
      }
      goto LABEL_34;
    }
LABEL_10:
    if ( v13 != 2 )
    {
      if ( v13 != 3 )
      {
        if ( v13 != 1 )
          return 0;
        goto LABEL_29;
      }
      if ( *(_WORD *)(*v10 + 36LL) == 165 && (!v8 || (*(_BYTE *)(*v10 + 38LL) & 4) == 0) )
        return v12 != v10;
      ++v10;
    }
    if ( *(_WORD *)(*v10 + 36LL) == 165 && (!v8 || (*(_BYTE *)(*v10 + 38LL) & 4) == 0) )
      return v12 != v10;
    ++v10;
LABEL_29:
    if ( *(_WORD *)(*v10 + 36LL) != 165 || v8 && (*(_BYTE *)(*v10 + 38LL) & 4) != 0 )
      return 0;
    return v12 != v10;
  }
  return result;
}
