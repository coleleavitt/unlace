/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A244
// Address: 0x0007A244

//----- (0007A244) --------------------------------------------------------
int __fastcall sub_7A244(_DWORD *a1, int *a2, __pid_t a3, int a4, int a5)
{
  pthread_mutex_t *v9; // r8
  _DWORD *v10; // r0
  __pid_t v11; // r0
  int v12; // r6
  int v13; // r3
  _DWORD *v14; // r11
  _DWORD *v16; // r0
  int *v17; // r11
  _DWORD *v18; // r6
  int v19; // r3
  pthread_mutex_t *v20; // r5
  int v21; // r0
  int v22; // r7
  _BOOL4 v23; // [sp+Ch] [bp-10h]
  int stat_loc; // [sp+10h] [bp-Ch] BYREF

  v9 = (pthread_mutex_t *)a1[6];
  sub_7A100(v9);
  if ( (_DWORD *)*a1 != a1 )
  {
    v10 = (_DWORD *)*a1;
    while ( 1 )
    {
      if ( a3 == -1 || a3 == v10[2] )
      {
        v13 = v10[3];
        if ( v13 != 0xFFFF || (a4 & 8) != 0 )
          break;
      }
      v10 = (_DWORD *)*v10;
      if ( v10 == a1 )
        goto LABEL_6;
    }
    v14 = v10;
    if ( *((_BYTE *)v10 + 16) )
    {
      *_errno_location() = 10;
    }
    else if ( a2 )
    {
      *a2 = v13;
    }
    v12 = v14[2];
    *(_DWORD *)v14[1] = *v14;
    *(_DWORD *)(*v14 + 4) = v14[1];
    sub_77E08(v14);
    --a1[2];
    goto LABEL_16;
  }
LABEL_6:
  if ( a3 == -1 )
    goto LABEL_20;
  v11 = waitpid(a3, &stat_loc, a4 | 1);
  v12 = v11;
  if ( v11 <= 0 )
  {
    if ( v11 == -1 )
    {
      v23 = *_errno_location() == 10;
LABEL_21:
      v16 = sub_77E84(32);
      v17 = v16 + 2;
      v18 = v16;
      v16[4] = 0;
      v16[5] = 0;
      v16[6] = 0;
      v16[7] = 0;
      v16[2] = 0;
      v16[3] = 0;
      *((_BYTE *)v16 + 16) = 0;
      v16[6] = sub_79AD0(nullptr, 0);
      *((_BYTE *)v18 + 29) = 0;
      *v18 = a1 + 3;
      *((_BYTE *)v18 + 28) = 0;
      v18[1] = a1[4];
      *(_DWORD *)a1[4] = v18;
      v19 = a1[5];
      a1[4] = v18;
      a1[5] = v19 + 1;
      v18[2] = a3;
      v18[5] = a4;
      *((_BYTE *)v18 + 29) = v23;
      sub_7A138((int)a1);
      sub_7A128(v9);
      if ( v23 )
      {
        do
          sub_7A220((int)a1);
        while ( !sub_79D80(v18[6], 100) );
        v20 = (pthread_mutex_t *)a1[6];
        sub_7A100(v20);
        if ( *((_BYTE *)v18 + 28) )
        {
          if ( !*((_BYTE *)v18 + 16) )
          {
            if ( a2 )
              *a2 = v18[3];
            v12 = v18[2];
            goto LABEL_28;
          }
          goto LABEL_38;
        }
        if ( *((_BYTE *)v18 + 29) )
        {
          if ( under_debugger )
            __und(0xFFu);
          sub_78AFC(1355);
        }
        sub_7A128(v20);
      }
      v21 = sub_79D80(v18[6], a5);
      v20 = (pthread_mutex_t *)a1[6];
      v22 = v21;
      sub_7A100(v20);
      if ( !v22 && !sub_79D80(v18[6], 0) )
      {
        v12 = 0;
        goto LABEL_28;
      }
      if ( !*((_BYTE *)v18 + 16) )
      {
        if ( a2 )
          *a2 = v18[3];
        v12 = v18[2];
        goto LABEL_28;
      }
LABEL_38:
      v12 = -1;
      *_errno_location() = 10;
LABEL_28:
      sub_79E58((int)a1, v17);
      sub_7A128(v20);
      return v12;
    }
LABEL_20:
    v23 = 0;
    goto LABEL_21;
  }
  if ( a2 )
    *a2 = stat_loc;
LABEL_16:
  sub_7A128(v9);
  return v12;
}
// D5C00: using guessed type char under_debugger;
