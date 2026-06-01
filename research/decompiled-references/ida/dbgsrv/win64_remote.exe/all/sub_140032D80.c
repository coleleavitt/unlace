/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140032D80
// Address: 0x0000000140032D80

//----- (0000000140032D80) ----------------------------------------------------
__int64 __fastcall sub_140032D80(__int64 a1, __int64 a2, void **a3, char a4)
{
  unsigned __int8 v6; // r15
  _QWORD *v7; // rbx
  void *v8; // rcx
  __int64 v9; // rdi
  __int64 v10; // rbx
  char *v11; // rsi
  void *v12; // rcx
  char *v13; // rdi
  __int64 v14; // rbx
  char *v15; // rsi
  void *v16; // rcx
  void *v17; // rcx
  char *v18; // rdi
  __int64 v19; // rbx
  char *v20; // rdi
  __int64 v21; // rsi
  __int64 v22; // rbx
  void *v23; // rcx
  char *v24; // rdi
  char *v25; // rsi
  __int64 v26; // rbx
  void *v27; // rcx
  char *v28; // rdi
  __int64 v29; // rsi
  __int64 v30; // rbx
  void *v31; // rcx
  _QWORD v33[3]; // [rsp+20h] [rbp-E0h] BYREF
  char v34; // [rsp+38h] [rbp-C8h]
  void *v35[2]; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v36; // [rsp+50h] [rbp-B0h]
  __int16 v37; // [rsp+58h] [rbp-A8h]
  __int64 v38; // [rsp+60h] [rbp-A0h]
  char v39; // [rsp+68h] [rbp-98h]
  __int128 v40; // [rsp+70h] [rbp-90h]
  __int64 v41; // [rsp+80h] [rbp-80h]
  void *v42; // [rsp+88h] [rbp-78h]
  __int128 v43; // [rsp+90h] [rbp-70h]
  void *v44[2]; // [rsp+A0h] [rbp-60h]
  void *v45[2]; // [rsp+B0h] [rbp-50h]
  __int64 v46; // [rsp+C0h] [rbp-40h]
  __int64 v47; // [rsp+C8h] [rbp-38h]
  __int128 v48; // [rsp+D0h] [rbp-30h]
  _QWORD *v49; // [rsp+E0h] [rbp-20h]
  int v50; // [rsp+E8h] [rbp-18h]
  char v51; // [rsp+ECh] [rbp-14h]
  int v52; // [rsp+F0h] [rbp-10h]
  char v53; // [rsp+F4h] [rbp-Ch]
  void *v54; // [rsp+F8h] [rbp-8h]
  __int64 v55; // [rsp+100h] [rbp+0h]
  __int64 v56; // [rsp+108h] [rbp+8h]
  void *v57; // [rsp+110h] [rbp+10h]
  __int64 v58; // [rsp+118h] [rbp+18h]
  void *v59[2]; // [rsp+120h] [rbp+20h]
  __int64 v60; // [rsp+130h] [rbp+30h]
  __int64 v61; // [rsp+138h] [rbp+38h]
  void *v62; // [rsp+140h] [rbp+40h]
  __int64 v63; // [rsp+148h] [rbp+48h]
  void *v64[2]; // [rsp+150h] [rbp+50h]
  __int64 v65; // [rsp+160h] [rbp+60h]
  __int64 v66; // [rsp+168h] [rbp+68h]
  void *v67; // [rsp+170h] [rbp+70h]
  __int64 v68; // [rsp+178h] [rbp+78h]
  void *v69[2]; // [rsp+180h] [rbp+80h]
  __int64 v70; // [rsp+190h] [rbp+90h]
  __int64 v71; // [rsp+198h] [rbp+98h]
  void *v72[2]; // [rsp+1A0h] [rbp+A0h]
  __int64 v73; // [rsp+1B0h] [rbp+B0h]
  __int64 v74; // [rsp+1B8h] [rbp+B8h]
  void *Block[2]; // [rsp+1C0h] [rbp+C0h]
  __int64 v76; // [rsp+1D0h] [rbp+D0h]
  int v77; // [rsp+1D8h] [rbp+D8h]
  char v78; // [rsp+1DCh] [rbp+DCh]
  __int128 v79; // [rsp+1E0h] [rbp+E0h]
  __int64 v80; // [rsp+1F0h] [rbp+F0h]

  v33[0] = sub_140033E70;
  v33[1] = &off_140095900;
  v33[2] = off_140094DD0;
  v34 = 0;
  *(_OWORD *)v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = a1;
  v42 = nullptr;
  v43 = 0;
  *(_OWORD *)v44 = 0;
  *(_OWORD *)v45 = 0;
  v46 = 0;
  v47 = 0;
  v48 = 0;
  v49 = nullptr;
  v50 = 0;
  v51 = -90;
  v52 = 0;
  v53 = 0;
  v54 = nullptr;
  v55 = 0;
  v56 = 0;
  v57 = nullptr;
  v58 = 0;
  *(_OWORD *)v59 = 0;
  v60 = 0;
  v61 = 0;
  v62 = nullptr;
  v63 = 0;
  *(_OWORD *)v64 = 0;
  v65 = 0;
  v66 = 0;
  v67 = nullptr;
  v68 = 0;
  *(_OWORD *)v69 = 0;
  v70 = 0;
  v71 = 0;
  *(_OWORD *)v72 = 0;
  v73 = 0;
  v74 = a2;
  *(_OWORD *)Block = 0;
  v76 = 0;
  v77 = -1;
  v78 = a4;
  sub_14003DA70(*(_QWORD *)(a1 + 32), (__int64)v33);
  sub_1400640B0(0);
  v6 = sub_14003FE50((__int64)v33, 0);
  if ( !v6 )
  {
    sub_140033C70(*(_QWORD *)(a1 + 32), -1, (__int64)v35, a3);
    v7 = v49;
    if ( v49 )
    {
      v8 = (void *)*v49;
      if ( *v49 )
      {
        v49[1] = 0;
        j_free(v8);
        *v7 = 0;
        v7[2] = 0;
        v7 = v49;
      }
    }
    v9 = v43;
    if ( (_QWORD)v43 )
    {
      v79 = 0;
      v80 = 0;
      v10 = 0;
      do
      {
        v11 = (char *)v42;
        v12 = *(void **)((char *)v42 + v10);
        if ( v12 )
        {
          *(_QWORD *)((char *)v42 + v10 + 8) = 0;
          j_free(v12);
          *(_QWORD *)&v11[v10] = 0;
          *(_QWORD *)&v11[v10 + 16] = 0;
        }
        v10 += 24;
        --v9;
      }
      while ( v9 );
      *(_QWORD *)&v43 = 0;
      v7 = v49;
    }
    v13 = (char *)v44[1];
    if ( v44[1] )
    {
      v79 = 0;
      v80 = 0;
      v14 = 0;
      do
      {
        v15 = (char *)v44[0];
        v16 = *(void **)((char *)v44[0] + v14);
        if ( v16 )
        {
          *(_QWORD *)((char *)v44[0] + v14 + 8) = 0;
          j_free(v16);
          *(_QWORD *)&v15[v14] = 0;
          *(_QWORD *)&v15[v14 + 16] = 0;
        }
        v14 += 24;
        --v13;
      }
      while ( v13 );
      v44[1] = nullptr;
      v7 = v49;
    }
    if ( v7 && v7[1] )
    {
      if ( v46 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(262);
      }
      if ( v55 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(263);
      }
      if ( v58 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(264);
      }
      if ( v60 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(265);
      }
      if ( v63 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(266);
      }
      if ( v65 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(267);
      }
      if ( v68 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(268);
      }
      if ( v70 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(269);
      }
    }
    if ( *((_QWORD *)&v48 + 1) )
    {
      if ( *(_DWORD *)(*((_QWORD *)&v48 + 1) + 136LL) != -1 )
      {
        if ( byte_1400CB61C )
          __debugbreak();
        sub_14005A480(485);
      }
      *(_DWORD *)(*((_QWORD *)&v48 + 1) + 136LL) = 0;
      *((_QWORD *)&v48 + 1) = 0;
    }
    v49 = nullptr;
    v50 = -1;
    v74 = 0;
  }
  sub_14003DA70(*(_QWORD *)(a1 + 32), 0);
  sub_140034610((__int64)v33);
  *(_QWORD *)&v48 = 0;
  v17 = Block[0];
  if ( Block[0] )
  {
    v18 = (char *)Block[1];
    if ( Block[1] )
    {
      v19 = 0;
      do
      {
        sub_140029390((__int64)v17 + v19);
        v19 += 32;
        --v18;
        v17 = Block[0];
      }
      while ( v18 );
    }
    Block[1] = nullptr;
    j_free(v17);
    Block[0] = nullptr;
    v76 = 0;
  }
  if ( v72[0] )
  {
    v72[1] = nullptr;
    j_free(v72[0]);
    v72[0] = nullptr;
    v73 = 0;
  }
  if ( v69[1] )
  {
    v70 = 0;
    j_free(v69[1]);
    v69[1] = nullptr;
    v71 = 0;
  }
  if ( v67 )
  {
    v68 = 0;
    j_free(v67);
    v67 = nullptr;
    v69[0] = nullptr;
  }
  if ( v64[1] )
  {
    v65 = 0;
    j_free(v64[1]);
    v64[1] = nullptr;
    v66 = 0;
  }
  if ( v62 )
  {
    v63 = 0;
    j_free(v62);
    v62 = nullptr;
    v64[0] = nullptr;
  }
  if ( v59[1] )
  {
    v60 = 0;
    j_free(v59[1]);
    v59[1] = nullptr;
    v61 = 0;
  }
  if ( v57 )
  {
    v58 = 0;
    j_free(v57);
    v57 = nullptr;
    v59[0] = nullptr;
  }
  if ( v54 )
  {
    v55 = 0;
    j_free(v54);
    v54 = nullptr;
    v56 = 0;
  }
  v20 = (char *)v45[1];
  if ( v45[1] )
  {
    v21 = v46;
    if ( v46 )
    {
      v22 = 0;
      do
      {
        v23 = *(void **)&v20[v22];
        if ( v23 )
        {
          *(_QWORD *)&v20[v22 + 8] = 0;
          j_free(v23);
          *(_QWORD *)&v20[v22] = 0;
          *(_QWORD *)&v20[v22 + 16] = 0;
          v20 = (char *)v45[1];
        }
        v22 += 24;
        --v21;
      }
      while ( v21 );
    }
    v46 = 0;
    j_free(v20);
    v45[1] = nullptr;
    v47 = 0;
  }
  v24 = (char *)v44[0];
  if ( v44[0] )
  {
    v25 = (char *)v44[1];
    if ( v44[1] )
    {
      v26 = 0;
      do
      {
        v27 = *(void **)&v24[v26];
        if ( v27 )
        {
          *(_QWORD *)&v24[v26 + 8] = 0;
          j_free(v27);
          *(_QWORD *)&v24[v26] = 0;
          *(_QWORD *)&v24[v26 + 16] = 0;
          v24 = (char *)v44[0];
        }
        v26 += 24;
        --v25;
      }
      while ( v25 );
    }
    v44[1] = nullptr;
    j_free(v24);
    v44[0] = nullptr;
    v45[0] = nullptr;
  }
  v28 = (char *)v42;
  if ( v42 )
  {
    v29 = v43;
    if ( (_QWORD)v43 )
    {
      v30 = 0;
      do
      {
        v31 = *(void **)&v28[v30];
        if ( v31 )
        {
          *(_QWORD *)&v28[v30 + 8] = 0;
          j_free(v31);
          *(_QWORD *)&v28[v30] = 0;
          *(_QWORD *)&v28[v30 + 16] = 0;
          v28 = (char *)v42;
        }
        v30 += 24;
        --v29;
      }
      while ( v29 );
    }
    *(_QWORD *)&v43 = 0;
    j_free(v28);
    v42 = nullptr;
    *((_QWORD *)&v43 + 1) = 0;
  }
  if ( v35[0] )
  {
    v35[1] = nullptr;
    j_free(v35[0]);
  }
  return v6;
}
// 140094DD0: using guessed type __int64 (__fastcall *off_140094DD0[115])();
// 140095900: using guessed type __int64 (*off_140095900)[5];
// 1400CB61C: using guessed type char byte_1400CB61C;
