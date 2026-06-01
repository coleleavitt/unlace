__int64 __fastcall sub_6F6880(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r14
  int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // r12d
  int v17; // r15d
  int v18; // r8d
  int v19; // r9d
  __int64 v20; // rax
  __int64 v21; // r12
  __int64 v22; // rax
  __int64 v23; // rdi
  __int64 v24; // rax
  int v25; // ecx
  __int64 v26; // rax
  unsigned int v27; // r14d
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // r12
  bool v33; // zf
  __int64 v34; // rdi
  __int64 v35; // rsi
  __int64 v36; // rax
  __int64 v37; // rax
  int v38; // ecx
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // r12
  __int64 v42; // rax
  int v43; // ecx
  __int64 v44; // rax
  __int64 v45; // rax
  int v46; // ecx
  int v47; // [rsp+0h] [rbp-58h]
  __int64 v48; // [rsp+8h] [rbp-50h] BYREF
  __int64 v49; // [rsp+10h] [rbp-48h] BYREF
  __int64 v50; // [rsp+18h] [rbp-40h]
  int v51; // [rsp+20h] [rbp-38h]
  char v52; // [rsp+28h] [rbp-30h]
  int v53; // [rsp+30h] [rbp-28h]
  int v54; // [rsp+38h] [rbp-20h]
  int v55; // [rsp+40h] [rbp-18h]
  void *v56; // [rsp+48h] [rbp-10h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v6 == 2 )
  {
    v26 = *(_QWORD *)(a1 + 8);
    v27 = *(_DWORD *)(a2 + 24);
    v49 = 0;
    v50 = v26;
    v28 = *(_QWORD *)(a1 + 160);
    if ( v28 )
      *(_DWORD *)(v28 - 4) -= v27;
    v29 = *(_QWORD *)(a1 + 528);
    if ( v29 )
      *(_DWORD *)(v29 - 4) -= v27;
    *(_DWORD *)(a1 + 128) -= v27;
    sub_15844D0(a1);
    v30 = 0x7FFFFFFF8LL;
    v31 = *(_QWORD *)(a1 + 56);
    if ( v31 )
      v30 = 8LL * (unsigned int)(*(_DWORD *)(v31 - 4) - 1);
    v32 = *(_QWORD *)(v31 + v30);
    if ( v32 )
      ++*(_DWORD *)(v32 + 8);
    sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v33 = *(_WORD *)(v32 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v32;
    if ( !v33 || (*(_BYTE *)(v32 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v32, v27, &v49);
      v34 = *(_QWORD *)(a1 + 480);
      v35 = v50;
      *(_QWORD *)(a1 + 480) = v49;
      v49 = v34;
      sub_6EF400(v34, v35);
      v49 = 0;
    }
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v36 = *(_QWORD *)(a1 + 480);
    v48 = v36;
    if ( v36 )
      ++*(_DWORD *)(v36 + 8);
    sub_6EFE70((_QWORD *)(a1 + 56), &v48);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v37 = *(_QWORD *)(a1 + 40);
    v38 = *(_DWORD *)(v37 - 4);
    *(_DWORD *)(v37 - 4) = v38 - 1;
    if ( v38 != 1 )
      *(_BYTE *)(v37 + 16LL * (unsigned int)(v38 - 2) + 8) |= 2u;
    return sub_6EF400(v49, v50);
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
      v39 = 0x7FFFFFFF8LL;
      v40 = *(_QWORD *)(a1 + 56);
      if ( v40 )
        v39 = 8LL * (unsigned int)(*(_DWORD *)(v40 - 4) - 1);
      v41 = *(_QWORD *)(v40 + v39);
      if ( v41 )
        ++*(_DWORD *)(v41 + 8);
      sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v41;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v42 = *(_QWORD *)(a1 + 480);
      v49 = v42;
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_6EFE70((_QWORD *)(a1 + 56), &v49);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v43 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v43 - 1;
      if ( v43 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v43 - 2) + 8) |= 2u;
    }
    else
    {
      v7 = *(_DWORD *)(a2 + 24);
      while ( *(_DWORD *)(a3 + 8) >> 6 < v7 )
      {
        result = sub_6F4620((_QWORD *)a1, a2, a3);
        if ( !(_BYTE)result )
        {
          v9 = *(_DWORD *)(a3 + 8) >> 6;
          v10 = *(_QWORD *)(a2 + 8 * v9 + 32);
          v11 = (((_DWORD)v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
          *(_DWORD *)(a3 + 8) = v11;
          result = sub_6F4250((_QWORD *)a1, v10, ((unsigned __int8)v11 >> 4) & 3);
          if ( (_BYTE)result )
            continue;
        }
        return result;
      }
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(_QWORD *)(a2 + 16);
      if ( v12 )
        v14 = *(_DWORD *)(v12 - 4);
      else
        v14 = 0;
      v15 = *(unsigned int *)(a3 + 12);
      v16 = v14 - v15;
      v17 = v12 + 8 * v15;
      if ( (unsigned int)sub_6EF470(
                           *(_QWORD *)(a1 + 144),
                           *(_QWORD *)(a2 + 16),
                           v16,
                           (_QWORD *)(v12 + 8 * v15),
                           (__int64 *)(a1 + 480)) == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v20 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v13,
                  v16,
                  v17,
                  v18,
                  v19,
                  v47,
                  v48,
                  v49,
                  v50,
                  v51,
                  v52,
                  v53,
                  v54,
                  v55,
                  v56);
          v21 = v20;
          if ( v20 )
            ++*(_DWORD *)(v20 + 8);
          sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          v21 = a2;
          sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        }
        *(_QWORD *)(a1 + 480) = v21;
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v22 = *(_QWORD *)(a1 + 480);
        v49 = v22;
        if ( v22 )
          ++*(_DWORD *)(v22 + 8);
        sub_6EFE70((_QWORD *)(a1 + 56), &v49);
        v23 = *(_QWORD *)(a1 + 480);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          v23 = *(_QWORD *)(a1 + 480);
        }
        v24 = *(_QWORD *)(a1 + 40);
        v25 = *(_DWORD *)(v24 - 4);
        *(_DWORD *)(v24 - 4) = v25 - 1;
        if ( a2 != v23 && v25 != 1 )
        {
          *(_BYTE *)(v24 + 16LL * (unsigned int)(v25 - 2) + 8) |= 2u;
          v23 = *(_QWORD *)(a1 + 480);
        }
        result = sub_6EF400(v23, *(_QWORD *)(a1 + 488));
      }
      else
      {
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v44 = *(_QWORD *)(a1 + 480);
        v49 = v44;
        if ( v44 )
          ++*(_DWORD *)(v44 + 8);
        sub_6EFE70((_QWORD *)(a1 + 56), &v49);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v45 = *(_QWORD *)(a1 + 40);
        v46 = *(_DWORD *)(v45 - 4);
        *(_DWORD *)(v45 - 4) = v46 - 1;
        if ( v46 != 1 )
          *(_BYTE *)(v45 + 16LL * (unsigned int)(v46 - 2) + 8) |= 2u;
        result = sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      }
      *(_QWORD *)(a1 + 480) = 0;
    }
  }
  return result;
}

