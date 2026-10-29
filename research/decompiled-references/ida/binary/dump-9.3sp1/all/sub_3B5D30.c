__int64 __fastcall sub_3B5D30(__int64 a1, signed int a2, __m128 a3)
{
  __int64 v5; // rdi
  __int64 v7; // rsi
  __m128i si128; // xmm1
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  unsigned int v12; // ebp
  __int64 *v13; // r13
  __int64 v15; // rdx
  __int64 v16; // r14
  __int64 i; // rbx
  __int64 *v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rdi
  __int64 v21; // rdx
  __int64 v22; // r14
  __int64 j; // rbx
  __int64 *v24; // rax
  __int64 v25; // rdi
  __int64 *v27; // [rsp+8h] [rbp-4F0h] BYREF
  __m128 v28; // [rsp+10h] [rbp-4E8h] BYREF
  unsigned __int64 *v29[2]; // [rsp+20h] [rbp-4D8h] BYREF
  __int64 v30; // [rsp+30h] [rbp-4C8h] BYREF
  __int128 v31; // [rsp+38h] [rbp-4C0h]
  __int64 v32; // [rsp+48h] [rbp-4B0h]
  __int64 (__fastcall **v33)(); // [rsp+50h] [rbp-4A8h] BYREF
  int v34; // [rsp+58h] [rbp-4A0h]
  __int64 v35; // [rsp+60h] [rbp-498h]
  __int128 v36; // [rsp+68h] [rbp-490h]
  __int64 v37; // [rsp+78h] [rbp-480h]
  __int128 v38; // [rsp+80h] [rbp-478h]
  __m128i v39; // [rsp+90h] [rbp-468h]
  signed int v40; // [rsp+A0h] [rbp-458h]
  _BYTE v41[1032]; // [rsp+B0h] [rbp-448h] BYREF
  unsigned __int64 v42; // [rsp+4B8h] [rbp-40h]

  v5 = *(_QWORD *)(a1 + 32);
  v42 = __readfsqword(0x28u);
  v29[0] = nullptr;
  v27 = &v30;
  v29[1] = nullptr;
  v28 = _mm_loadh_ps((const double *)&v27);
  sub_38B9C0(v5, v29, a1, a3);
  v7 = *(_QWORD *)(a1 + 32);
  si128 = _mm_load_si128((const __m128i *)&v28);
  v30 = 0;
  v31 = 0;
  v32 = v7;
  if ( v7 )
  {
    ++*(_DWORD *)(v7 + 104);
    v7 = *(_QWORD *)(a1 + 32);
  }
  v34 = 0;
  v35 = 0;
  v37 = 0;
  v33 = (__int64 (__fastcall **)())&off_4E7228;
  v40 = a2;
  v36 = 0;
  v38 = 0;
  v39 = si128;
  sub_255A80((__int64 *)&v33, v7 + 16, 0);
  sub_264D80(*(_QWORD *)(a1 + 32), (__int64)v41, 1024, a2);
  v12 = sub_3B56D0(a1, (__int64)v27, (__int64)v41, v9, v10, v11);
  v33 = off_4DBCF8;
  if ( v37 )
  {
    *(_QWORD *)&v38 = 0;
    qfree(v37);
  }
  if ( v35 )
  {
    *(_QWORD *)&v36 = 0;
    qfree(v35);
  }
  v13 = (__int64 *)v32;
  if ( v32 )
  {
    if ( (*(_DWORD *)(v32 + 104))-- == 1 )
    {
      sub_258970(v13);
      v15 = v13[23];
      if ( v15 )
      {
        v16 = v13[24];
        if ( v16 )
        {
          for ( i = 0; i != v16; ++i )
          {
            v18 = (__int64 *)(v15 + 24 * i);
            v19 = *v18;
            if ( *v18 )
            {
              v18[1] = 0;
              qfree(v19);
              v15 = v13[23];
            }
          }
        }
        v13[24] = 0;
        qfree(v15);
      }
      v20 = v13[20];
      if ( v20 )
      {
        v13[21] = 0;
        qfree(v20);
      }
      v21 = v13[16];
      if ( v21 )
      {
        v22 = v13[17];
        if ( v22 )
        {
          for ( j = 0; j != v22; ++j )
          {
            v24 = (__int64 *)(v21 + 32 * j);
            v25 = *v24;
            if ( *v24 )
            {
              v24[1] = 0;
              qfree(v25);
              v21 = v13[16];
            }
          }
        }
        v13[17] = 0;
        qfree(v21);
      }
      sub_255050((__int64)(v13 + 2));
      j__qfree((__int64)v13);
    }
  }
  if ( v30 )
  {
    *(_QWORD *)&v31 = 0;
    qfree(v30);
  }
  sub_391150((__int64 *)v29);
  return v12;
}
