__int64 __fastcall sub_1598A90(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  unsigned int v6; // ebp
  _QWORD *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // rdi
  __int64 v16; // r8
  __int64 v17; // r9
  unsigned __int64 *v19; // rax
  __int64 *v20; // rcx
  unsigned __int64 v21; // rdx
  __int64 *v22; // rax
  unsigned __int64 *v23; // rax
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // rdx
  unsigned __int64 v26; // rax
  __int64 *v27; // rax

  v7 = sub_F63270(*(_QWORD *)(a1 & 0xFFFFFFFFFFFFFFF0LL), a2, a3, a4, a5, a6);
  if ( v7 )
  {
    v12 = (__int64)v7;
    if ( (*((_BYTE *)v7 + 29) & 1) == 0 )
    {
LABEL_3:
      v6 = 0;
LABEL_4:
      if ( (*(_BYTE *)(v12 + 28) & 0x7Fu) - 60 > 1 )
        return v6;
      v15 = *(_QWORD *)(sub_BBF290(v12) + 48);
      if ( (*(_BYTE *)(v15 + 29) & 1) == 0 )
        return v6;
      v23 = sub_B8C3D0(v15, a2, v13, v14, v16, v17);
      v24 = *v23;
      v25 = *v23 + 8LL * *((unsigned int *)v23 + 2);
      if ( *v23 >= v25 )
      {
        if ( v24 == v25 )
          return v6;
        v26 = *(_QWORD *)v25;
        if ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 323 )
        {
          v26 = v25 + 8;
          do
          {
            v25 = v26;
            if ( v24 == v26 )
              return v6;
            v26 += 8LL;
          }
          while ( *(_WORD *)(*(_QWORD *)v25 + 36LL) != 323 );
        }
      }
      else
      {
        v26 = *v23;
        while ( 1 )
        {
          v24 = v26;
          if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) == 323 )
            break;
          v26 += 8LL;
          if ( v25 == v26 )
            return v6;
        }
      }
      LOBYTE(v26) = v24 != v25;
      v6 |= v26;
      return v6;
    }
    v19 = sub_B8C3D0((__int64)v7, a2, v8, v9, v10, v11);
    v20 = (__int64 *)*v19;
    v21 = *v19 + 8LL * *((unsigned int *)v19 + 2);
    if ( *v19 < v21 )
    {
      v27 = (__int64 *)*v19;
      while ( 1 )
      {
        a2 = *v27;
        v20 = v27;
        if ( *(_WORD *)(*v27 + 36) == 323 )
          break;
        if ( (__int64 *)v21 == ++v27 )
          goto LABEL_3;
      }
    }
    else
    {
      if ( v20 == (__int64 *)v21 )
        goto LABEL_3;
      if ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 323 )
      {
        v22 = (__int64 *)(v21 + 8);
        do
        {
          v21 = (unsigned __int64)v22;
          if ( v20 == v22 )
            goto LABEL_3;
          a2 = *v22++;
        }
        while ( *(_WORD *)(*(_QWORD *)v21 + 36LL) != 323 );
      }
    }
    LOBYTE(v6) = v20 != (__int64 *)v21;
    goto LABEL_4;
  }
  return 0;
}
