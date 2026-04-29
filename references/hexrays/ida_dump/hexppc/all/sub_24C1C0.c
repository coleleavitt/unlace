_QWORD *__fastcall sub_24C1C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rbp
  _QWORD *v6; // r12
  __int64 v7; // rax
  _QWORD *v8; // r15
  _QWORD *v9; // rbx
  __int64 v11; // rax
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v12[1] = __readfsqword(0x28u);
  v5 = *(_QWORD *)(a2 + 56);
  if ( !v5 )
    goto LABEL_10;
  v6 = nullptr;
  do
  {
    while ( 1 )
    {
      v12[0] = 0;
      v9 = sub_24B1F0(a1, (unsigned int *)v5, v12, 1u, a5);
      clear_tinfo_t(v12);
      if ( !v6 )
        break;
      v7 = j__qalloc_or_throw(64);
      *(_QWORD *)v7 = -1;
      v8 = (_QWORD *)v7;
      *(_DWORD *)(v7 + 8) = 1;
      *(_QWORD *)(v7 + 32) = v6;
      v6 = (_QWORD *)v7;
      *(_QWORD *)(v7 + 12) = -1;
      *(_QWORD *)(v7 + 24) = v9;
      *(_QWORD *)(v7 + 40) = 0;
      *(_QWORD *)(v7 + 48) = 0;
      *(_DWORD *)(v7 + 56) = 0;
      sub_240540(v7, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 0);
      *v8 = *v9;
      v5 = *(_QWORD *)(v5 + 16);
      if ( !v5 )
        goto LABEL_6;
    }
    v5 = *(_QWORD *)(v5 + 16);
    v6 = v9;
  }
  while ( v5 );
LABEL_6:
  if ( !v6 )
  {
LABEL_10:
    v11 = j__qalloc_or_throw(64);
    *(_QWORD *)v11 = -1;
    v6 = (_QWORD *)v11;
    *(_QWORD *)(v11 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v11 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v11 + 40) = 0;
    *(_QWORD *)(v11 + 48) = 0;
    *(_DWORD *)(v11 + 56) = 0;
    *(_OWORD *)(v11 + 24) = 0;
  }
  if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
    *((_DWORD *)v6 + 3) = *(_DWORD *)(a2 + 72);
  return v6;
}
