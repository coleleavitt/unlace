__int64 __fastcall sub_20C6B0(__int64 *a1, __int64 a2, __int64 a3)
{
  int v4; // ebp
  unsigned int v5; // r12d
  __int64 v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rdx
  const char *v13; // rsi
  int v14; // eax
  int v15; // r13d
  unsigned __int64 v16; // r14
  __int64 v17; // rsi
  __int64 v18; // rax
  unsigned __int64 v19; // rdx
  const char *v20; // [rsp+8h] [rbp-40h]

  if ( *(_DWORD *)(a3 + 8) != 65 )
    return 0;
  v4 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a3 + 24) + 432LL) + 104LL * *(int *)(a3 + 32) + 24) & 0x20020;
  if ( v4 )
    return 0;
  v5 = sub_20BE20((__int64)a1, a2, a3);
  if ( !(_BYTE)v5 )
    return 0;
  v8 = *(int *)(a3 + 32);
  v9 = *(_QWORD *)(a3 + 24);
  v10 = a1[1];
  v11 = *(_QWORD *)(v9 + 432) + 104 * v8;
  v12 = *(_QWORD *)(v11 + 40);
  if ( v10 )
  {
    v13 = (const char *)*a1;
    if ( v12 )
    {
      v20 = (const char *)*a1;
      v14 = strcmp(*(const char **)(v11 + 32), v13);
      v13 = v20;
      if ( v14 )
      {
LABEL_9:
        v4 = v10 - 1;
        goto LABEL_13;
      }
    }
    else if ( *v13 )
    {
      goto LABEL_9;
    }
    return 0;
  }
  if ( !v12 || !**(_BYTE **)(v11 + 32) )
    return 0;
  v13 = (const char *)*a1;
LABEL_13:
  v15 = 1;
  v16 = v4 + 1LL;
  while ( (unsigned __int8)sub_20DD80(*(_QWORD *)(a2 + 8), v13, 4294967287LL) )
  {
    v17 = *a1;
    v18 = *a1;
    if ( v4 )
    {
      v19 = a1[1];
      if ( v19 < v16 )
      {
        if ( a1[2] < v16 )
        {
          v18 = qvector_reserve(a1, v17, v4 + 1LL, 1);
          v19 = a1[1];
          *a1 = v18;
        }
        memset((void *)(v18 + v19), 0, v16 - v19);
        a1[1] = v16;
        v17 = *a1;
      }
      else if ( v16 != v19 )
      {
        a1[1] = v16;
      }
      *(_BYTE *)(v17 + v4) = 0;
    }
    else if ( v17 )
    {
      a1[1] = 0;
      qfree(v17);
      *a1 = 0;
      a1[2] = 0;
    }
    sub_F5F10(a1, (__int64)"%d", v15);
    v13 = (const char *)*a1;
    ++v15;
  }
  return v5;
}
