__int64 __fastcall sub_841FE0(__int64 a1, __int64 *a2, __int64 a3, __int64 a4)
{
  __int64 v7; // r14
  unsigned int v8; // r12d
  __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rsi
  unsigned int v12; // r12d
  __int64 v13; // rax
  __int64 v14; // r14
  __int64 v15; // r9
  __int64 v17; // rax
  __int64 v18; // r9
  unsigned __int64 v19; // rdx
  unsigned __int64 v20; // rax
  __int64 v21; // rbx
  unsigned int v22; // eax
  __int64 v23; // rax
  _QWORD *v24; // rbx
  unsigned __int8 *v25; // rbp
  __int64 v26; // r9
  _BYTE *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rdi
  __int64 v30; // rax
  __int64 v31; // rdx
  __int64 v32; // rax
  __int64 v33; // rdx
  int v34; // eax
  __int64 v35; // rax
  __int64 v36; // r13
  __int64 v37; // r12
  __int64 v38; // r13
  void *v39; // rdi
  __int64 v40; // [rsp+0h] [rbp-D8h]
  __int64 v41; // [rsp+0h] [rbp-D8h]
  __int64 v42; // [rsp+0h] [rbp-D8h]
  __int64 v43; // [rsp+8h] [rbp-D0h]
  unsigned int v45; // [rsp+20h] [rbp-B8h] BYREF
  char v46; // [rsp+24h] [rbp-B4h]
  __int64 v47; // [rsp+28h] [rbp-B0h]
  _DWORD v48[14]; // [rsp+60h] [rbp-78h] BYREF
  char v49; // [rsp+98h] [rbp-40h]

  if ( (*(_BYTE *)(a3 + 19) & 2) != 0 )
  {
    v7 = *(_QWORD *)(a3 + 40);
    v8 = *(_DWORD *)(v7 + 8);
    if ( v8 <= 0x40 )
    {
      v9 = *(_QWORD *)v7;
      v12 = *(_QWORD *)v7;
    }
    else
    {
      if ( v8 - (unsigned int)sub_2587400(*(_QWORD *)(a3 + 40)) > 0x40 )
      {
        v9 = -1;
        v10 = sub_70E2F0(*(_QWORD *)(*a2 + 16), *(_QWORD *)(a3 + 32));
        v11 = 0xFFFFFFFFLL;
        v46 &= ~1u;
        v43 = v10;
        v45 = 0;
        sub_6A3820((__int64)&v45, -1, -1);
        goto LABEL_7;
      }
      v9 = **(_QWORD **)v7;
      v12 = v9;
    }
  }
  else
  {
    v9 = *(_QWORD *)(a3 + 40);
    v12 = v9;
  }
  v13 = sub_70E2F0(*(_QWORD *)(*a2 + 16), *(_QWORD *)(a3 + 32));
  v11 = v12;
  v46 &= ~1u;
  v43 = v13;
  v45 = 0;
  sub_6A3820((__int64)&v45, v12, v12);
  if ( !v9 )
  {
LABEL_20:
    sub_69F700(a1, (int *)&v45);
    *(_BYTE *)(a1 + 56) = 1;
    goto LABEL_11;
  }
LABEL_7:
  v14 = 0;
  while ( 2 )
  {
    v15 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
    switch ( *(_BYTE *)(v15 + 16) )
    {
      case 0:
      case 1:
      case 4:
      case 8:
      case 9:
      case 0xC:
      case 0x12:
      case 0x13:
      case 0x14:
      case 0x15:
      case 0x16:
      case 0x17:
      case 0x18:
      case 0x1C:
      case 0x1D:
      case 0x1F:
      case 0x24:
      case 0x25:
      case 0x27:
      case 0x2C:
      case 0x2D:
      case 0x31:
      case 0x34:
      case 0x36:
      case 0x37:
      case 0x38:
      case 0x39:
        sub_8442A0(
          v48,
          a2,
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a4);
        goto LABEL_15;
      case 2:
      case 3:
        sub_841FE0(
          v48,
          a2,
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a4);
        goto LABEL_15;
      case 5:
      case 6:
      case 7:
      case 0xA:
      case 0xB:
      case 0xF:
      case 0x10:
      case 0x11:
      case 0x19:
      case 0x1A:
      case 0x1B:
      case 0x1E:
      case 0x20:
      case 0x21:
      case 0x22:
      case 0x23:
      case 0x26:
      case 0x28:
      case 0x29:
      case 0x2A:
      case 0x2B:
      case 0x30:
      case 0x32:
      case 0x33:
        sub_8242A0(*a2, a2[2], v15 & 0xFFFFFFFFFFFFFFF0LL);
        goto LABEL_10;
      case 0xD:
        sub_8414A0(
          (__int64)v48,
          a2,
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a4,
          0);
        goto LABEL_15;
      case 0xE:
        sub_8438C0(
          v48,
          a2,
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a4);
        goto LABEL_15;
      case 0x2E:
        v40 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
        v17 = sub_B14A40(v40);
        v18 = v40;
        v19 = *(_QWORD *)(v17 + 128);
        v20 = 0;
        if ( v19 > 7 )
        {
          if ( (v19 & 4) != 0 )
          {
            v29 = *(_QWORD *)(v19 & 0xFFFFFFFFFFFFFFF8LL);
            v30 = *(_QWORD *)(v29 & 0xFFFFFFFFFFFFFFF0LL);
            v31 = *(_QWORD *)(v30 + 8);
            if ( (v31 & 7) != 0 || (v31 & 8) != 0 )
            {
              v32 = sub_B0CF30(v29, v11);
              v18 = v40;
              v20 = v32 & 0xFFFFFFFFFFFFFFF0LL;
            }
            else
            {
              v20 = v30 & 0xFFFFFFFFFFFFFFF0LL;
            }
          }
          else
          {
            v20 = v19 & 0xFFFFFFFFFFFFFFF0LL;
          }
        }
        sub_8414A0(
          (__int64)v48,
          a2,
          *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v20 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL),
          a4,
          v18);
        goto LABEL_15;
      case 0x2F:
        sub_842700(
          v48,
          a2,
          *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL),
          a4);
LABEL_15:
        if ( !v49 )
          goto LABEL_10;
        v11 = (__int64)v48;
        sub_6A01B0(v47 + 56LL * (unsigned int)v14, (__int64)v48);
        if ( v49 )
        {
          v49 = 0;
          if ( v48[0] > 1u )
            sub_69F740((__int64)v48);
        }
        ++v14;
        a4 += v43;
        if ( v14 == v9 )
          goto LABEL_20;
        continue;
      case 0x35:
        v21 = *a2;
        v41 = *(_QWORD *)(*(_QWORD *)&byte_8[*(_QWORD *)(a3 + 32) & 0xFFFFFFFFFFFFFFF0LL] & 0xFFFFFFFFFFFFFFF0LL);
        v22 = sub_AC6DA0(a2[2]);
        v23 = sub_A2E1A0(v21, v22, 2189, 0);
        v24 = (_QWORD *)v23;
        if ( !v23 )
          goto LABEL_10;
        v25 = *(unsigned __int8 **)v23;
        v26 = v41;
        if ( *(_QWORD *)v23 )
          goto LABEL_31;
        v33 = *(_QWORD *)(v23 + 8);
        v34 = *(_DWORD *)(v33 + 14976);
        if ( v34 )
        {
          v35 = (unsigned int)(v34 - 1);
          *(_DWORD *)(v33 + 14976) = v35;
          v25 = *(unsigned __int8 **)(v33 + 8 * v35 + 14848);
          v36 = *((unsigned int *)v25 + 134);
          *v25 = 0;
          v37 = *((_QWORD *)v25 + 66);
          *((_DWORD *)v25 + 106) = 0;
          v38 = v37 + (v36 << 6);
          while ( v37 != v38 )
          {
            while ( 1 )
            {
              v38 -= 64;
              v39 = *(void **)(v38 + 24);
              if ( v39 == (void *)(v38 + 40) )
                break;
              v42 = v26;
              operator delete(v39, *(_QWORD *)(v38 + 40) + 1LL);
              v26 = v42;
              if ( v37 == v38 )
                goto LABEL_43;
            }
          }
LABEL_43:
          *((_DWORD *)v25 + 134) = 0;
          goto LABEL_44;
        }
        v25 = (unsigned __int8 *)operator new(0x3A0u);
        *v25 = 0;
        *((_QWORD *)v25 + 12) = v25 + 112;
        *((_QWORD *)v25 + 16) = v25 + 144;
        *((_QWORD *)v25 + 20) = v25 + 176;
        *((_QWORD *)v25 + 24) = v25 + 208;
        *((_QWORD *)v25 + 28) = v25 + 240;
        *((_QWORD *)v25 + 32) = v25 + 272;
        *((_QWORD *)v25 + 36) = v25 + 304;
        *((_QWORD *)v25 + 40) = v25 + 336;
        *((_QWORD *)v25 + 44) = v25 + 368;
        *((_QWORD *)v25 + 48) = v25 + 400;
        *((_QWORD *)v25 + 13) = 0;
        v25[112] = 0;
        *((_QWORD *)v25 + 17) = 0;
        v25[144] = 0;
        *((_QWORD *)v25 + 21) = 0;
        v25[176] = 0;
        *((_QWORD *)v25 + 25) = 0;
        v25[208] = 0;
        *((_QWORD *)v25 + 29) = 0;
        v25[240] = 0;
        *((_QWORD *)v25 + 33) = 0;
        v25[272] = 0;
        *((_QWORD *)v25 + 37) = 0;
        v25[304] = 0;
        *((_QWORD *)v25 + 41) = 0;
        v25[336] = 0;
        *((_QWORD *)v25 + 45) = 0;
        v25[368] = 0;
        *((_QWORD *)v25 + 49) = 0;
        v25[400] = 0;
        *((_QWORD *)v25 + 52) = v25 + 432;
        v26 = v41;
        *((_QWORD *)v25 + 53) = 0x800000000LL;
        *((_QWORD *)v25 + 66) = v25 + 544;
        *((_QWORD *)v25 + 67) = 0x600000000LL;
LABEL_44:
        *v24 = v25;
LABEL_31:
        v25[*v25 + 1] = 8;
        v27 = (_BYTE *)*v24;
        v28 = *(unsigned __int8 *)*v24;
        *v27 = v28 + 1;
        *(_QWORD *)&v27[8 * v28 + 16] = v26 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_10:
        *(_BYTE *)(a1 + 56) = 0;
        break;
    }
    break;
  }
LABEL_11:
  if ( v45 > 1 )
    sub_69F740((__int64)&v45);
  return a1;
}

