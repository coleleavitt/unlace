__int64 __fastcall register_cfgopts(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v7; // rax
  __int64 v8; // rdx
  __int64 *v9; // r12
  __int64 v10; // rax
  __int64 v11; // rcx
  unsigned int v12; // esi
  _QWORD *v14; // rax

  v7 = (__int64 *)sub_5E46D0();
  v8 = v7[1];
  v9 = v7;
  if ( v8 )
  {
    v10 = *v7;
    v11 = 0;
    while ( *(_QWORD *)(v10 + 32 * v11) != a1 )
    {
      if ( ++v11 == v8 )
      {
        v12 = 0;
        if ( !a2 )
          return v12;
        goto LABEL_11;
      }
    }
    if ( !a2 )
    {
      if ( v11 != v8 )
      {
        memmove((void *)(v10 + 32 * v11), (const void *)(v10 + 32 * v11 + 32), 32 * (v8 - v11) - 32);
        --v9[1];
        return 1;
      }
      return 0;
    }
    if ( v11 == v8 )
      goto LABEL_11;
    return 0;
  }
  else
  {
    v12 = 0;
    if ( a2 )
    {
      v10 = *v7;
LABEL_11:
      if ( v9[2] < (unsigned __int64)(v8 + 1) )
      {
        v10 = qvector_reserve(v9, v10, v8 + 1, 32);
        v8 = v9[1];
        *v9 = v10;
      }
      v14 = (_QWORD *)(32 * v8 + v10);
      *v14 = 0;
      v14[1] = 0;
      v14[2] = 0;
      v14[3] = 0;
      ++v9[1];
      *v14 = a1;
      v14[1] = a2;
      v14[2] = a3;
      v14[3] = a4;
      return 1;
    }
    return v12;
  }
}

