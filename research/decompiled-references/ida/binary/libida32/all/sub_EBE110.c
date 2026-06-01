void __fastcall sub_EBE110(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 *v15; // r9
  __int64 v16; // r8
  _QWORD *v17; // r13
  __int64 v18; // r12
  __int64 **v19; // r15
  __int64 v20; // rax
  __int64 v21; // rsi
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  unsigned __int64 v25; // r14
  __int64 v26; // r15
  __int64 v27; // rdx
  unsigned __int64 v28; // rax
  unsigned __int64 v29; // rax
  __int64 *v30; // [rsp+8h] [rbp-50h]
  unsigned __int8 v31; // [rsp+1Bh] [rbp-3Dh]
  unsigned __int8 v32; // [rsp+1Ch] [rbp-3Ch]

  v31 = a4;
  if ( (_BYTE)a4 || a3 < a1[7] )
  {
    v32 = a4;
    sub_EB7F10((__int64)a1, *(_QWORD *)a2, a3, a4, a5, a6);
    v12 = sub_EBA840(*a1, *(char **)a2, v8, v9, v10, v11);
    v16 = *(_QWORD *)(a2 + 16);
    v17 = v12;
    v18 = v16 + 8LL * *(unsigned int *)(a2 + 24);
    if ( v16 != v18 )
    {
      v19 = *(__int64 ***)(a2 + 16);
      do
      {
        v15 = *v19;
        if ( !*((_BYTE *)*v19 + 8) )
        {
          v30 = *v19;
          v20 = sub_EB7560(v17 + 9, *v15, v13, v14, v16, (__int64)v15);
          sub_EBE110(a1, v30, v20 + a3, v31);
        }
        ++v19;
      }
      while ( (__int64 **)v18 != v19 );
    }
    v21 = *(_QWORD *)(a2 + 64);
    if ( v21 && *(_QWORD *)(v21 + 72) == a2 )
      sub_EBE110(a1, v21, a3, v32);
    v25 = sub_B5ABC0(*(_QWORD *)a2, v21, v13, v14, v16, (__int64)v15);
    if ( v25 )
    {
LABEL_12:
      if ( (*(_BYTE *)(v25 + 68) & 1) == 0 )
      {
        v26 = v25;
        if ( *(char *)(v25 + 29) < 0 )
          v26 = sub_B4E9E0(v25);
        v27 = *(unsigned int *)(v26 + 68);
        if ( (v27 & 0xFFFFFFF0) == 0 )
        {
          sub_B5AD70(v26, v21, v27, v22, v23, v24);
          LODWORD(v27) = *(_DWORD *)(v26 + 68);
        }
        v28 = sub_A742B0(*a1, *(_QWORD *)(v17[6] + 8LL * (((unsigned int)v27 >> 4) - 1)));
        v21 = v25;
        sub_EBDCB0(a1, v25, v28 + a3, v31);
      }
      while ( 1 )
      {
        v29 = *(_QWORD *)(v25 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        v25 = v29;
        if ( !v29 )
          break;
        if ( (*(_BYTE *)(v29 + 28) & 0x7Fu) - 49 <= 2 )
          goto LABEL_12;
      }
    }
  }
}

