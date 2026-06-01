__int64 ***__fastcall sub_C70520(_QWORD *a1, __int64 ***a2, __int64 a3, int a4, _BYTE *a5, int a6)
{
  __int64 **v6; // r12
  __int64 v7; // rdx
  __int64 **v8; // r14
  __int64 v9; // rax
  __int64 *v10; // rbx
  __int64 *v11; // r15
  __int64 v12; // rbp
  char v13; // al
  __int64 v14; // rsi
  __int64 v15; // rax
  __int64 **v16; // rbx
  __int64 *v17; // rdi

  v6 = *a2;
  if ( !*a2 )
    goto LABEL_18;
  v7 = *((unsigned int *)v6 - 1);
  v8 = &v6[v7];
  v9 = v7;
  if ( v8 == v6 )
    goto LABEL_12;
  do
  {
    v10 = *v6;
    if ( *v6 )
    {
      v11 = &v10[*((unsigned int *)v10 - 1)];
      while ( v11 != v10 )
      {
        while ( 1 )
        {
          v12 = *v10;
          v13 = *(_BYTE *)(*v10 + 7);
          if ( (v13 & 0x40) == 0 )
            break;
          if ( v11 == ++v10 )
            goto LABEL_9;
        }
        v14 = *v10++;
        *(_BYTE *)(v12 + 7) = v13 | 0x40;
        v15 = sub_C6FBE0(a1, v14, v7, a4, a5, a6);
        sub_EDB570(a1[88], v15, 0, *(_QWORD *)(v12 + 72));
      }
    }
LABEL_9:
    ++v6;
  }
  while ( v8 != v6 );
  v6 = *a2;
  if ( *a2 )
  {
    v9 = *((unsigned int *)v6 - 1);
LABEL_12:
    if ( (_DWORD)v9 )
    {
      v16 = &v6[v9];
      do
      {
        while ( *v6 )
        {
          v17 = *v6++ - 1;
          sub_186B220(v17);
          if ( v16 == v6 )
          {
            v6 = *a2;
            goto LABEL_17;
          }
        }
        ++v6;
      }
      while ( v6 != v16 );
      v6 = *a2;
    }
LABEL_17:
    sub_186B220(v6 - 1);
  }
LABEL_18:
  *a2 = nullptr;
  return a2;
}

