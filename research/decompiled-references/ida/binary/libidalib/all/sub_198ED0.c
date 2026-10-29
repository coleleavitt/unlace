__int64 __fastcall sub_198ED0(__int64 *a1, unsigned __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // rcx
  __int64 v6; // rdi
  __int64 v7; // rdx
  __int64 v8; // r12
  unsigned __int64 v9; // rbp
  __int64 v10; // r13
  __int64 v11; // rax
  _BYTE *v12; // r8
  unsigned __int64 v13; // r13
  unsigned __int64 v14; // r12
  __int64 v15; // r12
  __int64 v16; // rax
  __int64 v17; // rbp

  v2 = a1[1];
  if ( !v2 )
    return 0;
  v3 = v2 - 1;
  if ( a2 >= v2 - 1 )
    return 0;
  v6 = *a1;
  v7 = v6;
  if ( a2 != 3 )
  {
    v13 = a2 - 2;
    v14 = v2;
    if ( v2 < a2 - 2 )
    {
      if ( a1[2] < v13 )
      {
        v16 = qvector_reserve();
        v14 = a1[1];
        *a1 = v16;
        v6 = v16;
      }
      memset((void *)(v14 + v6), 0, v13 - v14);
      a1[1] = v13;
      v7 = *a1;
    }
    else if ( v2 != v13 )
    {
      a1[1] = v13;
    }
    *(_BYTE *)(v7 + a2 - 3) = 0;
    v8 = a1[1];
    v6 = *a1;
    v2 = v8;
    if ( v8 )
      goto LABEL_12;
LABEL_23:
    v9 = 4;
    v10 = 3;
    goto LABEL_24;
  }
  if ( !v6 || (a1[1] = 0, qfree(), v2 = a1[1], *a1 = 0, v6 = 0, a1[2] = 0, v8 = v2, v3 = v2 - 1, v2) )
  {
    while ( 1 )
    {
      if ( !v3 )
      {
        v17 = 1;
        goto LABEL_30;
      }
      v12 = (_BYTE *)(v6 + v2 - 2);
      if ( (*v12 & 0xC0) != 0x80 )
        break;
      if ( v2 == 2 )
      {
        if ( v6 )
        {
          a1[1] = 0;
          qfree();
          *a1 = 0;
          v2 = a1[1];
          a1[2] = 0;
        }
        v6 = 0;
      }
      else
      {
        a1[1] = v3;
        *v12 = 0;
        v6 = *a1;
        v2 = a1[1];
      }
      v8 = v2;
      if ( !v2 )
        goto LABEL_23;
LABEL_12:
      v3 = v2 - 1;
    }
    v17 = v2;
LABEL_30:
    v8 = v17 - 1;
    v10 = v17 + 2;
    v9 = v17 + 3;
LABEL_24:
    if ( a1[2] >= v9 )
      goto LABEL_25;
    goto LABEL_9;
  }
  v9 = 4;
  v10 = 3;
LABEL_9:
  v11 = qvector_reserve();
  *a1 = v11;
  v6 = v11;
LABEL_25:
  a1[1] = v9;
  *(_BYTE *)(v6 + v10) = 0;
  v15 = *a1 + v8;
  *(_WORD *)v15 = -32542;
  *(_BYTE *)(v15 + 2) = -90;
  return 1;
}

