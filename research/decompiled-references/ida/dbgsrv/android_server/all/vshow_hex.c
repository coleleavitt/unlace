/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: vshow_hex
// Address: 0x00000000000ACB08

//----- (00000000000ACB08) ----------------------------------------------------
__int64 __fastcall vshow_hex(unsigned __int8 *a1, unsigned __int64 a2, __int64 a3, _OWORD *a4)
{
  __int64 result; // x0
  int v7; // w22
  pthread_mutex_t *v8; // x21
  int v9; // w8
  char v10; // w27
  char v11; // w8
  unsigned __int8 v12; // w27
  char v13; // w8
  unsigned __int8 v14; // w27
  char v15; // w8
  unsigned __int8 v16; // w27
  char v17; // w8
  unsigned __int8 v18; // w27
  char v19; // w8
  unsigned __int8 v20; // w27
  char v21; // w8
  unsigned __int8 v22; // w27
  char v23; // w8
  unsigned __int8 v24; // w27
  char v25; // w8
  unsigned __int8 v26; // w27
  char v27; // w8
  unsigned __int8 v28; // w27
  char v29; // w8
  unsigned __int8 v30; // w27
  char v31; // w8
  unsigned __int8 v32; // w27
  char v33; // w8
  unsigned __int8 v34; // w27
  char v35; // w8
  unsigned __int8 v36; // w27
  char v37; // w8
  unsigned __int8 v38; // w27
  char v39; // w8
  unsigned __int8 v40; // w27
  char v41; // w8
  int v42; // w8
  unsigned int v43; // w8
  int v44; // w20
  _WORD *v45; // x23
  _WORD *v46; // x22
  __int64 v47; // x25
  char v48; // w21
  unsigned int v49; // t1
  char v50; // w8
  __int128 v51; // [xsp+20h] [xbp-480h]
  _OWORD v52[64]; // [xsp+30h] [xbp-470h] BYREF
  _QWORD v53[2]; // [xsp+430h] [xbp-70h] BYREF

  v53[1] = *(_QWORD *)(_ReadStatusReg(TPIDR_EL0) + 40);
  v51 = a4[1];
  v52[0] = *a4;
  v52[1] = v51;
  result = callui(23, a3, v52);
  if ( !a1 )
    return sub_39FA0((__int64)"vshow_hex(nullptr)\n");
  if ( a2 )
  {
    v7 = 0;
    v8 = (pthread_mutex_t *)v52;
    do
    {
      if ( (v7 & 0xF) == 0 )
        v8 = (pthread_mutex_t *)((char *)v8 + (int)qsnprintf(v8, (char *)v53 - (char *)v8, "%04X:", v7));
      v9 = v7 + 15;
      if ( v7 >= 0 )
        v9 = v7;
      result = qsnprintf(v8, (char *)v53 - (char *)v8, " %02X", a1[v7 - (v9 & 0xFFFFFFF0)]);
      ++v7;
      v8 = (pthread_mutex_t *)((char *)v8 + (int)result);
      if ( (v7 & 0xF) == 0 )
      {
        LOWORD(v8->__lock) = 8736;
        v10 = *a1;
        if ( __strchr_chk((const char *)&qword_11B370, *a1, 8) )
          v11 = 46;
        else
          v11 = v10;
        v8->__size[2] = v11;
        v12 = a1[1];
        if ( __strchr_chk((const char *)&qword_11B370, v12, 8) )
          v13 = 46;
        else
          v13 = v12;
        v8->__size[3] = v13;
        v14 = a1[2];
        if ( __strchr_chk((const char *)&qword_11B370, v14, 8) )
          v15 = 46;
        else
          v15 = v14;
        v8->__size[4] = v15;
        v16 = a1[3];
        if ( __strchr_chk((const char *)&qword_11B370, v16, 8) )
          v17 = 46;
        else
          v17 = v16;
        v8->__size[5] = v17;
        v18 = a1[4];
        if ( __strchr_chk((const char *)&qword_11B370, v18, 8) )
          v19 = 46;
        else
          v19 = v18;
        v8->__size[6] = v19;
        v20 = a1[5];
        if ( __strchr_chk((const char *)&qword_11B370, v20, 8) )
          v21 = 46;
        else
          v21 = v20;
        v8->__size[7] = v21;
        v22 = a1[6];
        if ( __strchr_chk((const char *)&qword_11B370, v22, 8) )
          v23 = 46;
        else
          v23 = v22;
        v8->__size[8] = v23;
        v24 = a1[7];
        if ( __strchr_chk((const char *)&qword_11B370, v24, 8) )
          v25 = 46;
        else
          v25 = v24;
        v8->__size[9] = v25;
        v26 = a1[8];
        if ( __strchr_chk((const char *)&qword_11B370, v26, 8) )
          v27 = 46;
        else
          v27 = v26;
        v8->__size[10] = v27;
        v28 = a1[9];
        if ( __strchr_chk((const char *)&qword_11B370, v28, 8) )
          v29 = 46;
        else
          v29 = v28;
        v8->__size[11] = v29;
        v30 = a1[10];
        if ( __strchr_chk((const char *)&qword_11B370, v30, 8) )
          v31 = 46;
        else
          v31 = v30;
        v8->__size[12] = v31;
        v32 = a1[11];
        if ( __strchr_chk((const char *)&qword_11B370, v32, 8) )
          v33 = 46;
        else
          v33 = v32;
        v8->__size[13] = v33;
        v34 = a1[12];
        if ( __strchr_chk((const char *)&qword_11B370, v34, 8) )
          v35 = 46;
        else
          v35 = v34;
        v8->__size[14] = v35;
        v36 = a1[13];
        if ( __strchr_chk((const char *)&qword_11B370, v36, 8) )
          v37 = 46;
        else
          v37 = v36;
        v8->__size[15] = v37;
        v38 = a1[14];
        if ( __strchr_chk((const char *)&qword_11B370, v38, 8) )
          v39 = 46;
        else
          v39 = v38;
        v8->__size[16] = v39;
        v40 = a1[15];
        if ( __strchr_chk((const char *)&qword_11B370, v40, 8) )
          v41 = 46;
        else
          v41 = v40;
        v8->__size[17] = v41;
        *((_WORD *)&v8->__align + 9) = 34;
        result = sub_39FA0((__int64)"%s\n", (const char *)v52);
        a1 += 16;
        v8 = (pthread_mutex_t *)v52;
      }
    }
    while ( v7 < a2 );
    v42 = v7 + 15;
    if ( v7 >= 0 )
      v42 = v7;
    v43 = v42 & 0xFFFFFFF0;
    v44 = v7 - v43;
    if ( v7 != v43 )
    {
      v45 = (_WORD *)((char *)v8 + (int)qsnprintf(v8, (char *)v53 - (char *)v8, "%*c", 3 * (16 - v44), 32));
      *v45 = 8736;
      v46 = v45 + 1;
      if ( v44 >= 1 )
      {
        v47 = (unsigned int)v44;
        do
        {
          v49 = *a1++;
          v48 = v49;
          if ( __strchr_chk((const char *)&qword_11B370, v49, 8) )
            v50 = 46;
          else
            v50 = v48;
          --v47;
          *(_BYTE *)v46 = v50;
          v46 = (_WORD *)((char *)v46 + 1);
        }
        while ( v47 );
        v46 = (_WORD *)((char *)v45 + (unsigned int)(v44 - 1) + 3);
      }
      *v46 = 34;
      return sub_39FA0((__int64)"%s\n", (const char *)v52);
    }
  }
  return result;
}
// 36CE0: using guessed type __int64 __strchr_chk(const char *, ...);
// 11B370: using guessed type __int64 qword_11B370;
// 166908: using guessed type __int64 (__fastcall *callui)(_QWORD, _QWORD, _QWORD);
