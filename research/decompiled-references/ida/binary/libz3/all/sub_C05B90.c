void __fastcall sub_C05B90(__int64 a1)
{
  __int64 *v1; // rbp
  __int64 *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // rax
  __int64 *v6; // rdx
  __int64 v7; // rsi
  int v8; // edi
  __int64 *v9; // rcx
  __int64 v10; // rdi
  __int64 *v11; // r8
  __int64 *v12; // rax
  __int64 v13; // rdi

  v1 = *(__int64 **)(a1 + 88);
  if ( v1 )
  {
    v3 = &v1[*((unsigned int *)v1 - 1)];
    while ( v3 != v1 )
    {
      while ( 1 )
      {
        v4 = *v1;
        v5 = *(unsigned int *)(a1 + 56);
        v6 = *(__int64 **)(a1 + 48);
        v7 = *(unsigned int *)(*v1 + 12);
        v8 = v5 - 1;
        v5 *= 16;
        v9 = (__int64 *)((char *)v6 + v5);
        v10 = 16LL * ((unsigned int)v7 & v8);
        v11 = &v6[(unsigned __int64)v10 / 8];
        if ( v10 != v5 )
          break;
LABEL_15:
        if ( v6 == v11 )
        {
LABEL_23:
          ++v1;
          sub_1348400(0, v7, v6, v9, v11);
          if ( v3 == v1 )
            return;
        }
        else
        {
          while ( 1 )
          {
            while ( 1 )
            {
              v13 = *v6;
              if ( (unsigned __int64)*v6 > 1 )
                break;
              if ( !v13 )
                goto LABEL_10;
              v6 += 2;
              if ( v11 == v6 )
                goto LABEL_23;
            }
            if ( *(_DWORD *)(v13 + 12) == (_DWORD)v7 && v4 == v13 )
              break;
            v6 += 2;
            if ( v11 == v6 )
              goto LABEL_23;
          }
          v12 = v6;
LABEL_13:
          ++v1;
          sub_1348400(v12[1], v7, v6, v9, v11);
          if ( v3 == v1 )
            return;
        }
      }
      v12 = &v6[(unsigned __int64)v10 / 8];
      while ( 1 )
      {
        v13 = *v12;
        if ( (unsigned __int64)*v12 <= 1 )
          break;
        if ( *(_DWORD *)(v13 + 12) == (_DWORD)v7 && v4 == v13 )
          goto LABEL_13;
LABEL_7:
        v12 += 2;
        if ( v9 == v12 )
          goto LABEL_15;
      }
      if ( v13 )
        goto LABEL_7;
LABEL_10:
      sub_1348400(v13, v7, v6, v9, v11);
      ++v1;
    }
  }
}

