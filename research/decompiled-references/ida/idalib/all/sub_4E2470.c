__int64 __fastcall sub_4E2470(__int64 *a1, void *a2, unsigned int a3, const __m128i *a4)
{
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rdi
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rax
  char v11; // r14
  __int64 v12; // r8
  __int64 v13; // r10
  __int32 v14; // r9d
  unsigned __int64 v16; // r14
  __int64 v17; // r12
  unsigned __int64 *v18; // r12
  char *v19; // r15
  unsigned __int64 v20; // r13
  unsigned __int64 v21; // rdi
  __int64 v22; // r8
  unsigned __int64 v23; // rax
  unsigned __int64 v24; // r8
  __int64 v25; // rax
  __int64 v26; // [rsp+8h] [rbp-D0h]
  __int64 v27; // [rsp+10h] [rbp-C8h]
  __int64 v28; // [rsp+10h] [rbp-C8h]
  __int32 v29; // [rsp+18h] [rbp-C0h]
  __int64 v30; // [rsp+18h] [rbp-C0h]
  unsigned __int64 v31[2]; // [rsp+20h] [rbp-B8h] BYREF
  void *v32; // [rsp+30h] [rbp-A8h] BYREF
  __int128 v33; // [rsp+38h] [rbp-A0h]
  _OWORD v34[2]; // [rsp+50h] [rbp-88h] BYREF
  __m128i v35; // [rsp+70h] [rbp-68h] BYREF
  __int64 v36; // [rsp+80h] [rbp-58h]
  int v37; // [rsp+88h] [rbp-50h]
  unsigned __int64 v38; // [rsp+98h] [rbp-40h]

  v38 = __readfsqword(0x28u);
  if ( (a3 & 0x80000000) != 0 || !a4 || (a4[1].m128i_i16[4] & 0x1010) == 0 && a4->m128i_i64[1] == -1 )
    return 0;
  v7 = sub_3BE900(a1, (unsigned __int64)a2, 0);
  v8 = v7;
  v9 = v7 & 0x600;
  if ( v9 == 1024 )
  {
    v10 = (unsigned int)v7 & 0xF0000000;
    if ( v10 != 2415919104 )
    {
      if ( v10 > 0x90000000 )
      {
        if ( (v8 & 0xE0000000) != 0xA0000000 && v10 != 3489660928 )
        {
          v11 = is_off(v8, a3);
          if ( v11 )
            goto LABEL_10;
          goto LABEL_22;
        }
      }
      else if ( ((v10 - 1342177280) & 0xFFFFFFFFE0000000LL) != 0 && v10 != 0x80000000 )
      {
        goto LABEL_9;
      }
    }
    return 0;
  }
LABEL_9:
  v11 = is_off(v8, a3);
  if ( v11 )
    goto LABEL_10;
LABEL_22:
  if ( !(unsigned __int8)sub_3D55E0(a1, (unsigned __int64)a2, 0x55555505500000LL, a3) )
    return 0;
LABEL_10:
  v12 = a4->m128i_i64[0];
  v13 = a4->m128i_i64[1];
  v14 = a4[1].m128i_i32[2];
  v34[0] = _mm_loadu_si128(a4);
  v34[1] = _mm_loadu_si128(a4 + 1);
  if ( v12 != -1 )
    v12 &= *(_QWORD *)(a1[3] + 16);
  if ( (v14 & 0x1010) == 0 )
    v13 &= *(_QWORD *)(a1[3] + 16);
  if ( v11 )
  {
    v27 = v12;
    v17 = a4[1].m128i_i64[0];
    v26 = v13;
    v29 = v14;
    if ( (unsigned __int8)sub_4E21C0(a1, &v35, (unsigned __int64)a2, a3)
      && v37 == v29
      && *(_OWORD *)&v35 == __PAIR128__(v26, v27)
      && v36 == v17 )
    {
      return 1;
    }
    *(_QWORD *)&v34[0] = v27;
    *((_QWORD *)&v34[0] + 1) = v26;
    if ( !(unsigned __int8)sub_4E22A0(a1, (__int64)a2, a3, (__int64)v34) )
      return (unsigned int)sub_3D0D10(a1, a2, a3) ^ 1;
    sub_39ADA0(0x11u, a2, a3);
    v16 = (unsigned __int64)a2 + 1;
    if ( v9 == 1024 )
    {
      v31[0] = (unsigned __int64)a2;
      v32 = nullptr;
      v31[1] = (unsigned __int64)a2 + 1;
      v33 = 0;
      sub_410BF0((__int64)a1, v31, (__int64 (__fastcall *)(__int64, _QWORD, __int64))sub_4E1630, (__int64)&v32);
      v18 = (unsigned __int64 *)v32;
      v19 = (char *)v32 + 8 * v33;
      if ( v19 != v32 )
      {
        do
        {
          v20 = *v18;
          v21 = sub_3BE900(a1, *v18, 0);
          if ( (~BYTE1(v21) & 6) == 0 && (unsigned __int8)is_off(v21, 15) )
          {
            v28 = *a1;
            v31[0] = ea2node(v20);
            v22 = 8;
            while ( 1 )
            {
              v23 = sub_7BEBF0(v31, v28, v22, 83);
              v24 = v23;
              if ( v23 > 0x24 )
                break;
              if ( v23 - 27 <= 5 )
              {
                v22 = 32;
              }
              else if ( v23 - 15 <= 5 )
              {
                v22 = 20;
              }
              else
              {
                v25 = (unsigned int)(v23 - 9);
                v30 = v24;
                if ( (unsigned int)v25 > 0x1B )
                {
                  sub_39ADA0(0x11u, v20, 0xFFFFFFFFLL);
                  v22 = v30;
                }
                else
                {
                  sub_39ADA0(0x11u, v20, dword_23AE060[v25]);
                  v22 = v30;
                  if ( v30 == 36 )
                    break;
                }
              }
            }
          }
          ++v18;
        }
        while ( v19 != (char *)v18 );
        v18 = (unsigned __int64 *)v32;
      }
      if ( v18 )
      {
        *(_QWORD *)&v33 = 0;
        qfree(v18);
      }
    }
  }
  else
  {
    *(_QWORD *)&v34[0] = v12;
    *((_QWORD *)&v34[0] + 1) = v13;
    if ( !(unsigned __int8)sub_4E22A0(a1, (__int64)a2, a3, (__int64)v34) )
      return (unsigned int)sub_3D0D10(a1, a2, a3) ^ 1;
    sub_39ADA0(0x11u, a2, a3);
    v16 = (unsigned __int64)a2 + 1;
  }
  sub_3A61A0(a1, (unsigned __int64)a2, v16, 0x28u);
  return 1;
}
