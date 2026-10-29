__int64 __fastcall sub_4B9690(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // r15
  int v13; // r12d
  int v14; // r14d
  int v15; // r8d
  int v16; // r9d
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  __int64 v20; // rax
  int v21; // ecx
  __int64 v22; // rax
  unsigned int v23; // r14d
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // r12
  bool v29; // zf
  __int64 v30; // rdi
  __int64 v31; // rsi
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rdx
  __int64 v37; // r12
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  int v41; // [rsp+0h] [rbp-68h]
  int v42[2]; // [rsp+8h] [rbp-60h]
  int v43; // [rsp+10h] [rbp-58h]
  __int64 v44; // [rsp+18h] [rbp-50h] BYREF
  __int64 v45; // [rsp+20h] [rbp-48h] BYREF
  __int64 v46; // [rsp+28h] [rbp-40h]
  int v47; // [rsp+30h] [rbp-38h]
  int v48; // [rsp+38h] [rbp-30h]
  int v49; // [rsp+40h] [rbp-28h]
  void *v50; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v22 = *(_QWORD *)(a1 + 8);
    v23 = *(_DWORD *)(a2 + 24);
    v45 = 0;
    v46 = v22;
    v24 = *(_QWORD *)(a1 + 160);
    if ( v24 )
      *(_DWORD *)(v24 - 4) -= v23;
    v25 = *(_QWORD *)(a1 + 528);
    if ( v25 )
      *(_DWORD *)(v25 - 4) -= v23;
    *(_DWORD *)(a1 + 128) -= v23;
    sub_15844D0(a1);
    v26 = 0x7FFFFFFF8LL;
    v27 = *(_QWORD *)(a1 + 56);
    if ( v27 )
      v26 = 8LL * (unsigned int)(*(_DWORD *)(v27 - 4) - 1);
    v28 = *(_QWORD *)(v27 + v26);
    if ( v28 )
      ++*(_DWORD *)(v28 + 8);
    sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v29 = *(_WORD *)(v28 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v28;
    if ( !v29 || (*(_BYTE *)(v28 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v28, v23, &v45);
      v30 = *(_QWORD *)(a1 + 480);
      v31 = v46;
      *(_QWORD *)(a1 + 480) = v45;
      v45 = v30;
      sub_4B1860(v30, v31);
      v45 = 0;
    }
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v32 = *(_QWORD *)(a1 + 480);
    v44 = v32;
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_4B2920((_QWORD *)(a1 + 56), &v44);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v33 = *(_QWORD *)(a1 + 40);
    v34 = *(_DWORD *)(v33 - 4);
    *(_DWORD *)(v33 - 4) = v34 - 1;
    if ( v34 != 1 )
      *(_BYTE *)(v33 + 16LL * (unsigned int)(v34 - 2) + 8) |= 2u;
    return sub_4B1860(v45, v46);
  }
  else
  {
    if ( v6 == 3 )
    {
      sub_1872CE0("");
      sub_1873130(107, 520);
    }
    if ( v6 )
    {
      v35 = 0x7FFFFFFF8LL;
      v36 = *(_QWORD *)(a1 + 56);
      if ( v36 )
        v35 = 8LL * (unsigned int)(*(_DWORD *)(v36 - 4) - 1);
      v37 = *(_QWORD *)(v36 + v35);
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v37;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v38 = *(_QWORD *)(a1 + 480);
      v45 = v38;
      if ( v38 )
        ++*(_DWORD *)(v38 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), &v45);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v39 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v39 - 1;
      if ( v39 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v39 - 2) + 8) |= 2u;
    }
    else
    {
      v7 = *(_DWORD *)(a2 + 24);
      while ( *(_DWORD *)(a3 + 8) >> 6 < v7 )
      {
        result = sub_4B8DB0((_QWORD *)a1, a2, a3);
        if ( !(_BYTE)result )
        {
          v9 = *(_DWORD *)(a3 + 8) >> 6;
          v10 = *(_QWORD *)(a2 + 8 * v9 + 32);
          v11 = (((_DWORD)v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
          *(_DWORD *)(a3 + 8) = v11;
          result = sub_4B8880((_QWORD *)a1, v10, ((unsigned __int8)v11 >> 4) & 3);
          if ( (_BYTE)result )
            continue;
        }
        return result;
      }
      v12 = *(_QWORD *)(a1 + 56);
      *(_QWORD *)v42 = *(_QWORD *)(a2 + 16);
      if ( v12 )
        v13 = *(_DWORD *)(v12 - 4);
      else
        v13 = 0;
      v14 = *(_DWORD *)(a3 + 12);
      sub_4B19A0(*(_QWORD *)(a1 + 144));
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v40 = sub_15DC610(
                *(_QWORD *)(a1 + 8),
                v42[0],
                v13 - v14,
                (int)v12 + 8 * v14,
                v15,
                v16,
                v41,
                v42[0],
                v43,
                v44,
                v45,
                v46,
                v47,
                v48,
                v49,
                v50);
        v17 = v40;
        if ( v40 )
          ++*(_DWORD *)(v40 + 8);
        sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      }
      else
      {
        ++*(_DWORD *)(a2 + 8);
        v17 = a2;
        sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      }
      *(_QWORD *)(a1 + 480) = v17;
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v18 = *(_QWORD *)(a1 + 480);
      v45 = v18;
      if ( v18 )
        ++*(_DWORD *)(v18 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), &v45);
      v19 = *(_QWORD *)(a1 + 480);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      {
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v19 = *(_QWORD *)(a1 + 480);
      }
      v20 = *(_QWORD *)(a1 + 40);
      v21 = *(_DWORD *)(v20 - 4);
      *(_DWORD *)(v20 - 4) = v21 - 1;
      if ( a2 != v19 && v21 != 1 )
      {
        *(_BYTE *)(v20 + 16LL * (unsigned int)(v21 - 2) + 8) |= 2u;
        v19 = *(_QWORD *)(a1 + 480);
      }
      result = sub_4B1860(v19, *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = 0;
    }
  }
  return result;
}

