/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000BDB4
// Address: 0x000000010000BDB4

//----- (000000010000BDB4) ----------------------------------------------------
void __fastcall sub_10000BDB4(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 *v4; // x9
  __int64 v5; // x21
  unsigned __int64 *v6; // x22
  unsigned __int64 *v7; // x8
  unsigned __int64 v8; // x24
  unsigned __int64 v9; // x26
  unsigned __int64 v10; // x25
  __int64 v11; // x27
  char *v12; // x28
  __int64 v13; // x23
  __int128 v14; // q0
  void *v15; // x0
  __int64 v16; // x23
  __int128 v17; // q0
  void *v18; // x0
  char *v19; // x28
  unsigned __int64 v20; // x8
  unsigned __int64 *v21; // x27
  void *v22; // x0
  void *v23; // x0
  __int128 v24; // [xsp+0h] [xbp-B0h]
  unsigned __int64 v25; // [xsp+18h] [xbp-98h]
  __int128 v26; // [xsp+20h] [xbp-90h]
  __int128 v27; // [xsp+30h] [xbp-80h]
  __int128 v28; // [xsp+30h] [xbp-80h]
  unsigned __int64 v29; // [xsp+48h] [xbp-68h]
  __int16 v30; // [xsp+50h] [xbp-60h]

  if ( a1 != a2 )
  {
    v4 = a1 + 10;
    if ( a1 + 10 != a2 )
    {
      v5 = 0;
      v6 = a1;
      do
      {
        v7 = v6;
        v6 = v4;
        v8 = v7[10];
        if ( v8 <= *v7 && (v8 < *v7 || v7[11] < v7[1]) )
        {
          v9 = v4[1];
          v10 = v7[12];
          v7[12] = 0;
          v26 = *(_OWORD *)(v7 + 13);
          *(_OWORD *)(v7 + 13) = 0u;
          v25 = v7[15];
          v7[15] = 0;
          v24 = *((_OWORD *)v7 + 8);
          *((_OWORD *)v7 + 8) = 0u;
          v30 = *((_WORD *)v7 + 76);
          v11 = v5;
          v29 = v7[18];
          while ( 1 )
          {
            v12 = (char *)a1 + v11;
            *((_OWORD *)v12 + 5) = *(_OWORD *)((char *)a1 + v11);
            v13 = *(unsigned __int64 *)((char *)a1 + v11 + 16);
            v14 = *(_OWORD *)((char *)a1 + v11 + 24);
            *((_QWORD *)v12 + 2) = 0;
            *((_QWORD *)v12 + 3) = 0;
            *((_QWORD *)v12 + 4) = 0;
            v15 = *(void **)((char *)a1 + v11 + 96);
            if ( v15 )
            {
              *((_QWORD *)v12 + 13) = 0;
              v27 = v14;
              qfree(v15);
              v14 = v27;
            }
            *((_QWORD *)v12 + 12) = v13;
            *(_OWORD *)(v12 + 104) = v14;
            v16 = *((_QWORD *)v12 + 5);
            v17 = *((_OWORD *)v12 + 3);
            *((_QWORD *)v12 + 5) = 0;
            *((_QWORD *)v12 + 6) = 0;
            *((_QWORD *)v12 + 7) = 0;
            v18 = *((void **)v12 + 15);
            if ( v18 )
            {
              *(unsigned __int64 *)((char *)a1 + v11 + 128) = 0;
              v28 = v17;
              qfree(v18);
              v17 = v28;
            }
            *((_QWORD *)v12 + 15) = v16;
            v19 = (char *)a1 + v11;
            *((_OWORD *)v19 + 8) = v17;
            *((_QWORD *)v19 + 18) = *(unsigned __int64 *)((char *)a1 + v11 + 64);
            *((_WORD *)v19 + 76) = *(_WORD *)((char *)a1 + v11 + 72);
            if ( !v11 )
              break;
            v20 = *((_QWORD *)v19 - 10);
            if ( v8 > v20 || v8 >= v20 && v9 >= *(unsigned __int64 *)((char *)a1 + v11 - 72) )
            {
              v21 = (unsigned __int64 *)((char *)a1 + v11);
              goto LABEL_21;
            }
            v11 -= 80;
          }
          v21 = a1;
LABEL_21:
          *v21 = v8;
          v21[1] = v9;
          v22 = (void *)v21[2];
          if ( v22 )
          {
            v21[3] = 0;
            qfree(v22);
          }
          v21[2] = v10;
          *(_OWORD *)(v21 + 3) = v26;
          v23 = (void *)v21[5];
          if ( v23 )
          {
            v21[6] = 0;
            qfree(v23);
          }
          v21[5] = v25;
          *((_OWORD *)v21 + 3) = v24;
          *((_QWORD *)v19 + 8) = v29;
          *((_WORD *)v19 + 36) = v30;
        }
        v4 = v6 + 10;
        v5 += 80;
      }
      while ( v6 + 10 != a2 );
    }
  }
}
