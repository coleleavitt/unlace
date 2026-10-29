__int64 __fastcall sub_148B630(__int64 a1, _QWORD *a2, __m128i a3, __m128 a4)
{
  __int64 v5; // rdi
  __int64 v6; // r13
  _QWORD v8[2]; // [rsp+0h] [rbp-BD8h] BYREF
  _DWORD v9[10]; // [rsp+10h] [rbp-BC8h] BYREF
  void *v10; // [rsp+38h] [rbp-BA0h]
  __int64 v11; // [rsp+48h] [rbp-B90h] BYREF
  __int64 v12; // [rsp+58h] [rbp-B80h] BYREF
  void *ptr; // [rsp+60h] [rbp-B78h]
  __int64 v14; // [rsp+70h] [rbp-B68h] BYREF
  void *v15; // [rsp+90h] [rbp-B48h]
  int v16; // [rsp+9Ch] [rbp-B3Ch]
  __int64 v17; // [rsp+B0h] [rbp-B28h]
  _QWORD v18[2]; // [rsp+140h] [rbp-A98h] BYREF
  __int128 v19; // [rsp+150h] [rbp-A88h]
  __int64 v20; // [rsp+160h] [rbp-A78h]
  __int64 v21; // [rsp+168h] [rbp-A70h]
  __int64 v22; // [rsp+170h] [rbp-A68h]
  int v23; // [rsp+178h] [rbp-A60h]
  __int64 v24; // [rsp+180h] [rbp-A58h]
  __int64 v25; // [rsp+190h] [rbp-A48h]
  __int64 v26; // [rsp+198h] [rbp-A40h]
  int v27; // [rsp+1A0h] [rbp-A38h]
  __int64 v28; // [rsp+1A8h] [rbp-A30h]
  __int64 v29; // [rsp+1B0h] [rbp-A28h]
  int v30; // [rsp+1B8h] [rbp-A20h]
  __int64 *v31; // [rsp+1C0h] [rbp-A18h]
  __int64 v32; // [rsp+1C8h] [rbp-A10h]
  __int64 v33; // [rsp+1D0h] [rbp-A08h] BYREF
  __int16 v34; // [rsp+410h] [rbp-7C8h]
  __int64 v35; // [rsp+418h] [rbp-7C0h]
  _QWORD *v36; // [rsp+420h] [rbp-7B8h]
  __int64 v37; // [rsp+428h] [rbp-7B0h]
  _QWORD v38[5]; // [rsp+430h] [rbp-7A8h] BYREF
  _QWORD v39[240]; // [rsp+458h] [rbp-780h] BYREF

  sub_147A4A0((__int64)v9, a1 + 504);
  sub_148B330(a1, (__int64)v9, 1u, 3u, 2, a3, a4);
  if ( !(_BYTE)qword_2CD8AC8 && __cxa_guard_acquire(&qword_2CD8AC8) )
  {
    qword_2CD8AE0[0] = 0;
    qword_2CD8AE0[1] = &qword_2CD8AE0[3];
    qword_2CD8AE0[2] = 0x200000000LL;
    __cxa_atexit((void (*)(void *))sub_1477960, qword_2CD8AE0, &off_2B25620);
    __cxa_guard_release(&qword_2CD8AC8);
  }
  v18[0] = v9;
  v18[1] = 0;
  v26 = v17;
  v31 = &v33;
  v32 = 0x400000000LL;
  v19 = 0;
  v20 = 0;
  v21 = 0;
  v22 = 0;
  v23 = 0;
  v24 = 0;
  v25 = 0;
  LOBYTE(v34) = (((v9[0] >> 12) & 0x7F) == 69) | v34 & 0xFE;
  v36 = v38;
  v38[2] = v12;
  v34 &= 0xFC01u;
  v38[3] = v39;
  v27 = 5;
  v28 = 0;
  v29 = 0;
  v30 = 0;
  v35 = 0;
  v37 = 0x200000000LL;
  v38[4] = 0x200000000LL;
  v39[2] = qword_2CD8AE0;
  memset(&v39[3], 0, 40);
  v5 = *(_QWORD *)(a1 + 96);
  v8[0] = v18;
  v39[232] = 0;
  v8[1] = a1;
  sub_15F0FC0(v5, (unsigned int)v17, sub_1498E10, v8);
  if ( a2 )
    *a2 = v26;
  if ( (v34 & 1) != 0 || ((*(_DWORD *)v18[0] >> 12) & 0x7F) == 0x45 )
    v6 = 0;
  else
    v6 = sub_1E85500(*(_QWORD *)(a1 + 96), v18);
  sub_147A7A0((char *)v18);
  if ( v16 )
    free(v15);
  sub_15DCED0(v12, &v12);
  if ( ptr != &v14 )
    free(ptr);
  if ( v10 != &v11 )
    free(v10);
  return v6;
}
