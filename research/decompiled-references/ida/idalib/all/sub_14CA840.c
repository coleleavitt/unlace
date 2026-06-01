__int64 __fastcall sub_14CA840(__int64 a1, __m128i a2, __m128 a3)
{
  unsigned int v3; // r13d
  char v4; // al
  __int64 v5; // rbx
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _BYTE *v12; // [rsp+0h] [rbp-C68h] BYREF
  char v13; // [rsp+8h] [rbp-C60h]
  __int64 v14; // [rsp+10h] [rbp-C58h]
  int v15; // [rsp+18h] [rbp-C50h]
  __int16 v16; // [rsp+1Ch] [rbp-C4Ch]
  __int64 (__fastcall *v17)(__int64); // [rsp+20h] [rbp-C48h]
  __int64 v18; // [rsp+28h] [rbp-C40h]
  __int64 v19; // [rsp+30h] [rbp-C38h]
  unsigned __int8 *v20[10]; // [rsp+40h] [rbp-C28h] BYREF
  _DWORD v21[10]; // [rsp+90h] [rbp-BD8h] BYREF
  void *v22; // [rsp+B8h] [rbp-BB0h]
  __int64 v23; // [rsp+C8h] [rbp-BA0h] BYREF
  __int64 v24; // [rsp+D8h] [rbp-B90h] BYREF
  void *ptr; // [rsp+E0h] [rbp-B88h]
  __int64 v26; // [rsp+F0h] [rbp-B78h] BYREF
  void *v27; // [rsp+110h] [rbp-B58h]
  int v28; // [rsp+11Ch] [rbp-B4Ch]
  __int64 v29; // [rsp+130h] [rbp-B38h]
  _QWORD v30[2]; // [rsp+1C0h] [rbp-AA8h] BYREF
  __int128 v31; // [rsp+1D0h] [rbp-A98h]
  __int64 v32; // [rsp+1E0h] [rbp-A88h]
  __int64 v33; // [rsp+1E8h] [rbp-A80h]
  __int64 v34; // [rsp+1F0h] [rbp-A78h]
  int v35; // [rsp+1F8h] [rbp-A70h]
  __int64 v36; // [rsp+200h] [rbp-A68h]
  __int64 v37; // [rsp+210h] [rbp-A58h]
  __int64 v38; // [rsp+218h] [rbp-A50h]
  int v39; // [rsp+220h] [rbp-A48h]
  __int64 v40; // [rsp+228h] [rbp-A40h]
  __int64 v41; // [rsp+230h] [rbp-A38h]
  int v42; // [rsp+238h] [rbp-A30h]
  __int64 *v43; // [rsp+240h] [rbp-A28h]
  __int64 v44; // [rsp+248h] [rbp-A20h]
  __int64 v45; // [rsp+250h] [rbp-A18h] BYREF
  __int16 v46; // [rsp+490h] [rbp-7D8h]
  __int64 v47; // [rsp+498h] [rbp-7D0h]
  _QWORD *v48; // [rsp+4A0h] [rbp-7C8h]
  __int64 v49; // [rsp+4A8h] [rbp-7C0h]
  _QWORD v50[5]; // [rsp+4B0h] [rbp-7B8h] BYREF
  _QWORD v51[242]; // [rsp+4D8h] [rbp-790h] BYREF

  *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 16);
  sub_14634E0(*(__int64 **)(a1 + 8), (int *)(a1 + 16));
  v12 = (_BYTE *)(a1 + 1952);
  v3 = *(_DWORD *)(a1 + 40);
  v4 = *(_BYTE *)(a1 + 1952);
  *(_BYTE *)(a1 + 1952) = 1;
  v16 = 63;
  v13 = v4;
  v14 = a1;
  v15 = 1507350;
  v17 = sub_146A990;
  v18 = 0;
  v19 = 0;
  if ( (unsigned __int8)sub_156A040(&v12, 1625, "__builtin_bit_cast", 0) )
  {
    v5 = 1;
  }
  else
  {
    sub_147A4A0((__int64)v21, a1 + 504);
    sub_148B330(a1, (__int64)v21, 0, 3u, 0, a2, a3);
    if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
    {
      qword_2CD8AE0[0] = 0;
      qword_2CD8AE0[1] = &qword_2CD8AE0[3];
      qword_2CD8AE0[2] = 0x200000000LL;
      __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
      __cxa_guard_release(&qword_2CD8AC8);
    }
    v31 = 0;
    v38 = v29;
    v43 = &v45;
    v44 = 0x400000000LL;
    v30[0] = v21;
    v30[1] = 0;
    v32 = 0;
    v33 = 0;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    LOBYTE(v46) = (((v21[0] >> 12) & 0x7F) == 69) | v46 & 0xFE;
    v48 = v50;
    v50[2] = v24;
    v50[3] = v51;
    v46 &= 0xFC01u;
    v49 = 0x200000000LL;
    v50[4] = 0x200000000LL;
    v37 = 0;
    v39 = 5;
    v40 = 0;
    v41 = 0;
    v42 = 0;
    v47 = 0;
    v51[2] = qword_2CD8AE0;
    memset(&v51[3], 0, 40);
    v51[232] = 0;
    sub_147E3E0(a1, (__int64)v30);
    if ( (unsigned __int8)sub_1569A00(a1, 66, 14, &byte_22F0C30, 0) )
    {
      sub_1564820(v20, a1, *(unsigned int *)(a1 + 16), 14);
      sub_AE9DF0(v20, 66, 4u);
      sub_AEA040((__int64)v20);
      LOWORD(v20[0]) = 23;
      v5 = 1;
      sub_15680D0(a1, v20, 1, 1);
    }
    else
    {
      v7 = sub_14BFC10((const __m128i *)a1, 0, (__m128i)0LL);
      if ( (unsigned __int8)sub_14808E0((__int64)&v12, nullptr, v8, v9, v10, v11)
        || v7 == 1
        || (v46 & 1) != 0
        || ((*(_DWORD *)v30[0] >> 12) & 0x7F) == 0x45 )
      {
        v5 = 1;
      }
      else
      {
        v5 = sub_16ABB00(*(_QWORD *)(a1 + 96), v3, v30, v7, HIDWORD(v19));
      }
    }
    sub_147A7A0((char *)v30);
    if ( v28 )
      free(v27);
    sub_15DCED0(v24, &v24);
    if ( ptr != &v26 )
      free(ptr);
    if ( v22 != &v23 )
      free(v22);
  }
  *v12 = v13;
  return v5;
}
