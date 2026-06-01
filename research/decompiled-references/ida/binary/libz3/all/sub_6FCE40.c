__int64 __fastcall sub_6FCE40(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rax
  __int64 v13; // r12
  int v14; // r14d
  unsigned int v15; // r15d
  int v16; // r8d
  int v17; // r9d
  __int64 v18; // rax
  __int64 v19; // r12
  __int64 v20; // rax
  __int64 v21; // rdi
  __int64 v22; // rax
  int v23; // ecx
  __int64 v24; // rax
  unsigned int v25; // r14d
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rdx
  __int64 v30; // r12
  bool v31; // zf
  __int64 v32; // rdi
  __int64 v33; // rsi
  __int64 v34; // rax
  __int64 v35; // rax
  int v36; // ecx
  __int64 v37; // rax
  __int64 v38; // rdx
  __int64 v39; // r12
  __int64 v40; // rax
  int v41; // ecx
  __int64 v42; // rsi
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rsi
  __int64 v46; // rdi
  char v47; // al
  __int64 v48; // rax
  __int64 v49; // rdx
  __int64 v50; // rax
  __int64 v51; // rax
  int v52; // [rsp+0h] [rbp-68h]
  int v53[2]; // [rsp+0h] [rbp-68h]
  int v54; // [rsp+8h] [rbp-60h]
  int v55; // [rsp+Ch] [rbp-5Ch]
  int v56; // [rsp+10h] [rbp-58h]
  __int64 v57; // [rsp+18h] [rbp-50h] BYREF
  __int64 v58; // [rsp+20h] [rbp-48h] BYREF
  __int64 v59; // [rsp+28h] [rbp-40h]
  int v60; // [rsp+30h] [rbp-38h]
  int v61; // [rsp+38h] [rbp-30h]
  int v62; // [rsp+40h] [rbp-28h]
  void *v63; // [rsp+48h] [rbp-20h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v6 )
  {
    case 2:
      v24 = *(_QWORD *)(a1 + 8);
      v25 = *(_DWORD *)(a2 + 24);
      v58 = 0;
      v59 = v24;
      v26 = *(_QWORD *)(a1 + 160);
      if ( v26 )
        *(_DWORD *)(v26 - 4) -= v25;
      v27 = *(_QWORD *)(a1 + 528);
      if ( v27 )
        *(_DWORD *)(v27 - 4) -= v25;
      *(_DWORD *)(a1 + 128) -= v25;
      sub_15844D0(a1);
      v28 = 0x7FFFFFFF8LL;
      v29 = *(_QWORD *)(a1 + 56);
      if ( v29 )
        v28 = 8LL * (unsigned int)(*(_DWORD *)(v29 - 4) - 1);
      v30 = *(_QWORD *)(v29 + v28);
      if ( v30 )
        ++*(_DWORD *)(v30 + 8);
      sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      v31 = *(_WORD *)(v30 + 4) == 0;
      *(_QWORD *)(a1 + 480) = v30;
      if ( !v31 || (*(_BYTE *)(v30 + 30) & 1) == 0 )
      {
        sub_1585DF0(a1 + 328, v30, v25, &v58);
        v32 = *(_QWORD *)(a1 + 480);
        v33 = v59;
        *(_QWORD *)(a1 + 480) = v58;
        v58 = v32;
        sub_6EF400(v32, v33);
        v58 = 0;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v34 = *(_QWORD *)(a1 + 480);
      v57 = v34;
      if ( v34 )
        ++*(_DWORD *)(v34 + 8);
      sub_6EFE70((_QWORD *)(a1 + 56), &v57);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      v35 = *(_QWORD *)(a1 + 40);
      v36 = *(_DWORD *)(v35 - 4);
      *(_DWORD *)(v35 - 4) = v36 - 1;
      if ( v36 != 1 )
        *(_BYTE *)(v35 + 16LL * (unsigned int)(v36 - 2) + 8) |= 2u;
      return sub_6EF400(v58, v59);
    case 3:
      sub_1872CE0("");
      sub_1873130(107, 520);
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( *(_DWORD *)(a3 + 8) >> 6 < v7 )
      {
        result = sub_6FCC60((_QWORD *)a1, a2, a3);
        if ( !(_BYTE)result )
        {
          v9 = *(_DWORD *)(a3 + 8) >> 6;
          v10 = *(_QWORD *)(a2 + 8 * v9 + 32);
          v11 = (((_DWORD)v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
          *(_DWORD *)(a3 + 8) = v11;
          result = sub_6FC840(a1, v10, ((unsigned __int8)v11 >> 4) & 3);
          if ( (_BYTE)result )
            continue;
        }
        return result;
      }
      v12 = *(_QWORD *)(a1 + 56);
      v13 = *(_QWORD *)(a2 + 16);
      if ( v12 )
        v55 = *(_DWORD *)(v12 - 4);
      else
        v55 = 0;
      v14 = v12 + 8 * *(_DWORD *)(a3 + 12);
      v15 = *(_DWORD *)(a3 + 12);
      v52 = sub_6EFF30(*(_QWORD *)(a1 + 144), v13, (_QWORD *)(v12 + 8LL * v15), (__int64 *)(a1 + 480));
      if ( v52 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v18 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v13,
                  v55 - v15,
                  v14,
                  v16,
                  v17,
                  5,
                  v54,
                  v56,
                  v57,
                  v58,
                  v59,
                  v60,
                  v61,
                  v62,
                  v63);
          v19 = v18;
          if ( v18 )
            ++*(_DWORD *)(v18 + 8);
          sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          v19 = a2;
          sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        }
        *(_QWORD *)(a1 + 480) = v19;
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v20 = *(_QWORD *)(a1 + 480);
        v58 = v20;
        if ( v20 )
          ++*(_DWORD *)(v20 + 8);
        sub_6EFE70((_QWORD *)(a1 + 56), &v58);
        v21 = *(_QWORD *)(a1 + 480);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          v21 = *(_QWORD *)(a1 + 480);
        }
        v22 = *(_QWORD *)(a1 + 40);
        v23 = *(_DWORD *)(v22 - 4);
        *(_DWORD *)(v22 - 4) = v23 - 1;
        if ( a2 != v21 && v23 != 1 )
        {
          *(_BYTE *)(v22 + 16LL * (unsigned int)(v23 - 2) + 8) |= 2u;
          v21 = *(_QWORD *)(a1 + 480);
        }
        result = sub_6EF400(v21, *(_QWORD *)(a1 + 488));
        goto LABEL_23;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v58 = *(_QWORD *)(a1 + 480);
      if ( v58 )
        ++*(_DWORD *)(v58 + 8);
      sub_6EFE70((_QWORD *)(a1 + 56), &v58);
      v42 = *(_QWORD *)(a1 + 480);
      if ( v52 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
LABEL_59:
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        v47 = sub_6FC840(a1, v42, 1);
        v46 = *(_QWORD *)(a1 + 480);
        v45 = *(_QWORD *)(a1 + 488);
        if ( !v47 )
        {
LABEL_63:
          result = sub_6EF400(v46, v45);
LABEL_23:
          *(_QWORD *)(a1 + 480) = 0;
          return result;
        }
        v48 = 0x7FFFFFFF8LL;
        v49 = *(_QWORD *)(a1 + 56);
        if ( v49 )
          v48 = 8LL * (unsigned int)(*(_DWORD *)(v49 - 4) - 1);
        v50 = *(_QWORD *)(v49 + v48);
        if ( v50 )
          ++*(_DWORD *)(v50 + 8);
        *(_QWORD *)v53 = v50;
        sub_6EF400(v46, v45);
        *(_QWORD *)(a1 + 480) = *(_QWORD *)v53;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v51 = *(_QWORD *)(a1 + 480);
        v58 = v51;
        if ( v51 )
          ++*(_DWORD *)(v51 + 8);
        sub_6EFE70((_QWORD *)(a1 + 56), &v58);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          goto LABEL_59;
      }
      v43 = *(_QWORD *)(a1 + 40);
      v44 = *(_DWORD *)(v43 - 4);
      *(_DWORD *)(v43 - 4) = v44 - 1;
      if ( v44 != 1 )
        *(_BYTE *)(v43 + 16LL * (unsigned int)(v44 - 2) + 8) |= 2u;
      v45 = *(_QWORD *)(a1 + 488);
      v46 = *(_QWORD *)(a1 + 480);
      goto LABEL_63;
    default:
      v37 = 0x7FFFFFFF8LL;
      v38 = *(_QWORD *)(a1 + 56);
      if ( v38 )
        v37 = 8LL * (unsigned int)(*(_DWORD *)(v38 - 4) - 1);
      v39 = *(_QWORD *)(v38 + v37);
      if ( v39 )
        ++*(_DWORD *)(v39 + 8);
      sub_6EF400(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v39;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v40 = *(_QWORD *)(a1 + 480);
      v58 = v40;
      if ( v40 )
        ++*(_DWORD *)(v40 + 8);
      sub_6EFE70((_QWORD *)(a1 + 56), &v58);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      result = *(_QWORD *)(a1 + 40);
      v41 = *(_DWORD *)(result - 4);
      *(_DWORD *)(result - 4) = v41 - 1;
      if ( v41 != 1 )
        *(_BYTE *)(result + 16LL * (unsigned int)(v41 - 2) + 8) |= 2u;
      break;
  }
  return result;
}

