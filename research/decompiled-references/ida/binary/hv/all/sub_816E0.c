__int64 __fastcall sub_816E0(__int64 a1, _QWORD *a2, unsigned __int8 **a3, unsigned __int8 *a4, _QWORD *a5, _BYTE *a6)
{
  __int64 v6; // r10
  unsigned __int8 *v7; // rax
  _BYTE *v10; // r15
  __int64 v11; // rbx
  _BYTE *v12; // r12
  __int64 v13; // r15
  int v14; // r13d
  __int64 v15; // rax
  __int64 v16; // rax
  int v17; // esi
  __int64 v18; // r9
  bool v19; // cf
  __int64 v20; // r8
  unsigned __int64 v21; // rax
  _DWORD *v22; // rax
  unsigned __int64 v23; // r8
  unsigned int *v24; // r10
  __int64 v25; // rax
  unsigned __int64 v26; // r11
  unsigned int *v27; // rsi
  __int64 v28; // r8
  __int64 v29; // rdx
  __int64 v30; // rsi
  __int64 v31; // r8
  __int64 v32; // rax
  __int64 v33; // r14
  unsigned __int8 *v35; // [rsp+8h] [rbp-60h]

  v6 = a1;
  if ( *a3 != a4 )
  {
    v7 = *a3;
    v10 = (_BYTE *)*a5;
LABEL_3:
    v11 = *v7;
    v12 = v10;
    v13 = 1;
    v35 = v7 + 1;
    v14 = 8;
    while ( 1 )
    {
      while ( 1 )
      {
        v16 = a2[10];
        v17 = *(_DWORD *)v16;
        if ( (v11 & v13) != 0 )
          break;
        if ( v17 )
        {
          v15 = *(_QWORD *)(v16 + 16);
          a2[10] = v15;
          if ( *(_QWORD *)(v15 + 16) )
            goto LABEL_6;
          goto LABEL_10;
        }
LABEL_14:
        v19 = a2[3] == 0;
        v20 = a2[2];
        *(_DWORD *)(a2[7] + 4LL * a2[4]) = v17;
        v21 = a2[4] + 1LL;
        a2[4] = v21;
        if ( v21 < v20 - ((unsigned __int64)v19 - 1) )
          goto LABEL_6;
        v22 = (_DWORD *)a2[10];
        v18 = a2[12];
        if ( !*v22 )
          goto LABEL_16;
        v33 = 0x6DB6DB6DB6DB6DB7LL * (((__int64)v22 - v18) >> 3);
LABEL_25:
        a2[4] = 0;
        sub_812C0(a2, v33);
        a2[10] = a2[13];
        *v12 = v33;
        if ( v12 + 1 == a6 )
        {
          *a5 = a6;
          *a3 = v35;
          return 0;
        }
        ++v12;
        v13 *= 2;
        if ( !--v14 )
        {
LABEL_27:
          v7 = v35;
          v10 = v12;
          if ( a4 != v35 )
            goto LABEL_3;
          v6 = a1;
          goto LABEL_29;
        }
      }
      if ( !v17 )
      {
        v17 = 1;
        goto LABEL_14;
      }
      v15 = *(_QWORD *)(v16 + 24);
      a2[10] = v15;
      if ( *(_QWORD *)(v15 + 16) )
        goto LABEL_6;
LABEL_10:
      if ( *(_DWORD *)v15 )
      {
        v33 = 0x6DB6DB6DB6DB6DB7LL * ((v15 - a2[12]) >> 3);
        goto LABEL_25;
      }
      if ( a2[1] == 1 )
      {
        v18 = a2[12];
LABEL_16:
        v23 = a2[4];
        v24 = (unsigned int *)a2[7];
        v25 = 0;
        if ( v23 > 1 )
        {
          v26 = v23 - 1;
          v27 = (unsigned int *)a2[7];
          v28 = (__int64)&v24[v23 - 1];
          do
          {
            v29 = *v27++;
            v25 = 2 * (v29 | v25);
          }
          while ( (unsigned int *)v28 != v27 );
          v24 += v26;
        }
        v30 = a2[11];
        v31 = v25 | *v24;
        if ( v31 )
        {
          while ( 1 )
          {
            v32 = v30;
            v30 = *(_QWORD *)(v30 + 24);
            if ( !v30 )
              break;
            if ( !--v31 )
              goto LABEL_31;
          }
        }
        else
        {
LABEL_31:
          v32 = v30;
        }
        v33 = 0x6DB6DB6DB6DB6DB7LL * ((v32 - v18) >> 3);
        goto LABEL_25;
      }
LABEL_6:
      v13 *= 2;
      if ( !--v14 )
        goto LABEL_27;
    }
  }
LABEL_29:
  *(_QWORD *)(v6 + 64) = "secondary decoder end of input";
  return 4294949586LL;
}

