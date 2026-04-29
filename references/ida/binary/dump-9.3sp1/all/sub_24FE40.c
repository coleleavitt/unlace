__int64 __fastcall sub_24FE40(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 *v4; // rbp
  __int64 v5; // r12
  __int64 v6; // rax
  _QWORD *v7; // r15
  __int64 *v8; // rbx
  __int64 v10; // rax
  __int64 v11; // [rsp+8h] [rbp-50h]
  _QWORD v12[9]; // [rsp+10h] [rbp-48h] BYREF

  v11 = a2;
  v12[1] = __readfsqword(0x28u);
  v4 = *(__int64 **)(a2 + 56);
  if ( !v4 )
    goto LABEL_10;
  v5 = 0;
  do
  {
    while ( 1 )
    {
      a2 = (__int64)v4;
      v12[0] = 0;
      v8 = sub_24EE70(a1, v4, (__int64)v12, 1u);
      clear_tinfo_t();
      if ( !v5 )
        break;
      v6 = j__qalloc_or_throw(64, (__int64)v4, a3, a4);
      *(_QWORD *)v6 = -1;
      v7 = (_QWORD *)v6;
      *(_DWORD *)(v6 + 8) = 1;
      *(_QWORD *)(v6 + 32) = v5;
      v5 = v6;
      *(_QWORD *)(v6 + 12) = -1;
      *(_QWORD *)(v6 + 24) = v8;
      *(_QWORD *)(v6 + 40) = 0;
      *(_QWORD *)(v6 + 48) = 0;
      *(_DWORD *)(v6 + 56) = 0;
      a2 = *(_QWORD *)(*(_QWORD *)(a1 + 328) + 112LL);
      sub_2441C0(v6, a2, 0);
      a3 = *v8;
      *v7 = *v8;
      v4 = (__int64 *)v4[2];
      if ( !v4 )
        goto LABEL_6;
    }
    v4 = (__int64 *)v4[2];
    v5 = (__int64)v8;
  }
  while ( v4 );
LABEL_6:
  if ( !v5 )
  {
LABEL_10:
    v10 = j__qalloc_or_throw(64, a2, a3, a4);
    *(_QWORD *)v10 = -1;
    v5 = v10;
    *(_QWORD *)(v10 + 8) = 0xFFFFFFFF00000000LL;
    *(_QWORD *)(v10 + 16) = 0xFFFFFFFFLL;
    *(_QWORD *)(v10 + 40) = 0;
    *(_QWORD *)(v10 + 48) = 0;
    *(_DWORD *)(v10 + 56) = 0;
    *(_OWORD *)(v10 + 24) = 0;
  }
  if ( (*(_BYTE *)(v11 + 24) & 4) != 0 )
    *(_DWORD *)(v5 + 12) = *(_DWORD *)(v11 + 72);
  return v5;
}
