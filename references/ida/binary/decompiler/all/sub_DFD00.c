unsigned __int64 __fastcall sub_DFD00(__int64 a1)
{
  __int64 v1; // rax
  __int64 v2; // rax
  _DWORD *v3; // rbp
  unsigned int tinfo_size; // eax
  __int64 v5; // rbx
  __int64 v6; // r14
  __int64 v7; // r13
  __int64 v8; // rdx
  __int64 v9; // rsi
  size_t v10; // rax
  __int64 v11; // r12
  char *v12; // r12
  __int64 v13; // rax
  __int64 v14; // rbx
  char v15; // al
  __int64 v16; // rdx
  char v17; // cl
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  int v26; // ebx
  int v27; // ebx
  unsigned int v28; // [rsp+Ch] [rbp-7Ch]
  __int64 v29; // [rsp+10h] [rbp-78h]
  __int64 v30; // [rsp+20h] [rbp-68h] BYREF
  __int128 v31; // [rsp+28h] [rbp-60h]
  __int64 v32; // [rsp+38h] [rbp-50h]
  unsigned __int64 v33; // [rsp+48h] [rbp-40h]

  v1 = *(_QWORD *)(a1 + 208);
  v33 = __readfsqword(0x28u);
  v28 = *(_BYTE *)(v1 + 88) & 0xF0;
  if ( (*(_BYTE *)(v1 + 88) & 0xF0) == 0xC0 )
    v28 = *(_DWORD *)(v1 + 28);
  if ( v28 <= 0x10 )
    v28 = getinf();
  if ( v28 - 208 <= 0x2F )
  {
    sub_D61D0(a1, 1, v28);
    v2 = *(_QWORD *)(a1 + 208);
    v3 = *(_DWORD **)v2;
    v29 = *(_QWORD *)v2 + 80LL * *(_QWORD *)(v2 + 8);
    if ( *(_QWORD *)v2 != v29 )
    {
      do
      {
        *((_QWORD *)&v31 + 1) = 0;
        tinfo_size = get_tinfo_size();
        v30 = 0;
        *(_QWORD *)&v31 = 0;
        sub_D80A0(a1, &v30, v3, tinfo_size, 1);
        v5 = v30;
        v6 = 4 * v31;
        v7 = (4 * (__int64)v31) >> 2;
        if ( v7 )
        {
          v8 = *(_QWORD *)(a1 + 16);
          v9 = *(_QWORD *)(a1 + 8);
          v10 = 0;
          v11 = 4 * v8;
          if ( *(_QWORD *)(a1 + 24) < (unsigned __int64)(v7 + v8) )
          {
            v22 = qvector_reserve();
            *(_QWORD *)(a1 + 8) = v22;
            v9 = v22;
            v10 = 4LL * *(_QWORD *)(a1 + 16) - v11;
          }
          v12 = (char *)(v9 + v11);
          memmove(&v12[v6], v12, v10);
          v13 = 0;
          if ( v6 )
          {
            do
            {
              *(_DWORD *)&v12[v13] = *(_DWORD *)(v5 + v13);
              v13 += 4;
            }
            while ( v6 != v13 );
          }
          *(_QWORD *)(a1 + 16) += v7;
        }
        if ( v5 )
          qfree();
        v3 += 20;
      }
      while ( (_DWORD *)v29 != v3 );
    }
    *(_DWORD *)a1 = 1;
    sub_D6020(a1, (__int64 *)(a1 + 88), (_QWORD *)(a1 + 8));
    v14 = *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL);
    v31 = 0;
    v30 = 32;
    v32 = 0;
    get_stkarg_area_info();
    *(_QWORD *)(a1 + 216) = 0;
    v15 = sub_36BD00(*(_QWORD *)(v14 + 1504), v28);
    v16 = v31;
    v17 = v15;
    v18 = 0;
    if ( !v17 )
    {
      v18 = v31;
      v16 = -1;
    }
    v19 = *((_QWORD *)&v31 + 1) + v18;
    *(_QWORD *)(a1 + 232) = v16;
    *(_QWORD *)(a1 + 224) = v19;
    v20 = *(_QWORD *)(a1 + 16);
    *(_DWORD *)(a1 + 240) = 0;
    *(_DWORD *)(a1 + 216) = v20;
    *(_DWORD *)(a1 + 4) = v20;
    if ( (int)v20 > 0 )
      sub_63890((__int64 *)(a1 + 144), v20 - 1);
    *(_QWORD *)(a1 + 248) = -1;
    return v33 - __readfsqword(0x28u);
  }
  sub_D6290(a1, v28);
  sub_DB630(a1, a1 + 216, *(_QWORD *)(*(_QWORD *)(a1 + 136) + 64LL), *(_QWORD *)(a1 + 208));
  v23 = *(_QWORD *)(a1 + 136);
  v30 = 0;
  LODWORD(v32) = 0;
  v31 = 0;
  if ( !(unsigned __int8)sub_2B3900(&v30, *(_QWORD *)(v23 + 64), *(_QWORD *)(*(_QWORD *)(v23 + 56) + 24LL)) )
  {
    *(_QWORD *)&v31 = -1;
    v30 = -1;
LABEL_33:
    v25 = *(int *)(a1 + 216);
    v26 = *(_DWORD *)(a1 + 216);
    if ( v25 < *(_QWORD *)(a1 + 16) )
      v26 += sub_DEB80(
               (__int64 *)(a1 + 144),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 8),
               v25,
               1,
               0);
    LODWORD(v30) = v26;
    if ( HIDWORD(v30) != -1 )
      goto LABEL_25;
    goto LABEL_36;
  }
  if ( (_DWORD)v30 == -1 )
    goto LABEL_33;
  if ( HIDWORD(v30) == -1 )
  {
LABEL_36:
    v27 = *(_DWORD *)(a1 + 220);
    if ( (*(_DWORD *)a1 & 0xFFFFFFFB) == 2 && (unsigned __int64)v27 < *(_QWORD *)(a1 + 40) )
      v27 += sub_DEB80(
               (__int64 *)(a1 + 160),
               *(_QWORD *)(a1 + 136),
               *(_QWORD *)(*(_QWORD *)(a1 + 136) + 56LL),
               (_QWORD *)(a1 + 32),
               v27,
               1,
               0);
    HIDWORD(v30) = v27;
  }
LABEL_25:
  if ( (int)v30 > 0 )
    sub_63890((__int64 *)(a1 + 144), v30 - 1);
  if ( SHIDWORD(v30) > 0 )
    sub_63890((__int64 *)(a1 + 160), HIDWORD(v30) - 1);
  v24 = -1;
  if ( (_QWORD)v31 != -1 )
    v24 = v31 - *(_QWORD *)(*(_QWORD *)(a1 + 208) + 56LL);
  *(_QWORD *)(a1 + 248) = v24;
  return v33 - __readfsqword(0x28u);
}
