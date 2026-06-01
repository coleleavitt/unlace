_QWORD *__fastcall sub_24FE40(__int64 a1, __int64 a2)
{
  __int64 v2; // rbp
  _QWORD *v3; // r12
  __int64 v4; // rax
  _QWORD *v5; // r15
  _QWORD *v6; // rbx
  __int64 v8; // rax
  _QWORD v9[9]; // [rsp+10h] [rbp-48h] BYREF

  v9[1] = __readfsqword(0x28u);
  v2 = *(_QWORD *)(a2 + 56);
  if ( !v2 )
    goto LABEL_10;
  v3 = nullptr;
  do
  {
    while ( 1 )
    {
      v9[0] = 0;
      v6 = sub_24EE70(a1, (unsigned int *)v2, v9, 1u);
      clear_tinfo_t();
      if ( !v3 )
        break;
      v4 = j__qalloc_or_throw();
      *(_QWORD *)v4 = -1;
      v5 = (_QWORD *)v4;
      *(_DWORD *)(v4 + 8) = 1;
      *(_QWORD *)(v4 + 32) = v3;
      v3 = (_QWORD *)v4;
      *(_QWORD *)(v4 + 12) = -1;
      *(_QWORD *)(v4 + 24) = v6;
      *(_QWORD *)(v4 + 40) = 0;
      *(_QWORD *)(v4 + 48) = 0;
      *(_DWORD *)(v4 + 56) = 0;
      sub_2441C0(v4, *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL), 0);
      *v5 = *v6;
      v2 = *(_QWORD *)(v2 + 16);
      if ( !v2 )
        goto LABEL_6;
    }
    v2 = *(_QWORD *)(v2 + 16);
    v3 = v6;
  }
  while ( v2 );
LABEL_6:
  if ( !v3 )
  {
LABEL_10:
    v8 = j__qalloc_or_throw();
    *(_QWORD *)v8 = -1;
    v3 = (_QWORD *)v8;
    *(_QWORD *)(v8 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v8 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v8 + 40) = 0;
    *(_QWORD *)(v8 + 48) = 0;
    *(_DWORD *)(v8 + 56) = 0;
    *(_OWORD *)(v8 + 24) = 0;
  }
  if ( (*(_BYTE *)(a2 + 24) & 4) != 0 )
    *((_DWORD *)v3 + 3) = *(_DWORD *)(a2 + 72);
  return v3;
}
