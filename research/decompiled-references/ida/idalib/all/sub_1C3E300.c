__int64 __fastcall sub_1C3E300(__int64 *a1, unsigned int a2, __int64 a3, double a4, __int64 a5, unsigned __int64 a6)
{
  __int64 v9; // r13
  __int64 result; // rax
  __int64 v11; // rsi
  unsigned int v12; // r15d
  __int64 v13; // rdx
  int v14; // eax
  int v15; // ecx
  bool v16; // zf
  int v17; // esi
  int v18; // eax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  _QWORD *v25; // rax
  unsigned int v26; // eax
  int v27; // r15d
  __int16 v28; // ax
  __int64 v29; // rdx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
  __int64 *v35; // [rsp+8h] [rbp-E0h] BYREF
  __int64 v36; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v37[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v38; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v39[11]; // [rsp+40h] [rbp-A8h] BYREF
  char v40; // [rsp+98h] [rbp-50h]
  unsigned int v41; // [rsp+A0h] [rbp-48h]
  char v42; // [rsp+A4h] [rbp-44h]

  if ( *(_QWORD *)(a3 + 48) )
  {
    sub_168B9F0((__int64)v37, a1 + 1, a2, 0x132Eu, 0);
    v9 = *(_QWORD *)(a3 + 40);
    if ( v40 )
    {
      sub_AE9DF0(v39, *(_QWORD *)(a3 + 40), 9u);
    }
    else if ( v42 )
    {
      v23 = sub_168B9E0(v37);
      v24 = v38;
      if ( v38 )
        v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v38 + 32LL))(v38);
      v36 = v24;
      v25 = sub_1587BC0(v23, &v36, v19, v20, v21, v22);
      sub_AE9DF0((unsigned __int8 **)(*v25 + 32LL * v41 + 8), v9, 9u);
    }
    sub_15F7200(v37);
    sub_168B9F0((__int64)v37, a1 + 1, *(_DWORD *)(a3 + 24), 0x71u, 0);
    sub_15F7200(v37);
    return a6;
  }
  else
  {
    v11 = a1[29];
    v12 = sub_B845D0(a3);
    if ( v12 > 2 )
    {
      if ( !a2 || (v11 = a2, v18 = sub_1021680(*(_QWORD *)(a1[31] + 2312), a2), v18 == 3) || !v18 )
      {
        sub_168B9F0((__int64)v37, a1 + 1, a2, 0x1CA4u, 0);
        if ( v40 )
        {
          sub_AE9DF0(v39, a3, 0xAu);
        }
        else if ( v42 )
        {
          v29 = sub_168B9E0(v37);
          v32 = v38;
          if ( v38 )
          {
            v33 = *(_QWORD *)v38;
            v35 = (__int64 *)v29;
            v32 = (*(__int64 (__fastcall **)(__int64))(v33 + 32))(v38);
            v29 = (__int64)v35;
          }
          v36 = v32;
          v35 = &v36;
          v34 = sub_1587BC0(v29, &v36, v29, (__int64)&v36, v30, v31);
          sub_AE9DF0((unsigned __int8 **)(*v34 + 32LL * v41 + 8), a3, 0xAu);
        }
        v11 = (__int64)&v36;
        LODWORD(v36) = v12;
        sub_1587D10((__int64)v37, (int *)&v36);
        sub_15F7200(v37);
      }
    }
    v13 = a1[76];
    if ( v13 )
    {
      v14 = *(_DWORD *)(v13 + 8);
      if ( (v14 & 0x10000000) != 0 )
      {
LABEL_30:
        sub_15F2480((__int64)a1);
      }
      else if ( (v14 & 0xDE1) == 0 )
      {
        do
        {
          v13 = *(_QWORD *)v13;
          if ( !v13 )
            break;
          v15 = *(_DWORD *)(v13 + 8);
          if ( (v15 & 0x10000000) != 0 )
            goto LABEL_30;
        }
        while ( (v15 & 0xDE1) == 0 );
      }
    }
    if ( (*(_WORD *)a6 & 0x1FF) == 0x8D )
    {
      v26 = sub_EEB7E0(a6, v11, a4);
      sub_168B9F0((__int64)v37, a1 + 1, v26, 0xB7Bu, 0);
      LODWORD(v36) = 4;
      sub_1587D10((__int64)v37, (int *)&v36);
      sub_15F7200(v37);
      v27 = sub_EEB7E0(a6, (__int64)&v36, a4);
      a6 = sub_EEE9A0(8, (_QWORD *)a1[31], 8u);
      v28 = *(_WORD *)a6 & 0xFE00;
      LOBYTE(v28) = -18;
      v16 = unk_2CD7484 == 0;
      *(_WORD *)a6 = v28;
      if ( !v16 )
        sub_EE9B50(238);
      *(_BYTE *)(a6 + 1) &= ~2u;
      *(_DWORD *)(a6 + 4) = v27;
    }
    result = sub_EEE9A0(32, (_QWORD *)a1[31], 8u);
    v16 = unk_2CD7484 == 0;
    *(_WORD *)result = *(_WORD *)result & 0xFE00 | 2;
    if ( !v16 )
    {
      v35 = (__int64 *)result;
      sub_EE9B50(2);
      result = (__int64)v35;
    }
    v35 = (__int64 *)a6;
    *(_DWORD *)(result + 4) = a2;
    *(_BYTE *)(result + 24) = 0;
    *(__m128 *)(result + 8) = _mm_loadh_ps((const double *)&v35);
    v17 = *(_DWORD *)(a3 + 76);
    *(_QWORD *)(a3 + 48) = result;
    if ( *(_DWORD *)(a3 + 24) == v17 )
    {
      v16 = *(_QWORD *)(a3 + 64) == 0;
      *(_DWORD *)(a3 + 76) = a2;
      if ( v16 )
        *(_DWORD *)(a3 + 24) = a2;
    }
  }
  return result;
}
