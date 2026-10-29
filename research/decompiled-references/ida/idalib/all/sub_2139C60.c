__int64 __fastcall sub_2139C60(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 v7; // r15
  __int64 v8; // r13
  __int64 v9; // rbp
  __int64 v10; // rax
  __int64 *v11; // rsi
  __int64 v12; // rax
  _QWORD *v13; // r13
  char *v14; // rdi
  __int64 v15; // rbp
  unsigned __int64 v16; // rbp
  _QWORD *v17; // rdx
  __int64 v18; // rax
  __m128 *v19; // rsi
  __int64 result; // rax
  __int64 v21; // [rsp+0h] [rbp-78h] BYREF
  __int64 v22; // [rsp+8h] [rbp-70h] BYREF
  _QWORD v23[4]; // [rsp+10h] [rbp-68h] BYREF
  __int16 v24; // [rsp+30h] [rbp-48h]

  v5 = a3[4];
  if ( (unsigned __int64)(a3[3] - v5) > 5 )
  {
    *(_DWORD *)v5 = 1684956462;
    *(_WORD *)(v5 + 4) = 2674;
    a3[4] += 6LL;
  }
  else
  {
    sub_227BF10(a3, ".endr\n", 6);
  }
  v23[0] = "<instantiation>";
  v6 = (_QWORD *)a3[6];
  v24 = 259;
  sub_22307C0(&v21, *v6, v6[1], v23);
  v7 = sub_2153C00(a1);
  v8 = (__int64)(*(_QWORD *)(a1 + 320) - *(_QWORD *)(a1 + 312)) >> 3;
  v9 = operator new(0x20u);
  *(_QWORD *)v9 = a2;
  *(_DWORD *)(v9 + 8) = *(_DWORD *)(a1 + 296);
  v10 = sub_2124B50(v7);
  *(_QWORD *)(v9 + 24) = v8;
  v11 = *(__int64 **)(a1 + 368);
  *(_QWORD *)(v9 + 16) = v10;
  v22 = v9;
  if ( v11 == *(__int64 **)(a1 + 376) )
  {
    sub_2129270(a1 + 360, v11, &v22);
  }
  else
  {
    *v11 = v9;
    *(_QWORD *)(a1 + 368) = v11 + 1;
  }
  v12 = v21;
  v13 = *(_QWORD **)(a1 + 32);
  v21 = 0;
  v23[1] = 0;
  v23[0] = v12;
  v14 = (char *)v13[1];
  v23[2] = 0;
  if ( v14 == (char *)v13[2] )
  {
    sub_1544270((__int64)v13, v14, (__int64)v23);
    v15 = v13[1];
  }
  else
  {
    sub_2239BA0(v14, v23);
    v15 = v13[1] + 24LL;
    v13[1] = v15;
  }
  v16 = 0xAAAAAAAAAAAAAAABLL * ((v15 - *v13) >> 3);
  sub_2239BD0(v23);
  v17 = *(_QWORD **)(a1 + 32);
  *(_DWORD *)(a1 + 296) = v16;
  v18 = *(_QWORD *)(*v17 + 24LL * (unsigned int)(v16 - 1));
  v19 = *(__m128 **)(v18 + 8);
  sub_2124C60(a1 + 48, (__int64)v19, *(_QWORD *)(v18 + 16) - (_QWORD)v19, 0, 1);
  result = sub_2132C70(a1, v19);
  if ( v21 )
    return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v21 + 8LL))(v21);
  return result;
}
