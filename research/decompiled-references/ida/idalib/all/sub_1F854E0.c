__int16 __fastcall sub_1F854E0(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 *v6; // rax
  char v7; // bp
  unsigned __int64 v8; // rsi
  __int16 v9; // bp
  __int16 v11; // r12
  __int64 v12; // rdx
  int v13; // rcx^4
  unsigned int *v14; // r13
  __int64 v15; // rdx
  __int64 v16; // rax
  unsigned int v17; // eax
  unsigned int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r10
  _DWORD *v21; // r13
  __int64 v22; // rsi
  __int64 v23; // rdx
  int v24; // esi
  __int64 v25; // rax
  __int64 v26; // rax
  int v27; // r11d
  int v28; // edi
  unsigned __int64 v30; // [rsp+0h] [rbp-40h] BYREF
  __int64 v31; // [rsp+8h] [rbp-38h] BYREF
  char v32; // [rsp+10h] [rbp-30h]

  v6 = (__int64 *)(a2 & 0xFFFFFFFFFFFFFFF0LL);
  if ( (a2 & 0xFFFFFFFFFFFFFFF0LL) == 0 )
    return (__int16)v6;
  v7 = a2;
  v8 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v9 = v7 & 7;
  v11 = v9;
  if ( (v8 & 8) == 0 )
  {
    v12 = *v6;
    if ( *(_BYTE *)(*v6 + 16) == 13 )
    {
      v13 = (unsigned __int64)sub_1EA73F0(*v6) >> 32;
      LOWORD(v6) = -1;
      if ( v13 != -1 )
        LOWORD(v6) = v9 | (8 * v13);
      return (__int16)v6;
    }
    if ( v8 == *(_QWORD *)(a1 + 22720) )
    {
      LOWORD(v6) = v9 | 0xF8;
      return (__int16)v6;
    }
    if ( v8 == *(_QWORD *)(a1 + 22728) )
    {
      LOWORD(v6) = v9 | 0x100;
      return (__int16)v6;
    }
    v17 = *(_DWORD *)(a3 + 840);
    v30 = v8;
    if ( v17 )
    {
      a6 = v17 - 1;
      a5 = *(_QWORD *)(a3 + 824);
      v18 = a6 & (((unsigned int)v8 >> 9) ^ ((unsigned int)v8 >> 4));
      v19 = a5 + 16LL * v18;
      v20 = *(_QWORD *)v19;
      if ( v8 == *(_QWORD *)v19 )
        goto LABEL_20;
      v27 = 1;
      a4 = nullptr;
      if ( v20 != 1 )
      {
        while ( 1 )
        {
          if ( v20 == 2 && !a4 )
            a4 = (_QWORD *)v19;
          v18 = a6 & (v27 + v18);
          v19 = a5 + 16LL * v18;
          v20 = *(_QWORD *)v19;
          if ( v8 == *(_QWORD *)v19 )
            break;
          if ( v20 == 1 )
          {
            if ( a4 )
              goto LABEL_33;
            goto LABEL_32;
          }
          ++v27;
        }
LABEL_20:
        v21 = (_DWORD *)(v19 + 8);
        v22 = *(unsigned int *)(v19 + 8);
        v23 = *(unsigned int *)(v19 + 12);
        if ( v23 | (v22 << 32) )
        {
LABEL_21:
          LOWORD(v6) = -1;
          if ( (_DWORD)v23 == -1 )
            return (__int16)v6;
          v11 = v9 | (8 * v23);
          LOWORD(v6) = 0;
          goto LABEL_14;
        }
        goto LABEL_29;
      }
LABEL_32:
      a4 = (_QWORD *)v19;
LABEL_33:
      v28 = *(_DWORD *)(a3 + 832);
      v31 = (__int64)a4;
      v12 = (unsigned int)(v28 + 1);
      if ( 4 * (int)v12 < 3 * v17 )
      {
        if ( v17 - *(_DWORD *)(a3 + 836) - (unsigned int)v12 > v17 >> 3 )
          goto LABEL_26;
        v24 = v17;
LABEL_25:
        sub_1F84FE0(a3 + 824, v24, v12, (__int64)a4, a5, a6);
        sub_1F72F80((__int64 *)(a3 + 824), (__int64 *)&v30, &v31);
        a4 = (_QWORD *)v31;
        LODWORD(v12) = *(_DWORD *)(a3 + 832) + 1;
LABEL_26:
        *(_DWORD *)(a3 + 832) = v12;
        if ( *a4 != 1 )
          --*(_DWORD *)(a3 + 836);
        v25 = v30;
        a4[1] = 0;
        v21 = a4 + 1;
        *a4 = v25;
LABEL_29:
        LOWORD(v6) = 0;
        if ( !*(_BYTE *)(a3 + 155) )
        {
          v26 = *(_QWORD *)(a3 + 816);
          *(_QWORD *)(a3 + 816) = v26 + 1;
          *v21 = 0;
          v21[1] = v26;
          v32 = 1;
          v31 = v30;
          sub_1F79E00(a3 + 184, (__int64)&v31);
          LODWORD(v23) = v21[1];
          goto LABEL_21;
        }
LABEL_14:
        LOWORD(v6) = v11 | (unsigned __int16)v6;
        return (__int16)v6;
      }
    }
    else
    {
      v31 = 0;
    }
    v24 = 2 * v17;
    goto LABEL_25;
  }
  v30 = v8;
  v14 = (unsigned int *)sub_1F851D0(a3 + 824, (__int64 *)&v30, a3, (__int64)a4, a5, a6);
  v15 = v14[1];
  v6 = (__int64 *)(v15 | ((unsigned __int64)*v14 << 32));
  if ( !v6 )
  {
    if ( *(_BYTE *)(a3 + 155) )
      goto LABEL_14;
    v16 = *(_QWORD *)(a3 + 816);
    *(_QWORD *)(a3 + 816) = v16 + 1;
    *v14 = 0;
    v14[1] = v16;
    v32 = 1;
    v31 = v30;
    sub_1F79E00(a3 + 184, (__int64)&v31);
    LODWORD(v15) = v14[1];
  }
  LOWORD(v6) = -1;
  if ( (_DWORD)v15 != -1 )
    LOWORD(v6) = v9 | (8 * v15);
  return (__int16)v6;
}
