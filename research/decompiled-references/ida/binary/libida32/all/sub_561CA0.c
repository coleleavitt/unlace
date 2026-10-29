void __fastcall sub_561CA0(__int64 *a1, const char *a2, unsigned __int8 a3)
{
  unsigned __int64 v5; // rbp
  __int64 v6; // rsi
  size_t v7; // r14
  size_t v8; // r8
  __int64 v9; // rax
  unsigned __int64 v10; // rax
  __int64 v11; // rdx
  size_t v12; // [rsp+0h] [rbp-40h]

  if ( !a2 )
    return;
  v5 = a1[4];
  v6 = a1[3];
  if ( a3 )
  {
    if ( v5 > 2 && *(char *)(v6 + v5 - 2) == a3 && *(_BYTE *)(v6 + v5 - 3) == 2 )
    {
      sub_35CD10(a1 + 3, v5 - 3);
      v5 = a1[4];
      v6 = a1[3];
      if ( a3 == 33 )
      {
        if ( !v5 )
        {
          a1[6] = 0;
          v7 = strlen(a2);
          v8 = v7;
          goto LABEL_10;
        }
        v10 = --v5;
        if ( v5 > 2 )
        {
          while ( 1 )
          {
            v11 = v10--;
            if ( *(_BYTE *)(v6 + v10) == 33 && *(_BYTE *)(v6 + v10 - 1) == 1 )
              break;
            if ( v10 == 2 )
            {
              v11 = 2;
              break;
            }
          }
          a1[6] = v11;
          v7 = strlen(a2);
        }
        else
        {
          a1[6] = v5;
          v7 = strlen(a2);
        }
        goto LABEL_9;
      }
    }
    else
    {
      (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 64))(a1, a3);
      v5 = a1[4];
      v6 = a1[3];
    }
  }
  v7 = strlen(a2);
  v8 = v7;
  if ( v5 )
  {
    --v5;
LABEL_9:
    v8 = v7;
    v7 += v5;
  }
LABEL_10:
  if ( a1[5] < v7 + 1 )
  {
    v12 = v8;
    v9 = qvector_reserve(a1 + 3, v6, v7 + 1, 1);
    v8 = v12;
    a1[3] = v9;
    v6 = v9;
  }
  a1[4] = v7 + 1;
  *(_BYTE *)(v6 + v7) = 0;
  memmove((void *)(v5 + a1[3]), a2, v8);
  if ( a3 )
    (*(void (__fastcall **)(__int64 *, _QWORD))(*a1 + 72))(a1, a3);
}

