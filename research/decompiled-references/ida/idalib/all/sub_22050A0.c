unsigned __int64 __fastcall sub_22050A0(__int64 *a1)
{
  __int64 v2; // rax
  __int64 *v3; // rdi
  unsigned __int64 v4; // rax
  __int64 *v5; // rdi
  unsigned __int64 v6; // rax
  __int64 v8; // rax
  __int64 v9; // rax
  unsigned __int64 v10; // [rsp+8h] [rbp-A0h] BYREF
  unsigned __int64 v11; // [rsp+10h] [rbp-98h] BYREF
  __int128 v12; // [rsp+18h] [rbp-90h]
  __int128 v13; // [rsp+28h] [rbp-80h]
  __int128 v14; // [rsp+38h] [rbp-70h]
  __int64 v15; // [rsp+48h] [rbp-60h]
  __int128 v16; // [rsp+50h] [rbp-58h]
  __int128 v17; // [rsp+60h] [rbp-48h]
  __int128 v18; // [rsp+70h] [rbp-38h]
  __m128i si128; // [rsp+80h] [rbp-28h]

  v2 = a1[1];
  if ( v2 )
  {
    v3 = (__int64 *)(v2 + 24);
    if ( *(_UNKNOWN **)(v2 + 24) == &unk_26F7B20 )
    {
      v8 = sub_22050A0(v3);
      v5 = (__int64 *)a1[1];
      v11 = v8;
      if ( (_UNKNOWN *)*v5 != &unk_26F7B20 )
        goto LABEL_4;
    }
    else
    {
      v4 = sub_2204EB0(v3);
      v5 = (__int64 *)a1[1];
      v11 = v4;
      if ( (_UNKNOWN *)*v5 != &unk_26F7B20 )
      {
LABEL_4:
        v6 = sub_2204EB0(v5);
LABEL_5:
        v10 = v6;
        return sub_21ED4E0((__int64 *)&v10, (__int64 *)&v11);
      }
    }
    v6 = sub_22050A0(v5);
    goto LABEL_5;
  }
  v9 = *a1;
  v12 = 0;
  v13 = 0;
  v14 = 0;
  v16 = 0;
  v17 = 0;
  v18 = 0;
  v15 = 0;
  si128 = _mm_load_si128((const __m128i *)&xmmword_23A8D50);
  v11 = v9;
  return sub_2012F20(&v11, 8u, 0xFF51AFD7ED558CCDLL);
}
