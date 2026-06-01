void __fastcall sub_1371840(unsigned __int64 *src, unsigned __int64 *a2)
{
  unsigned __int64 *v2; // rbx
  unsigned __int64 *v4; // r13
  unsigned __int64 v5; // r12
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  unsigned int v8; // ecx
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  unsigned __int64 *v11; // rax
  unsigned __int64 *v12; // rdi
  unsigned __int64 v13; // rdx
  __int64 v14; // rcx
  unsigned int v15; // esi
  unsigned __int64 v16; // rdx
  __int64 v17; // rcx

  if ( src != a2 )
  {
    v2 = src + 1;
    if ( a2 != src + 1 )
    {
      v4 = &src[((unsigned __int64)((char *)(a2 - 2) - (char *)src) >> 3) + 2];
      do
      {
        v5 = *v2;
        v6 = *v2;
        while ( 1 )
        {
          v7 = *(_QWORD *)(v6 + 8);
          if ( !v7 )
            break;
          v6 = v7 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v7 & 4) == 0 || !v6 )
            goto LABEL_8;
        }
        v6 = 0;
LABEL_8:
        v8 = *(_DWORD *)(v6 + 72);
        v9 = *src;
        while ( 1 )
        {
          v10 = *(_QWORD *)(v9 + 8);
          if ( !v10 )
            break;
          v9 = v10 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v10 & 4) == 0 || !v9 )
          {
            if ( v8 < *(_DWORD *)(v9 + 72) )
            {
              if ( src != v2 )
                memmove(src + 1, src, (char *)v2 - (char *)src);
              *src = v5;
              goto LABEL_16;
            }
            break;
          }
        }
        v11 = v2;
LABEL_19:
        v12 = v11;
        v13 = v5;
        while ( 1 )
        {
          v14 = *(_QWORD *)(v13 + 8);
          if ( !v14 )
            break;
          v13 = v14 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v14 & 4) == 0 || !v13 )
            goto LABEL_23;
        }
        v13 = 0;
LABEL_23:
        v15 = *(_DWORD *)(v13 + 72);
        v16 = *(v11 - 1);
        while ( 1 )
        {
          v17 = *(_QWORD *)(v16 + 8);
          if ( !v17 )
            break;
          v16 = v17 & 0xFFFFFFFFFFFFFFF8LL;
          if ( (v17 & 4) == 0 || !v16 )
          {
            --v11;
            if ( v15 >= *(_DWORD *)(v16 + 72) )
              break;
            v11[1] = *v11;
            goto LABEL_19;
          }
        }
        *v12 = v5;
LABEL_16:
        ++v2;
      }
      while ( v2 != v4 );
    }
  }
}
