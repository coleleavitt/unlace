_QWORD *__fastcall Z3_goal_translate(__int64 a1, __int64 a2, __int64 a3)
{
  _DWORD *v4; // rbx
  char v5; // r14
  unsigned __int64 v6; // rbp
  unsigned __int64 v7; // r15
  _OWORD *v8; // rax
  int v9; // edx
  int v10; // ecx
  int v11; // r8d
  int v12; // r9d
  _QWORD *v13; // rbp
  int v14; // edx
  int v15; // ecx
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  _DWORD *v19; // rdi
  bool v20; // zf
  int v22; // [rsp+0h] [rbp-A8h]
  __int64 v23; // [rsp+8h] [rbp-A0h]
  _OWORD v24[2]; // [rsp+10h] [rbp-98h] BYREF
  __int64 v25; // [rsp+30h] [rbp-78h]
  void *ptr; // [rsp+38h] [rbp-70h]
  __int64 v27; // [rsp+40h] [rbp-68h]
  int v28; // [rsp+48h] [rbp-60h]
  __int128 v29; // [rsp+50h] [rbp-58h]
  int v30; // [rsp+60h] [rbp-48h]

  v4 = (_DWORD *)a2;
  v5 = byte_1C7EBA0;
  byte_1C7EBA0 = 0;
  if ( v5 )
    sub_29C750();
  v6 = *(_QWORD *)(a3 + 232);
  v7 = *(_QWORD *)(a1 + 232);
  *(_DWORD *)(a1 + 1520) = 0;
  v25 = 0;
  v24[0] = _mm_unpacklo_epi64((__m128i)v7, (__m128i)v6);
  v24[1] = 0;
  v8 = (_OWORD *)sub_186B270(0x80u);
  ptr = v8;
  *v8 = 0;
  v8[1] = 0;
  v8[2] = 0;
  v8[3] = 0;
  v8[4] = 0;
  v8[5] = 0;
  v8[6] = 0;
  v8[7] = 0;
  v27 = 8;
  v28 = 0;
  v30 = 0;
  v29 = 0;
  if ( v6 != v7 )
  {
    sub_15DA640(DWORD2(v24[0]), v24[0], v9, v10, v11, v12, v22);
    sub_15D2280(*((_QWORD *)&v24[0] + 1), *(_QWORD *)&v24[0]);
  }
  v13 = (_QWORD *)sub_186B270(0x20u);
  sub_2518F0((__int64)v13, a3);
  v13[3] = 0;
  *v13 = &off_1C4C8C0;
  if ( a2 )
  {
    v4 = *(_DWORD **)(a2 + 24);
    if ( v4 )
      ++v4[8];
  }
  v18 = sub_EDC1F0((_DWORD)v4, (unsigned int)v24, v14, v15, v16, v17, v22);
  if ( v18 )
    ++*(_DWORD *)(v18 + 32);
  v19 = (_DWORD *)v13[3];
  if ( v19 )
  {
    v20 = v19[8]-- == 1;
    if ( v20 )
    {
      v23 = v18;
      sub_ED44E0(v19);
      sub_186B220(v19);
      v18 = v23;
    }
  }
  v13[3] = v18;
  v20 = v4[8]-- == 1;
  if ( v20 )
  {
    sub_ED44E0(v4);
    sub_186B220(v4);
  }
  sub_24FBE0(a3, (__int64)v13);
  if ( v5 )
  {
    sub_2BB620(v13);
    sub_15CE760(v24);
    byte_1C7EBA0 = 1;
  }
  else
  {
    sub_15CE760(v24);
  }
  return v13;
}

