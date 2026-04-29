__int64 __fastcall sub_C0DC0(_QWORD *a1)
{
  __int64 v2; // r12
  __int64 v3; // r13
  unsigned int v4; // r14d
  __int64 flags; // r13
  unsigned int v6; // r13d
  int v8; // eax
  __int64 v9; // rdi
  __int64 v10; // rsi
  int v11; // eax
  __int64 v12; // [rsp+8h] [rbp-238h]
  __int64 v13; // [rsp+18h] [rbp-228h]
  __int64 v14; // [rsp+28h] [rbp-218h] BYREF
  __int64 v15; // [rsp+30h] [rbp-210h] BYREF
  __int64 v16; // [rsp+38h] [rbp-208h] BYREF
  unsigned __int64 v17; // [rsp+40h] [rbp-200h] BYREF
  __int64 v18; // [rsp+48h] [rbp-1F8h]
  __int64 v19; // [rsp+50h] [rbp-1F0h] BYREF
  __int128 v20; // [rsp+58h] [rbp-1E8h]
  __int128 v21; // [rsp+70h] [rbp-1D0h] BYREF
  __int64 v22; // [rsp+80h] [rbp-1C0h]
  __int128 v23; // [rsp+88h] [rbp-1B8h]
  __int64 v24; // [rsp+98h] [rbp-1A8h]
  __int128 v25; // [rsp+A0h] [rbp-1A0h]
  _OWORD v26[3]; // [rsp+B0h] [rbp-190h] BYREF
  __int64 v27; // [rsp+E0h] [rbp-160h]
  int v28; // [rsp+E8h] [rbp-158h]
  __int64 v29; // [rsp+F0h] [rbp-150h]
  char v30; // [rsp+F8h] [rbp-148h]
  _QWORD v31[40]; // [rsp+100h] [rbp-140h] BYREF

  v31[33] = __readfsqword(0x28u);
  v13 = a1[4];
  if ( (unsigned int)(*(_DWORD *)v13 - 1) > 1 )
    return 0;
  v2 = v13 + 64;
  if ( *(_DWORD *)v13 == 2 )
    v2 = v13 + 48;
  if ( *(_BYTE *)v2 != 4 )
    goto LABEL_7;
  v3 = *(_QWORD *)(v2 + 8);
  if ( (unsigned int)(*(_DWORD *)v3 - 12) > 1 )
  {
LABEL_6:
    if ( *(_BYTE *)(v3 + 64) == 8 && *(_DWORD *)(*(_QWORD *)(v3 + 72) + 284LL) == 14 )
      return 0;
LABEL_7:
    v4 = 0;
    flags = get_flags_ex(*(_QWORD *)(v13 + 24), 0);
    while ( !(unsigned __int8)is_stroff(flags, v4) )
    {
      if ( ++v4 == 8 )
        return 0;
    }
    if ( !(unsigned int)get_stroff_path(v31, &v14, *(_QWORD *)(v13 + 24), v4) || !v14 )
      return 0;
    v15 = 0;
    v16 = 0;
    if ( (unsigned int)guess_tinfo(&v15, v31[0]) == 2 )
    {
      v22 = 0;
      v24 = 0;
      v27 = 1;
      v28 = -1;
      v29 = 0;
      v30 = 0;
      v21 = 0;
      v23 = 0;
      v25 = 0;
      v26[0] = 0;
      v8 = sub_32DB30(&v21, &v15, v14, 0);
      v9 = a1[1];
      if ( v8 == -1 )
      {
        sub_C0460(v9, *(_QWORD *)(v13 + 24), (__int64)&v16, v14, (__int64)&v15);
      }
      else if ( (unsigned __int8)sub_BA0B0(v9, &v16, 0, 0, (char *)v2, *(_QWORD *)(v9 + 800), 0, 0, a1 + 6)
             && !get_tinfo_property(v16, 285) )
      {
        v19 = 0;
        v20 = 0;
        v6 = sub_B8B40(&v19, &v21, (__int64)&v16, (__int64)&v14);
        if ( (_BYTE)v6 )
        {
          v17 = 0xFFFFFFFF00000000LL;
          v18 = 0;
          v12 = j__qalloc_or_throw(80);
          v10 = *(_QWORD *)(v13 + 24);
          *(_QWORD *)(v12 + 40) = 0;
          *(_QWORD *)(v12 + 56) = 0;
          *(_QWORD *)(v12 + 32) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v12 + 48) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v12 + 64) = 0xFFFFFFFF00000000LL;
          *(_QWORD *)(v12 + 72) = 0;
          sub_330C90(v12, v10);
          v11 = *(_DWORD *)(v2 + 4);
          LOBYTE(v17) = 4;
          *(_DWORD *)(v12 + 68) = v11;
          v18 = v12;
          HIDWORD(v17) = *(_DWORD *)(v2 + 4);
          sub_11C450(&v17, v2);
          sub_C0850((__int64)a1, *(_QWORD *)(v2 + 8), (__int64)&v17, &v16, (__int64)&v15, &v19, v14);
          sub_11C7E0(&v17);
          if ( v19 )
          {
            *(_QWORD *)&v20 = 0;
            qfree(v19);
          }
          sub_A18D0(&v21);
          goto LABEL_16;
        }
        sub_C0460(a1[1], *(_QWORD *)(v13 + 24), (__int64)&v16, v14, (__int64)&v15);
        if ( v19 )
        {
          *(_QWORD *)&v20 = 0;
          qfree(v19);
        }
      }
      clear_tinfo_t(v26);
      if ( v24 )
      {
        *(_QWORD *)&v25 = 0;
        qfree(v24);
      }
      if ( v22 )
      {
        *(_QWORD *)&v23 = 0;
        qfree(v22);
      }
    }
    v6 = 0;
LABEL_16:
    clear_tinfo_t(&v16);
    clear_tinfo_t(&v15);
    return v6;
  }
  if ( !sub_11C2E0(*(_QWORD *)(v2 + 8), 0) )
  {
    if ( *(_BYTE *)(v3 + 32) == 4 )
      v3 = *(_QWORD *)(v3 + 40);
    goto LABEL_6;
  }
  return 0;
}
