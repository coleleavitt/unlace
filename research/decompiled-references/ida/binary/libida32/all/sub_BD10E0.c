__int64 __fastcall sub_BD10E0(_QWORD *a1, __int64 a2)
{
  __int64 v4; // rax
  __int64 v5; // rdx
  __int64 v6; // rsi
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int v11; // r13d
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 *v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdi
  __int64 v21; // rbx
  __int64 v22; // r14
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rdi
  __int64 v28; // rbx

  v4 = *(_QWORD *)(a2 + 120);
  if ( (v4 & 4) != 0 )
  {
    if ( !*(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) )
    {
LABEL_10:
      v15 = (__int64 *)(v4 & 0xFFFFFFFFFFFFFFF8LL);
      v6 = *v15;
      v5 = v15[1];
      goto LABEL_3;
    }
    v13 = 0;
    while ( 1 )
    {
      v14 = v13++;
      sub_BA55A0(a1, *(_QWORD *)(*(_QWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 24) + 8 * v14));
      v4 = *(_QWORD *)(a2 + 120);
      if ( (v4 & 4) == 0 )
        break;
      if ( *(_DWORD *)((v4 & 0xFFFFFFFFFFFFFFF8LL) + 16) <= v13 )
        goto LABEL_10;
    }
  }
  v5 = 0;
  v6 = 0;
LABEL_3:
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 88LL))(*a1, v6, v5);
  if ( (_BYTE)v11 && (*(_BYTE *)(a2 + 74) & 1) != 0 )
  {
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v7, v8, v9, v10);
    v20 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v20 + 24) & 1) != 0 )
      v21 = sub_B72C40(v20);
    else
      v21 = *(_QWORD *)(v20 + 24);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v16, v17, v18, v19);
    v22 = v21 + 24LL * *(unsigned int *)(*(_QWORD *)(a2 + 128) + 16LL);
    sub_6E4DB0((__int64 *)(*(_QWORD *)(a2 + 104) + 96LL), *(_QWORD *)(a2 + 104), v23, v24, v25, v26);
    v27 = *(_QWORD *)(a2 + 128);
    if ( (*(_BYTE *)(v27 + 24) & 1) != 0 )
      v28 = sub_B72C40(v27);
    else
      v28 = *(_QWORD *)(v27 + 24);
    while ( v22 != v28 )
    {
      if ( !(*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 48LL))(*a1, v28) )
        return 0;
      v28 += 24;
    }
  }
  return v11;
}

