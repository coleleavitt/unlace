__int64 __fastcall sub_1BDB130(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 *a4, __int64 a5, __int64 a6)
{
  double v10; // xmm0_8
  __int64 *v11; // rsi
  int v12; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // rcx
  __int64 v15; // r15
  unsigned __int8 v16; // al
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // rax
  unsigned __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // [rsp+0h] [rbp-F0h]
  __int64 v26; // [rsp+8h] [rbp-E8h]
  __int64 v28; // [rsp+20h] [rbp-D0h] BYREF
  _BYTE v29[200]; // [rsp+28h] [rbp-C8h] BYREF

  if ( *((_BYTE *)a4 + 8) )
    return 1;
  v10 = (*(double (__fastcall **)(_BYTE *, __int64 *, __int64, _QWORD))(*a4 + 40))(v29, a4, a1, a2);
  v11 = &v28;
  v28 = sub_EEC8C0(a3, (__int64)a4, v10);
  sub_1587DB0((__int64)v29, &v28);
  sub_15F7200(v29);
  v12 = *(_DWORD *)(a6 + 8);
  if ( v12 )
  {
    v13 = 0;
    v25 = 8LL * (unsigned int)(v12 - 1) + 8;
    do
    {
      v14 = *(_QWORD *)(*(_QWORD *)a6 + v13) & 0xFFFFFFFFFFFFFFF8LL;
      v15 = v14;
      v16 = *(_BYTE *)(v14 + 28) & 0x7F;
      if ( ((v16 + 52) & 0x7Fu) <= 1 || (unsigned int)v16 - 53 <= 1 )
        v15 = sub_B72ED0(*(_QWORD *)(*(_QWORD *)a6 + v13) & 0xFFFFFFFFFFFFFFF8LL);
      v17 = *(_QWORD *)(*(_QWORD *)(v15 + 48) & 0xFFFFFFFFFFFFFFF0LL);
      v18 = (unsigned int)*(unsigned __int8 *)(v17 + 16) - 25;
      if ( (unsigned int)v18 > 1 )
        v17 = sub_F63050(v17, v11, v18, v14);
      v19 = *(_QWORD *)(v17 + 24);
      v20 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF0LL);
      if ( (unsigned int)*(unsigned __int8 *)(v20 + 16) - 43 <= 1
        || (v24 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL)
                - 43,
            (unsigned int)v24 <= 1)
        && (v26 = v19, v20 = sub_F63050(v20, v11, v24, v14), v19 = v26, v20) )
      {
        while ( 1 )
        {
          v19 = *(_QWORD *)(v20 + 32);
          if ( (*(_BYTE *)(v20 + 18) & 0x10) == 0 )
            break;
          while ( 1 )
          {
            v21 = v19 & 0xFFFFFFFFFFFFFFF0LL;
            v20 = *(_QWORD *)v21;
            v22 = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)v21 + 16LL) - 43;
            if ( (unsigned int)v22 <= 1 )
              break;
            v23 = sub_F63050(v20, v11, v22, v14);
            v19 = *(_QWORD *)(v23 + 32);
            if ( (*(_BYTE *)(v23 + 18) & 0x10) == 0 )
              goto LABEL_14;
          }
        }
      }
LABEL_14:
      v11 = a4;
      v13 += 8;
      (*(void (__fastcall **)(_BYTE *, __int64 *, __int64, __int64, __int64))(*a4 + 48))(v29, a4, a1, v15, v19);
      sub_15F7200(v29);
    }
    while ( v25 != v13 );
  }
  return a3;
}
