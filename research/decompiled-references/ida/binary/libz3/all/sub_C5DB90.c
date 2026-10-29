__int64 __fastcall sub_C5DB90(__int64 a1, __int64 a2, __int64 a3)
{
  char v6; // al
  unsigned int v7; // r12d
  __int64 result; // rax
  __int64 v9; // rcx
  __int64 v10; // rsi
  int v11; // edx
  __int64 v12; // rdx
  __int64 v13; // r13
  int v14; // r12d
  __int64 v15; // rax
  unsigned int v16; // r12d
  __int64 *v17; // r15
  int v18; // r8d
  int v19; // r9d
  int v20; // r15d
  __int64 v21; // rax
  __int64 v22; // r12
  __int64 v23; // rax
  __int64 v24; // rdi
  __int64 v25; // rax
  int v26; // ecx
  __int64 v27; // rax
  unsigned int v28; // r13d
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r12
  bool v34; // zf
  __int64 v35; // rdi
  __int64 v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rax
  int v39; // ecx
  __int64 v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r12
  __int64 v43; // rax
  int v44; // ecx
  __int64 v45; // rax
  __int64 v46; // rsi
  __int64 v47; // rax
  int v48; // ecx
  __int64 v49; // rsi
  __int64 v50; // rdi
  char v51; // al
  __int64 v52; // rax
  __int64 v53; // rdx
  __int64 v54; // r15
  __int64 v55; // rax
  int v56; // [rsp+0h] [rbp-78h]
  __int64 *v57; // [rsp+8h] [rbp-70h]
  int v58[2]; // [rsp+18h] [rbp-60h]
  __int64 v59; // [rsp+20h] [rbp-58h] BYREF
  __int64 v60; // [rsp+28h] [rbp-50h] BYREF
  __int64 v61; // [rsp+30h] [rbp-48h] BYREF
  __int64 v62; // [rsp+38h] [rbp-40h]
  int v63; // [rsp+40h] [rbp-38h]
  void *v64; // [rsp+48h] [rbp-30h]

  v6 = (*(_BYTE *)(a3 + 8) >> 2) & 3;
  switch ( v6 )
  {
    case 2:
      v27 = *(_QWORD *)(a1 + 8);
      v28 = *(_DWORD *)(a2 + 24);
      v61 = 0;
      v62 = v27;
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
      sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      v34 = *(_WORD *)(v33 + 4) == 0;
      *(_QWORD *)(a1 + 480) = v33;
      if ( !v34 || (*(_BYTE *)(v33 + 30) & 1) == 0 )
      {
        sub_1585DF0(a1 + 328, v33, v28, &v61);
        v35 = *(_QWORD *)(a1 + 480);
        v36 = v62;
        *(_QWORD *)(a1 + 480) = v61;
        v61 = v35;
        sub_C4E2C0(v35, v36);
        v61 = 0;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v37 = *(_QWORD *)(a1 + 480);
      v60 = v37;
      if ( v37 )
        ++*(_DWORD *)(v37 + 8);
      sub_C516F0((_QWORD *)(a1 + 56), &v60);
      if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      v38 = *(_QWORD *)(a1 + 40);
      v39 = *(_DWORD *)(v38 - 4);
      *(_DWORD *)(v38 - 4) = v39 - 1;
      if ( v39 != 1 )
        *(_BYTE *)(v38 + 16LL * (unsigned int)(v39 - 2) + 8) |= 2u;
      return sub_C4E2C0(v61, v62);
    case 3:
      sub_1872CE0("");
      sub_1873130(107, 520);
    case 0:
      v7 = *(_DWORD *)(a2 + 24);
      while ( *(_DWORD *)(a3 + 8) >> 6 < v7 )
      {
        result = sub_C5D9B0((_QWORD *)a1, a2, a3);
        if ( !(_BYTE)result )
        {
          v9 = *(_DWORD *)(a3 + 8) >> 6;
          v10 = *(_QWORD *)(a2 + 8 * v9 + 32);
          v11 = (((_DWORD)v9 + 1) << 6) | *(_DWORD *)(a3 + 8) & 0x3F;
          *(_DWORD *)(a3 + 8) = v11;
          result = sub_C5D480(a1, v10, ((unsigned __int8)v11 >> 4) & 3);
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
      *(_QWORD *)v58 = *(_QWORD *)(a1 + 8);
      v16 = v14 - v15;
      v57 = (__int64 *)(v12 + 8 * v15);
      v17 = *(__int64 **)(a1 + 144);
      sub_C4E200(*(_QWORD *)(a1 + 512), *(_QWORD *)(a1 + 520));
      *(_QWORD *)(a1 + 512) = 0;
      v20 = sub_C58570(v17, v13, v16, v57, (struct _Unwind_Exception *)(a1 + 480));
      if ( v20 == 5 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 2) != 0 )
        {
          v21 = sub_15DC610(
                  *(_QWORD *)(a1 + 8),
                  v13,
                  v16,
                  (int)v57,
                  v18,
                  v19,
                  v56,
                  (int)v57,
                  (int)a1 + 480,
                  v58[0],
                  v59,
                  v60,
                  v61,
                  v62,
                  v63,
                  v64);
          v22 = v21;
          if ( v21 )
            ++*(_DWORD *)(v21 + 8);
          sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
        }
        else
        {
          ++*(_DWORD *)(a2 + 8);
          sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
          v22 = a2;
        }
        *(_QWORD *)(a1 + 480) = v22;
        sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
        v23 = *(_QWORD *)(a1 + 480);
        v61 = v23;
        if ( v23 )
          ++*(_DWORD *)(v23 + 8);
        sub_C516F0((_QWORD *)(a1 + 56), &v61);
        v24 = *(_QWORD *)(a1 + 480);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
        {
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
          v24 = *(_QWORD *)(a1 + 480);
        }
        v25 = *(_QWORD *)(a1 + 40);
        v26 = *(_DWORD *)(v25 - 4);
        *(_DWORD *)(v25 - 4) = v26 - 1;
        if ( v26 != 1 && a2 != v24 )
        {
          *(_BYTE *)(v25 + 16LL * (unsigned int)(v26 - 2) + 8) |= 2u;
          v24 = *(_QWORD *)(a1 + 480);
        }
        result = sub_C4E2C0(v24, *(_QWORD *)(a1 + 488));
        goto LABEL_23;
      }
      sub_39BEE0((__int64 *)(a1 + 48), *(_DWORD *)(a3 + 12));
      v45 = *(_QWORD *)(a1 + 480);
      v59 = v45;
      if ( v45 )
        ++*(_DWORD *)(v45 + 8);
      sub_C516F0((_QWORD *)(a1 + 56), &v59);
      v46 = *(_QWORD *)(a1 + 480);
      if ( v20 == 4 )
      {
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
LABEL_59:
          sub_1584390(a1, a2, 0, *(_QWORD *)(a1 + 480));
      }
      else
      {
        *(_BYTE *)(a3 + 8) = *(_BYTE *)(a3 + 8) & 0xF3 | 4;
        v51 = sub_C5D480(a1, v46, 2);
        v50 = *(_QWORD *)(a1 + 480);
        v49 = *(_QWORD *)(a1 + 488);
        if ( !v51 )
        {
LABEL_63:
          result = sub_C4E2C0(v50, v49);
LABEL_23:
          *(_QWORD *)(a1 + 480) = 0;
          return result;
        }
        v52 = 0x7FFFFFFF8LL;
        v53 = *(_QWORD *)(a1 + 56);
        if ( v53 )
          v52 = 8LL * (unsigned int)(*(_DWORD *)(v53 - 4) - 1);
        v54 = *(_QWORD *)(v53 + v52);
        if ( v54 )
          ++*(_DWORD *)(v54 + 8);
        sub_C4E2C0(v50, v49);
        *(_QWORD *)(a1 + 480) = v54;
        sub_39BF70((__int64 *)(a1 + 48));
        sub_39BF70((__int64 *)(a1 + 48));
        v55 = *(_QWORD *)(a1 + 480);
        v60 = v55;
        if ( v55 )
          ++*(_DWORD *)(v55 + 8);
        sub_C516F0((_QWORD *)(a1 + 56), &v60);
        if ( (*(_BYTE *)(a3 + 8) & 1) != 0 )
          goto LABEL_59;
      }
      v47 = *(_QWORD *)(a1 + 40);
      v48 = *(_DWORD *)(v47 - 4);
      *(_DWORD *)(v47 - 4) = v48 - 1;
      if ( v48 != 1 )
        *(_BYTE *)(v47 + 16LL * (unsigned int)(v48 - 2) + 8) |= 2u;
      v49 = *(_QWORD *)(a1 + 488);
      v50 = *(_QWORD *)(a1 + 480);
      goto LABEL_63;
    default:
      v40 = 0x7FFFFFFF8LL;
      v41 = *(_QWORD *)(a1 + 56);
      if ( v41 )
        v40 = 8LL * (unsigned int)(*(_DWORD *)(v41 - 4) - 1);
      v42 = *(_QWORD *)(v41 + v40);
      if ( v42 )
        ++*(_DWORD *)(v42 + 8);
      sub_C4E2C0(*(_QWORD *)(a1 + 480), *(_QWORD *)(a1 + 488));
      *(_QWORD *)(a1 + 480) = v42;
      sub_39BF70((__int64 *)(a1 + 48));
      sub_39BF70((__int64 *)(a1 + 48));
      v43 = *(_QWORD *)(a1 + 480);
      v61 = v43;
      if ( v43 )
        ++*(_DWORD *)(v43 + 8);
      sub_C516F0((_QWORD *)(a1 + 56), &v61);
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

