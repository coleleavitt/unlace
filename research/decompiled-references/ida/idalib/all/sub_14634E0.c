char __fastcall sub_14634E0(__int64 *a1, int *a2)
{
  __int16 v4; // ax
  unsigned __int64 v5; // rax
  __int64 v6; // rdx
  __int64 (__fastcall **v8)(__int64 *, int *); // rdx
  __int64 v9; // rax
  bool v10; // al
  int v11; // edx
  int v12; // eax
  __int16 v13; // dx
  unsigned __int16 v14; // ax
  __int64 v15; // r9
  unsigned int *v16; // r12
  __int64 v17; // rcx
  unsigned int *v18; // r14
  __int64 v19; // r13
  __int64 (__fastcall *v20)(__int64 *, int *); // rdx
  __int64 *v21; // rdi
  int v22; // r12d
  int v23; // eax
  __int64 v24; // rdx
  _BYTE *v25; // rsi
  __int64 v26; // rdx
  __int64 v27; // rsi
  __int64 *v28; // rax
  unsigned __int64 v29; // r13
  unsigned __int64 v30; // rdx
  _BYTE *v31; // rdi
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  int v35; // esi
  unsigned int v36; // edx
  __int64 v37; // rax
  int v38; // eax
  int v39; // eax
  int v40; // eax
  size_t v41; // rax
  unsigned __int16 v42; // r12
  __int64 v43; // r13
  int v44; // eax
  __int64 v45; // rax
  int v46; // eax
  unsigned int v48; // [rsp+4h] [rbp-54h] BYREF
  unsigned int *v49; // [rsp+8h] [rbp-50h] BYREF
  void *src; // [rsp+10h] [rbp-48h] BYREF
  size_t n; // [rsp+18h] [rbp-40h]
  _BYTE v52[56]; // [rsp+20h] [rbp-38h] BYREF

  ++*((_DWORD *)a1 + 253);
  while ( !((unsigned __int8 (__fastcall *)(__int64 *, int *))a1[144])(a1, a2) )
    ;
  v4 = *((_WORD *)a2 + 8);
  if ( !v4 )
  {
    v5 = a1[14];
    if ( *(_BYTE *)(v5 + 9) )
      return v5;
LABEL_5:
    v5 = a1[7];
    if ( (*(_BYTE *)(v5 + 21) & 4) == 0 )
      goto LABEL_6;
    goto LABEL_23;
  }
  if ( v4 != 3 )
    goto LABEL_5;
  v9 = *((_QWORD *)a2 + 1);
  if ( !v9 )
    goto LABEL_5;
  a1[122] = v9;
  v10 = sub_10CCDE0(3);
  v11 = *a2;
  if ( v10 )
  {
    v12 = a2[1];
    if ( !v12 )
      v12 = *a2;
  }
  else
  {
    v12 = v11 + a2[1];
  }
  *((_DWORD *)a1 + 247) = v12;
  *((_DWORD *)a1 + 246) = v11;
  *((_QWORD *)a2 + 1) = 0;
  v5 = a1[7];
  if ( (*(_BYTE *)(v5 + 21) & 4) == 0 )
    goto LABEL_6;
LABEL_23:
  if ( *((_DWORD *)a1 + 253) != 1 )
    goto LABEL_6;
  v13 = *((_WORD *)a2 + 9);
  if ( (v13 & 0x800) != 0 )
    goto LABEL_6;
  v14 = *((_WORD *)a2 + 8);
  if ( v14 == 26 )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 224);
    if ( (unsigned int)(v5 - 2) <= 1 )
    {
      LOBYTE(v5) = (unsigned __int8)sub_9EE7C0(a1 + 113, ".");
      goto LABEL_6;
    }
    goto LABEL_88;
  }
  if ( v14 > 0x1Au )
  {
    if ( v14 > 0x1BEu )
    {
      if ( v14 < 0x1C0u )
        goto LABEL_74;
      if ( v14 > 0x1C8u )
      {
        if ( v14 != 459 )
          goto LABEL_74;
        goto LABEL_78;
      }
    }
    else if ( v14 < 0x1AAu && v14 != 63 )
    {
      if ( v14 == 134 )
      {
        v37 = a1[109];
        if ( v37 && *(_BYTE *)(v37 + 17) )
        {
          HIBYTE(v13) |= 0x10u;
          *((_WORD *)a2 + 9) = v13;
        }
        *((_DWORD *)a1 + 222) = -2;
        v38 = *((_DWORD *)a1 + 220);
        if ( v38 == -1 )
        {
          *((_DWORD *)a1 + 220) = -2;
        }
        else if ( v38 <= 0 )
        {
          *((_DWORD *)a1 + 220) = 0;
        }
        LODWORD(v5) = *((_DWORD *)a1 + 224);
        if ( !(_DWORD)v5 )
        {
          *((_DWORD *)a1 + 224) = 1;
          goto LABEL_6;
        }
        goto LABEL_88;
      }
      if ( v14 == 62 )
      {
        LODWORD(v5) = *((_DWORD *)a1 + 224);
        if ( (unsigned int)(v5 - 2) <= 1 )
        {
          LOBYTE(v5) = (unsigned __int8)sub_9EE7C0(a1 + 113, ":");
          goto LABEL_6;
        }
        goto LABEL_88;
      }
LABEL_74:
      LODWORD(v5) = *((_DWORD *)a1 + 224) - 4;
      goto LABEL_63;
    }
    if ( !*((_DWORD *)a1 + 222) )
      *((_DWORD *)a1 + 222) = 1;
    if ( *((int *)a1 + 220) <= 0 )
    {
      *((_DWORD *)a1 + 220) = -1;
      *((_BYTE *)a1 + 884) = 0;
    }
    LODWORD(v5) = *((_DWORD *)a1 + 224);
    if ( a1[114] && (unsigned int)(v5 - 2) <= 1 )
    {
      LODWORD(v5) = ((_DWORD)v5 != 2) + 4;
      *((_DWORD *)a1 + 224) = v5;
      goto LABEL_6;
    }
    goto LABEL_88;
  }
  if ( v14 == 21 )
  {
LABEL_114:
    v40 = 1;
    if ( *((int *)a1 + 220) > 0 )
      v40 = *((_DWORD *)a1 + 220);
    LODWORD(v5) = v40 - 1;
    *((_DWORD *)a1 + 220) = v5;
    goto LABEL_6;
  }
  if ( v14 <= 0x15u )
  {
    if ( v14 != 16 )
    {
      if ( v14 == 20 )
      {
LABEL_111:
        v39 = 0;
        if ( *((int *)a1 + 220) >= 0 )
          v39 = *((_DWORD *)a1 + 220);
        LODWORD(v5) = v39 + 1;
        *((_DWORD *)a1 + 220) = v5;
        goto LABEL_6;
      }
      if ( v14 == 5 )
      {
        v22 = *((_DWORD *)a1 + 220);
        if ( v22 > 0 )
        {
          if ( !sub_141A630(5u) )
            goto LABEL_48;
          goto LABEL_120;
        }
        LOBYTE(v5) = sub_141A630(5u);
        if ( (_BYTE)v5 )
          BUG();
        v43 = *((_QWORD *)a2 + 1);
        if ( (*(_BYTE *)(v43 + 4) & 0x20) != 0 )
        {
          if ( v22 == -1 )
          {
            if ( *((_DWORD *)a1 + 222) == -1 )
              *((_DWORD *)a1 + 222) = -2;
            goto LABEL_129;
          }
          if ( (unsigned int)(v22 + 2) <= 1 )
          {
LABEL_129:
            *((_DWORD *)a1 + 220) = -3;
            v44 = *a2;
            *((_DWORD *)a1 + 198) = 0;
            *((_DWORD *)a1 + 195) = v44;
            v5 = (unsigned __int64)sub_1436080;
            *((_BYTE *)a1 + 860) = 0;
            *((_BYTE *)a1 + 936) = 1;
            a1[144] = (__int64)sub_1436080;
            goto LABEL_6;
          }
LABEL_80:
          *((_DWORD *)a1 + 220) = 0;
          goto LABEL_6;
        }
        v41 = j__strlen("module");
        if ( v43 != sub_6F3470((__int64)(a1 + 69), "module", v41) )
        {
          v42 = *((_WORD *)a2 + 8);
          if ( !sub_141A630(v42) && v42 != 1 )
          {
LABEL_48:
            v23 = *((_DWORD *)a1 + 224);
            v24 = *((_QWORD *)a2 + 1);
            if ( (unsigned int)(v23 - 2) <= 1 && v24 )
            {
              v25 = (_BYTE *)(*(_QWORD *)(v24 + 16) + 16LL);
              if ( *(_QWORD *)(v24 + 16) == -16 )
              {
                v52[0] = 0;
                n = 0;
                src = v52;
              }
              else
              {
                v26 = **(_QWORD **)(v24 + 16);
                src = v52;
                sub_145B9F0(&src, v25, (__int64)&v25[(unsigned int)v26]);
              }
              v27 = a1[114];
              v28 = (__int64 *)a1[113];
              v29 = n + v27;
              if ( v28 == a1 + 115 )
                v30 = 15;
              else
                v30 = a1[115];
              if ( v29 > v30 )
              {
                sub_998B30((__int64)(a1 + 113), v27, 0, src, n);
                v28 = (__int64 *)a1[113];
              }
              else if ( n )
              {
                v31 = (char *)v28 + v27;
                if ( n == 1 )
                  *v31 = *(_BYTE *)src;
                else
                  memcpy(v31, src, n);
                v28 = (__int64 *)a1[113];
              }
              a1[114] = v29;
              *((_BYTE *)v28 + v29) = 0;
              if ( src != v52 )
                operator delete(src);
              LODWORD(v5) = *((_DWORD *)a1 + 224);
              if ( (unsigned int)(v5 - 2) <= 1 )
                goto LABEL_6;
              LODWORD(v5) = v5 - 4;
              goto LABEL_63;
            }
            goto LABEL_121;
          }
LABEL_120:
          v23 = *((_DWORD *)a1 + 224);
LABEL_121:
          LODWORD(v5) = v23 - 4;
          if ( (unsigned int)v5 > 1 )
          {
            v5 = a1[113];
            a1[114] = 0;
            *(_BYTE *)v5 = 0;
            LODWORD(v5) = -4;
            *((_DWORD *)a1 + 224) = 0;
          }
LABEL_63:
          if ( !*((_DWORD *)a1 + 222) )
            *((_DWORD *)a1 + 222) = -2;
          if ( *((int *)a1 + 220) <= 0 )
            *((_DWORD *)a1 + 220) = 0;
          if ( (unsigned int)v5 <= 1 )
            goto LABEL_6;
LABEL_68:
          v5 = a1[113];
          a1[114] = 0;
          *(_BYTE *)v5 = 0;
          *((_DWORD *)a1 + 224) = 0;
          goto LABEL_6;
        }
        v45 = a1[109];
        if ( v45 && *(_BYTE *)(v45 + 17) )
          *((_WORD *)a2 + 9) |= 0x1000u;
        v46 = -2;
        if ( *((_DWORD *)a1 + 220) == -1 )
          v46 = 2 * (*((_DWORD *)a1 + 222) == -1) - 2;
        *((_DWORD *)a1 + 222) = v46;
        LODWORD(v5) = *((_DWORD *)a1 + 224);
        if ( (_DWORD)v5 == 1 )
        {
          *((_DWORD *)a1 + 224) = 2;
          goto LABEL_6;
        }
        if ( !(_DWORD)v5 )
        {
          *((_DWORD *)a1 + 224) = 3;
          goto LABEL_6;
        }
LABEL_88:
        LODWORD(v5) = v5 - 4;
        if ( (unsigned int)v5 <= 1 )
          goto LABEL_6;
        goto LABEL_68;
      }
      goto LABEL_74;
    }
LABEL_78:
    LODWORD(v5) = *((_DWORD *)a1 + 220);
    if ( (_DWORD)v5 == -3 )
    {
      *((_BYTE *)a1 + 884) = 1;
    }
    else if ( (int)v5 > 0 )
    {
      goto LABEL_6;
    }
    goto LABEL_80;
  }
  if ( v14 == 23 )
    goto LABEL_114;
  if ( v14 < 0x17u || v14 == 24 )
    goto LABEL_111;
  LODWORD(v5) = *((_DWORD *)a1 + 220);
  if ( (int)v5 <= 0 )
  {
    *((_DWORD *)a1 + 220) = 0;
  }
  else
  {
    LODWORD(v5) = v5 - 1;
    *((_DWORD *)a1 + 220) = v5;
    if ( (_DWORD)v5 )
      goto LABEL_6;
  }
  if ( !*((_BYTE *)a1 + 884) )
    *((_DWORD *)a1 + 220) = -1;
LABEL_6:
  v6 = a1[139];
  if ( v6 )
  {
    LODWORD(v5) = *((_DWORD *)a1 + 214) + 1;
    *((_DWORD *)a1 + 214) = v5;
    if ( (_DWORD)v5 == 1024 )
    {
      v48 = *(_DWORD *)(v6 + 16);
      LOBYTE(v5) = sub_145E8C0(a1 + 104, &v48, &v49);
      if ( (_BYTE)v5 )
      {
        v16 = v49;
        v17 = v49[4];
        v18 = v49 + 2;
        v19 = *(_QWORD *)(a1[139] + 152);
        if ( v49[5] < (unsigned __int64)(v17 + 1) )
        {
          LOBYTE(v5) = sub_2237220(v49 + 2, v49 + 6, v17 + 1, 8);
          v17 = v16[4];
        }
LABEL_39:
        *(_QWORD *)(*(_QWORD *)v18 + 8 * v17) = v19;
        ++v18[2];
        *((_DWORD *)a1 + 214) = 0;
        goto LABEL_8;
      }
      v5 = (unsigned __int64)v49;
      v32 = (unsigned int)(*((_DWORD *)a1 + 210) + 1);
      v33 = *((unsigned int *)a1 + 212);
      src = v49;
      v34 = (unsigned int)(4 * v32);
      v35 = 2 * v33;
      if ( (unsigned int)v34 < 3 * (int)v33 )
      {
        if ( (int)v33 - *((_DWORD *)a1 + 211) - (int)v32 > (unsigned int)v33 >> 3 )
        {
LABEL_84:
          *((_DWORD *)a1 + 210) = v32;
          if ( *(_DWORD *)v5 )
            --*((_DWORD *)a1 + 211);
          v36 = v48;
          v18 = (unsigned int *)(v5 + 8);
          *(_QWORD *)(v5 + 16) = 0x600000000LL;
          v17 = 0;
          *(_DWORD *)v5 = v36;
          *(_QWORD *)(v5 + 8) = v5 + 24;
          v19 = *(_QWORD *)(a1[139] + 152);
          goto LABEL_39;
        }
        v35 = v33;
      }
      sub_14631E0(a1 + 104, v35, v32, v33, v34, v15);
      sub_145E8C0(a1 + 104, &v48, &src);
      LODWORD(v32) = *((_DWORD *)a1 + 210) + 1;
      v5 = (unsigned __int64)src;
      goto LABEL_84;
    }
  }
LABEL_8:
  *((_BYTE *)a1 + 861) = *((_WORD *)a2 + 8) == 73;
  if ( (*((_DWORD *)a1 + 253))-- == 1 )
  {
    if ( (*((_BYTE *)a2 + 19) & 8) != 0 )
      return v5;
    v5 = a1[3];
    ++*((_DWORD *)a1 + 254);
    v8 = (__int64 (__fastcall **)(__int64 *, int *))(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return v5;
  }
  else
  {
    if ( !*((_BYTE *)a1 + 1020) )
      return v5;
    if ( (*((_BYTE *)a2 + 19) & 8) != 0 )
      return v5;
    v5 = a1[3];
    v8 = (__int64 (__fastcall **)(__int64 *, int *))(v5 & 0xFFFFFFFFFFFFFFF8LL);
    if ( (v5 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
      return v5;
  }
  v20 = *v8;
  v21 = a1;
  if ( (v5 & 2) == 0 )
    v21 = (__int64 *)*a1;
  LOBYTE(v5) = v20(v21, a2);
  return v5;
}
