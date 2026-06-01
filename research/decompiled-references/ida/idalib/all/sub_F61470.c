__int64 __fastcall sub_F61470(__int64 a1, char *a2)
{
  __int64 v2; // r13
  unsigned int v3; // ebx
  _QWORD *v4; // rax
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned __int64 v14; // rax
  _QWORD *v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v19; // rdx
  unsigned __int64 v20; // rdx
  _QWORD *v21; // rdx
  unsigned __int64 v22; // rdx
  unsigned __int64 v23; // [rsp+0h] [rbp-60h]
  __int64 v24; // [rsp+10h] [rbp-50h] BYREF
  void *v25[2]; // [rsp+18h] [rbp-48h] BYREF
  void *v26; // [rsp+28h] [rbp-38h]

  v2 = a1;
  v3 = 0;
  v4 = (_QWORD *)operator new(8u);
  v8 = (__int64)(v4 + 1);
  *v4 = a1;
  v25[0] = v4;
  v25[1] = v4 + 1;
  v26 = v4 + 1;
  while ( 1 )
  {
    v9 = sub_F60E90(*(_QWORD **)(v2 + 24), (__int64)a2, v8, v5, v6, v7);
    v14 = sub_B7E900((__int64)v9, (__int64)a2, v10, v11, v12, v13);
    v15 = v25[0];
    if ( !v14 )
      goto LABEL_31;
    v16 = *(_QWORD *)(v14 + 48);
    v15 = v25[0];
    if ( (v16 & 1) != 0 )
      goto LABEL_4;
LABEL_9:
    v19 = *(_QWORD *)&byte_8[v16 & 0xFFFFFFFFFFFFFFF0LL];
    if ( (v19 & 1) != 0 )
    {
LABEL_4:
      v17 = 1;
      goto LABEL_5;
    }
    v20 = *(_QWORD *)(*(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL;
    v5 = *(_QWORD *)v20;
    if ( *(_BYTE *)(*(_QWORD *)v20 + 16LL) != 48 )
      goto LABEL_30;
    a2 = (char *)v25[1];
    v24 = *(_QWORD *)v20;
    v7 = ((char *)v25[1] - (char *)v15) >> 5;
    v6 = ((char *)v25[1] - (char *)v15) >> 3;
    if ( v7 > 0 )
    {
      if ( v5 == *v15 )
      {
        v21 = v15;
      }
      else
      {
        v21 = v15 + 1;
        if ( v5 != v15[1] )
        {
          v21 = v15 + 2;
          if ( v5 != v15[2] )
          {
            v6 = (__int64)v15;
            v7 = (__int64)&v15[4 * v7];
            if ( v5 == v15[3] )
            {
              v21 = v15 + 3;
            }
            else
            {
              while ( 1 )
              {
                v21 = (_QWORD *)(v6 + 32);
                if ( v7 == v6 + 32 )
                {
                  v6 = ((char *)v25[1] - (char *)v21) >> 3;
                  goto LABEL_24;
                }
                if ( v5 == *(_QWORD *)(v6 + 32) )
                  goto LABEL_34;
                if ( v5 == *(_QWORD *)(v6 + 40) )
                {
                  v21 = (_QWORD *)(v6 + 40);
                  goto LABEL_34;
                }
                if ( v5 == *(_QWORD *)(v6 + 48) )
                {
                  v21 = (_QWORD *)(v6 + 48);
                  goto LABEL_34;
                }
                if ( v5 == *(_QWORD *)(v6 + 56) )
                  break;
                v6 += 32;
              }
              v21 = (_QWORD *)(v6 + 56);
            }
          }
        }
      }
      goto LABEL_34;
    }
    v21 = v15;
LABEL_24:
    if ( v6 == 2 )
      goto LABEL_41;
    if ( v6 != 3 )
    {
      if ( v6 != 1 )
        goto LABEL_27;
      goto LABEL_43;
    }
    if ( v5 != *v21 )
    {
      ++v21;
LABEL_41:
      if ( v5 != *v21 )
      {
        ++v21;
LABEL_43:
        if ( v5 != *v21 )
          goto LABEL_27;
      }
    }
LABEL_34:
    if ( v25[1] != v21 )
      goto LABEL_30;
LABEL_27:
    if ( v26 == v25[1] )
    {
      v23 = v14;
      sub_F60B20((__int64)v25, v25[1], &v24);
      v15 = v25[0];
      v14 = v23;
    }
    else
    {
      *(_QWORD *)v25[1] = v5;
      a2 += 8;
      v25[1] = a2;
    }
LABEL_30:
    while ( 1 )
    {
      v22 = *(_QWORD *)(v14 + 8) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = v22;
      if ( !v22 )
        break;
      if ( (*(_BYTE *)(v22 + 28) & 0x7Fu) - 49 <= 2 )
      {
        v16 = *(_QWORD *)(v22 + 48);
        if ( (v16 & 1) != 0 )
          goto LABEL_4;
        goto LABEL_9;
      }
    }
LABEL_31:
    v8 = ++v3;
    if ( v3 >= (unsigned __int64)(((char *)v25[1] - (char *)v15) >> 3) )
      break;
    v2 = v15[v3];
  }
  v17 = 0;
LABEL_5:
  if ( v15 )
    operator delete(v15);
  return v17;
}
