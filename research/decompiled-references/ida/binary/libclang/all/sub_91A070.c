__int64 __fastcall sub_91A070(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax
  bool v4; // cc
  unsigned __int8 v5; // al
  __int64 v6; // rax
  unsigned __int16 v7; // ax
  unsigned int v8; // eax
  void *v9; // rax
  unsigned int v10; // eax
  void *v11; // rcx
  __int64 v12; // rdx
  __int64 v13; // rdx
  __int64 v14; // r14
  __int64 v15; // rdx
  void *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // rdx
  unsigned __int8 v20; // al
  __int64 v21; // rax
  __m128i v22; // xmm0
  char v23; // al
  __int64 v24[4]; // [rsp+0h] [rbp-108h] BYREF
  void *v25; // [rsp+20h] [rbp-E8h] BYREF
  unsigned int v26; // [rsp+28h] [rbp-E0h]
  char v27; // [rsp+2Ch] [rbp-DCh]
  int v28; // [rsp+30h] [rbp-D8h]
  void *v29; // [rsp+40h] [rbp-C8h] BYREF
  unsigned __int32 v30; // [rsp+48h] [rbp-C0h]
  char v31; // [rsp+4Ch] [rbp-BCh]
  int v32; // [rsp+50h] [rbp-B8h]
  __m128i v33; // [rsp+80h] [rbp-88h] BYREF
  __int64 v34; // [rsp+90h] [rbp-78h]
  int v35; // [rsp+98h] [rbp-70h]

  switch ( a2 )
  {
    case 0:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v5 = sub_915550(*(_QWORD *)(a1 + 568));
      v30 = 8;
      v31 = 0;
      v29 = (void *)v5;
      goto LABEL_34;
    case 1:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      LOBYTE(v6) = sub_915900(*(_QWORD *)(a1 + 568));
      v30 = 8;
      v6 = (unsigned __int8)v6;
      goto LABEL_33;
    case 2:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v7 = sub_915930(*(_QWORD *)(a1 + 568));
      v30 = 16;
      v31 = 0;
      v29 = (void *)v7;
      goto LABEL_34;
    case 3:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      LOWORD(v6) = sub_915CE0(*(_QWORD *)(a1 + 568));
      v30 = 16;
      v6 = (unsigned __int16)v6;
      goto LABEL_33;
    case 4:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v8 = sub_915D10(*(_QWORD *)(a1 + 568));
      v30 = 32;
      v31 = 0;
      v29 = (void *)v8;
      goto LABEL_34;
    case 5:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      LODWORD(v6) = sub_9160C0(*(_QWORD *)(a1 + 568));
      v30 = 32;
      v6 = (unsigned int)v6;
      goto LABEL_33;
    case 6:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v9 = (void *)sub_9160F0(*(_QWORD *)(a1 + 568));
      v30 = 64;
      v29 = v9;
      v31 = 0;
      goto LABEL_34;
    case 7:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      v6 = sub_9164A0(*(_QWORD *)(a1 + 568));
      v30 = 64;
      goto LABEL_33;
    case 8:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      sub_919FD0((__int64)&v25, *(_QWORD *)(a1 + 568));
      sub_2587D60(&v33, &v25);
      v31 = 1;
      v30 = v33.m128i_u32[2];
      v29 = (void *)v33.m128i_i64[0];
      goto LABEL_28;
    case 9:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      sub_91A020((__int64)&v25, *(_QWORD *)(a1 + 568));
      sub_2587BE0(&v33, &v25, v26);
      v31 = 0;
      v30 = v33.m128i_u32[2];
      v29 = (void *)v33.m128i_i64[0];
LABEL_28:
      sub_835320((__int64)&v33, (__int64 *)&v29);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      goto LABEL_43;
    case 10:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      LOBYTE(v6) = sub_8F4170(*(_QWORD *)(a1 + 568));
      v30 = 1;
      v6 = (unsigned __int8)v6;
LABEL_33:
      v29 = (void *)v6;
      v31 = 1;
LABEL_34:
      sub_835320((__int64)&v33, (__int64 *)&v29);
      if ( v30 > 0x40 && v29 )
        operator delete[](v29);
      sub_8CC9C0(a1 + 680, v33.m128i_i32);
      v4 = v33.m128i_i32[0] <= 1u;
      *(_DWORD *)(a1 + 744) = 2;
      if ( !v4 )
        sub_69F740((__int64)&v33);
      goto LABEL_3;
    case 11:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      sub_8F5730((__int64)&v25, *(_QWORD *)(a1 + 568));
      v10 = v26;
      v30 = v26;
      if ( v26 > 0x40 )
      {
        sub_2585B30(&v29);
        v10 = v30;
        v11 = v29;
      }
      else
      {
        v11 = v25;
      }
      LODWORD(v34) = v10;
      v33.m128i_i8[4] &= ~1u;
      v32 = v28;
      v33.m128i_i64[1] = (__int64)v11;
      BYTE4(v34) = v27;
      v35 = v28;
      v33.m128i_i32[0] = 4;
LABEL_43:
      sub_8CC9C0(a1 + 680, v33.m128i_i32);
      v4 = v33.m128i_i32[0] <= 1u;
      *(_DWORD *)(a1 + 744) = 2;
      if ( !v4 )
        sub_69F740((__int64)&v33);
      if ( v26 > 0x40 && v25 )
        operator delete[](v25);
LABEL_3:
      result = 1;
      break;
    case 12:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        sub_8F4110((__int64)v24, *(_QWORD *)(a1 + 568));
        sub_835150((__int64)&v25, v24, v12);
        v33.m128i_i8[4] &= ~1u;
        v33.m128i_i32[0] = 0;
        v14 = sub_2575D00(&v25, v24, v13);
        sub_2580BE0(&v29, 0.0);
        sub_257EDC0(&v33.m128i_u64[1], &v29, v14);
        sub_25769A0(&v29);
        v33.m128i_i32[0] = 3;
        v16 = (void *)sub_2575D20(&v29, &v29, v15);
        if ( v25 == v16 )
          sub_257D000(&v29, &v25, v17, v18);
        else
          sub_2576960(&v29, &v25);
        sub_8DBA70(&v33.m128i_i64[1], (__int64 *)&v29, v19);
        sub_5FF3B0((__int64 *)&v29);
        sub_5FF3B0((__int64 *)&v25);
        sub_8CC9C0(a1 + 680, v33.m128i_i32);
        v4 = v33.m128i_i32[0] <= 1u;
        *(_DWORD *)(a1 + 744) = 2;
        if ( !v4 )
          sub_69F740((__int64)&v33);
        sub_5FF3B0(v24);
      }
      goto LABEL_3;
    case 13:
      if ( *(_DWORD *)(a1 + 812) != *(_DWORD *)(a1 + 816) )
        goto LABEL_3;
      result = sub_8D91E0(a1, a3);
      break;
    case 14:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        sub_8F5130(&v33, *(_QWORD *)(a1 + 568));
        v20 = *(_BYTE *)(a1 + 736);
        if ( v20 == 2 )
        {
          v23 = v34;
          *(__m128i *)(a1 + 680) = _mm_load_si128(&v33);
          *(_BYTE *)(a1 + 696) = v23;
        }
        else
        {
          if ( v20 != 0xFF )
          {
            if ( v20 == 1 )
            {
              sub_A1C0C0(a1 + 680);
            }
            else if ( v20 > 1u && *(_DWORD *)(a1 + 680) > 1u )
            {
              sub_69F740(a1 + 680);
            }
          }
          v21 = v34;
          *(_BYTE *)(a1 + 736) = 2;
          v22 = _mm_load_si128(&v33);
          *(_QWORD *)(a1 + 696) = v21;
          *(__m128i *)(a1 + 680) = v22;
        }
        *(_DWORD *)(a1 + 744) = 1;
      }
      goto LABEL_3;
    case 15:
      if ( *(_DWORD *)(a1 + 812) == *(_DWORD *)(a1 + 816) )
      {
        sub_8F5170((__int64)&v33, *(_QWORD *)(a1 + 568));
        sub_A2E5F0(&v29, &v33, **(_QWORD **)(a1 + 368));
        sub_8CC9C0(a1 + 680, (int *)&v29);
        v4 = (unsigned int)v29 <= 1;
        *(_DWORD *)(a1 + 744) = 2;
        if ( !v4 )
          sub_69F740((__int64)&v29);
        sub_A1C0C0(&v33);
      }
      goto LABEL_3;
  }
  return result;
}

