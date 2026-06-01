__int64 __fastcall sub_BDC890(__int64 a1, unsigned int a2)
{
  __int64 v2; // r8
  __int64 **v3; // rax
  __int64 **v4; // r9
  char v5; // r11
  char v6; // bp
  char v7; // bl
  int v8; // r10d
  int v9; // edi
  __int64 *v10; // rdx
  unsigned int v11; // esi
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  int v14; // ecx
  __int64 v16; // r13
  _QWORD *v17; // rcx
  __int64 v18; // r12
  _QWORD *v19; // rcx
  __int64 v20; // rsi

  v2 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 32) + 8LL * a2) + 8LL);
  v3 = *(__int64 ***)(v2 + 56);
  if ( !v3 )
    return 0;
  v4 = &v3[*((unsigned int *)v3 - 1)];
  if ( v3 == v4 )
    return 0;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  v8 = *(_DWORD *)(a1 + 8);
  v9 = 0;
  do
  {
    v10 = *v3;
    v11 = 0;
    v12 = **v3;
    if ( (*((_BYTE *)*v3 + 44) & 8) == 0 )
      v11 = *(_DWORD *)(v12 + 24);
    v13 = *(_DWORD **)(*(_QWORD *)(v12 + 16) + 24LL);
    if ( v13 && *v13 == v8 )
    {
      v14 = v13[1];
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          if ( v2 == *(_QWORD *)(v10[14] + 8) && !v7 )
          {
            ++v9;
            v7 = 1;
          }
          if ( v9 <= 1 )
          {
            if ( v11 <= 1 )
              goto LABEL_4;
            v19 = v10 + 15;
            v20 = (__int64)&v10[v11 + 14];
            while ( 1 )
            {
              if ( v2 == *(_QWORD *)(*v19 + 8LL) && !v5 )
              {
                if ( ++v9 == 2 )
                  return 1;
                if ( v19 + 1 == (_QWORD *)v20 )
                {
                  v5 = 1;
                  goto LABEL_4;
                }
                v19 += 2;
                v5 = 1;
                if ( (_QWORD *)v20 == v19 )
                  goto LABEL_4;
              }
              if ( ++v19 == (_QWORD *)v20 )
                goto LABEL_4;
            }
          }
        }
        else
        {
          if ( v14 != 2 )
            goto LABEL_4;
          if ( v2 != *(_QWORD *)(v10[14] + 8) || v6 )
          {
            if ( v9 <= 1 )
              goto LABEL_4;
          }
          else
          {
            ++v9;
            v6 = 1;
            if ( v9 <= 1 )
              goto LABEL_4;
          }
        }
        return 1;
      }
      if ( v2 == *(_QWORD *)(v10[14] + 8) && !v7 )
      {
        ++v9;
        v7 = 1;
      }
      if ( v9 > 1 )
        return 1;
      v16 = v11 - 1;
      if ( (unsigned int)v16 > 1 )
      {
        v17 = v10 + 15;
        v18 = (__int64)&v10[v11 + 13];
        do
        {
          if ( v2 == *(_QWORD *)(*v17 + 8LL) && !v5 )
          {
            if ( ++v9 == 2 )
              return 1;
            if ( (_QWORD *)v18 == v17 + 1 )
            {
              v5 = 1;
              break;
            }
            v17 += 2;
            v5 = 1;
            if ( (_QWORD *)v18 == v17 )
              break;
          }
          ++v17;
        }
        while ( (_QWORD *)v18 != v17 );
      }
      if ( v2 == *(_QWORD *)(v10[v16 + 14] + 8) && !v6 )
      {
        if ( ++v9 != 2 )
        {
          v6 = 1;
          goto LABEL_4;
        }
        return 1;
      }
    }
LABEL_4:
    ++v3;
  }
  while ( v4 != v3 );
  return 0;
}

