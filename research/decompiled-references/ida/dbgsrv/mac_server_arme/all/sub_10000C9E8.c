/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10000C9E8
// Address: 0x000000010000C9E8

//----- (000000010000C9E8) ----------------------------------------------------
void __fastcall sub_10000C9E8(__int64 a1, __int64 a2)
{
  __int64 v3; // x20
  __int64 v4; // x9
  __int64 v5; // x21
  __int64 v6; // x8
  unsigned __int64 v7; // x24
  unsigned __int64 v8; // x26
  __int64 v9; // x25
  __int128 v10; // q2
  __int64 v11; // x22
  __int64 v12; // x23
  __int64 v13; // x27
  __int128 v14; // q0
  void *v15; // x0
  void *v16; // x27
  __int128 v17; // q0
  void *v18; // x0
  unsigned __int64 v19; // x8
  void *v20; // x0
  void *v21; // x0
  __int128 v22; // [xsp+0h] [xbp-A0h]
  __int128 v23; // [xsp+10h] [xbp-90h]
  __int128 v24; // [xsp+20h] [xbp-80h]
  __int128 v25; // [xsp+20h] [xbp-80h]
  __int64 v26; // [xsp+38h] [xbp-68h]
  __int16 v27; // [xsp+40h] [xbp-60h]

  if ( a1 != a2 )
  {
    v3 = a1;
    v4 = a1 + 80;
    if ( a1 + 80 != a2 )
    {
      v5 = a1 + 40;
      do
      {
        v6 = v3;
        v3 = v4;
        v7 = *(_QWORD *)(v6 + 80);
        if ( v7 <= *(_QWORD *)v6 && (v7 < *(_QWORD *)v6 || *(_QWORD *)(v6 + 88) < *(_QWORD *)(v6 + 8)) )
        {
          v8 = *(_QWORD *)(v4 + 8);
          v9 = *(_QWORD *)(v6 + 96);
          *(_QWORD *)(v6 + 96) = 0;
          v10 = *(_OWORD *)(v6 + 104);
          *(_OWORD *)(v6 + 104) = 0u;
          v11 = *(_QWORD *)(v6 + 120);
          *(_QWORD *)(v6 + 120) = 0;
          v22 = *(_OWORD *)(v6 + 128);
          v23 = v10;
          *(_OWORD *)(v6 + 128) = 0u;
          v27 = *(_WORD *)(v6 + 152);
          v12 = v5;
          v26 = *(_QWORD *)(v6 + 144);
          while ( 1 )
          {
            *(_OWORD *)(v12 + 40) = *(_OWORD *)(v12 - 40);
            v13 = *(_QWORD *)(v12 - 24);
            v14 = *(_OWORD *)(v12 - 16);
            *(_QWORD *)(v12 - 24) = 0;
            *(_QWORD *)(v12 - 16) = 0;
            *(_QWORD *)(v12 - 8) = 0;
            v15 = *(void **)(v12 + 56);
            if ( v15 )
            {
              *(_QWORD *)(v12 + 64) = 0;
              v24 = v14;
              qfree(v15);
              v14 = v24;
            }
            *(_QWORD *)(v12 + 56) = v13;
            *(_OWORD *)(v12 + 64) = v14;
            v16 = *(void **)v12;
            v17 = *(_OWORD *)(v12 + 8);
            *(_QWORD *)v12 = 0;
            *(_QWORD *)(v12 + 8) = 0;
            *(_QWORD *)(v12 + 16) = 0;
            v18 = *(void **)(v12 + 80);
            if ( v18 )
            {
              *(_QWORD *)(v12 + 88) = 0;
              v25 = v17;
              qfree(v18);
              v17 = v25;
            }
            *(_QWORD *)(v12 + 80) = v16;
            *(_OWORD *)(v12 + 88) = v17;
            *(_QWORD *)(v12 + 104) = *(_QWORD *)(v12 + 24);
            *(_WORD *)(v12 + 112) = *(_WORD *)(v12 + 32);
            v19 = *(_QWORD *)(v12 - 120);
            if ( v7 > v19 || v7 >= v19 && v8 >= *(_QWORD *)(v12 - 112) )
              break;
            v12 -= 80;
          }
          *(_QWORD *)(v12 - 40) = v7;
          *(_QWORD *)(v12 - 32) = v8;
          v20 = *(void **)(v12 - 24);
          if ( v20 )
          {
            *(_QWORD *)(v12 - 16) = 0;
            qfree(v20);
          }
          *(_QWORD *)(v12 - 24) = v9;
          *(_OWORD *)(v12 - 16) = v23;
          v21 = *(void **)v12;
          if ( *(_QWORD *)v12 )
          {
            *(_QWORD *)(v12 + 8) = 0;
            qfree(v21);
          }
          *(_QWORD *)v12 = v11;
          *(_OWORD *)(v12 + 8) = v22;
          *(_QWORD *)(v12 + 24) = v26;
          *(_WORD *)(v12 + 32) = v27;
        }
        v4 = v3 + 80;
        v5 += 80;
      }
      while ( v3 + 80 != a2 );
    }
  }
}
