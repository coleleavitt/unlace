__int64 __fastcall sub_907570(__int64 a1, __int64 a2, __int64 a3, __int64 a4, int a5, int a6)
{
  char v9; // al
  unsigned int v10; // ebp
  __int64 v11; // rsi
  int v12; // edx
  __int64 result; // rax
  unsigned int v14; // eax
  _DWORD *v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdx
  __int64 v19; // r14
  unsigned __int8 v20; // al
  __int64 v21; // rax
  int v22; // edx
  __int64 v23; // rax
  __int64 v24; // rax
  __int64 v25; // rdx
  int v26; // eax
  __int64 v27; // rax
  unsigned int v28; // r14d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rbp
  bool v34; // zf
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rbp
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  int v46; // edx
  __int64 v47; // rbp
  __int64 v48; // rax
  __int64 v49; // rdi
  __int64 v50; // rax
  int v51; // ecx
  __int64 v52; // rax
  int v53; // [rsp+0h] [rbp-68h]
  int v54; // [rsp+8h] [rbp-60h]
  __int64 v55; // [rsp+8h] [rbp-60h]
  int v56; // [rsp+10h] [rbp-58h]
  __int64 v57; // [rsp+18h] [rbp-50h] BYREF
  __int64 v58; // [rsp+20h] [rbp-48h] BYREF
  __int64 v59; // [rsp+28h] [rbp-40h]
  int v60; // [rsp+30h] [rbp-38h]
  int v61; // [rsp+38h] [rbp-30h]
  int v62; // [rsp+40h] [rbp-28h]
  void *v63; // [rsp+48h] [rbp-20h]

  v9 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v9 )
  {
    case 2:
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_DWORD *)(a2 + 24);
      v58 = 0;
      v59 = v27;
      v29 = *(_QWORD *)(a1 + 160);
      if ( v29 )
        *(_DWORD *)(v29 - 4) -= v28;
      v30 = *(_QWORD *)(a1 + 528);
      if ( v30 )
        *(_DWORD *)(v30 - 4) -= v28;
      *(_DWORD *)(a1 + 128) -= v28;
      sub_15844D0(a1);
      v31 = 0x7FFFFFFF8LL;
      v32 = *(_QWORD *)(a1 + 56);
      if ( v32 )
        v31 = 8LL * (unsigned int)(*(_DWORD *)(v32 - 4) - 1);
      v33 = *(_QWORD *)(v32 + v31);
      if ( v33 )
        ++*(_DWORD *)(v33 + 8);
      sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      v34 = *(_WORD *)(v33 + 4) == 0;
      *(_QWORD *)(a1 + 480) = v33;
      if ( !v34 || (*(_BYTE *)(v33 + 30) & 1) == 0 )
      {
        sub_1585DF0(a1 + 328, v33, v28, &v58);
        v35 = *(_QWORD *)(a1 + 480);
        v36 = v59;
        *(_QWORD *)(a1 + 480) = v58;
        v58 = v35;
        sub_8E4E90(v35, v36);
        v58 = 0;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v37 = *(_QWORD *)(a1 + 480);
      v57 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      sub_8F15F0((_QWORD *)(a1 + 56), &v57);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      v38 = *(_QWORD *)(a1 + 40);
      v39 = *(_DWORD *)(v38 - 4);
      *(_DWORD *)(v38 - 4) = v39 - 1;
      if ( v39 != 1 )
        *(_BYTE *)(v38 + 16LL * (unsigned int)(v39 - 2) + 8) |= 2u;
      return sub_8E4E90(v58, v59);
    case 3:
      sub_1872CE0("");
      sub_1873130(107, 520);
    case 0:
      v10 = *(_DWORD *)(a2 + 24);
      while ( 1 )
      {
        v14 = *(_DWORD *)(a3 + 8) >> 6;
        if ( v14 >= v10 )
        {
          v45 = *(_QWORD *)(a1 + 56);
          if ( v45 )
            v46 = *(_DWORD *)(v45 - 4);
          else
            v46 = 0;
          if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
          {
            v52 = sub_15DC610(
                    *(_QWORD *)(a1 + 8),
                    *(_QWORD *)(a2 + 16),
                    v46 - *(_DWORD *)(a3 + 12),
                    (int)v45 + 8 * *(_DWORD *)(a3 + 12),
                    a5,
                    a6,
                    v53,
                    v54,
                    v56,
                    v57,
                    v58,
                    v59,
                    v60,
                    v61,
                    v62,
                    v63);
            v47 = v52;
            if ( v52 )
              ++*(_DWORD *)(v52 + 8);
            sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          }
          else
          {
            ++*(_DWORD *)(a2 + 8);
            v47 = a2;
            sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          }
          *(_QWORD *)(a1 + 480) = v47;
          sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
          v48 = *(_QWORD *)(a1 + 480);
          v58 = v48;
          if ( v48 )
            ++*(_DWORD *)(v48 + 8);
          sub_8F15F0((_QWORD *)(a1 + 56), &v58);
          v49 = *(_QWORD *)(a1 + 480);
          if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          {
            sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
            v49 = *(_QWORD *)(a1 + 480);
          }
          v50 = *(_QWORD *)(a1 + 40);
          v51 = *(_DWORD *)(v50 - 4);
          *(_DWORD *)(v50 - 4) = v51 - 1;
          if ( a2 != v49 && v51 != 1 )
          {
            *(_BYTE *)(v50 + 16LL * (unsigned int)(v51 - 2) + 8) |= 2u;
            v49 = *(_QWORD *)(a1 + 480);
          }
          result = sub_8E4E90(v49, *(_QWORD *)(a1 + 488));
          *(_QWORD *)(a1 + 480) = 0;
          return result;
        }
        if ( (*(_DWORD *)(a3 + 8) & 0xFFFFFFC0) == 0x40 && !*(_WORD *)(a2 + 4) )
        {
          v15 = *(_DWORD **)(*(_QWORD *)(a2 + 16) + 24LL);
          if ( v15 )
          {
            if ( !*v15 && v15[1] == 4 )
            {
              v16 = *(unsigned int *)(a3 + 12);
              v17 = *(_QWORD *)(*(_QWORD *)(a1 + 56) + 8 * v16);
              v18 = *(_QWORD *)(a1 + 8);
              if ( v17 == *(_QWORD *)(v18 + 856) )
              {
                v19 = *(_QWORD *)(a2 + 40);
              }
              else
              {
                if ( v17 != *(_QWORD *)(v18 + 864) )
                  goto LABEL_5;
                v19 = *(_QWORD *)(a2 + 48);
              }
              if ( v19 )
              {
                sub_39BEE0((__int64 *)(a1 + 48), v16);
                v58 = v19;
                ++*(_DWORD *)(v19 + 8);
                sub_8F15F0((_QWORD *)(a1 + 56), &v58);
                v20 = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
                *(_BYTE *)(a3 + 8) = v20;
                if ( (unsigned __int8)sub_904C10((_QWORD *)a1, v19, (v20 >> 4) & 3) )
                {
                  v21 = *(_QWORD *)(a1 + 56);
                  if ( v21 )
                    v22 = *(_DWORD *)(v21 - 4);
                  else
                    v22 = 0;
                  v23 = *(_QWORD *)(v21 + 8LL * (unsigned int)(v22 - 1));
                  if ( v23 )
                    ++*(_DWORD *)(v23 + 8);
                  v55 = v23;
                  sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
                  *(_QWORD *)(a1 + 480) = v55;
                  sub_39BF70((__int64 *)(a1 + 48));
                  sub_39BF70((__int64 *)(a1 + 48));
                  v24 = *(_QWORD *)(a1 + 480);
                  v58 = v24;
                  if ( v24 )
                    ++*(_DWORD *)(v24 + 8);
                  sub_8F15F0((_QWORD *)(a1 + 56), &v58);
                  if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
                    sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
                  v25 = *(_QWORD *)(a1 + 40);
                  v26 = *(_DWORD *)(v25 - 4);
                  *(_DWORD *)(v25 - 4) = v26 - 1;
                  if ( v26 != 1 )
                    *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 2) + 8) |= 2u;
                }
                result = sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
                *(_QWORD *)(a1 + 480) = 0;
                return result;
              }
            }
          }
        }
LABEL_5:
        v11 = *(_QWORD *)(a2 + 8LL * v14 + 32);
        v12 = ((v14 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
        *(_DWORD *)(a3 + 8) = v12;
        result = sub_904C10((_QWORD *)a1, v11, ((unsigned __int8)v12 >> 4) & 3);
        if ( !(_BYTE)result )
          return result;
      }
    default:
      v40 = 0x7FFFFFFF8LL;
      v41 = *(_QWORD *)(a1 + 56);
      if ( v41 )
        v40 = 8LL * (unsigned int)(*(_DWORD *)(v41 - 4) - 1);
      v42 = *(_QWORD *)(v41 + v40);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_8E4E90(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v42;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v43 = *(_QWORD *)(a1 + 480);
      v58 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_8F15F0((_QWORD *)(a1 + 56), &v58);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v44 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v44 - 1;
      if ( v44 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v44 - 2) + 8) |= 2u;
      break;
  }
  return result;
}

