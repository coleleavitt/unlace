__int64 __fastcall sub_1523D60(__int64 a1, _BYTE *a2, signed __int64 a3, int a4)
{
  bool v7; // zf
  __int64 *v8; // rdi
  unsigned int v9; // r15d
  unsigned __int64 v12; // rdi
  int v13; // ecx
  __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned int *v16; // rax
  __int64 *v17; // rdi
  unsigned __int64 v18; // r9
  __int16 v19; // ax
  __int64 v20; // rsi
  int v21; // ecx
  int v22; // eax
  __int64 v23; // rax
  int v24; // eax
  unsigned __int16 v25; // ax
  unsigned int v26; // eax
  unsigned int *v27; // rax
  __int16 v28; // ax
  __int16 v29; // ax
  int *v31; // [rsp+8h] [rbp-B0h]
  int v32; // [rsp+10h] [rbp-A8h]
  size_t n; // [rsp+18h] [rbp-A0h]
  int na; // [rsp+18h] [rbp-A0h]
  void *s1; // [rsp+20h] [rbp-98h]
  void *s1a; // [rsp+20h] [rbp-98h]
  int v37; // [rsp+28h] [rbp-90h]
  int v38; // [rsp+28h] [rbp-90h]
  unsigned __int8 *v39[17]; // [rsp+30h] [rbp-88h] BYREF

  v7 = *(_WORD *)(a1 + 32) == 22;
  v8 = *(__int64 **)(a1 + 8);
  if ( v7 )
  {
    v31 = (int *)(a1 + 16);
    sub_14634E0(v8, (int *)(a1 + 16));
    v12 = *(unsigned __int16 *)(a1 + 32);
    v32 = 0;
    if ( (unsigned __int16)(v12 - 5) > 1u )
    {
      if ( (_WORD)v12 != 23 )
      {
        v13 = 2199;
        if ( (_WORD)v12 != 14 )
        {
LABEL_7:
          v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
LABEL_8:
          v9 = 0;
          sub_FC70B0((__int64)v39, v14, a4, v13);
          sub_AEC220(v39, a2, a3);
          sub_AEA040((__int64)v39);
          return v9;
        }
        v37 = 1;
        LODWORD(s1a) = 0;
        na = 0;
LABEL_29:
        v9 = 0;
        v23 = sub_14B6F80(a1, 0);
        if ( v23 == 1 )
          return v9;
        v17 = *(__int64 **)(a1 + 8);
        v18 = v23 & 0xFFFFFFFFFFFFFFFELL;
        if ( ((*(_WORD *)((v23 & 0xFFFFFFFFFFFFFFFELL) + 2) >> 6) & 7) != 1 )
        {
          v20 = v17[6];
          v21 = 2193;
          goto LABEL_27;
        }
        v24 = v37;
        if ( !*(_DWORD *)(v18 + 16) )
          v24 = na;
        na = v24;
        if ( *(_WORD *)(a1 + 32) != 23 )
        {
          v20 = v17[6];
          v21 = 2196;
          goto LABEL_27;
        }
LABEL_16:
        v38 = v18;
        sub_14634E0(v17, v31);
        if ( *(_WORD *)(a1 + 32) == 1 )
        {
          v9 = 1;
          sub_14634E0(*(__int64 **)(a1 + 8), v31);
          sub_166C930(*(_QWORD *)(a1 + 96), a4, na, v32, (_DWORD)s1a, v38, (__int64)a2, a3);
          return v9;
        }
        v13 = 2202;
        v14 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
        goto LABEL_8;
      }
      LODWORD(s1a) = 0;
      v17 = *(__int64 **)(a1 + 8);
      na = 0;
LABEL_15:
      LODWORD(v18) = 0;
      goto LABEL_16;
    }
    LOBYTE(v15) = sub_141A630(v12);
    v9 = v15;
    if ( (_BYTE)v15 )
      BUG();
    v16 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
    s1 = v16 + 4;
    n = *v16;
    if ( n == j__strlen("push") )
    {
      if ( !n || !memcmp(s1, "push", n) )
      {
        v37 = 3;
        na = 2;
        goto LABEL_21;
      }
      if ( n == j__strlen("pop") )
      {
LABEL_25:
        v22 = memcmp(s1, "pop", n);
        v37 = 5;
        na = 4;
        if ( v22 )
          goto LABEL_26;
LABEL_21:
        sub_14634E0(*(__int64 **)(a1 + 8), v31);
        v19 = *(_WORD *)(a1 + 32);
        v17 = *(__int64 **)(a1 + 8);
        if ( v19 != 66 )
        {
          LODWORD(s1a) = 0;
          LODWORD(v18) = 0;
          if ( v19 == 23 )
            goto LABEL_16;
LABEL_23:
          v20 = v17[6];
          v21 = 2195;
LABEL_27:
          sub_FC70B0((__int64)v39, v20, a4, v21);
          sub_AEC220(v39, a2, a3);
          sub_AEA040((__int64)v39);
          return v9;
        }
        sub_14634E0(v17, v31);
        v25 = *(_WORD *)(a1 + 32);
        if ( (unsigned __int16)(v25 - 5) <= 1u )
        {
          LOBYTE(v26) = sub_141A630(v25);
          v9 = v26;
          if ( (_BYTE)v26 )
            BUG();
          v27 = *(unsigned int **)(*(_QWORD *)(a1 + 24) + 16LL);
          v32 = (_DWORD)v27 + 16;
          s1a = (void *)*v27;
          sub_14634E0(*(__int64 **)(a1 + 8), v31);
          v28 = *(_WORD *)(a1 + 32);
          v17 = *(__int64 **)(a1 + 8);
          if ( v28 != 66 )
          {
            if ( v28 == 23 )
              goto LABEL_15;
            goto LABEL_23;
          }
          sub_14634E0(v17, v31);
          v29 = *(_WORD *)(a1 + 32);
          if ( v29 == 23 )
          {
            v17 = *(__int64 **)(a1 + 8);
            goto LABEL_15;
          }
          if ( v29 == 14 )
            goto LABEL_29;
          if ( s1a )
          {
            v13 = 2198;
            goto LABEL_7;
          }
        }
        else
        {
          if ( v25 == 23 )
          {
            LODWORD(s1a) = 0;
            v17 = *(__int64 **)(a1 + 8);
            goto LABEL_15;
          }
          if ( v25 == 14 )
          {
            LODWORD(s1a) = 0;
            goto LABEL_29;
          }
        }
        v13 = 2197;
        goto LABEL_7;
      }
    }
    else if ( n == j__strlen("pop") )
    {
      if ( !n )
      {
        v37 = 5;
        na = 4;
        goto LABEL_21;
      }
      goto LABEL_25;
    }
LABEL_26:
    v21 = 2199;
    v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 48LL);
    goto LABEL_27;
  }
  v9 = 0;
  sub_FC70B0((__int64)v39, v8[6], a4, 2192);
  sub_AEC220(v39, a2, a3);
  sub_AEA040((__int64)v39);
  return v9;
}
