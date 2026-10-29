__int64 __fastcall sub_742B60(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  __int64 v4; // rax
  __int64 v5; // rdx
  int v6; // r13d
  _WORD *v7; // rbx
  __int16 v8; // ax
  __int16 v9; // ax
  __int64 v10; // rax
  __int64 v11; // r12
  int v12; // r9d
  __int16 v13; // r15
  int v14; // r8d
  __int64 v15; // rcx
  __int64 v16; // r11
  __int64 v17; // rcx
  __int64 v18; // rax
  int i; // ebp
  unsigned __int8 v20; // r11
  unsigned int v21; // eax
  int v22; // [rsp+0h] [rbp-3Ch]

  if ( (int)a2 > 0 )
    return 0;
  v3 = a1;
  v4 = *(__int16 *)(a1 + 4);
  v5 = (unsigned int)(v4 - 1);
  v22 = v4 - 1;
  if ( (int)v4 - 1 < 0 )
    return 1;
  v6 = v4 - 1;
  v7 = (_WORD *)(a1 + 6 * v4);
  do
  {
    while ( 1 )
    {
      v8 = *(unsigned __int8 *)v7;
      *v7 = v8;
      if ( v8 != 255 )
      {
        if ( v22 > v6 )
        {
          a1 = (unsigned __int16)*v7;
          v9 = 0;
          if ( v7[3] == (_WORD)a1 )
            goto LABEL_32;
          goto LABEL_8;
        }
        goto LABEL_9;
      }
      if ( !v6 )
        goto LABEL_34;
      v10 = (unsigned __int16)v7[2];
      v5 = *(unsigned int *)(v3 - 8);
      if ( (unsigned int)v10 >= (unsigned int)v5 )
        goto LABEL_34;
      v11 = v3 + v10;
      v12 = *(unsigned __int16 *)(v3 + v10 + 1);
      v13 = *(_WORD *)(v3 + v10 + 1);
      v14 = *(unsigned __int16 *)(v3 + v10 + v12 + 2 + 1) + 2;
      if ( (int)v10 + v14 + v12 + 2 >= (unsigned int)v5 )
        goto LABEL_34;
      v15 = (unsigned __int16)*(v7 - 1);
      if ( (unsigned int)v15 >= (unsigned int)v5 )
        goto LABEL_34;
      a2 = *(unsigned __int16 *)(v3 + v15 + 1);
      if ( (unsigned int)v15 + (_DWORD)a2 + *(unsigned __int16 *)(v3 + v15 + a2 + 3) + 4 >= (unsigned int)v5 )
        goto LABEL_34;
      v5 = 255 - (unsigned int)*((unsigned __int8 *)v7 - 6);
      a2 = (unsigned int)(a2 - v5);
      if ( (int)a2 < 0 )
        goto LABEL_28;
      a2 = (unsigned int)a2;
      v5 = (int)v5;
      v16 = (unsigned int)a2;
      v17 = v3 + v15 + (int)v5 + 3;
      if ( (unsigned __int16)v12 <= (unsigned __int64)(unsigned int)a2 )
        v16 = (unsigned __int16)v12;
      a1 = (unsigned int)v16;
      if ( !v16 )
      {
        if ( (unsigned int)a2 < (unsigned __int64)(unsigned __int16)v12 )
          goto LABEL_28;
        goto LABEL_34;
      }
      v18 = 0;
      for ( i = 1; ; ++i )
      {
        v20 = *(_BYTE *)(v17 + v18);
        v5 = *(unsigned __int8 *)(v11 + v18 + 3);
        if ( v20 != (_BYTE)v5 )
        {
          v21 = -i;
          if ( v20 >= (unsigned __int8)v5 )
          {
            v5 = v21;
            v21 = i;
            i = v5;
          }
          if ( i > 0 )
          {
            i = ~v21;
            if ( v21 != -1 )
              goto LABEL_35;
            goto LABEL_28;
          }
LABEL_34:
          sub_743130(a1, a2, v5);
        }
        v5 = (unsigned int)(i + 1);
        ++v18;
        if ( (int)a1 < (int)v5 )
          break;
      }
      if ( (unsigned int)a2 >= (unsigned __int64)(unsigned __int16)v12 )
        goto LABEL_34;
LABEL_35:
      a1 = v11 + 3;
      a2 = v11 + 3 + i;
      memmove((void *)(v11 + 3), (const void *)a2, (unsigned int)(v12 + v14 - i));
      *(_WORD *)(v11 + 1) = v13 - i;
      *v7 = i + 255;
LABEL_28:
      if ( v22 > v6 )
        break;
LABEL_31:
      --v6;
      v7 -= 3;
    }
    if ( v7[3] != *v7 )
    {
      v7[1] = 0;
      goto LABEL_31;
    }
LABEL_32:
    v9 = v7[4] + 1;
LABEL_8:
    v7[1] = v9;
LABEL_9:
    --v6;
    v7 -= 3;
  }
  while ( v6 != -1 );
  return 1;
}
