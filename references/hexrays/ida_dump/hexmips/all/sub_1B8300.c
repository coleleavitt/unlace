void __fastcall sub_1B8300(int *src, char *a2, __int64 a3)
{
  int *v4; // r12
  __int64 v7; // rdi
  __int64 v8; // rax
  __int64 *v9; // r11
  __int64 v10; // rsi
  int v11; // r13d
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // rdx
  size_t v15; // r13
  void *v16; // rax
  void *v17; // rax
  void *v18; // r8
  int *v19; // rax
  __int64 v20; // rdx
  __int64 v21; // rsi

  if ( src != (int *)a2 )
  {
    v4 = src + 1;
    if ( a2 != (char *)(src + 1) )
    {
      while ( 1 )
      {
        v9 = *(__int64 **)(a3 + 24);
        v10 = *v9;
        v11 = *v4;
        v12 = 24LL * *v4;
        v13 = *v9 + v12;
        if ( *(_QWORD *)(v13 + 8) )
          break;
        v14 = *(_QWORD *)(a3 + 8);
        if ( v14 )
        {
LABEL_12:
          v15 = 4 * v14;
          v16 = (void *)qalloc_or_throw(4 * v14);
          v17 = memcpy(v16, *(const void **)a3, v15);
          v9 = *(__int64 **)(a3 + 24);
          v18 = v17;
          v10 = *v9;
          v11 = *v4;
          v12 = 24LL * *v4;
          v13 = *v9 + v12;
          if ( !*(_QWORD *)(v13 + 8) )
          {
            v19 = v4;
            goto LABEL_18;
          }
LABEL_13:
          v19 = v4 - 1;
          v20 = *(v4 - 1);
          v21 = v10 + 24 * v20;
          while ( !*(_QWORD *)(v21 + 8) || **(_QWORD **)v13 < **(_QWORD **)v21 )
          {
            v19[1] = v20;
            v13 = *v9 + v12;
            v20 = *(v19 - 1);
            v21 = *v9 + 24 * v20;
            if ( !*(_QWORD *)(v13 + 8) )
              goto LABEL_18;
            --v19;
          }
          ++v19;
LABEL_18:
          *v19 = v11;
          if ( !v18 )
            goto LABEL_9;
          ++v4;
          qfree(v18);
          if ( a2 == (char *)v4 )
            return;
        }
        else
        {
LABEL_9:
          if ( a2 == (char *)++v4 )
            return;
        }
      }
      v7 = *src;
      v8 = v10 + 24 * v7;
      if ( !*(_QWORD *)(v8 + 8) || **(_QWORD **)v13 < **(_QWORD **)v8 )
      {
        if ( (char *)v4 - (char *)src <= 4 )
        {
          if ( (char *)v4 - (char *)src == 4 )
            *v4 = v7;
        }
        else
        {
          memmove(src + 1, src, (char *)v4 - (char *)src);
        }
        *src = v11;
        goto LABEL_9;
      }
      v14 = *(_QWORD *)(a3 + 8);
      v18 = nullptr;
      if ( !v14 )
        goto LABEL_13;
      goto LABEL_12;
    }
  }
}
