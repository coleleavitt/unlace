__int64 __fastcall sub_1884910(__int64 a1, unsigned int a2, __int64 *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r13
  char v7; // r12
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 result; // rax
  __int64 v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 (__fastcall *v17)(__int64 *); // rax
  __int64 v18; // rbx
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r9
  __int64 v22; // rax
  __int64 v23; // rdx
  unsigned __int64 v24; // rax
  int v25; // edx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  _QWORD *v29; // rsi
  __int64 v30; // rdx
  unsigned int v31; // eax
  __int64 v32; // r8
  __int64 v33; // rcx
  bool v34; // zf
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  __int64 (__fastcall *v37)(__int64); // rax
  __int64 v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // rcx
  unsigned __int64 v42; // rax
  __int64 v43; // rax
  int v44; // edx
  __int64 v45; // r12
  __int64 v46; // rcx
  int v47; // r15d
  __int64 v48; // rax
  int v49; // [rsp+4h] [rbp-94h]
  __int64 v50; // [rsp+8h] [rbp-90h]
  _QWORD *v51; // [rsp+18h] [rbp-80h] BYREF
  __int64 v52; // [rsp+20h] [rbp-78h] BYREF
  char v53; // [rsp+28h] [rbp-70h]
  __m128 v54; // [rsp+30h] [rbp-68h] BYREF
  __int64 v55; // [rsp+48h] [rbp-50h]

  v6 = a2;
  v7 = a4;
  sub_7052B0((__int64 *)(a3[13] + 96), a3[13], (__int64)a3, a4, a5, a6);
  if ( (*(_BYTE *)(a3[16] + 1) & 4) == 0 )
  {
    sub_7052B0((__int64 *)(a3[13] + 96), a3[13], v9, v10, v11, v12);
    result = a3[16];
    if ( !*(_DWORD *)(result + 20) )
      return result;
  }
  result = sub_B8E180((unsigned __int64)(a3 + 8));
  if ( (_BYTE)result )
    return result;
  result = sub_B8E180(*(_QWORD *)(a1 + 544));
  if ( (_BYTE)result )
    return result;
  result = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( (_DWORD)result == 3 || (unsigned int)result <= 1 )
    return result;
  if ( *(_DWORD *)(a1 + 184) != 1 )
  {
    v14 = *(_QWORD *)(a1 + 232);
    if ( *(_DWORD *)(v14 + 64) )
    {
      if ( (*(_BYTE *)(v14 + 68) & 8) != 0 && !*(_DWORD *)(*(_QWORD *)(a1 + 760) + 24LL) )
      {
        result = sub_1AF2F40();
        if ( !(_BYTE)result )
        {
          if ( !v7 )
            return sub_1845690(a1, a2, (__int64)a3, 0, v15, v16);
          return result;
        }
      }
    }
  }
  sub_18487B0(a1);
  v17 = *(__int64 (__fastcall **)(__int64 *))(*a3 + 32);
  if ( (char *)v17 == (char *)sub_A01140 )
    v18 = sub_B70A60((__int64)a3);
  else
    v18 = v17(a3);
  v52 = v18;
  v53 = v7;
  if ( (unsigned __int8)sub_18401F0((__int64 *)(a1 + 3560), &v52, &v51) )
  {
    sub_18411D0(&v54, v51, (_QWORD *)(*(_QWORD *)(a1 + 3560) + 16LL * *(unsigned int *)(a1 + 3576)), a1 + 3560, 1);
    result = v54.m128_u64[0];
    if ( !v7 || *(_BYTE *)(v54.m128_u64[0] + 8) )
      return result;
    *(_BYTE *)(v54.m128_u64[0] + 8) = 1;
    goto LABEL_22;
  }
  v29 = v51;
  v30 = (unsigned int)(*(_DWORD *)(a1 + 3568) + 1);
  v31 = *(_DWORD *)(a1 + 3576);
  v54.m128_u64[0] = (unsigned __int64)v51;
  v32 = (unsigned int)(4 * v30);
  if ( (unsigned int)v32 >= 3 * v31 )
  {
    sub_18485A0((__int64 *)(a1 + 3560), 2 * v31, v30, 2 * v31, v32, v19);
LABEL_52:
    sub_18401F0((__int64 *)(a1 + 3560), &v52, &v54);
    v31 = *(_DWORD *)(a1 + 3576);
    v29 = (_QWORD *)v54.m128_u64[0];
    LODWORD(v30) = *(_DWORD *)(a1 + 3568) + 1;
    goto LABEL_38;
  }
  v33 = v31 - *(_DWORD *)(a1 + 3572) - (unsigned int)v30;
  if ( (unsigned int)v33 <= v31 >> 3 )
  {
    sub_18485A0((__int64 *)(a1 + 3560), v31, v30, v33, v32, v19);
    goto LABEL_52;
  }
LABEL_38:
  v34 = *v29 == -4096;
  *(_DWORD *)(a1 + 3568) = v30;
  if ( !v34 )
    --*(_DWORD *)(a1 + 3572);
  *v29 = v52;
  v51 = v29;
  *((_BYTE *)v29 + 8) = v53;
  sub_18411D0(&v54, v29, (_QWORD *)(*(_QWORD *)(a1 + 3560) + 16LL * v31), a1 + 3560, 1);
  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 17448LL) + 340LL) == 10 )
  {
    v35 = sub_B97300(v18);
    v36 = v35;
    if ( v35 )
    {
      if ( sub_AED5B0(v35) )
      {
        v37 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v36 + 32LL);
        v38 = v37 == sub_B94CD0 ? sub_B709C0(v36) : v37(v36);
        if ( (*(_BYTE *)(v38 + 82) & 0x40) == 0 )
        {
          sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), v39, v40, v20, v21);
          if ( (**(_BYTE **)(v18 + 128) & 0x40) != 0 && !(unsigned __int8)sub_B7D390(v36, (__int64)&v54, 0, v41) )
          {
            v43 = *(_QWORD *)(a1 + 9944);
            v44 = *(_DWORD *)(a1 + 80);
            v45 = *(_QWORD *)(a1 + 544);
            v46 = *(_QWORD *)(a1 + 512);
            *(_QWORD *)(a1 + 9944) = 0;
            v55 = v43;
            v47 = *(_DWORD *)(a1 + 2632);
            *(_QWORD *)(a1 + 544) = v36 + 72;
            LODWORD(v43) = *(_DWORD *)(a1 + 40);
            *(_QWORD *)(a1 + 512) = 0;
            *(_DWORD *)(a1 + 80) = v43;
            v50 = v46;
            *(_DWORD *)(a1 + 2632) = *(_DWORD *)(a1 + 3688);
            v49 = v44;
            sub_1883030(a1, v36);
            if ( v45 )
            {
              v48 = v55;
              *(_QWORD *)(a1 + 544) = v45;
              *(_DWORD *)(a1 + 2632) = v47;
              *(_QWORD *)(a1 + 512) = v50;
              *(_QWORD *)(a1 + 9944) = v48;
              *(_DWORD *)(a1 + 80) = v49;
            }
          }
          else
          {
            v42 = sub_B97300(v18);
            sub_1910D40(a1, (unsigned int)v6, v42, 1);
          }
        }
      }
    }
  }
LABEL_22:
  v22 = v18;
  while ( 1 )
  {
    v23 = *(_QWORD *)(v22 + 16);
    v24 = v23 & 0xFFFFFFFFFFFFFFF8LL;
    if ( (v23 & 4) != 0 )
      v24 = *(_QWORD *)v24;
    v25 = *(_BYTE *)(v24 + 8) & 0x7F;
    v26 = (unsigned int)(v25 - 59);
    if ( (unsigned int)v26 > 2 )
      break;
    v22 = v24 - 64;
    if ( !v22 )
      goto LABEL_27;
  }
  if ( (unsigned int)(v25 - 34) > 5 || v24 == 72 )
  {
LABEL_27:
    v27 = *(unsigned int *)(a1 + 3296);
    if ( v27 + 1 > (unsigned __int64)*(unsigned int *)(a1 + 3300) )
    {
      sub_2237220(a1 + 3288, a1 + 3304, v27 + 1, 16);
      v27 = *(unsigned int *)(a1 + 3296);
    }
    result = *(_QWORD *)(a1 + 3288) + 16 * v27;
    *(_QWORD *)result = v18;
    *(_QWORD *)(result + 8) = v6;
    ++*(_DWORD *)(a1 + 3296);
    return result;
  }
  v28 = *(_QWORD *)(v18 + 128);
  if ( v28
    || (sub_7052B0((__int64 *)(*(_QWORD *)(v18 + 104) + 96LL), *(_QWORD *)(v18 + 104), 0, v26, v20, v21),
        (v28 = *(_QWORD *)(v18 + 128)) != 0) )
  {
    v28 = *(_QWORD *)(v28 + 88);
  }
  return sub_1845690(a1, v6, v28, 0, v20, v21);
}
