unsigned __int64 __fastcall sub_1920(__int64 a1, char *a2, double a3)
{
  unsigned __int64 v3; // r13
  unsigned __int64 v4; // r14
  unsigned __int64 v5; // r15
  int v6; // r8d
  int v7; // esi
  int v8; // eax
  int v9; // ebp
  _BYTE *v10; // rax
  __int16 v11; // dx
  unsigned __int64 v12; // rdx
  __int64 v13; // rax
  __int64 v15; // rax
  unsigned __int64 v16; // rsi
  int v17; // [rsp+8h] [rbp-8130h]
  __int64 v18; // [rsp+8h] [rbp-8130h]
  unsigned __int64 v20; // [rsp+18h] [rbp-8120h]
  unsigned int v21; // [rsp+2Ch] [rbp-810Ch] BYREF
  _OWORD v22[2]; // [rsp+30h] [rbp-8108h] BYREF
  __int64 v23; // [rsp+50h] [rbp-80E8h]
  __int64 v24; // [rsp+58h] [rbp-80E0h]
  __int64 v25; // [rsp+60h] [rbp-80D8h]
  __int128 v26; // [rsp+68h] [rbp-80D0h]
  __int128 v27; // [rsp+78h] [rbp-80C0h]
  __int128 v28; // [rsp+88h] [rbp-80B0h]
  __int128 v29; // [rsp+98h] [rbp-80A0h]
  __int128 v30; // [rsp+A8h] [rbp-8090h]
  __int128 v31; // [rsp+B8h] [rbp-8080h]
  __int128 v32; // [rsp+C8h] [rbp-8070h]
  __int128 v33; // [rsp+D8h] [rbp-8060h]
  unsigned __int64 v34; // [rsp+E8h] [rbp-8050h]
  _BYTE s[32776]; // [rsp+F0h] [rbp-8048h] BYREF
  unsigned __int64 v36; // [rsp+80F8h] [rbp-40h]

  v36 = __readfsqword(0x28u);
  v20 = qlsize();
  memset(s, 0, 0x8000u);
  if ( qlread(a1, s, 49) != 49 )
    sub_1870((__int64)"Error reading file header\n");
  v3 = 0;
  v4 = -1;
  while ( 1 )
  {
    lread(a1, &v21, 2);
    v17 = (unsigned __int16)v21;
    lread(a1, &v21, 4);
    v5 = v21;
    lread(a1, &v21, 2);
    if ( !(_WORD)v21 )
      break;
    HIWORD(v6) = HIWORD(v17);
    if ( (unsigned __int16)v21 > 0x8000uLL )
    {
      v16 = (unsigned __int16)v21;
      sub_17A0((__int64)"SBN: bad section size %zu at %a\n", (unsigned __int16)v21, a3);
LABEL_21:
      sub_1870((__int64)"Bad file format", v16);
    }
    if ( v5 > 0xFFFFFF )
    {
      v16 = v5;
      sub_17A0((__int64)"SBN: bad section start address %a\n", a3);
      goto LABEL_21;
    }
    v7 = (unsigned __int8)v17;
    LOWORD(v6) = BYTE1(v17);
    HIWORD(v8) = WORD1(v5);
    v18 = (unsigned __int16)v21;
    LOWORD(v8) = BYTE1(v5);
    v9 = v8
       + (v5 >> 16)
       + (unsigned __int8)v5
       + v6
       + v7
       + ((unsigned __int64)(unsigned __int16)v21 >> 8)
       + (unsigned __int8)v21;
    lread(a1, s, (unsigned __int16)v21);
    v10 = s;
    do
    {
      v11 = (unsigned __int8)*v10++;
      LOWORD(v9) = v11 + v9;
    }
    while ( &s[v18] != v10 );
    v12 = v5 + v18;
    if ( v4 > v5 )
      v4 = v5;
    if ( v3 < v12 )
      v3 = v5 + v18;
    mem2base(s, v5, v12, 1);
    lread(a1, &v21, 2);
    if ( (_WORD)v9 != (_WORD)v21 )
      sub_16D0((__int64)"Block checksum error, file is probably corrupted");
  }
  v13 = getseg(v4);
  if ( v13 )
  {
    if ( *(_QWORD *)(v13 + 8) >= v3 )
      goto LABEL_16;
    a2 = "";
  }
  v23 = 0;
  memset(v22, 0, sizeof(v22));
  v24 = 0;
  v25 = 0;
  v34 = 0xFFFFFFFF00000000LL;
  v26 = -1;
  v27 = -1;
  v28 = -1;
  v29 = -1;
  v30 = -1;
  v31 = -1;
  v32 = -1;
  v33 = -1;
  v15 = setup_selector(0);
  *((_QWORD *)&v22[0] + 1) = v3;
  v25 = v15;
  *(_QWORD *)&v22[0] = v4;
  LOWORD(v24) = 513;
  BYTE3(v24) = 1;
  if ( !(unsigned __int8)add_segm_ex(v22, a2, "CODE", v20 < v3 - v4 ? 33 : 1) )
    sub_1870(0);
LABEL_16:
  create_filename_cmt();
  return v36 - __readfsqword(0x28u);
}
