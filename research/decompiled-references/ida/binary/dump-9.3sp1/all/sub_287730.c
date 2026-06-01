__int64 __fastcall sub_287730(_QWORD *a1, __int64 a2, __int64 *a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r15
  unsigned int v9; // eax
  int v10; // r8d
  int v11; // r9d
  unsigned int v12; // r13d
  __int64 v13; // rax
  int v14; // eax
  char tinfo_property; // al
  __int64 v17; // rdx
  __int64 v18; // rcx
  char v19; // r13
  __int64 v20; // r15
  __int64 v21; // rdx
  __int64 v22; // rcx
  int v23; // [rsp+0h] [rbp-E0h]
  int v24; // [rsp+8h] [rbp-D8h]
  int v25; // [rsp+Ch] [rbp-D4h]
  __int64 *v27; // [rsp+10h] [rbp-D0h]
  __int64 v28; // [rsp+18h] [rbp-C8h]
  __int64 v29; // [rsp+20h] [rbp-C0h] BYREF
  unsigned __int64 v30; // [rsp+28h] [rbp-B8h]
  __int64 v31; // [rsp+30h] [rbp-B0h]
  __int128 v32; // [rsp+38h] [rbp-A8h]
  __int64 v33; // [rsp+48h] [rbp-98h]
  __int64 v34; // [rsp+50h] [rbp-90h]
  int v35; // [rsp+58h] [rbp-88h]
  __int64 v36; // [rsp+60h] [rbp-80h] BYREF
  _QWORD v37[6]; // [rsp+68h] [rbp-78h]
  int v38; // [rsp+98h] [rbp-48h]
  unsigned __int64 v39; // [rsp+A8h] [rbp-38h]

  v5 = a2;
  v28 = a4;
  v39 = __readfsqword(0x28u);
  v32 = 0;
  v30 = 0xFFFFFFFF00000000LL;
  v31 = 0xFFFFFFFFLL;
  v6 = *(unsigned int *)(a4 + 8);
  v29 = -1;
  v33 = 0;
  v34 = 0;
  v35 = 0;
  if ( (unsigned int)v6 > 0x1F )
    goto LABEL_4;
  v7 = 2852126720LL;
  if ( !_bittest64(&v7, v6) || (unsigned int)(*((_DWORD *)a3 + 2) - 22) <= 9 )
    goto LABEL_4;
  tinfo_property = get_tinfo_property();
  v19 = tinfo_property;
  if ( (tinfo_property & 0xE) != 0 )
  {
    v17 = 1276;
    if ( _bittest64(&v17, tinfo_property & 0xF) )
    {
LABEL_18:
      v20 = j__qalloc_or_throw(64, 2, v17, v18);
      *(_QWORD *)v20 = -1;
      *(_DWORD *)(v20 + 8) = 0;
      *(_QWORD *)(v20 + 48) = 0;
      *(_QWORD *)(v20 + 12) = -1;
      *(_DWORD *)(v20 + 56) = 0;
      sub_25AFF0(v20, (__int64)a3);
      if ( (unsigned __int8)((v19 & 0xF) - 2) <= 5u && (v19 & 0x30) != 0x20 )
      {
        v36 = 0;
        copy_tinfo_t();
        set_tinfo_property();
        v20 = sub_244E70(v20, (__int64)&v36, v21, v22);
        clear_tinfo_t();
      }
      v37[3] = sub_240F50(a1[9], 0, 0, -1, 0, 2u, 0);
      *(_QWORD *)((char *)v37 + 4) = -1;
      a3 = &v29;
      v36 = -1;
      LODWORD(v37[0]) = 29;
      v37[2] = v20;
      v37[4] = 0;
      v37[5] = 0;
      v38 = 0;
      v27 = &v29;
      sub_25AFF0((__int64)&v29, (__int64)&v36);
      sub_255630((__int64)&v36);
      clear_tinfo_t();
      goto LABEL_5;
    }
  }
  else if ( (tinfo_property & 0x30) != 0 )
  {
    goto LABEL_18;
  }
LABEL_4:
  v27 = &v29;
LABEL_5:
  sub_283C00(&v36, a1, a2);
  v25 = 3;
  v8 = v37[0];
LABEL_6:
  LOBYTE(v9) = sub_259AB0((__int64)a3, v28);
  v12 = v9;
  if ( !(_BYTE)v9 )
  {
    if ( v25 - 1 )
    {
      while ( *(_DWORD *)(v5 + 12) == -1 )
      {
        if ( *(_QWORD *)v36 == v8 )
          break;
        v8 = *(_QWORD *)(v8 + 8);
        v5 = v8 + 16;
        if ( *(_DWORD *)(v8 + 24) != 72 )
          break;
        v13 = *(_QWORD *)(v8 + 40);
        if ( *(_DWORD *)(v13 + 8) != 2 )
          break;
        v14 = sub_296CA0(
                v28,
                a1[8],
                *(_QWORD *)(v13 + 24),
                *(_QWORD *)(v13 + 32),
                v10,
                v11,
                v23,
                v24,
                (_DWORD)v27,
                v28,
                v29,
                v30,
                v31,
                v32,
                DWORD2(v32),
                v33,
                v34,
                v35,
                v36);
        if ( v14 < 0 )
          break;
        if ( v14 )
          goto LABEL_6;
      }
    }
  }
  sub_255630((__int64)v27);
  clear_tinfo_t();
  return v12;
}
