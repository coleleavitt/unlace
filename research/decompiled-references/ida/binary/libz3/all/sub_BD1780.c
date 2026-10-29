void __fastcall sub_BD1780(__int64 *a1)
{
  __int64 v2; // rbp
  __int64 *v3; // rdi
  __int64 *v4; // rbp
  __int64 *v5; // rbx
  __int64 v6; // rsi
  __int64 *i; // rax
  __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 *v11; // rdx
  __int64 *v12; // rax
  int v13; // ecx
  unsigned int v14; // ebx
  __int64 v15; // rbp
  __int64 *v16; // rax

  v2 = *((unsigned int *)a1 + 4);
  v3 = (__int64 *)a1[1];
  v4 = &v3[2 * v2];
  v5 = v3;
  if ( v3 != v4 )
  {
    while ( (unsigned __int64)*v5 <= 1 )
    {
      v5 += 2;
      if ( v4 == v5 )
        goto LABEL_15;
    }
    if ( v4 != v5 )
    {
      v6 = *v5;
      if ( *v5 )
        goto LABEL_12;
LABEL_7:
      for ( i = v5 + 2; v4 != v5 + 2; i = v5 + 2 )
      {
        while ( 1 )
        {
          v6 = *i;
          v5 = i;
          if ( (unsigned __int64)*i > 1 )
            break;
          i += 2;
          if ( v4 == i )
            goto LABEL_14;
        }
        if ( v4 == i )
          break;
LABEL_12:
        v8 = *a1;
        if ( (*(_DWORD *)(v6 + 8))-- != 1 )
          goto LABEL_7;
        sub_15D7BC0(v8, v6);
      }
LABEL_14:
      v3 = (__int64 *)a1[1];
    }
  }
LABEL_15:
  if ( *((_DWORD *)a1 + 5) || *((_DWORD *)a1 + 6) )
  {
    v10 = *((unsigned int *)a1 + 4);
    v11 = &v3[2 * v10];
    if ( v11 != v3 )
    {
      v12 = v3;
      v13 = 0;
      do
      {
        while ( *v12 )
        {
          *v12 = 0;
          v12 += 2;
          if ( v11 == v12 )
            goto LABEL_22;
        }
        v12 += 2;
        ++v13;
      }
      while ( v11 != v12 );
LABEL_22:
      if ( (unsigned int)v10 > 0x10 && 3 * (int)v10 < (unsigned int)(4 * v13) )
      {
        if ( v3 )
        {
          sub_186B220(v3);
          v14 = *((_DWORD *)a1 + 4);
          a1[1] = 0;
          v14 >>= 1;
          *((_DWORD *)a1 + 4) = v14;
          v15 = v14;
          v3 = (__int64 *)sub_186B270(16LL * v14);
          if ( !v14 )
          {
LABEL_28:
            a1[1] = (__int64)v3;
            *(__int64 *)((char *)a1 + 20) = 0;
LABEL_29:
            sub_186B220(v3);
            return;
          }
        }
        else
        {
          a1[1] = 0;
          *((_DWORD *)a1 + 4) = (unsigned int)v10 >> 1;
          v15 = (unsigned int)v10 >> 1;
          v3 = (__int64 *)sub_186B270(16 * v15);
        }
        v16 = v3;
        do
        {
          *v16 = 0;
          v16 += 2;
          *((_BYTE *)v16 - 8) = 0;
        }
        while ( v16 != &v3[2 * v15] );
        goto LABEL_28;
      }
    }
    *(__int64 *)((char *)a1 + 20) = 0;
  }
  if ( v3 )
    goto LABEL_29;
}

