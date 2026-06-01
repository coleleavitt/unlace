char *__fastcall sub_7175B0(_QWORD *a1, _WORD *a2, __int64 a3)
{
  __int64 v3; // rdx
  _WORD *v5; // r12
  unsigned int v6; // ecx
  __int64 v7; // rbp
  __int64 v8; // rdx
  unsigned __int8 v9; // bl
  char *v10; // r15
  unsigned __int16 *v11; // rsi
  int v12; // edx
  unsigned __int8 v13; // di
  __int64 v14; // rdx
  unsigned int v15; // esi
  char *v16; // rcx
  char *v17; // rsi
  char *result; // rax
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // rdi
  __int64 v21; // rdx

  v3 = 2 * a3;
  v5 = (_WORD *)*a1;
  v6 = *(_DWORD *)(*a1 - 8LL);
  if ( *(_WORD *)*a1 )
  {
    v21 = (unsigned __int16)v5[v3 + 3];
    if ( (unsigned int)v21 >= v6 )
      goto LABEL_24;
    v11 = (_WORD *)((char *)v5 + v21 + 1);
    if ( *(unsigned __int16 *)((char *)v5 + v21 + *v11 + 3) + *v11 + 4 + (unsigned int)v21 >= v6 )
      goto LABEL_24;
  }
  else
  {
    v7 = (__int64)&v5[v3 + 2];
    v8 = (unsigned __int16)v5[v3 + 3];
    v9 = *(_BYTE *)v7;
    if ( (unsigned int)v8 >= v6 )
      goto LABEL_24;
    v10 = (char *)v5 + v8;
    v11 = (_WORD *)((char *)v5 + v8 + 1);
    v12 = *(unsigned __int16 *)((char *)v5 + v8 + *v11 + 3) + *v11 + 4;
    if ( (int)v10 + v12 - (int)v5 >= v6 )
      goto LABEL_24;
    if ( v9 )
    {
      if ( v12 + (unsigned int)v9 <= 0x60D )
      {
        sub_715BB0((char *)a2 + v9 + 2, v11, 0);
        *a2 = *(_WORD *)(v10 + 1) + v9;
        while ( 1 )
        {
          do
          {
            v13 = *(_BYTE *)(v7 - 4);
            v7 -= 4;
          }
          while ( v13 >= v9 );
          v14 = *(unsigned __int16 *)(v7 + 2);
          v15 = *((_DWORD *)v5 - 2);
          if ( (unsigned int)v14 >= v15 )
            goto LABEL_24;
          v16 = (char *)v5 + v14;
          if ( (unsigned int)v14
             + *(unsigned __int16 *)((char *)v5 + v14 + *(unsigned __int16 *)((char *)v5 + v14 + 1) + 3)
             + *(unsigned __int16 *)((char *)v5 + v14 + 1)
             + 4 >= v15 )
            goto LABEL_24;
          v17 = v16 + 3;
          result = (char *)a2 + v13 + 2;
          v19 = v9 - v13;
          if ( v19 >= 8 )
            break;
          if ( (v19 & 4) != 0 )
          {
            *(_DWORD *)result = *(_DWORD *)(v16 + 3);
            *(_DWORD *)&result[v19 - 4] = *(_DWORD *)&v17[v19 - 4];
            v13 = *(_BYTE *)v7;
            goto LABEL_13;
          }
          if ( v19 )
          {
            *result = v16[3];
            if ( (v19 & 2) != 0 )
            {
              *(_WORD *)((char *)a2 + v13 + v19) = *(_WORD *)&v17[v19 - 2];
              v13 = *(_BYTE *)v7;
              goto LABEL_13;
            }
LABEL_16:
            v9 = *(_BYTE *)v7;
            if ( !*(_BYTE *)v7 )
              return result;
          }
          else
          {
LABEL_13:
            v9 = v13;
            if ( !v13 )
              return result;
          }
        }
        v20 = (unsigned __int64)(result + 8) & 0xFFFFFFFFFFFFFFF8LL;
        *(_QWORD *)result = *(_QWORD *)(v16 + 3);
        *(_QWORD *)&result[v19 - 8] = *(_QWORD *)&v17[v19 - 8];
        result -= v20;
        qmemcpy((void *)v20, (const void *)(v17 - result), 8 * ((unsigned __int64)&result[v19] >> 3));
        goto LABEL_16;
      }
LABEL_24:
      sub_7172E0();
    }
  }
  return (char *)sub_715B80(a2, v11);
}

