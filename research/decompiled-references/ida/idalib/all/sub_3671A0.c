__int64 __fastcall sub_3671A0(__int64 a1, _QWORD *a2, const void *a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 item_end; // rax
  __int64 v8; // rdx
  _QWORD *v9; // rax
  __int64 v10; // rsi
  __int64 data_elsize; // r12
  int v12; // eax
  int v13; // r9d
  int v14; // eax
  unsigned __int64 v15; // r14
  unsigned int v16; // r13d
  __int64 v18; // rdx
  __int64 v19; // [rsp+8h] [rbp-E8h]
  __int64 v20; // [rsp+18h] [rbp-D8h] BYREF
  unsigned __int64 *v21; // [rsp+20h] [rbp-D0h] BYREF
  int v22; // [rsp+28h] [rbp-C8h]
  _QWORD v23[2]; // [rsp+30h] [rbp-C0h] BYREF
  char v24; // [rsp+40h] [rbp-B0h]
  __int64 v25; // [rsp+48h] [rbp-A8h] BYREF
  __int64 v26; // [rsp+50h] [rbp-A0h] BYREF
  void *v27; // [rsp+58h] [rbp-98h]
  __int64 *v28; // [rsp+60h] [rbp-90h]
  __int64 *v29; // [rsp+68h] [rbp-88h]
  __int64 v30; // [rsp+70h] [rbp-80h]
  void *ptr; // [rsp+78h] [rbp-78h]
  __int128 v32; // [rsp+80h] [rbp-70h]
  _QWORD *v33; // [rsp+90h] [rbp-60h]
  __m128i v34; // [rsp+A0h] [rbp-50h] BYREF
  unsigned __int64 v35; // [rsp+B8h] [rbp-38h]

  v5 = a2[2];
  v35 = __readfsqword(0x28u);
  v19 = v5;
  item_end = get_item_end(v5, a2, a3, a4);
  v8 = a2[90];
  if ( (v8 & 0x600) == 0x400 && (v8 & 0xF0000000) == 0xB0000000LL )
  {
    v16 = 1;
    sub_35D330((__int64)a2, item_end - v19, v8, v19);
  }
  else
  {
    v23[1] = item_end;
    v20 = v19;
    v23[0] = a1;
    v24 = 0;
    LODWORD(v26) = 0;
    v27 = nullptr;
    v28 = &v26;
    v29 = &v26;
    v30 = 0;
    ptr = nullptr;
    v21 = (unsigned __int64 *)&v20;
    v32 = 0;
    v9 = sub_35C600(&v25, &v26, &v21);
    v33 = v9 + 5;
    if ( a3 )
      qmemcpy(v9 + 16, a3, 0x110u);
    v10 = a2[90];
    a2[11] = v23;
    data_elsize = get_data_elsize(v19, v10, a3);
    v34 = 0;
    v12 = nbits(v19);
    v13 = v12 + 14;
    v14 = v12 + 7;
    if ( v14 >= 0 )
      v13 = v14;
    v15 = data_elsize * (v13 >> 3);
    if ( v15 > 0x10 )
      v15 = 16;
    v16 = 0;
    if ( get_bytes(&v34, v15, v19, 0, 0) == v15 )
    {
      if ( (unsigned __int8)getinf_flag(3, 32) )
        sub_35C3D0(v19, v34.m128i_i8, v15);
      v21 = nullptr;
      v18 = a2[90];
      v22 = -1;
      sub_360180((__int64)a2, v19, v18, &v34, data_elsize, 1u, (int *)&v21, v19);
      v16 = 1;
    }
    if ( ptr )
    {
      *(_QWORD *)&v32 = 0;
      qfree(ptr);
    }
    sub_35CC10(v27);
  }
  return v16;
}
