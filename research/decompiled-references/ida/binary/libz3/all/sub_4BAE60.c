__int64 __fastcall sub_4BAE60(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char v9; // al
  unsigned int v10; // r12d
  __int64 result; // rax
  __int64 v12; // rcx
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rsi
  __int64 v18; // rdi
  __int64 v19; // rax
  __int64 v20; // r14
  __int64 v21; // r13
  __int64 v22; // r12
  __int64 v23; // r12
  __int64 v24; // rax
  __int64 v25; // rdi
  __int64 v26; // rax
  int v27; // ecx
  __int64 v28; // rax
  unsigned int v29; // r13d
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rdx
  __int64 v34; // r12
  bool v35; // zf
  __int64 v36; // rdi
  __int64 v37; // rsi
  __int64 v38; // rax
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rdx
  __int64 v43; // r12
  __int64 v44; // rax
  int v45; // ecx
  __int64 v46; // rax
  int v47[2]; // [rsp+8h] [rbp-70h]
  int v48; // [rsp+10h] [rbp-68h]
  int v49; // [rsp+14h] [rbp-64h]
  int v50; // [rsp+18h] [rbp-60h]
  int v51; // [rsp+20h] [rbp-58h]
  __int64 v52; // [rsp+28h] [rbp-50h] BYREF
  __int64 v53; // [rsp+30h] [rbp-48h] BYREF
  __int64 v54; // [rsp+38h] [rbp-40h]
  int v55; // [rsp+40h] [rbp-38h]
  void *v56; // [rsp+48h] [rbp-30h]

  v9 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  if ( v9 == 2 )
  {
    v28 = *(_QWORD *)(a1 + 8);
    v29 = *(_DWORD *)(a2 + 24);
    v53 = 0;
    v54 = v28;
    v30 = *(_QWORD *)(a1 + 160);
    if ( v30 )
      *(_DWORD *)(v30 - 4) -= v29;
    v31 = *(_QWORD *)(a1 + 528);
    if ( v31 )
      *(_DWORD *)(v31 - 4) -= v29;
    *(_DWORD *)(a1 + 128) -= v29;
    sub_15844D0(a1);
    v32 = 0x7FFFFFFF8LL;
    v33 = *(_QWORD *)(a1 + 56);
    if ( v33 )
      v32 = 8LL * (unsigned int)(*(_DWORD *)(v33 - 4) - 1);
    v34 = *(_QWORD *)(v33 + v32);
    if ( v34 )
      ++*(_DWORD *)(v34 + 8);
    sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
    v35 = *(_WORD *)(v34 + 4) == 0;
    *(_QWORD *)(a1 + 480) = v34;
    if ( !v35 || (*(_BYTE *)(v34 + 30) & 1) == 0 )
    {
      sub_1585DF0(a1 + 328, v34, v29, &v53);
      v36 = *(_QWORD *)(a1 + 480);
      v37 = v54;
      *(_QWORD *)(a1 + 480) = v53;
      v53 = v36;
      sub_4B1860(v36, v37);
      v53 = 0;
    }
    sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
    v38 = *(_QWORD *)(a1 + 480);
    v52 = v38;
    if ( v38 )
      ++*(_DWORD *)(v38 + 8);
    sub_4B2920((_QWORD *)(a1 + 56), &v52);
    if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
    v39 = *(_QWORD *)(a1 + 40);
    v40 = *(_DWORD *)(v39 - 4);
    *(_DWORD *)(v39 - 4) = v40 - 1;
    if ( v40 != 1 )
      *(_BYTE *)(v39 + 16LL * (unsigned int)(v40 - 2) + 8) |= 2u;
    return sub_4B1860(v53, v54);
  }
  else
  {
    if ( v9 == 3 )
    {
      sub_1872CE0("");
      sub_1873130(107, 520);
    }
    if ( v9 )
    {
      v41 = 0x7FFFFFFF8LL;
      v42 = *(_QWORD *)(a1 + 56);
      if ( v42 )
        v41 = 8LL * (unsigned int)(*(_DWORD *)(v42 - 4) - 1);
      v43 = *(_QWORD *)(v42 + v41);
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v43;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v44 = *(_QWORD *)(a1 + 480);
      v53 = v44;
      if ( v44 )
        ++*(_DWORD *)(v44 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), &v53);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v45 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v45 - 1;
      if ( v45 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v45 - 2) + 8) |= 2u;
    }
    else
    {
      v10 = *(_DWORD *)(a2 + 24);
      while ( *(_DWORD *)(a3 + 8) >> 6 < v10 )
      {
        result = sub_4BA6E0((_QWORD *)a1, a2, a3);
        if ( !(_BYTE)result )
        {
          v12 = *(_DWORD *)(a3 + 8) >> 6;
          v13 = *(_QWORD *)(a2 + 8 * v12 + 32);
          v14 = (((_DWORD)v12 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
          *(_DWORD *)(a3 + 8) = v14;
          result = sub_4BA320((_QWORD *)a1, v13, ((unsigned __int8)v14 >> 4) & 3);
          if ( (_BYTE)result )
            continue;
        }
        return result;
      }
      *(_QWORD *)v47 = *(_QWORD *)(a2 + 16);
      v15 = *(_QWORD *)(a1 + 56);
      v50 = v15;
      if ( v15 )
        v49 = *(_DWORD *)(v15 - 4);
      else
        v49 = 0;
      v16 = *(_QWORD *)(a1 + 144);
      v48 = *(_DWORD *)(a3 + 12);
      v17 = (unsigned int)(*(_DWORD *)(v16 + 168) - 1);
      v18 = *(_QWORD *)(*(_QWORD *)(v16 + 160) + 8 * v17);
      *(_DWORD *)(v16 + 168) = v17;
      if ( !*(_WORD *)(v18 + 4) )
      {
        v19 = *(unsigned int *)(v18 + 24);
        if ( (_DWORD)v19 )
        {
          v20 = v18;
          v21 = v18 + 8 * v19;
          v22 = v16 + 80;
          while ( !(unsigned __int8)sub_15D37A0(v22, *(_QWORD *)(v20 + 32)) )
          {
            v20 += 8;
            if ( v21 == v20 )
              goto LABEL_16;
          }
          sub_15D0A90(v22, v18, 1);
        }
      }
LABEL_16:
      if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
      {
        v46 = sub_15DC610(
                *(_QWORD *)(a1 + 8),
                v47[0],
                v49 - v48,
                v50 + 8 * v48,
                a5,
                a6,
                v18,
                v47[0],
                v48,
                v50,
                v51,
                v52,
                v53,
                v54,
                v55,
                v56);
        v23 = v46;
        if ( v46 )
          ++*(_DWORD *)(v46 + 8);
        sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      }
      else
      {
        ++*(_DWORD *)(a2 + 8);
        v23 = a2;
        sub_4B1860(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      }
      *(_QWORD *)(a1 + 480) = v23;
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v24 = *(_QWORD *)(a1 + 480);
      v53 = v24;
      if ( v24 )
        ++*(_DWORD *)(v24 + 8);
      sub_4B2920((_QWORD *)(a1 + 56), &v53);
      v25 = *(_QWORD *)(a1 + 480);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
      {
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
        v25 = *(_QWORD *)(a1 + 480);
      }
      v26 = *(_QWORD *)(a1 + 40);
      v27 = *(_DWORD *)(v26 - 4);
      *(_DWORD *)(v26 - 4) = v27 - 1;
      if ( a2 != v25 && v27 != 1 )
      {
        *(_BYTE *)(v26 + 16LL * (unsigned int)(v27 - 2) + 8) |= 2u;
        v25 = *(_QWORD *)(a1 + 480);
      }
      result = sub_4B1860(v25, *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = 0;
    }
  }
  return result;
}

