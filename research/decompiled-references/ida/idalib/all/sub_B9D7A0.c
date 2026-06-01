__int64 __fastcall sub_B9D7A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdi
  __int64 v22; // rbp
  __int64 v23; // rsi
  __int64 v24; // rbp
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r9
  __int64 v29; // rdi
  __int64 v30; // rbx
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // rax
  __int64 v36; // r12
  __int64 v37; // rdx
  __int64 v38; // rcx
  __int64 v39; // r8
  __int64 v40; // r9

  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), a3, a4, a5, a6);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 8) != 0 )
    return 0;
  if ( *(char *)(a1 + 28) < 0 )
    return 0;
  sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v7, v8, v9, v10);
  if ( (*(_BYTE *)(*(_QWORD *)(a1 + 128) + 1LL) & 4) == 0 )
    return 0;
  v11 = sub_B8E180(a1 + 64);
  if ( (_BYTE)v11 )
  {
    return 0;
  }
  else
  {
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v13, v14, v15, v16);
    v21 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v21 + 24) & 1) != 0 )
      v22 = sub_B96980(v21);
    else
      v22 = *(_QWORD *)(v21 + 24);
    sub_7052B0((__int64 *)(*(_QWORD *)(a1 + 104) + 96LL), *(_QWORD *)(a1 + 104), v17, v18, v19, v20);
    v23 = *(_QWORD *)(a1 + 104);
    v24 = v22 + 24LL * *(unsigned int *)(*(_QWORD *)(a1 + 128) + 16LL);
    sub_7052B0((__int64 *)(v23 + 96), v23, v25, v26, v27, v28);
    v29 = *(_QWORD *)(a1 + 128);
    if ( (*(_BYTE *)(v29 + 24) & 1) != 0 )
      v30 = sub_B96980(v29);
    else
      v30 = *(_QWORD *)(v29 + 24);
    if ( v24 != v30 )
    {
      while ( 1 )
      {
        v31 = sub_B95DD0(*(__int64 **)(v30 + 16));
        v35 = sub_F60F10(
                *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v31 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
                v23,
                v32,
                v33,
                v34);
        v23 = *(_QWORD *)(v35 + 104);
        v36 = v35;
        sub_7052B0((__int64 *)(v23 + 96), v23, v37, v38, v39, v40);
        if ( (*(_BYTE *)(*(_QWORD *)(v36 + 128) + 1LL) & 8) != 0 )
          break;
        v30 += 24;
        if ( v30 == v24 )
          return v11;
      }
      return 1;
    }
  }
  return v11;
}
