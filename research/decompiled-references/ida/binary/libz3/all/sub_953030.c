__int64 __fastcall sub_953030(__int64 *a1)
{
  __int64 v1; // rbx
  __int64 *v2; // r10
  __int64 *v3; // r11
  __int64 *v4; // r9
  __int64 v5; // r8
  __int64 v6; // rax
  int v7; // esi
  unsigned int v8; // edx
  __int64 *v9; // rcx
  __int64 v10; // rdx
  __int64 *v11; // rdi
  __int64 *i; // rax
  __int64 v13; // rdx
  __int64 v14; // rdx
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(); // rax

  v1 = *a1;
  v2 = *(__int64 **)(*a1 + 1184);
  *(_DWORD *)(*a1 + 1200) = 0;
  if ( v2 )
  {
    v3 = &v2[*((unsigned int *)v2 - 1)];
    if ( v2 != v3 )
    {
      v4 = *(__int64 **)(v1 + 1104);
      do
      {
        v5 = *v2;
        v6 = *(unsigned int *)(v1 + 1112);
        v7 = *(_DWORD *)(*v2 + 12);
        v8 = v6 - 1;
        v6 *= 16;
        v9 = (__int64 *)((char *)v4 + v6);
        v10 = 16LL * (v7 & v8);
        v11 = &v4[(unsigned __int64)v10 / 8];
        if ( v10 == v6 )
        {
LABEL_12:
          if ( v4 != v11 )
          {
            for ( i = v4; v11 != i; i += 2 )
            {
              v14 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v14 + 12) == v7 && v5 == v14 )
                  goto LABEL_20;
              }
              else if ( !v14 )
              {
                break;
              }
            }
          }
LABEL_24:
          BUG();
        }
        i = &v4[(unsigned __int64)v10 / 8];
        while ( 1 )
        {
          while ( 1 )
          {
            v13 = *i;
            if ( (unsigned __int64)*i > 1 )
              break;
            if ( !v13 )
              goto LABEL_24;
            i += 2;
            if ( v9 == i )
              goto LABEL_12;
          }
          if ( *(_DWORD *)(v13 + 12) == v7 && v5 == v13 )
            break;
          i += 2;
          if ( v9 == i )
            goto LABEL_12;
        }
LABEL_20:
        ++v2;
        *(_DWORD *)(i[1] + 32) = 0;
      }
      while ( v3 != v2 );
    }
  }
  sub_ADB6E0(v1 + 24);
  v15 = *(_QWORD *)(v1 + 1192);
  v16 = *(__int64 (__fastcall **)())(*(_QWORD *)v15 + 80LL);
  if ( v16 != sub_956070 )
    return ((__int64 (__fastcall *)(__int64))v16)(v15);
  *(_DWORD *)(v15 + 68) = 0;
  nullsub_631(*(_QWORD *)(v15 + 48));
  return sub_AE0330(*(_QWORD *)(v15 + 56));
}

