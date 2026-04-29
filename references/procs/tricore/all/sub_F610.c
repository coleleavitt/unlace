unsigned __int64 __fastcall sub_F610(unsigned __int8 *a1)
{
  __int64 v1; // rsi
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int8 *v5; // rbp
  unsigned __int8 v6; // al
  __int64 v7; // rsi
  char i; // al
  __int64 v9; // rdx
  __int64 v10; // rdx
  __int64 v11; // r13
  __int64 v13; // r8
  __int64 v14; // r9
  void (__fastcall *v15)(unsigned __int8 *, __int64); // rax
  __int64 v16; // rbp
  unsigned __int64 v17; // r12
  __int64 v18; // rsi
  __int64 v19; // r8
  __int64 v20; // r9
  void (__fastcall *v21)(unsigned __int8 *, __int64); // rax
  __int64 v22; // rbp
  unsigned __int64 v23; // r12
  __int64 v24; // rsi
  __int64 v25; // rax
  __int64 v26; // rax
  _QWORD v27[2]; // [rsp+0h] [rbp-E8h] BYREF
  char v28; // [rsp+10h] [rbp-D8h]
  char v29; // [rsp+11h] [rbp-D7h]
  __int64 v30; // [rsp+20h] [rbp-C8h] BYREF
  __int128 v31; // [rsp+28h] [rbp-C0h]
  __int64 v32; // [rsp+40h] [rbp-A8h] BYREF
  __m128i si128; // [rsp+48h] [rbp-A0h]
  __int128 v34; // [rsp+58h] [rbp-90h]
  __int64 v35; // [rsp+68h] [rbp-80h]
  __int64 v36; // [rsp+70h] [rbp-78h]
  __int64 v37; // [rsp+78h] [rbp-70h]
  __int64 v38; // [rsp+80h] [rbp-68h]
  __int64 v39; // [rsp+88h] [rbp-60h]
  __int64 v40; // [rsp+90h] [rbp-58h]
  __int64 v41; // [rsp+98h] [rbp-50h]
  __int64 v42; // [rsp+A0h] [rbp-48h]
  __int128 v43; // [rsp+A8h] [rbp-40h]
  unsigned __int64 v44; // [rsp+B8h] [rbp-30h]

  v44 = __readfsqword(0x28u);
  v38 = 0xFFFFFFFFLL;
  si128 = _mm_load_si128((const __m128i *)&xmmword_15FE0);
  v34 = -1;
  v32 = 0x800000;
  v35 = 0;
  v36 = 0;
  v1 = *((_QWORD *)a1 + 30);
  v37 = 0;
  v39 = 0;
  v40 = 2;
  v41 = -1;
  v42 = 0;
  v43 = 0;
  if ( get_switch_info(&v32, v1) == -1 )
  {
    v5 = a1 + 264;
    do
    {
      v6 = v5[1];
      if ( v6 == 4 )
      {
        v11 = *((_QWORD *)a1 + 90);
        if ( (v5[32] & 0x20) == 0 )
        {
          v1 = *v5;
          if ( !(unsigned __int8)is_off(*((_QWORD *)a1 + 90), v1, v2, v3, v4) )
          {
            v1 = *v5;
            if ( !(unsigned __int8)is_stkvar(v11, v1) )
            {
              v1 = *v5;
              if ( !(unsigned __int8)is_enum(v11, v1) )
              {
                v1 = *v5;
                if ( !(unsigned __int8)is_stroff(v11, v1) )
                  goto LABEL_20;
              }
            }
          }
          v11 = *((_QWORD *)a1 + 90);
        }
        if ( *((_QWORD *)v5 + 2) || (v1 = *v5, (unsigned __int8)is_off(v11, v1, v2, v3, v4)) )
        {
          if ( (v5[32] & 6) == 0 )
            goto LABEL_20;
        }
      }
      else if ( v6 <= 4u )
      {
        if ( v6 == 2 )
          goto LABEL_20;
      }
      else if ( (v6 & 0xFD) == 5 )
      {
        goto LABEL_20;
      }
      v5 += 40;
    }
    while ( v5 != a1 + 464 );
    v7 = *((_QWORD *)a1 + 30);
    for ( i = xrefblk_t_first_from(v27, v7, 1); ; i = xrefblk_t_next_from(v27) )
    {
      if ( !i )
      {
LABEL_41:
        if ( v42 )
        {
          *(_QWORD *)&v43 = 0;
          qfree(v42, v7, v9, 0.0);
        }
        return v44 - __readfsqword(0x28u);
      }
      if ( v28 )
      {
        if ( (unsigned __int8)(v29 - 16) > 3u )
          continue;
      }
      else if ( (unsigned __int8)(v29 - 1) > 2u )
      {
        continue;
      }
      v7 = *((_QWORD *)a1 + 30);
      v31 = 0;
      v30 = 0;
      if ( get_name_expr(&v30, v7, 0, v27[1], -1, 1) > 0 )
      {
        if ( (unsigned __int64)v31 > 1 )
          tag_remove(&v30, v30, 0);
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)a1 + 64LL))(a1, 4);
        v15 = *(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v15 == (char *)sub_EB20 )
        {
          v16 = *((_QWORD *)a1 + 4);
          v17 = 2;
          if ( v16 )
            v17 = v16-- + 1;
          v18 = *((_QWORD *)a1 + 3);
          if ( *((_QWORD *)a1 + 5) < v17 )
          {
            v26 = qvector_reserve(a1 + 24, v18, v17, 1, v13, v14);
            *((_QWORD *)a1 + 3) = v26;
            v18 = v26;
          }
          *((_QWORD *)a1 + 4) = v17;
          *(_BYTE *)(v18 + v16) = 32;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v16 + 1) = 0;
        }
        else
        {
          v15(a1, 32);
        }
        (*(void (__fastcall **)(unsigned __int8 *, _QWORD, _QWORD))(*(_QWORD *)a1 + 56LL))(
          a1,
          *(_QWORD *)(*((_QWORD *)a1 + 79) + 48LL),
          0);
        v21 = *(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)a1 + 96LL);
        if ( (char *)v21 == (char *)sub_EB20 )
        {
          v22 = *((_QWORD *)a1 + 4);
          v23 = 2;
          if ( v22 )
            v23 = v22-- + 1;
          v24 = *((_QWORD *)a1 + 3);
          if ( *((_QWORD *)a1 + 5) < v23 )
          {
            v25 = qvector_reserve(a1 + 24, v24, v23, 1, v19, v20);
            *((_QWORD *)a1 + 3) = v25;
            v24 = v25;
          }
          *((_QWORD *)a1 + 4) = v23;
          *(_BYTE *)(v24 + v22) = 32;
          *(_BYTE *)(*((_QWORD *)a1 + 3) + v22 + 1) = 0;
        }
        else
        {
          v21(a1, 32);
        }
        (*(void (__fastcall **)(unsigned __int8 *, __int64, _QWORD))(*(_QWORD *)a1 + 56LL))(a1, v30, 0);
        v7 = 4;
        (*(void (__fastcall **)(unsigned __int8 *, __int64))(*(_QWORD *)a1 + 72LL))(a1, 4);
        if ( v30 )
        {
          *(_QWORD *)&v31 = 0;
          qfree(v30, 4, v9, 0.0);
        }
        goto LABEL_41;
      }
      if ( v30 )
      {
        *(_QWORD *)&v31 = 0;
        qfree(v30, v7, v10, 0.0);
      }
    }
  }
LABEL_20:
  if ( v42 )
  {
    *(_QWORD *)&v43 = 0;
    qfree(v42, v1, v2, 0.0);
  }
  return v44 - __readfsqword(0x28u);
}
