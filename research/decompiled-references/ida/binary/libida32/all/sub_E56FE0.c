void __fastcall sub_E56FE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r15
  __int64 v5; // rax
  _QWORD *v6; // rdx
  unsigned __int64 v7; // rcx
  unsigned int v8; // ebp
  _BYTE *v9; // rdx
  unsigned __int64 v10; // r13
  __int64 v11; // r12
  __int64 v12; // rax
  unsigned int v13; // eax
  unsigned int v14; // eax
  __int16 v15; // si
  unsigned int v16; // edx
  __int64 v17; // rsi
  unsigned int v18; // eax
  char v19; // di
  unsigned int v20; // eax
  char v21; // cl
  unsigned int v22; // eax
  __int64 v23; // rdx
  char v24; // r8
  _BYTE *v25; // rcx
  unsigned int v26; // ecx
  __int16 v27; // si
  __int64 v28; // rcx
  unsigned __int8 v29; // r9
  __int64 v30; // rdi
  _BYTE *v31; // rax
  _BYTE *v32; // rax
  _BYTE *v33; // rax
  char v34; // r8
  unsigned __int8 *v35; // rax
  unsigned __int8 v36; // r9
  unsigned __int8 v37; // r8
  unsigned __int8 *v38; // rax
  _BYTE *v39; // rax
  char v40; // [rsp+Bh] [rbp-2ADh]
  unsigned __int8 v41; // [rsp+Ch] [rbp-2ACh]
  unsigned int v42; // [rsp+10h] [rbp-2A8h] BYREF
  _BYTE v43[10]; // [rsp+16h] [rbp-2A2h] BYREF
  _BYTE v44[8]; // [rsp+20h] [rbp-298h] BYREF
  __int64 v45; // [rsp+28h] [rbp-290h]

  sub_E54900((__int64)v44, a1, a3);
  sub_971800(v45, "??_C@_");
  v5 = sub_A4E300(*(_QWORD **)(a1 + 8), *(_QWORD *)(a2 + 8));
  if ( !v5 || (unsigned int)*(unsigned __int8 *)(v5 + 16) - 2 > 1 )
    BUG();
  v6 = *(_QWORD **)(v5 + 40);
  if ( (*(_BYTE *)(v5 + 19) & 2) != 0 )
  {
    if ( *((_DWORD *)v6 + 2) <= 0x40u )
      v6 = (_QWORD *)*v6;
    else
      v6 = *(_QWORD **)*v6;
  }
  v7 = *(_QWORD *)(v45 + 24);
  v8 = (_DWORD)v6 * ((*(_WORD *)(a2 + 2) >> 6) & 7);
  v9 = *(_BYTE **)(v45 + 32);
  if ( ((*(_BYTE *)(a2 + 2) >> 3) & 7) == 1 )
  {
    if ( v7 <= (unsigned __int64)v9 )
    {
      sub_2257CD0(v45, 49);
    }
    else
    {
      *(_QWORD *)(v45 + 32) = v9 + 1;
      *v9 = 49;
    }
  }
  else if ( v7 <= (unsigned __int64)v9 )
  {
    sub_2257CD0(v45, 48);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v9 + 1;
    *v9 = 48;
  }
  sub_E56120((__int64)v44, (void *)v8);
  v42 = -1;
  if ( v8 )
  {
    LODWORD(v3) = 0;
    v10 = (unsigned __int64)v43;
    v11 = (__int64)&v42;
    do
    {
      v15 = (*(_WORD *)(a2 + 2) >> 6) & 7;
      v16 = (unsigned int)v3 % ((*(_WORD *)(a2 + 2) >> 6) & 7u);
      LODWORD(v12) = (unsigned int)v3 / ((*(_WORD *)(a2 + 2) >> 6) & 7u);
      if ( (unsigned int)v12 < *(_DWORD *)(a2 + 16) )
      {
        v12 = (unsigned int)v12;
        if ( (_BYTE)v15 == 2 )
        {
          v13 = *(unsigned __int16 *)(a2 + 2LL * (unsigned int)v12 + 4LL * *(unsigned int *)(a2 + 4) + 20);
        }
        else if ( (_BYTE)v15 == 4 )
        {
          v13 = *(_DWORD *)(a2 + 4 * (*(unsigned int *)(a2 + 4) + (unsigned __int64)(unsigned int)v12) + 20);
        }
        else
        {
LABEL_19:
          v13 = *(unsigned __int8 *)(v12 + a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
        }
        v14 = v13 >> (8 * v16);
      }
      else
      {
        LOBYTE(v14) = 0;
      }
      LODWORD(v3) = v3 + 1;
      v43[0] = v14;
      sub_21F44E0(v11, v10, 1);
    }
    while ( v8 != (_DWORD)v3 );
    v17 = v42;
  }
  else
  {
    v17 = 0xFFFFFFFFLL;
  }
  sub_E56120((__int64)v44, (void *)v17);
  v18 = 32;
  v19 = (*(_BYTE *)(a2 + 2) >> 3) & 7;
  if ( v19 == 1 )
    v18 = 64;
  if ( v8 > v18 )
    v8 = v18;
  if ( v8 )
  {
    v11 = 0x90A202E3A5C2F2CLL;
    v10 = 0;
    while ( 1 )
    {
      v26 = *(_DWORD *)(a2 + 16);
      v27 = (*(_WORD *)(a2 + 2) >> 6) & 7;
      v16 = (unsigned int)v10 % ((*(_WORD *)(a2 + 2) >> 6) & 7u);
      LODWORD(v12) = (unsigned int)v10 / ((*(_WORD *)(a2 + 2) >> 6) & 7u);
      if ( v19 == 1 )
      {
        if ( (unsigned int)v12 >= v26 )
        {
LABEL_47:
          v23 = v45;
          v28 = 0;
          LODWORD(v3) = 0;
          v24 = 0;
          v29 = 0;
          goto LABEL_48;
        }
        v12 = (unsigned int)v12;
        switch ( (_BYTE)v27 )
        {
          case 2:
            v20 = *(unsigned __int16 *)(a2 + 2LL * (unsigned int)v12 + 4LL * *(unsigned int *)(a2 + 4) + 20);
            break;
          case 4:
            v20 = *(_DWORD *)(a2 + 4 * (*(unsigned int *)(a2 + 4) + (unsigned __int64)(unsigned int)v12) + 20);
            break;
          case 1:
            v20 = *(unsigned __int8 *)((unsigned int)v12 + a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
            break;
          default:
            goto LABEL_19;
        }
        v21 = 8 * (((*(_WORD *)(a2 + 2) >> 6) & 7) - 1 - v16);
      }
      else
      {
        if ( (unsigned int)v12 >= v26 )
          goto LABEL_47;
        v12 = (unsigned int)v12;
        switch ( (_BYTE)v27 )
        {
          case 2:
            v20 = *(unsigned __int16 *)(a2 + 2LL * (unsigned int)v12 + 4LL * *(unsigned int *)(a2 + 4) + 20);
            break;
          case 4:
            v20 = *(_DWORD *)(a2 + 4 * (*(unsigned int *)(a2 + 4) + (unsigned __int64)(unsigned int)v12) + 20);
            break;
          case 1:
            v20 = *(unsigned __int8 *)((unsigned int)v12 + a2 + 4LL * *(unsigned int *)(a2 + 4) + 20);
            break;
          default:
            goto LABEL_19;
        }
        v21 = 8 * v16;
      }
      v22 = v20 >> v21;
      v23 = v45;
      LODWORD(v3) = v22;
      v24 = v22;
      if ( byte_23D3460[(unsigned __int8)v22] || (_BYTE)v22 == 36 )
      {
        v25 = *(_BYTE **)(v45 + 32);
        if ( (unsigned __int64)v25 >= *(_QWORD *)(v45 + 24) )
        {
          sub_2257CD0(v45, (unsigned __int8)v22);
        }
        else
        {
          *(_QWORD *)(v45 + 32) = v25 + 1;
          *v25 = v22;
        }
        goto LABEL_37;
      }
      v29 = v22;
      v28 = v22 & 0x7F;
LABEL_48:
      v30 = v23;
      if ( (byte_23ED5E0[2 * v28] & 0x60) == 0 )
      {
        qmemcpy(v43, ",/\\:. \n\t'-", sizeof(v43));
        switch ( (_BYTE)v3 )
        {
          case 0x2C:
            v3 = 0;
            break;
          case 0x2F:
            v3 = 1;
            break;
          case 0x5C:
            v3 = 2;
            break;
          case 0x3A:
            v3 = 3;
            break;
          case 0x2E:
            v3 = 4;
            break;
          case 0x20:
            v3 = 5;
            break;
          case 0xA:
            v3 = 6;
            break;
          case 9:
            v3 = 7;
            break;
          case 0x27:
            v3 = 8;
            break;
          case 0x2D:
            v3 = 9;
            break;
          default:
            v41 = v29;
            v40 = v24;
            sub_971800(v23, "?$");
            v34 = v40;
            v35 = *(unsigned __int8 **)(v45 + 32);
            v36 = (v41 >> 4) + 65;
            if ( (unsigned __int64)v35 >= *(_QWORD *)(v45 + 24) )
            {
              sub_2257CD0(v45, v36);
              v34 = v40;
            }
            else
            {
              *(_QWORD *)(v45 + 32) = v35 + 1;
              *v35 = v36;
            }
            v37 = (v34 & 0xF) + 65;
            v38 = *(unsigned __int8 **)(v45 + 32);
            if ( (unsigned __int64)v38 >= *(_QWORD *)(v45 + 24) )
            {
              sub_2257CD0(v45, v37);
            }
            else
            {
              *(_QWORD *)(v45 + 32) = v38 + 1;
              *v38 = v37;
            }
            goto LABEL_37;
        }
        v39 = *(_BYTE **)(v23 + 32);
        if ( (unsigned __int64)v39 >= *(_QWORD *)(v23 + 24) )
        {
          v30 = sub_2257CD0(v23, 63);
        }
        else
        {
          *(_QWORD *)(v23 + 32) = v39 + 1;
          *v39 = 63;
        }
        sub_2257BF0(v30, v3);
LABEL_37:
        v10 = (unsigned int)(v10 + 1);
        if ( (_DWORD)v10 == v8 )
          break;
        goto LABEL_38;
      }
      v31 = *(_BYTE **)(v23 + 32);
      if ( (unsigned __int64)v31 >= *(_QWORD *)(v23 + 24) )
      {
        v30 = sub_2257CD0(v23, 63);
      }
      else
      {
        *(_QWORD *)(v23 + 32) = v31 + 1;
        *v31 = 63;
      }
      LODWORD(v3) = v3 & 0x7F;
      v32 = *(_BYTE **)(v30 + 32);
      if ( (unsigned __int64)v32 >= *(_QWORD *)(v30 + 24) )
      {
        sub_2257CD0(v30, (unsigned int)(char)v3);
        goto LABEL_37;
      }
      v10 = (unsigned int)(v10 + 1);
      *(_QWORD *)(v30 + 32) = v32 + 1;
      *v32 = v3;
      if ( (_DWORD)v10 == v8 )
        break;
LABEL_38:
      v19 = (*(_BYTE *)(a2 + 2) >> 3) & 7;
    }
  }
  v33 = *(_BYTE **)(v45 + 32);
  if ( (unsigned __int64)v33 >= *(_QWORD *)(v45 + 24) )
  {
    sub_2257CD0(v45, 64);
  }
  else
  {
    *(_QWORD *)(v45 + 32) = v33 + 1;
    *v33 = 64;
  }
  sub_E56DF0((__int64)v44);
}

