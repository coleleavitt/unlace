__int64 __fastcall sub_737600(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r13d
  unsigned __int8 *v7; // rbp
  unsigned __int8 v8; // al
  __int64 v9; // rax
  __int64 v10; // r12
  int v11; // r9d
  __int16 v12; // r15
  int v13; // r8d
  __int64 v14; // rcx
  __int64 v15; // r11
  __int64 v16; // rcx
  __int64 v17; // rax
  int i; // ebx
  unsigned __int8 v19; // r11
  unsigned int v20; // eax
  int v21; // [rsp+0h] [rbp-3Ch]

  if ( (int)a2 > 0 )
    return 0;
  v3 = a1;
  v4 = *(__int16 *)(a1 + 2);
  v5 = (unsigned int)(v4 - 1);
  v21 = v4 - 1;
  if ( (int)v4 - 1 < 0 )
    return 1;
  v6 = v4 - 1;
  v7 = (unsigned __int8 *)(a1 + 4 * v4);
  do
  {
    while ( 1 )
    {
      if ( *v7 != 0xFF )
      {
        if ( v21 > v6 )
        {
          a1 = *v7;
          v8 = 0;
          if ( v7[4] == (_BYTE)a1 )
            goto LABEL_32;
          goto LABEL_8;
        }
        goto LABEL_9;
      }
      if ( !v6 )
        goto LABEL_34;
      v9 = *((unsigned __int16 *)v7 + 1);
      v5 = *(unsigned int *)(v3 - 8);
      if ( (unsigned int)v9 >= (unsigned int)v5 )
        goto LABEL_34;
      v10 = v3 + v9;
      v11 = *(unsigned __int16 *)(v3 + v9 + 1);
      v12 = *(_WORD *)(v3 + v9 + 1);
      v13 = *(unsigned __int16 *)(v3 + v9 + v11 + 2 + 1) + 2;
      if ( (int)v9 + v13 + v11 + 2 >= (unsigned int)v5 )
        goto LABEL_34;
      v14 = *((unsigned __int16 *)v7 - 1);
      if ( (unsigned int)v14 >= (unsigned int)v5 )
        goto LABEL_34;
      a2 = *(unsigned __int16 *)(v3 + v14 + 1);
      if ( (unsigned int)v14 + (_DWORD)a2 + *(unsigned __int16 *)(v3 + v14 + a2 + 3) + 4 >= (unsigned int)v5 )
        goto LABEL_34;
      v5 = 255 - (unsigned int)*(v7 - 4);
      a2 = (unsigned int)(a2 - v5);
      if ( (int)a2 < 0 )
        goto LABEL_28;
      a2 = (unsigned int)a2;
      v5 = (int)v5;
      v15 = (unsigned int)a2;
      v16 = v3 + v14 + (int)v5 + 3;
      if ( (unsigned __int16)v11 <= (unsigned __int64)(unsigned int)a2 )
        v15 = (unsigned __int16)v11;
      a1 = (unsigned int)v15;
      if ( !v15 )
      {
        if ( (unsigned int)a2 < (unsigned __int64)(unsigned __int16)v11 )
          goto LABEL_28;
        goto LABEL_34;
      }
      v17 = 0;
      for ( i = 1; ; ++i )
      {
        v19 = *(_BYTE *)(v16 + v17);
        v5 = *(unsigned __int8 *)(v10 + v17 + 3);
        if ( v19 != (_BYTE)v5 )
        {
          v20 = -i;
          if ( v19 >= (unsigned __int8)v5 )
          {
            v5 = v20;
            v20 = i;
            i = v5;
          }
          if ( i > 0 )
          {
            i = ~v20;
            if ( v20 != -1 )
              goto LABEL_35;
            goto LABEL_28;
          }
LABEL_34:
          sub_737820(a1, a2, v5);
        }
        v5 = (unsigned int)(i + 1);
        ++v17;
        if ( (int)a1 < (int)v5 )
          break;
      }
      if ( (unsigned int)a2 >= (unsigned __int64)(unsigned __int16)v11 )
        goto LABEL_34;
LABEL_35:
      a1 = v10 + 3;
      a2 = v10 + 3 + i;
      memmove((void *)(v10 + 3), (const void *)a2, (unsigned int)(v11 + v13 - i));
      *(_WORD *)(v10 + 1) = v12 - i;
      *v7 = i - 1;
LABEL_28:
      if ( v21 > v6 )
        break;
LABEL_31:
      --v6;
      v7 -= 4;
    }
    if ( *v7 != v7[4] )
    {
      v7[1] = 0;
      goto LABEL_31;
    }
LABEL_32:
    v8 = v7[5] + 1;
LABEL_8:
    v7[1] = v8;
LABEL_9:
    --v6;
    v7 -= 4;
  }
  while ( v6 != -1 );
  return 1;
}
