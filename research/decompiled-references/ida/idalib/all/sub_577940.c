__int64 __fastcall sub_577940(_QWORD *a1, __int64 *a2, __int64 a3, int a4, __int64 a5, _QWORD *a6)
{
  __int64 v8; // rbp
  __int64 v9; // r12
  __int64 v10; // r10
  __int64 v12; // r9
  void **v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rbx
  int v17[2]; // [rsp+8h] [rbp-330h]
  __m128i v19; // [rsp+20h] [rbp-318h] BYREF
  void *v20; // [rsp+38h] [rbp-300h]
  __int64 v21; // [rsp+40h] [rbp-2F8h]
  __int64 v22; // [rsp+60h] [rbp-2D8h]
  __int128 v23; // [rsp+70h] [rbp-2C8h]
  __int64 v24; // [rsp+80h] [rbp-2B8h]
  void *v25; // [rsp+90h] [rbp-2A8h]
  __int64 v26; // [rsp+98h] [rbp-2A0h]
  unsigned int v27; // [rsp+B0h] [rbp-288h]
  void *v28; // [rsp+C0h] [rbp-278h]
  __int64 v29; // [rsp+C8h] [rbp-270h]
  __int64 v30; // [rsp+D8h] [rbp-260h]
  __int64 v31; // [rsp+E8h] [rbp-250h]
  char v32; // [rsp+F0h] [rbp-248h]
  __int64 v33; // [rsp+F4h] [rbp-244h]
  _BYTE v34[360]; // [rsp+100h] [rbp-238h] BYREF
  void *ptr; // [rsp+268h] [rbp-D0h] BYREF
  __int128 v36; // [rsp+270h] [rbp-C8h]
  __int64 v37; // [rsp+280h] [rbp-B8h]
  __int64 v38; // [rsp+288h] [rbp-B0h]
  __int64 v39; // [rsp+290h] [rbp-A8h]
  __int64 v40; // [rsp+298h] [rbp-A0h]
  __int128 v41; // [rsp+2A0h] [rbp-98h]
  __int128 v42; // [rsp+2B0h] [rbp-88h]
  __int128 v43; // [rsp+2C0h] [rbp-78h]
  __int128 v44; // [rsp+2D0h] [rbp-68h]
  __int128 v45; // [rsp+2E0h] [rbp-58h]
  __int64 v46; // [rsp+2F0h] [rbp-48h]
  unsigned __int64 v47; // [rsp+2F8h] [rbp-40h]

  v8 = a1[4];
  v9 = a1[2];
  v10 = *(_QWORD *)(*a1 + 632LL);
  v47 = __readfsqword(0x28u);
  *(_QWORD *)v17 = v10;
  sub_573090((__int64)&v19, a3, a5, 0);
  v31 = a3;
  v33 = 0;
  *(_QWORD *)&v34[24] = 0;
  *(_QWORD *)&v34[32] = 0;
  v19.m128i_i64[0] = (__int64)&off_2BF9800;
  v13 = (void **)&v34[40];
  memset(v34, 255, 24);
  do
  {
    *(_WORD *)v13 = 0;
    v13 += 5;
    *((_WORD *)v13 - 19) = 0;
    *((_WORD *)v13 - 18) = 0;
    *((_DWORD *)v13 - 2) = 0;
    *((_WORD *)v13 - 17) = 0;
    *((_OWORD *)v13 - 2) = 0;
    *(v13 - 2) = nullptr;
  }
  while ( &ptr != v13 );
  v36 = 0;
  v41 = 0;
  v14 = a5 & 0x1FF;
  v42 = 0;
  v43 = 0;
  v44 = 0;
  ptr = nullptr;
  v37 = 0;
  v38 = *(_QWORD *)v17;
  v39 = v9;
  v40 = v8;
  v46 = a5;
  v32 = 2;
  v45 = -1;
  if ( v14 == 255 )
    v27 = v27 & 0xFFF27FFF | 0x98000;
  else
    v27 = v27 & 0xFFF2FFFF | 0x90000;
  if ( (~(_WORD)a5 & 0x600) != 0 )
    goto LABEL_10;
  if ( a6 )
  {
    if ( a6[2] == a3 )
    {
      qmemcpy(v34, a6, sizeof(v34));
      goto LABEL_10;
    }
    if ( (unsigned int)decode_insn(v34, a3, v14, 0, 0, v12, NAN) )
    {
      qmemcpy(a6, v34, 0x168u);
LABEL_10:
      v15 = sub_577680(&v19, a2, a4);
      goto LABEL_11;
    }
  }
  else if ( (unsigned int)decode_insn(v34, a3, v14, 0, 0, v12, NAN) )
  {
    goto LABEL_10;
  }
  v15 = 0;
LABEL_11:
  v19.m128i_i64[0] = (__int64)&off_2BF9800;
  if ( ptr )
  {
    *(_QWORD *)&v36 = 0;
    qfree(ptr);
  }
  v24 = 0;
  v19.m128i_i64[0] = (__int64)&off_2BFB0E8;
  v30 = 0;
  v22 = 0;
  v23 = 0;
  if ( v28 )
  {
    v29 = 0;
    qfree(v28);
  }
  if ( v25 )
  {
    v26 = 0;
    qfree(v25);
  }
  if ( v20 )
  {
    v21 = 0;
    qfree(v20);
  }
  return v15;
}
