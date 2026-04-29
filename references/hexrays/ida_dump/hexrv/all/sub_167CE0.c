__int64 __fastcall sub_167CE0(__int128 a1, const __m128i *a2)
{
  int *v3; // rax
  __int64 v4; // r15
  int v5; // eax
  __int64 v6; // r13
  char v7; // r14
  __int64 v8; // rax
  __int64 v10; // rax
  int *v11; // rcx
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r8
  __int64 v17; // r9
  int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // r9
  unsigned __int8 *v21; // rax
  __int64 v22; // rax
  char v23; // al
  bool v24; // zf
  __int64 v25; // rax
  __int64 v26; // r8
  char v27; // al
  __int64 v28; // rax
  __int64 i; // rcx
  int v30; // eax
  int v31; // eax
  int v32; // r14d
  __int64 v33; // r13
  int v34; // eax
  char v35; // al
  _DWORD *v36; // rdx
  unsigned __int8 *v37; // rdx
  __int64 v38; // rcx
  _DWORD *v39; // rdx
  _DWORD *v40; // rax
  _DWORD *v41; // rax
  __int64 v42; // [rsp+8h] [rbp-F8h]
  __int64 v43; // [rsp+10h] [rbp-F0h]
  __int64 v44; // [rsp+18h] [rbp-E8h]
  __int64 v45; // [rsp+20h] [rbp-E0h]
  __int64 v46; // [rsp+20h] [rbp-E0h]
  __int64 v47; // [rsp+28h] [rbp-D8h]
  char v48; // [rsp+28h] [rbp-D8h]
  __int64 v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+38h] [rbp-C8h]
  __int64 v51; // [rsp+38h] [rbp-C8h]
  __int64 v52; // [rsp+40h] [rbp-C0h]
  __int64 v53; // [rsp+48h] [rbp-B8h]
  __int64 v54; // [rsp+50h] [rbp-B0h]
  __int64 v55; // [rsp+50h] [rbp-B0h]
  int v56; // [rsp+50h] [rbp-B0h]
  __int64 v57; // [rsp+58h] [rbp-A8h]
  char v58; // [rsp+58h] [rbp-A8h]
  unsigned __int8 v59; // [rsp+58h] [rbp-A8h]
  __int64 v60; // [rsp+60h] [rbp-A0h] BYREF
  int *v61; // [rsp+68h] [rbp-98h] BYREF
  __int64 v62; // [rsp+70h] [rbp-90h] BYREF
  __int64 v63; // [rsp+78h] [rbp-88h] BYREF
  __int64 v64; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int8 *v65; // [rsp+88h] [rbp-78h] BYREF
  _QWORD v66[2]; // [rsp+90h] [rbp-70h] BYREF
  _QWORD v67[3]; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v68; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v69; // [rsp+C8h] [rbp-38h]

  v57 = *((_QWORD *)&a1 + 1);
  v69 = __readfsqword(0x28u);
  if ( *(_QWORD *)(a1 + 56) != *((_QWORD *)&a1 + 1) )
  {
    if ( !under_debugger )
      sub_37DDE0(50301);
    BUG();
  }
  v3 = (int *)sub_11E4E0(a2[3].m128i_i64[0]);
  v4 = (__int64)v3;
  if ( !v3 )
    return 0;
  v5 = *v3;
  if ( v5 == 33 )
  {
    if ( *(_BYTE *)(v4 + 32) != 4 || **(_DWORD **)(v4 + 40) != 12 )
      return 0;
    v7 = sub_11B8C0((char *)(v4 + 48), v67, 0);
    if ( v7 && !v67[0] )
    {
      v6 = *(_QWORD *)(v4 + 40);
      goto LABEL_6;
    }
    v5 = *(_DWORD *)v4;
  }
  if ( v5 != 12 )
    return 0;
  v6 = v4;
  v7 = 0;
LABEL_6:
  v8 = sub_1183E0(v6, &v60);
  if ( !v8 )
    return 0;
  if ( *(_BYTE *)v60 != 4 )
    return 0;
  if ( **(_DWORD **)(v60 + 8) != 19 )
    return 0;
  if ( sub_325910(*(_QWORD *)(*(_QWORD *)(v8 + 8) + 16LL), *(unsigned int *)(v8 + 4), 0) != 1 )
    return 0;
  v10 = sub_1183E0(*(_QWORD *)(v60 + 8), &v61);
  if ( !v10 || *(_BYTE *)v61 != 4 )
    return 0;
  v11 = *((int **)v61 + 1);
  v12 = *v11;
  if ( *v11 == 9 )
  {
    v24 = *((_BYTE *)v11 + 32) == 4;
    v61 = v11 + 8;
    if ( !v24 )
      return 0;
    v12 = **((_DWORD **)v11 + 5);
  }
  if ( v12 != 13 )
    return 0;
  v53 = sub_325910(*(_QWORD *)(*(_QWORD *)(v10 + 8) + 16LL), *(unsigned int *)(v10 + 4), 0);
  v13 = sub_1183E0(*((_QWORD *)v61 + 1), &v62);
  if ( !v13 || sub_325910(*(_QWORD *)(*(_QWORD *)(v13 + 8) + 16LL), *(unsigned int *)(v13 + 4), 0) != 1 )
    return 0;
  v52 = *(_QWORD *)(*(_QWORD *)(a1 + 480) + 112LL);
  v63 = 0;
  if ( !v7 )
  {
    v49 = v4 + 64;
    if ( sub_121110((unsigned __int8 *)(v4 + 64), v52, v62, 1u) )
    {
      *((_QWORD *)&a1 + 1) = v4 + 64;
      v64 = v57;
      v54 = sub_124F80(a1, (__int64)&v64, 0);
      if ( v54 )
      {
        v44 = 0;
        goto LABEL_26;
      }
      return 0;
    }
  }
  *((_QWORD *)&a1 + 1) = v62;
  v67[0] = v57;
  v25 = sub_124F80(a1, (__int64)v67, 0);
  v26 = v25;
  if ( !v25 )
    return 0;
  if ( *(_DWORD *)v25 != 20 )
    return 0;
  if ( *(_BYTE *)(v25 + 64) )
  {
    v55 = v25;
    v27 = sub_121110((unsigned __int8 *)(v25 + 64), v52, v62, 1u);
    v26 = v55;
    if ( !v27 )
      return 0;
  }
  v28 = sub_1183E0(v26, &v63);
  if ( !v28 )
    return 0;
  v44 = sub_325910(*(_QWORD *)(*(_QWORD *)(v28 + 8) + 16LL), *(unsigned int *)(v62 + 4), 0);
  v64 = v57;
  *((_QWORD *)&a1 + 1) = v4 + 64;
  v49 = v4 + 64;
  v54 = sub_124F80(a1, (__int64)&v64, 0);
  if ( !v54 )
    return 0;
  if ( v7 )
  {
    if ( *(_DWORD *)v54 == 33 && *(_BYTE *)(v54 + 32) == 4 && **(_DWORD **)(v54 + 40) == 20 && sub_9DE90(v54 + 48, 0, 0) )
    {
      v54 = *(_QWORD *)(v54 + 40);
      v14 = sub_1183E0(v54, &v65);
      goto LABEL_28;
    }
    return 0;
  }
LABEL_26:
  if ( *(_DWORD *)v54 != 20 )
    return 0;
  v14 = sub_1183E0(v54, &v65);
LABEL_28:
  if ( !v14 )
    return 0;
  v50 = v14;
  v15 = sub_325910(*(_QWORD *)(*(_QWORD *)(v14 + 8) + 16LL), *(unsigned int *)(v14 + 4), 0);
  v16 = 0;
  v17 = v15;
  v18 = 8 * *(_DWORD *)(v50 + 4) - 1;
  if ( (unsigned __int64)v18 <= 0x3F )
    v16 = 1LL << v18;
  v47 = v16;
  v51 = v15;
  v19 = v15 & ~v16;
  v45 = v17 & ~v16;
  v43 = v19 + 1;
  if ( (v19 & (v19 + 1)) != 0 || v45 != sub_325910(~v53, *(unsigned int *)(v6 + 68), 0) )
    return 0;
  v66[1] = 0;
  v66[0] = 0xFFFFFFFF00000000LL;
  if ( (v51 & v47) != 0 )
  {
    if ( v64 == v54 )
    {
      v48 = sub_1216A0((unsigned __int8 *)(v57 + 32), v54 + 64, 0);
      if ( v48 )
      {
LABEL_39:
        sub_120CC0((__int64)v66, v65);
        v22 = *(_QWORD *)(v64 + 8);
        goto LABEL_40;
      }
      v20 = v57 + 32;
    }
    else
    {
      v20 = v57 + 32;
    }
    v21 = v65;
    if ( *v65 == 4 )
    {
      v39 = *((_DWORD **)v65 + 1);
      if ( *v39 == 8 )
        v21 = (unsigned __int8 *)(v39 + 8);
    }
    if ( *(_BYTE *)(v57 + 32) == 4 )
    {
      v36 = *(_DWORD **)(v57 + 40);
      if ( *v36 == 8 )
        v20 = (__int64)(v36 + 8);
    }
    v48 = 0;
    if ( (unsigned __int8)sub_12A5C0(v52, (const __m128i *)a1, v64, (__int64)v21, v57, v20, 0) )
      goto LABEL_39;
  }
  else
  {
    v37 = v65;
    v38 = v57 + 32;
    if ( *v65 == 4 )
    {
      v41 = *((_DWORD **)v65 + 1);
      if ( *v41 == 8 )
        v37 = (unsigned __int8 *)(v41 + 8);
    }
    if ( *(_BYTE *)(v57 + 32) == 4 )
    {
      v40 = *(_DWORD **)(v57 + 40);
      if ( *v40 == 8 )
        v38 = (__int64)(v40 + 8);
    }
    if ( (unsigned __int8)sub_14EA20(v52, (unsigned __int64)v66, (__int64)v37, v38, *(_QWORD *)(v6 + 24), a2, v4) )
    {
      v48 = 0;
      v22 = v64;
LABEL_40:
      v42 = v22;
      memset(v67, 0, sizeof(v67));
      *((_QWORD *)&a1 + 1) = v67;
      v68 = 0;
      sub_11F9E0(a1, (__int64)v66, 1u, 0xFFFF0000);
      if ( sub_A55E0(a1, v67, v42, v57, 1u)
        || v63 && (sub_121110((unsigned __int8 *)v66, v52, v63, 1u) != 1 || v45 != v44) )
      {
LABEL_41:
        v23 = 0;
      }
      else
      {
        for ( i = *(_QWORD *)(v4 + 8); i && *(_DWORD *)i != 55; i = *(_QWORD *)(v46 + 8) )
        {
          if ( v7 )
            goto LABEL_41;
          if ( (unsigned int)(*(_DWORD *)i - 29) > 0xC )
            goto LABEL_41;
          v46 = i;
          if ( !sub_1216A0((unsigned __int8 *)(i + 32), v49, 0) || !sub_9DE90(v46 + 48, 0, 0) )
            goto LABEL_41;
        }
        if ( v48 )
        {
          sub_1190E0(v54);
          v30 = *(_DWORD *)(a1 + 24);
          BYTE1(v30) &= ~2u;
          LOBYTE(v30) = v30 | 0x80;
          *(_DWORD *)(a1 + 24) = v30;
        }
        *(_DWORD *)v6 = 18;
        sub_118550((char *)(v6 + 32), (char *)v66);
        v31 = *(_DWORD *)(v6 + 36);
        v32 = *(_DWORD *)(v6 + 68);
        if ( v31 < v32 )
        {
          sub_11C320((char *)(v6 + 32), v52, 8, *(_QWORD *)(v6 + 24), v32);
          v31 = v32;
        }
        v56 = v31;
        sub_11C550(v6 + 48, v52, v43, v31, -1, 0);
        if ( v56 > v32 )
        {
          *(_DWORD *)(v6 + 68) = v56;
          sub_127230(v6, v52, 10, v32, 1);
        }
        v33 = sub_1639B0(*(_QWORD *)(a1 + 64), *(_DWORD *)(v57 + 72));
        sub_1190E0(v57);
        v34 = *(_DWORD *)(a1 + 24);
        BYTE1(v34) &= ~2u;
        LOBYTE(v34) = v34 | 0x80;
        *(_DWORD *)(a1 + 24) = v34;
        sub_10E090(a1, (__int64)a2, v33);
        sub_9EF00((__int64)a2, v4);
        sub_9ECA0(a1, (_QWORD *)v4, *(_QWORD *)(a1 + 56));
        sub_9E060(a1, (__int64)"SMOD2");
        v23 = 1;
      }
      v58 = v23;
      sub_8F680(v67);
      v35 = v58;
      goto LABEL_78;
    }
  }
  v35 = 0;
LABEL_78:
  v59 = v35;
  sub_1188E0((__int64)v66);
  return v59;
}
