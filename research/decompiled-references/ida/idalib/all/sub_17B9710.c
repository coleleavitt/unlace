char __fastcall sub_17B9710(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  _BYTE *v8; // rdi
  _QWORD *v9; // rbp
  _QWORD *v10; // rax
  __int64 v11; // r13
  unsigned __int64 v12; // rdi
  __int64 v13; // rbp
  __int64 v14; // rdi
  __int64 v15; // rdi
  __int64 v16; // rax
  __int64 v17; // r13
  __int64 v18; // rdx
  char v19; // al
  _BYTE *v20; // rdi
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v27; // [rsp+8h] [rbp-D0h] BYREF
  _BOOL4 v28; // [rsp+14h] [rbp-C4h] BYREF
  _BYTE *v29; // [rsp+18h] [rbp-C0h] BYREF
  _BYTE v30[184]; // [rsp+20h] [rbp-B8h] BYREF

  v8 = a3;
  v27 = a2;
  v29 = a3;
  if ( !a3 )
  {
    LOBYTE(v16) = sub_B7D390(a2, (__int64)&v29, 1, a4);
    if ( !(_BYTE)v16 )
      return v16;
    v8 = v29;
  }
  if ( (*((_WORD *)v8 + 15) & 0x180) != 0 )
  {
    v9 = sub_B77970((__int64)v8);
    if ( v9 )
    {
      v10 = sub_B77970(v27);
      if ( v10 )
      {
        if ( v9 == v10
          || (v11 = (*(__int64 (__fastcall **)(_QWORD *))(*v10 + 32LL))(v10),
              v11 == (*(__int64 (__fastcall **)(_QWORD *))(*v9 + 32LL))(v9)) )
        {
          v12 = *(_QWORD *)(v27 + 16) & 0xFFFFFFFFFFFFFFF8LL;
          if ( (*(_QWORD *)(v27 + 16) & 4) != 0 )
            v12 = *(_QWORD *)(v12 + 8);
          v13 = sub_B8C1B0(v12);
          v14 = *((_QWORD *)v29 + 2);
          v15 = (v14 & 4) != 0 ? *(_QWORD *)((v14 & 0xFFFFFFFFFFFFFFF8LL) + 8) : v14 & 0xFFFFFFFFFFFFFFF8LL;
          v16 = sub_B8C1B0(v15);
          if ( v16 )
          {
            if ( v13 )
            {
              if ( v16 == v13 )
                return v16;
              v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v16 + 32LL))(v16);
              v16 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 32LL))(v13);
              if ( v17 == v16 )
                return v16;
            }
          }
        }
      }
    }
    v8 = v29;
  }
  LOBYTE(v16) = sub_179BA20(v8, *(_QWORD *)(a1 + 232), (__int64)a3, a4, a5, a6);
  if ( (_BYTE)v16 )
    return v16;
  if ( !*(_BYTE *)(a1 + 2660) )
  {
    v16 = sub_2236570(a1 + 2640, v29);
    if ( v16 )
      return v16;
    goto LABEL_25;
  }
  v16 = *(_QWORD *)(a1 + 2640);
  v18 = v16 + 8LL * *(unsigned int *)(a1 + 2652);
  if ( v16 == v18 )
  {
LABEL_25:
    if ( a4
      && !(unsigned __int8)sub_1E61520(a1, v29, v30, 0)
      && ((v19 = sub_B844D0(v29), v20 = v29, v19 == 2)
       || (v29[82] & 1) != 0
       || (v21 = sub_B77A30((__int64)v29), v20 = v29, v21)
       || (v23 = *((_QWORD *)v29 + 7), (v23 & 4) != 0) && *(_DWORD *)((v23 & 0xFFFFFFFFFFFFFFF8LL) + 16)) )
    {
      *(_BYTE *)a4 = 1;
      *(_QWORD *)(a4 + 8) = v20;
      v22 = sub_B77A30((__int64)v20);
      if ( v22 )
        sub_1A39AF0(a1, v22);
      LOBYTE(v16) = sub_1A39AF0(a1, v29);
    }
    else
    {
      v24 = *(_DWORD *)(v27 + 24);
      if ( (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 4LL) & 4) != 0 && (v29[82] & 2) != 0 && v29[81] >> 5 == 1 )
      {
        sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), v24, 0x132Cu, 0);
        v25 = sub_1795A40((__int64)v30, &v27);
        v28 = (*(_BYTE *)(*(_QWORD *)(a1 + 232) + 1LL) & 8) != 0;
        sub_1588370(v25, (unsigned int *)&v28);
        sub_15F7200(v30);
      }
      else
      {
        sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), v24, 0x1326u, 0);
        sub_1795A40((__int64)v30, &v27);
        sub_15F7200(v30);
      }
      sub_168B9F0((__int64)v30, (__int64 *)(a1 + 8), *((_DWORD *)v29 + 6), 0x71u, 0);
      sub_15F7200(v30);
      LOBYTE(v16) = sub_B88650(v27, 1);
    }
    return v16;
  }
  while ( v29 != *(_BYTE **)v16 )
  {
    v16 += 8;
    if ( v18 == v16 )
      goto LABEL_25;
  }
  return v16;
}
