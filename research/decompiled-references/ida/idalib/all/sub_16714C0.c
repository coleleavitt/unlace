_QWORD *__fastcall sub_16714C0(_QWORD *a1, __int64 a2)
{
  __int64 v2; // rdx
  __int64 v3; // rax
  _QWORD *v4; // rcx
  _QWORD *v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v18; // rdi
  __int64 v19; // rdi
  __int64 v20; // rdi

  v2 = (a2 - (__int64)a1) >> 5;
  v3 = (a2 - (__int64)a1) >> 3;
  if ( v2 > 0 )
  {
    v4 = a1;
    v5 = &a1[4 * v2];
    while ( 1 )
    {
      if ( *(_WORD *)(*v4 + 36LL) == 142 )
      {
        v15 = *(_QWORD *)(*v4 + 40LL);
        if ( v15 )
        {
          v16 = *(_QWORD *)(v15 + 16);
          if ( *(_DWORD *)v16 == 5 && *(_DWORD *)(v16 + 16) == 1718187891 && *(_BYTE *)(v16 + 20) == 116 )
            return v4;
        }
      }
      v6 = v4[1];
      if ( *(_WORD *)(v6 + 36) == 142 )
      {
        v7 = *(_QWORD *)(v6 + 40);
        if ( v7 )
        {
          v8 = *(_QWORD *)(v7 + 16);
          if ( *(_DWORD *)v8 == 5 && *(_DWORD *)(v8 + 16) == 1718187891 && *(_BYTE *)(v8 + 20) == 116 )
            return v4 + 1;
        }
      }
      v9 = v4[2];
      if ( *(_WORD *)(v9 + 36) == 142 )
      {
        v10 = *(_QWORD *)(v9 + 40);
        if ( v10 )
        {
          v11 = *(_QWORD *)(v10 + 16);
          if ( *(_DWORD *)v11 == 5 && *(_DWORD *)(v11 + 16) == 1718187891 && *(_BYTE *)(v11 + 20) == 116 )
            return v4 + 2;
        }
      }
      v12 = v4[3];
      if ( *(_WORD *)(v12 + 36) == 142 )
      {
        v13 = *(_QWORD *)(v12 + 40);
        if ( v13 )
        {
          v14 = *(_QWORD *)(v13 + 16);
          if ( *(_DWORD *)v14 == 5 && *(_DWORD *)(v14 + 16) == 1718187891 && *(_BYTE *)(v14 + 20) == 116 )
            return v4 + 3;
        }
      }
      v4 += 4;
      if ( v5 == v4 )
      {
        v3 = (a2 - (__int64)v4) >> 3;
        goto LABEL_29;
      }
    }
  }
  v4 = a1;
LABEL_29:
  switch ( v3 )
  {
    case 2LL:
LABEL_37:
      if ( *(_WORD *)(*v4 + 36LL) == 142 )
      {
        v19 = *(_QWORD *)(*v4 + 40LL);
        if ( v19 )
        {
          if ( sub_16713B0(v19) )
            return v4;
        }
      }
      ++v4;
LABEL_41:
      if ( *(_WORD *)(*v4 + 36LL) != 142 )
        return (_QWORD *)a2;
      v20 = *(_QWORD *)(*v4 + 40LL);
      if ( !v20 )
        return (_QWORD *)a2;
      if ( !sub_16713B0(v20) )
        return (_QWORD *)a2;
      return v4;
    case 3LL:
      if ( *(_WORD *)(*v4 + 36LL) == 142 )
      {
        v18 = *(_QWORD *)(*v4 + 40LL);
        if ( v18 )
        {
          if ( sub_16713B0(v18) )
            return v4;
        }
      }
      ++v4;
      goto LABEL_37;
    case 1LL:
      goto LABEL_41;
  }
  return (_QWORD *)a2;
}
