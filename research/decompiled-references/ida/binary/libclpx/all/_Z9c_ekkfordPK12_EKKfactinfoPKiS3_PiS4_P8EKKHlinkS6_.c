__int64 __fastcall c_ekkford(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6, __int64 a7)
{
  __int64 v12; // rdx
  __int64 result; // rax
  __int64 v14; // rdi
  int *v15; // rsi
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rcx
  int *v19; // rdi
  __int64 v20; // rsi
  __int64 v21; // rsi
  __int64 n; // [rsp+0h] [rbp-48h]
  int v23; // [rsp+Ch] [rbp-3Ch]

  v23 = *(_DWORD *)(a1 + 240);
  n = 4LL * v23;
  memset((void *)(a4 + 4), 0, n);
  memset((void *)(a5 + 4), 0, n);
  if ( v23 > 0 )
  {
    v12 = 1;
    result = 0;
    v14 = (unsigned int)(v23 - 1) + 2LL;
    while ( 1 )
    {
      while ( *(int *)(a6 + 8 * v12 + 4) < 0 )
      {
LABEL_5:
        if ( ++v12 == v14 )
          goto LABEL_9;
      }
      v17 = *(int *)(a2 + 4 * v12);
      if ( (int)v17 > 0 )
      {
        v15 = (int *)(a4 + 4 * v17);
        v16 = *v15;
        *v15 = v12;
        *(_QWORD *)(a6 + 8 * v12) = (unsigned int)v16;
        if ( (_DWORD)v16 )
          *(_DWORD *)(a6 + 8 * v16 + 4) = v12;
        goto LABEL_5;
      }
      *(_DWORD *)(a6 + 8 * v12++ + 4) = ~v23;
      result = (unsigned int)(result + 1);
      if ( v12 == v14 )
      {
LABEL_9:
        v18 = 1;
        while ( 1 )
        {
          while ( *(int *)(a7 + 8 * v18 + 4) < 0 )
          {
LABEL_12:
            if ( ++v18 == v12 )
              return result;
          }
          v21 = *(int *)(a3 + 4 * v18);
          if ( (int)v21 > 0 )
          {
            v19 = (int *)(a5 + 4 * v21);
            v20 = *v19;
            *v19 = v18;
            *(_QWORD *)(a7 + 8 * v18) = (unsigned int)v20;
            if ( (_DWORD)v20 )
              *(_DWORD *)(a7 + 8 * v20 + 4) = v18;
            goto LABEL_12;
          }
          *(_DWORD *)(a7 + 8 * v18++ + 4) = ~v23;
          result = (unsigned int)(result + 1);
          if ( v18 == v12 )
            return result;
        }
      }
    }
  }
  return 0;
}

