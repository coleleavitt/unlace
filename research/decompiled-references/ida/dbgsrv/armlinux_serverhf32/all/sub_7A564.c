/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A564
// Address: 0x0007A564

//----- (0007A564) --------------------------------------------------------
int __fastcall sub_7A564(int a1)
{
  int v1; // r10
  __pid_t v3; // r5
  pthread_mutex_t *v4; // r11
  int v5; // r9
  _DWORD *v6; // r0
  int v7; // r3
  int *v8; // r0
  int v9; // r3
  int *v10; // r8
  pthread_mutex_t *v11; // r9
  pthread_mutex_t *v12; // r6
  int v14; // [sp+8h] [bp+0h] BYREF

  v1 = 1073741832;
  while ( 1 )
  {
    while ( 1 )
    {
      v14 = 0;
      v3 = waitpid(-1, &v14, v1);
      if ( v3 != -1 )
        goto LABEL_3;
      v8 = _errno_location();
      v9 = *v8;
      v10 = v8;
      if ( *v8 == 10 )
        break;
LABEL_9:
      if ( v9 == 4 )
      {
        v4 = *(pthread_mutex_t **)(a1 + 24);
        sub_7A100(v4);
        goto LABEL_7;
      }
      if ( v9 == 22 )
      {
        if ( (v1 & 8) != 0 )
        {
          v1 &= ~8u;
        }
        else
        {
          if ( (v1 & 0x40000000) == 0 )
          {
            if ( under_debugger )
              __und(0xFFu);
            sub_78AFC(1160);
          }
          v1 = 8;
        }
      }
    }
    v11 = *(pthread_mutex_t **)(a1 + 24);
    sub_7A100(v11);
    sub_79C38(a1);
    v3 = waitpid(-1, &v14, v1 | 1);
    if ( v3 == -1 )
      break;
    sub_7A128(v11);
LABEL_3:
    v4 = *(pthread_mutex_t **)(a1 + 24);
    sub_7A100(v4);
    for ( ; v3 > 0; v3 = waitpid(-1, &v14, v1 | 1) )
    {
      if ( !sub_79CC8(a1, v3, v14) )
      {
        v5 = v14;
        v6 = sub_77E84(20);
        v6[2] = 0;
        v6[3] = 0;
        *((_BYTE *)v6 + 16) = 0;
        *v6 = a1;
        v6[1] = *(_DWORD *)(a1 + 4);
        **(_DWORD **)(a1 + 4) = v6;
        v7 = *(_DWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 4) = v6;
        *(_DWORD *)(a1 + 8) = v7 + 1;
        v6[2] = v3;
        v6[3] = v5;
      }
    }
LABEL_7:
    sub_79C38(a1);
    sub_7A128(v4);
  }
  if ( *v10 != 10 )
  {
    sub_7A128(v11);
    v9 = *v10;
    goto LABEL_9;
  }
  sub_7A128(v11);
  v12 = *(pthread_mutex_t **)(a1 + 28);
  sub_7A100(v12);
  *(_BYTE *)(a1 + 164) = 0;
  sub_7A128(v12);
  return 0;
}
// D5C00: using guessed type char under_debugger;
