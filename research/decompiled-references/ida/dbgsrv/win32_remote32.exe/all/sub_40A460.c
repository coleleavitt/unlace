/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40A460
// Address: 0x0040A460

//----- (0040A460) --------------------------------------------------------
void __thiscall sub_40A460(_DWORD *this)
{
  void *v2; // eax
  void *v3; // eax
  void *v4; // eax
  void *v5; // eax
  _DWORD *v6; // edi
  void *v7; // eax
  void *v8; // eax
  int v9; // eax
  int v10; // ebx
  _DWORD *v11; // edi
  void *v12; // ecx
  void **v13; // ebx
  _DWORD *v14; // edi
  void *v15; // eax
  void *v16; // eax
  int v17; // edi
  void *v18; // eax
  _DWORD *v19; // edi
  void *v20; // eax
  void *v21; // eax
  void *v22; // eax
  int v23; // ecx
  int v24; // edi
  void *v25; // eax
  void *v26; // eax
  void *v27; // eax
  void *v28; // eax
  int v29; // ebx
  _DWORD *v30; // edi
  void *v31; // eax
  void *v32; // eax
  void *v33; // [esp-4h] [ebp-28h]
  void *v34; // [esp-4h] [ebp-28h]
  void *v35; // [esp-4h] [ebp-28h]
  void *v36; // [esp-4h] [ebp-28h]
  int v37; // [esp+10h] [ebp-14h]
  int v38; // [esp+10h] [ebp-14h]
  int v39; // [esp+10h] [ebp-14h]

  *this = &off_48A254;
  sub_43AB60((int)this);
  v2 = (void *)*(this + 89);
  if ( v2 )
  {
    *(this + 90) = 0;
    sub_453A20(v2);
    *(this + 89) = 0;
    *(this + 91) = 0;
  }
  v3 = (void *)*(this + 86);
  if ( v3 )
  {
    *(this + 87) = 0;
    sub_453A20(v3);
    *(this + 86) = 0;
    *(this + 88) = 0;
  }
  if ( *(this + 75) )
  {
    sub_416030(this + 75, 0);
    sub_453A20((void *)*(this + 75));
    *(this + 75) = 0;
    *(this + 77) = 0;
  }
  v4 = (void *)*(this + 72);
  if ( v4 )
  {
    *(this + 73) = 0;
    sub_453A20(v4);
    *(this + 72) = 0;
    *(this + 74) = 0;
  }
  if ( *(this + 69) )
  {
    sub_415F90(this + 69, 0);
    sub_453A20((void *)*(this + 69));
    *(this + 69) = 0;
    *(this + 71) = 0;
  }
  v5 = (void *)*(this + 66);
  if ( v5 )
  {
    *(this + 67) = 0;
    sub_453A20(v5);
    *(this + 66) = 0;
    *(this + 68) = 0;
  }
  v6 = *(_DWORD **)(*(this + 62) + 4);
  while ( !*((_BYTE *)v6 + 13) )
  {
    sub_408A30((int)(this + 62), v6[2]);
    v7 = v6;
    v6 = (_DWORD *)*v6;
    sub_4627F2(v7);
  }
  sub_4627F2((void *)*(this + 62));
  v8 = (void *)*(this + 59);
  if ( v8 )
  {
    *(this + 60) = 0;
    sub_453A20(v8);
    *(this + 59) = 0;
    *(this + 61) = 0;
  }
  if ( *(this + 56) )
  {
    v9 = *(this + 57);
    v37 = v9;
    if ( v9 )
    {
      v10 = 0;
      do
      {
        v11 = (_DWORD *)(v10 + *(this + 56));
        v12 = (void *)v11[1];
        if ( v12 )
        {
          v11[2] = 0;
          sub_453A20(v12);
          v9 = v37;
          v11[1] = 0;
          v11[3] = 0;
        }
        v10 += 36;
        v37 = --v9;
      }
      while ( v9 );
    }
    v33 = (void *)*(this + 56);
    *(this + 57) = 0;
    sub_453A20(v33);
    *(this + 56) = 0;
    *(this + 58) = 0;
  }
  v13 = (void **)(this + 54);
  v14 = *(_DWORD **)(*(this + 54) + 4);
  while ( !*((_BYTE *)v14 + 13) )
  {
    sub_408820((int)(this + 54), v14[2]);
    v15 = v14;
    v14 = (_DWORD *)*v14;
    sub_4627F2(v15);
  }
  sub_4627F2(*v13);
  v16 = (void *)*(this + 51);
  if ( v16 )
  {
    *(this + 52) = 0;
    sub_453A20(v16);
    *(this + 51) = 0;
    *(this + 53) = 0;
  }
  if ( *(this + 47) )
  {
    v13 = (void **)*(this + 48);
    if ( v13 )
    {
      v17 = 0;
      do
      {
        sub_40ACD0((_DWORD *)(v17 + *(this + 47)));
        v17 += 40;
        v13 = (void **)((char *)v13 - 1);
      }
      while ( v13 );
    }
    v34 = (void *)*(this + 47);
    *(this + 48) = 0;
    sub_453A20(v34);
    *(this + 47) = 0;
    *(this + 49) = 0;
  }
  v18 = (void *)*(this + 44);
  if ( v18 )
  {
    *(this + 45) = 0;
    sub_453A20(v18);
    *(this + 44) = 0;
    *(this + 46) = 0;
  }
  sub_4089B0(this + 42, (int)(this + 42), *(int **)(*(this + 42) + 4));
  sub_4627F2((void *)*(this + 42));
  sub_4086A0(this + 40, (int)(this + 40), *(int **)(*(this + 40) + 4));
  sub_4627F2((void *)*(this + 40));
  if ( *(this + 37) )
  {
    v38 = *(this + 38);
    if ( v38 )
    {
      v13 = nullptr;
      do
      {
        v19 = (void **)((char *)v13 + *(this + 37));
        v20 = (void *)v19[5];
        if ( v20 )
        {
          v19[6] = 0;
          sub_453A20(v20);
          v19[5] = 0;
          v19[7] = 0;
        }
        v21 = (void *)v19[1];
        if ( v21 )
        {
          v19[2] = 0;
          sub_453A20(v21);
          v19[1] = 0;
          v19[3] = 0;
        }
        v13 += 8;
        --v38;
      }
      while ( v38 );
    }
    v35 = (void *)*(this + 37);
    *(this + 38) = 0;
    sub_453A20(v35);
    *(this + 37) = 0;
    *(this + 39) = 0;
  }
  v22 = (void *)*(this + 33);
  if ( v22 )
  {
    *(this + 34) = 0;
    sub_453A20(v22);
    *(this + 33) = 0;
    *(this + 35) = 0;
  }
  sub_45B190(this + 20);
  v23 = *(this + 19);
  if ( v23 )
  {
    do
    {
      sub_45B190(*(_DWORD **)(*(this + 16) + 4 * ((v23 + *(this + 18) - 1) & (*(this + 17) - 1))));
      v23 = *(this + 19) - 1;
      *(this + 19) = v23;
    }
    while ( v23 );
    *(this + 18) = 0;
  }
  if ( *(this + 16) )
  {
    v24 = *(this + 17);
    while ( v24 > 0 )
    {
      --v24;
      v25 = *(void **)(*(this + 16) + 4 * v24);
      if ( v25 )
        sub_4627F2(v25);
    }
    sub_40FB70((int)v13, v24, (void *)*(this + 16), *(this + 17));
    *(this + 16) = 0;
    *(this + 17) = 0;
  }
  v26 = (void *)*(this + 15);
  *(this + 15) = 0;
  sub_4627F2(v26);
  v27 = (void *)*(this + 12);
  if ( v27 )
  {
    *(this + 13) = 0;
    sub_453A20(v27);
    *(this + 12) = 0;
    *(this + 14) = 0;
  }
  v28 = (void *)*(this + 9);
  if ( v28 )
  {
    *(this + 10) = 0;
    sub_453A20(v28);
    *(this + 9) = 0;
    *(this + 11) = 0;
  }
  if ( *(this + 6) )
  {
    v39 = *(this + 7);
    if ( v39 )
    {
      v29 = 0;
      do
      {
        v30 = (_DWORD *)(v29 + *(this + 6));
        v31 = (void *)v30[5];
        if ( v31 )
        {
          v30[6] = 0;
          sub_453A20(v31);
          v30[5] = 0;
          v30[7] = 0;
        }
        v32 = (void *)v30[2];
        if ( v32 )
        {
          v30[3] = 0;
          sub_453A20(v32);
          v30[2] = 0;
          v30[4] = 0;
        }
        v29 += 32;
        --v39;
      }
      while ( v39 );
    }
    v36 = (void *)*(this + 6);
    *(this + 7) = 0;
    sub_453A20(v36);
    *(this + 6) = 0;
    *(this + 8) = 0;
  }
}
// 48A254: using guessed type int (__stdcall *off_48A254)(int, int);
