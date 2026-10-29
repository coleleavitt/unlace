/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_3F684
// Address: 0x0003F684

//----- (0003F684) --------------------------------------------------------
char *__fastcall sub_3F684(int a1)
{
  char *v1; // r3
  pthread_mutex_t *v3; // r7
  int v4; // r10
  const char **v5; // r0
  _DWORD *v6; // r6
  int v7; // r4
  int v9; // r6
  _UNKNOWN **v10; // r0
  int v11; // r1
  int v12; // r2
  int v13; // r3
  _UNKNOWN **v14; // r9
  int v15; // r8
  const char *v16; // r8
  signed int v17; // r0
  const char *v18; // r3
  int v19; // t1
  int v20; // r8
  _BOOL4 v21; // r3
  size_t v22; // r0
  _DWORD *v23; // r0
  int v24; // r1
  _DWORD *v25; // r9
  _DWORD *v26; // r3
  int v27; // r4
  int v28; // r10

  v1 = *(char **)a1;
  if ( *(_DWORD *)a1 )
  {
    v1 = *(char **)(a1 + 4);
    if ( v1 )
    {
      v1 = *(char **)(a1 + 8);
      if ( v1 )
      {
        v3 = (pthread_mutex_t *)dword_D4AB0;
        sub_7A268((pthread_mutex_t *)dword_D4AB0);
        v4 = sub_3E4E0();
        if ( *(_DWORD *)a1 && (v5 = sub_3DF88(*(char **)a1), (v6 = v5) != nullptr) )
        {
          if ( (unsigned int)(-1431655765 * (((char *)v5 - (char *)off_D3CEC) >> 3)) < *(_DWORD *)(v4 + 24) )
          {
            v7 = 0;
LABEL_8:
            sub_7A290(v3);
            return (char *)v7;
          }
        }
        else
        {
          v9 = dword_D3CE8++;
          v10 = (_UNKNOWN **)sub_77F2C(dword_D3CE8, 0x18u);
          v14 = v10;
          if ( !v10 )
            sub_3E4A8((int)"add_idc_func", v11, v12, v13);
          v15 = 6 * v9;
          memcpy(v10, off_D3CEC, 24 * v9);
          if ( off_D3CEC != *(_UNKNOWN ***)(v4 + 20) )
            sub_77F70(off_D3CEC);
          v6 = &v14[v15];
          off_D3CEC = v14;
          v14[v15] = nullptr;
          v6[2] = 0;
          v6[3] = 0;
        }
        sub_3DF2C((int)v6);
        *v6 = sub_77FAC(*(char **)a1);
        v6[1] = *(_DWORD *)(a1 + 4);
        v6[2] = sub_77FAC(*(char **)(a1 + 8));
        if ( *(_DWORD *)(a1 + 12) )
        {
          v16 = *(const char **)(a1 + 8);
          v17 = strlen(v16);
          if ( v17 )
          {
            v18 = &v16[v17 - 1];
            if ( *v18 == 4 )
            {
              do
              {
                if ( !--v17 )
                  break;
                v19 = *(unsigned __int8 *)--v18;
              }
              while ( v19 == 4 );
            }
          }
          v20 = *(_DWORD *)(a1 + 16);
          v21 = v20 > v17;
          if ( v20 <= 0 )
            v21 = 1;
          if ( v21 )
          {
            if ( !under_debugger )
              sub_78C64(1445);
            goto LABEL_24;
          }
          if ( v20 > 89478485 )
            v22 = -1;
          else
            v22 = 3 * v20;
          if ( v20 <= 89478485 )
            v22 = 8 * v22 + 8;
          v23 = sub_8128C(v22);
          v24 = 0;
          v25 = v23 + 2;
          v26 = v23 + 5;
          *v23 = 24;
          v23[1] = v20;
          do
          {
            ++v24;
            *((_BYTE *)v26 - 12) = 2;
            *v26 = 0;
            v26[1] = 0;
            v26 += 6;
            *(v26 - 4) = 0;
            *(v26 - 7) = 0;
          }
          while ( v20 != v24 );
          v27 = 0;
          v28 = 0;
          do
          {
            sub_45B30((unsigned __int8 *)&v25[v27], (unsigned __int8 *)(*(_DWORD *)(a1 + 12) + v27 * 4));
            ++v28;
            v27 += 6;
          }
          while ( v20 > v28 );
          v6[3] = v25;
          v6[4] = v20;
        }
        else if ( *(_DWORD *)(a1 + 16) )
        {
          if ( !under_debugger )
            sub_78C64(1446);
LABEL_24:
          __und(0xFFu);
        }
        v7 = 1;
        v6[5] = *(_DWORD *)(a1 + 20);
        goto LABEL_8;
      }
    }
  }
  return v1;
}
// 3F84A: variable 'v11' is possibly undefined
// 3F84A: variable 'v12' is possibly undefined
// 3F84A: variable 'v13' is possibly undefined
// D3CE8: using guessed type int dword_D3CE8;
// D3CEC: using guessed type _UNKNOWN **off_D3CEC;
// D4AB0: using guessed type int dword_D4AB0;
// D6C20: using guessed type char under_debugger;
