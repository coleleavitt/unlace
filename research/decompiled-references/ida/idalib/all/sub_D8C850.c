__int64 __fastcall sub_D8C850(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rax
  __int64 v7; // rsi
  __int64 v8; // r12
  unsigned __int64 v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  unsigned int v13; // eax
  __int64 *v14; // rdx
  __int64 v15; // rbp
  unsigned int v16; // edx
  __int64 *v17; // rax
  bool v18; // bp
  unsigned int v19; // eax
  __int64 *v20; // rdx
  char v21; // bp
  unsigned int v22; // eax
  __int64 *v23; // rdx
  char v24; // bp
  unsigned int v25; // eax
  __int64 *v26; // rdx
  __int16 v27; // bp
  unsigned int v28; // eax
  __int64 *v29; // rdx
  __int16 v30; // bp
  unsigned int v31; // eax
  __int64 *v32; // rdx
  int v33; // ebp
  __int64 v34; // r12
  __int64 *v35; // rax
  unsigned int v36; // eax
  __int64 *v37; // rdx
  __int64 v38; // rbp
  unsigned int v39; // eax
  __int64 *v40; // rdx
  __int64 v41; // rbp
  unsigned int v42; // eax
  __int64 *v43; // rdx
  __int64 v44; // rbp
  __int64 v45; // rax
  __int64 v47; // rax
  _BYTE v48[72]; // [rsp+20h] [rbp-48h] BYREF

  v6 = sub_CFDF60(a3);
  v7 = *(_QWORD *)(a3 + 32);
  LODWORD(v6) = *(_DWORD *)a3 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v6 + 32) + 280LL) + 8LL);
  sub_E23220(v48, v7, (unsigned int)v6, (unsigned int)v6);
  v8 = *(_QWORD *)(a1 + 184);
  v9 = sub_CFE250((__int64)v48, v7);
  switch ( (unsigned int)sub_CE6180(v8, v9, v10, v11, v12) )
  {
    case 0u:
      v19 = *(_DWORD *)(a4 + 8);
      v20 = *(__int64 **)a4;
      if ( v19 > 0x40 )
      {
        v21 = *(_BYTE *)v20;
      }
      else
      {
        v21 = 0;
        if ( v19 )
          v21 = (__int64)((_QWORD)v20 << (64 - (unsigned __int8)v19)) >> (64 - (unsigned __int8)v19);
      }
      *(_BYTE *)sub_D0C5D0((__int64)v48) = v21;
      break;
    case 1u:
      v22 = *(_DWORD *)(a4 + 8);
      v23 = *(__int64 **)a4;
      if ( v22 > 0x40 )
      {
        v24 = *(_BYTE *)v23;
      }
      else
      {
        v24 = 0;
        if ( v22 )
          v24 = (__int64)((_QWORD)v23 << (64 - (unsigned __int8)v22)) >> (64 - (unsigned __int8)v22);
      }
      *(_BYTE *)sub_D0C7E0((__int64)v48) = v24;
      break;
    case 2u:
      v25 = *(_DWORD *)(a4 + 8);
      v26 = *(__int64 **)a4;
      if ( v25 > 0x40 )
      {
        v27 = *(_WORD *)v26;
      }
      else
      {
        v27 = 0;
        if ( v25 )
          v27 = (__int64)((_QWORD)v26 << (64 - (unsigned __int8)v25)) >> (64 - (unsigned __int8)v25);
      }
      *(_WORD *)sub_D0CBD0((__int64)v48) = v27;
      break;
    case 3u:
      v28 = *(_DWORD *)(a4 + 8);
      v29 = *(__int64 **)a4;
      if ( v28 > 0x40 )
      {
        v30 = *(_WORD *)v29;
      }
      else
      {
        v30 = 0;
        if ( v28 )
          v30 = (__int64)((_QWORD)v29 << (64 - (unsigned __int8)v28)) >> (64 - (unsigned __int8)v28);
      }
      *(_WORD *)sub_D0CDE0((__int64)v48) = v30;
      break;
    case 4u:
      v31 = *(_DWORD *)(a4 + 8);
      v32 = *(__int64 **)a4;
      if ( v31 > 0x40 )
      {
        v33 = *(_DWORD *)v32;
      }
      else
      {
        v33 = 0;
        if ( v31 )
          v33 = (__int64)((_QWORD)v32 << (64 - (unsigned __int8)v31)) >> (64 - (unsigned __int8)v31);
      }
      *(_DWORD *)sub_D0D1D0((__int64)v48) = v33;
      break;
    case 5u:
      LODWORD(v34) = *(_DWORD *)(a4 + 8);
      v35 = *(__int64 **)a4;
      if ( (unsigned int)v34 > 0x40 )
      {
        LODWORD(v34) = *(_DWORD *)v35;
      }
      else if ( (_DWORD)v34 )
      {
        v34 = (__int64)((_QWORD)v35 << (64 - (unsigned __int8)v34)) >> (64 - (unsigned __int8)v34);
      }
      *(_DWORD *)sub_D0D3E0((__int64)v48) = v34;
      break;
    case 6u:
      v36 = *(_DWORD *)(a4 + 8);
      v37 = *(__int64 **)a4;
      if ( v36 > 0x40 )
      {
        v38 = *v37;
      }
      else
      {
        v38 = 0;
        if ( v36 )
          v38 = (__int64)((_QWORD)v37 << (64 - (unsigned __int8)v36)) >> (64 - (unsigned __int8)v36);
      }
      *(_QWORD *)sub_D0D9C0((__int64)v48) = v38;
      break;
    case 7u:
      v39 = *(_DWORD *)(a4 + 8);
      v40 = *(__int64 **)a4;
      if ( v39 > 0x40 )
      {
        v41 = *v40;
      }
      else
      {
        v41 = 0;
        if ( v39 )
          v41 = (__int64)((_QWORD)v40 << (64 - (unsigned __int8)v39)) >> (64 - (unsigned __int8)v39);
      }
      *(_QWORD *)sub_D0DBD0((__int64)v48) = v41;
      break;
    case 8u:
      v42 = *(_DWORD *)(a4 + 8);
      v43 = *(__int64 **)a4;
      if ( v42 <= 0x40 )
      {
        v44 = 0;
        if ( v42 )
          v44 = (__int64)((_QWORD)v43 << (64 - (unsigned __int8)v42)) >> (64 - (unsigned __int8)v42);
      }
      else
      {
        v44 = *v43;
      }
      v45 = sub_D0E1E0((__int64)v48);
      *(_QWORD *)v45 = v44;
      *(_DWORD *)(v45 + 8) = 64;
      break;
    case 9u:
      v13 = *(_DWORD *)(a4 + 8);
      v14 = *(__int64 **)a4;
      if ( v13 > 0x40 )
      {
        v15 = *v14;
      }
      else
      {
        v15 = 0;
        if ( v13 )
          v15 = (__int64)((_QWORD)v14 << (64 - (unsigned __int8)v13)) >> (64 - (unsigned __int8)v13);
      }
      v47 = sub_D0E230((__int64)v48);
      *(_QWORD *)v47 = v15;
      *(_DWORD *)(v47 + 8) = 64;
      break;
    case 0xAu:
      v16 = *(_DWORD *)(a4 + 8);
      v17 = *(__int64 **)a4;
      if ( v16 > 0x40 )
      {
        v18 = *v17 != 0;
      }
      else
      {
        v18 = 0;
        if ( v16 )
          v18 = (__int64)((_QWORD)v17 << (64 - (unsigned __int8)v16)) >> (64 - (unsigned __int8)v16) != 0;
      }
      *(_BYTE *)sub_D0E7B0((__int64)v48) = v18;
      break;
  }
  sub_E24D00(v48);
  sub_E232A0(v48);
  return 1;
}
