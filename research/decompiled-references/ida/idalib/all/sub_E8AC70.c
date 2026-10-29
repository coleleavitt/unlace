__int64 __fastcall sub_E8AC70(
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        unsigned int a5,
        unsigned int a6,
        __int64 a7)
{
  __int64 v10; // rax
  _DWORD *v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 (__fastcall ***v15)(); // rdi
  _BYTE *v16; // rax
  __int64 (__fastcall **v19)(); // [rsp+10h] [rbp-338h] BYREF
  int v20; // [rsp+18h] [rbp-330h]
  __int128 v21; // [rsp+20h] [rbp-328h]
  _DWORD *v22; // [rsp+30h] [rbp-318h]
  char v23; // [rsp+38h] [rbp-310h]
  int v24; // [rsp+3Ch] [rbp-30Ch]
  __int64 **v25; // [rsp+40h] [rbp-308h]
  __int64 v26; // [rsp+48h] [rbp-300h]
  __int64 *v27; // [rsp+50h] [rbp-2F8h] BYREF
  __m128i si128; // [rsp+58h] [rbp-2F0h]
  __int64 v29; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v30; // [rsp+B0h] [rbp-298h] BYREF
  __int64 (__fastcall ***v31)(); // [rsp+B8h] [rbp-290h]
  __int64 v32; // [rsp+C0h] [rbp-288h]
  int v33; // [rsp+C8h] [rbp-280h]
  _QWORD *v34; // [rsp+D0h] [rbp-278h]
  __int64 v35; // [rsp+D8h] [rbp-270h]
  _QWORD v36[42]; // [rsp+E0h] [rbp-268h] BYREF
  int v37; // [rsp+230h] [rbp-118h]
  __int64 v38; // [rsp+238h] [rbp-110h]
  __int64 v39; // [rsp+240h] [rbp-108h]
  int v40; // [rsp+248h] [rbp-100h]
  __int64 v41; // [rsp+250h] [rbp-F8h]
  __int64 v42; // [rsp+258h] [rbp-F0h]
  int v43; // [rsp+260h] [rbp-E8h]
  __int128 v44; // [rsp+268h] [rbp-E0h] BYREF
  _QWORD *v45; // [rsp+278h] [rbp-D0h]
  __int64 v46; // [rsp+280h] [rbp-C8h]
  _QWORD v47[6]; // [rsp+288h] [rbp-C0h] BYREF
  __m128i v48; // [rsp+2B8h] [rbp-90h] BYREF
  __int128 *v49; // [rsp+2C8h] [rbp-80h]
  int v50; // [rsp+2D8h] [rbp-70h] BYREF
  __int64 v51; // [rsp+2E0h] [rbp-68h]
  int *v52; // [rsp+2E8h] [rbp-60h]
  int *v53; // [rsp+2F0h] [rbp-58h]
  __int64 v54; // [rsp+2F8h] [rbp-50h]
  bool v55; // [rsp+300h] [rbp-48h]

  v21 = 0;
  v19 = &off_2BEBEE0;
  v25 = &v27;
  v20 = 2;
  v23 = 0;
  v24 = 1;
  v22 = nullptr;
  sub_227B8B0(&v19, 0, 0, 0);
  v19 = &off_2C04F98;
  v26 = a7;
  v27 = &v29;
  v34 = v36;
  v45 = v47;
  v44 = 0;
  v47[4] = &v48;
  v35 = 0xA00000000LL;
  v49 = &v44;
  v46 = 0x400000000LL;
  v52 = &v50;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D70);
  v30 = a1;
  v31 = &v19;
  v32 = 0;
  v33 = -1;
  v36[40] = 0;
  v36[41] = 0;
  v37 = 0;
  v38 = 0;
  v39 = 0;
  v40 = 0;
  v41 = 0;
  v42 = 0;
  v43 = 0;
  v47[5] = 0;
  v48 = _mm_load_si128((const __m128i *)&unk_23A7BC0);
  v50 = 0;
  v51 = 0;
  v53 = &v50;
  v10 = *(_QWORD *)(a1 + 8);
  v54 = 0;
  v11 = v22;
  v55 = *(_BYTE *)(*(_QWORD *)(v10 + 17448) + 8LL) == 64;
  if ( *((_QWORD *)&v21 + 1) - (_QWORD)v22 > 4u )
  {
    *v22 = 1381973823;
    *((_BYTE *)v11 + 4) = 49;
    v22 = (_DWORD *)((char *)v22 + 5);
  }
  else
  {
    sub_227BF10(&v19, "??_R1", 5);
  }
  sub_E79E60((__int64)&v30, (void *)a3);
  sub_E79E60((__int64)&v30, (void *)a4);
  sub_E79E60((__int64)&v30, (void *)a5);
  sub_E79E60((__int64)&v30, (void *)a6);
  sub_E82590(&v30, a2, 0, v12, v13, v14);
  v15 = v31;
  v16 = v31[4];
  if ( v31[3] == (__int64 (__fastcall **)())v16 )
  {
    sub_227BF10(v31, "8", 1);
  }
  else
  {
    *v16 = 56;
    v15[4] = (__int64 (__fastcall **)())((char *)v15[4] + 1);
  }
  sub_E7AB30((__int64)&v30);
  return sub_E7A440(&v19);
}
