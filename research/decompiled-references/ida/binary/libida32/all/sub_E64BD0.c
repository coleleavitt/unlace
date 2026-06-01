__int64 __fastcall sub_E64BD0(__int64 a1, __int64 a2, char a3, char a4, char a5, unsigned int a6, __int64 a7)
{
  __int64 v10; // rax
  _BYTE *v11; // rax
  __int64 (__fastcall ***v12)(); // rdi
  _BYTE *v13; // rax
  _BYTE *v14; // rax
  __int64 (__fastcall **v17)(); // [rsp+10h] [rbp-338h] BYREF
  int v18; // [rsp+18h] [rbp-330h]
  __int128 v19; // [rsp+20h] [rbp-328h]
  __int64 v20; // [rsp+30h] [rbp-318h]
  char v21; // [rsp+38h] [rbp-310h]
  int v22; // [rsp+3Ch] [rbp-30Ch]
  __int64 **v23; // [rsp+40h] [rbp-308h]
  __int64 v24; // [rsp+48h] [rbp-300h]
  __int64 *v25; // [rsp+50h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-2F0h]
  __int64 v27; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v28; // [rsp+B0h] [rbp-298h] BYREF
  __int64 (__fastcall ***v29)(); // [rsp+B8h] [rbp-290h]
  __int64 v30; // [rsp+C0h] [rbp-288h]
  int v31; // [rsp+C8h] [rbp-280h]
  _QWORD *v32; // [rsp+D0h] [rbp-278h]
  __int64 v33; // [rsp+D8h] [rbp-270h]
  _QWORD v34[42]; // [rsp+E0h] [rbp-268h] BYREF
  int v35; // [rsp+230h] [rbp-118h]
  __int64 v36; // [rsp+238h] [rbp-110h]
  __int64 v37; // [rsp+240h] [rbp-108h]
  int v38; // [rsp+248h] [rbp-100h]
  __int64 v39; // [rsp+250h] [rbp-F8h]
  __int64 v40; // [rsp+258h] [rbp-F0h]
  int v41; // [rsp+260h] [rbp-E8h]
  __int128 v42; // [rsp+268h] [rbp-E0h] BYREF
  _QWORD *v43; // [rsp+278h] [rbp-D0h]
  __int64 v44; // [rsp+280h] [rbp-C8h]
  _QWORD v45[6]; // [rsp+288h] [rbp-C0h] BYREF
  __m128i v46; // [rsp+2B8h] [rbp-90h] BYREF
  __int128 *v47; // [rsp+2C8h] [rbp-80h]
  int v48; // [rsp+2D8h] [rbp-70h] BYREF
  __int64 v49; // [rsp+2E0h] [rbp-68h]
  int *v50; // [rsp+2E8h] [rbp-60h]
  int *v51; // [rsp+2F0h] [rbp-58h]
  __int64 v52; // [rsp+2F8h] [rbp-50h]
  bool v53; // [rsp+300h] [rbp-48h]

  v19 = 0;
  v17 = &off_2BC1F40;
  v23 = &v25;
  v18 = 2;
  v21 = 0;
  v22 = 1;
  v20 = 0;
  sub_2257B70(&v17, 0, 0, 0);
  v17 = &off_2BDAF98;
  v24 = a7;
  v25 = &v27;
  v32 = v34;
  v43 = v45;
  v42 = 0;
  v45[4] = &v46;
  v33 = 0xA00000000LL;
  v47 = &v42;
  v44 = 0x400000000LL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_2384D30);
  v28 = a1;
  v29 = &v17;
  v30 = 0;
  v31 = -1;
  v34[40] = 0;
  v34[41] = 0;
  v35 = 0;
  v36 = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v45[5] = 0;
  v46 = _mm_load_si128((const __m128i *)&unk_2383B90);
  v48 = 0;
  v49 = 0;
  v50 = &v48;
  v51 = &v48;
  v10 = *(_QWORD *)(a1 + 8);
  v52 = 0;
  v53 = *(_BYTE *)(*(_QWORD *)(v10 + 17448) + 8LL) == 64;
  sub_971800((__int64)&v17, "_TI");
  if ( a3 )
  {
    v11 = v29[4];
    if ( v11 >= (_BYTE *)v29[3] )
    {
      sub_2257CD0(v29, 67);
    }
    else
    {
      v29[4] = (__int64 (__fastcall **)())(v11 + 1);
      *v11 = 67;
    }
  }
  v12 = v29;
  if ( a4 )
  {
    v13 = v29[4];
    if ( v13 >= (_BYTE *)v29[3] )
    {
      sub_2257CD0(v29, 86);
    }
    else
    {
      v29[4] = (__int64 (__fastcall **)())(v13 + 1);
      *v13 = 86;
    }
    v12 = v29;
  }
  if ( a5 )
  {
    v14 = v12[4];
    if ( v14 >= (_BYTE *)v12[3] )
    {
      sub_2257CD0(v12, 85);
    }
    else
    {
      v12[4] = (__int64 (__fastcall **)())(v14 + 1);
      *v14 = 85;
    }
    v12 = v29;
  }
  sub_2257BD0(v12, a6);
  sub_E608A0(&v28, a2, nullptr, 3);
  sub_E56DF0((__int64)&v28);
  return sub_E56700(&v17);
}

