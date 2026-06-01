unsigned __int64 __fastcall sub_1AC43A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  _QWORD *v7; // rdx
  __int64 v8; // rcx
  _QWORD *v9; // rsi
  __int64 v10; // rax
  __int64 v11; // rcx
  _QWORD *v12; // rbx
  _QWORD *v13; // rax
  char v14; // al
  __int64 v15; // rcx
  unsigned int v17; // ebx
  const void *v18; // rax
  __int64 v19; // rdx
  char v20; // [rsp+Fh] [rbp-B9h] BYREF
  _BYTE v21[184]; // [rsp+10h] [rbp-B8h] BYREF

  if ( *(_BYTE *)a2 == 17 )
  {
    v17 = *(_DWORD *)(a2 + 8);
    v18 = (const void *)sub_1741D10(a2);
    return sub_EB34B0(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v18, v19, v17);
  }
  v7 = *(_QWORD **)(a1 + 16);
  v8 = 8LL * *(_QWORD *)(a1 + 24);
  v9 = &v7[(unsigned __int64)v8 / 8];
  v10 = v8 >> 5;
  v11 = v8 >> 3;
  if ( v10 > 0 )
  {
    if ( *(_BYTE *)(*v7 + 8LL) == 31 )
    {
      v12 = *(_QWORD **)(a1 + 16);
    }
    else
    {
      v12 = v7 + 1;
      if ( *(_BYTE *)(v7[1] + 8LL) != 31 )
      {
        v12 = v7 + 2;
        if ( *(_BYTE *)(v7[2] + 8LL) != 31 )
        {
          v12 = v7 + 3;
          v13 = &v7[4 * v10];
          if ( *(_BYTE *)(v7[3] + 8LL) != 31 )
          {
            while ( 1 )
            {
              v12 = v7 + 4;
              if ( v7 + 4 == v13 )
              {
                v11 = v9 - v13;
                goto LABEL_15;
              }
              if ( *(_BYTE *)(v7[4] + 8LL) == 31 )
                goto LABEL_24;
              if ( *(_BYTE *)(v7[5] + 8LL) == 31 )
              {
                v12 = v7 + 5;
                goto LABEL_24;
              }
              if ( *(_BYTE *)(v7[6] + 8LL) == 31 )
              {
                v12 = v7 + 6;
                if ( v9 != v7 + 6 )
                  goto LABEL_25;
                goto LABEL_19;
              }
              if ( *(_BYTE *)(v7[7] + 8LL) == 31 )
                break;
              v7 += 4;
            }
            v12 = v7 + 7;
            if ( v9 != v7 + 7 )
              goto LABEL_25;
            goto LABEL_19;
          }
        }
      }
    }
    goto LABEL_24;
  }
  v12 = *(_QWORD **)(a1 + 16);
LABEL_15:
  if ( v11 == 2 )
    goto LABEL_35;
  if ( v11 == 3 )
  {
    if ( *(_BYTE *)(*v12 + 8LL) == 31 )
      goto LABEL_24;
    ++v12;
LABEL_35:
    if ( *(_BYTE *)(*v12 + 8LL) != 31 )
    {
      ++v12;
      goto LABEL_18;
    }
LABEL_24:
    if ( v9 != v12 )
    {
LABEL_25:
      sub_168B9F0((__int64)v21, *(__int64 **)a1, *(_DWORD *)(a2 + 4), 0x1951u, 0);
      sub_15F7200(v21);
      sub_168B9F0((__int64)v21, *(__int64 **)a1, *(_DWORD *)(*v12 + 12LL), 0x1675u, 0);
      v20 = *(_BYTE *)(*v12 + 8LL);
      sub_1AA5620((__int64)v21, &v20);
      sub_15F7200(v21);
    }
    goto LABEL_19;
  }
  if ( v11 != 1 )
    goto LABEL_19;
LABEL_18:
  if ( *(_BYTE *)(*v12 + 8LL) == 31 )
    goto LABEL_24;
LABEL_19:
  v14 = *(_BYTE *)(a2 + 144);
  if ( *(_BYTE *)(a2 + 1) != 42 || v14 )
  {
    if ( v14 != 2 )
      abort();
    v15 = *(_QWORD *)(a2 + 16);
  }
  else
  {
    v15 = 0;
  }
  return sub_EB3400(*(_QWORD **)(a1 + 8), *(_DWORD *)(a2 + 4), *(_DWORD *)(a2 + 12), v15, *(unsigned int *)(a2 + 8), a6);
}
