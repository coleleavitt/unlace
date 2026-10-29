__int64 __fastcall sub_690DD0(__int64 a1, __int64 a2, __int64 a3)
{
  unsigned __int64 v3; // rax
  __int64 v6; // rbx
  int v7; // r12d
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  __int64 v11; // rdi
  char v12; // al
  __int64 v13; // r14
  __int64 v14; // rax
  unsigned __int16 v15; // ax
  __int64 v16; // rax
  unsigned __int64 v17; // rcx
  __int64 v18; // rax
  unsigned __int64 v19; // rcx
  __int64 v20; // rdx
  unsigned __int64 v21; // rdx
  __int64 v22; // rsi
  __int64 v23; // rax
  unsigned __int64 v24; // rax
  __int64 v25; // rsi
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // rax
  unsigned __int64 v29; // [rsp+0h] [rbp-48h]
  unsigned __int64 v30; // [rsp+8h] [rbp-40h]
  unsigned __int64 v31; // [rsp+8h] [rbp-40h]

  v3 = a2 & 0xFFFFFFFFFFFFFFF8LL;
  v6 = a2;
  if ( !a3 )
  {
    if ( v3 <= 0xF )
      goto LABEL_3;
    v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
LABEL_20:
    v14 = *(_QWORD *)v9;
    if ( *(_QWORD *)v9 )
    {
      switch ( *(_BYTE *)(v14 + 16) )
      {
        case 2:
          v7 = 112;
          break;
        case 4:
          v7 = 116;
          break;
        case 5:
          v7 = 114;
          break;
        case 6:
          v7 = 115;
          break;
        case 7:
          v7 = 177;
          break;
        case 8:
          v7 = 163;
          break;
        case 9:
          v7 = 178;
          break;
        case 0xB:
          v7 = 102;
          break;
        case 0xD:
          v15 = (*(_WORD *)(v14 + 18) >> 3) & 0x1FF;
          if ( v15 > 0x1F1u )
            goto LABEL_22;
          v7 = *((unsigned __int8 *)qword_3C8C260 + v15);
          if ( !*((_BYTE *)qword_3C8C260 + v15) )
            goto LABEL_3;
          break;
        case 0xE:
          v7 = 100;
          break;
        case 0x10:
          v7 = 118;
          break;
        case 0x18:
          v7 = 119;
          break;
        case 0x19:
          v7 = 110;
          break;
        case 0x1A:
          v7 = 111;
          break;
        case 0x20:
          v7 = 117;
          break;
        case 0x21:
          v7 = 109;
          break;
        case 0x22:
          v7 = 161;
          break;
        case 0x23:
          v7 = 108;
          break;
        case 0x24:
          v7 = 162;
          break;
        case 0x28:
          v7 = 120;
          break;
        case 0x29:
          v7 = 101;
          break;
        case 0x2A:
          v7 = 103;
          break;
        case 0x2B:
          v7 = 104;
          break;
        case 0x2D:
          v7 = 183;
          break;
        case 0x2E:
          v7 = 106;
          break;
        case 0x2F:
          v7 = 105;
          break;
        case 0x30:
          v7 = 181;
          break;
        case 0x31:
          v7 = 182;
          break;
        case 0x32:
          v7 = 185;
          break;
        case 0x33:
          v7 = 184;
          break;
        case 0x34:
          v7 = 107;
          break;
        case 0x38:
          v7 = 113;
          break;
        case 0x39:
          v7 = 176;
          break;
        default:
LABEL_22:
          v7 = 1;
          break;
      }
      goto LABEL_4;
    }
    goto LABEL_3;
  }
  if ( v3 > 0xF )
  {
    v9 = a2 & 0xFFFFFFFFFFFFFFF0LL;
    v10 = sub_B0FD00(*(_QWORD *)(a2 & 0xFFFFFFFFFFFFFFF0LL));
    if ( v10 )
    {
      if ( (*(_BYTE *)(a3 + 49) & 0x10) == 0 )
      {
        sub_690DD0(a1, *(_QWORD *)(v10 + 48), a3);
        return a1;
      }
      v11 = *(_QWORD *)v9;
      v12 = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
      if ( v12 == 9 )
      {
LABEL_9:
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 39 )
        {
          v11 = sub_B0D320(v11);
          if ( v11 )
            goto LABEL_31;
          v11 = *(_QWORD *)v9;
        }
        v7 = 0;
        v13 = *(_QWORD *)(*(_QWORD *)(a3 + 8) + 80LL);
        if ( (*(_BYTE *)(*(_QWORD *)(v13 + 2160) + 2LL) & 4) != 0 )
        {
          v16 = *(_QWORD *)(v11 + 8);
          if ( (v16 & 7) != 0 || (v16 & 8) != 0 )
          {
            v29 = sub_B0CF30(a2, a2) & 0xFFFFFFFFFFFFFFF0LL;
            v17 = v29;
          }
          else
          {
            v29 = v11 & 0xFFFFFFFFFFFFFFF0LL;
            v17 = v11 & 0xFFFFFFFFFFFFFFF0LL;
          }
          if ( *(_BYTE *)(*(_QWORD *)v17 + 16LL) == 24 )
            v17 = *(_QWORD *)(*(_QWORD *)v17 + 40LL);
          v30 = v17;
          v18 = sub_6DF880(v13);
          v19 = v30;
          v20 = *(_QWORD *)(v18 + 48);
          if ( v20 )
          {
            v21 = v20 & 0xFFFFFFFFFFFFFFF0LL;
          }
          else
          {
            v28 = sub_6E8D60(v13, v18);
            v19 = v30;
            v21 = v28;
          }
          v7 = 27;
          if ( v19 != v21 )
          {
            v31 = v29;
            if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) == 24 )
              v31 = *(_QWORD *)(*(_QWORD *)v29 + 40LL);
            v22 = sub_6DF820(v13);
            v23 = *(_QWORD *)(v22 + 48);
            if ( v23 )
              v24 = v23 & 0xFFFFFFFFFFFFFFF0LL;
            else
              v24 = sub_6E8D60(v13, v22);
            v7 = 28;
            if ( v31 != v24 )
            {
              if ( *(_BYTE *)(*(_QWORD *)v29 + 16LL) == 24 )
                v29 = *(_QWORD *)(*(_QWORD *)v29 + 40LL);
              v25 = sub_6CC370(v13);
              v26 = *(_QWORD *)(v25 + 48);
              if ( v26 )
                v27 = v26 & 0xFFFFFFFFFFFFFFF0LL;
              else
                v27 = sub_6E8D60(v13, v25);
              v7 = 29;
              if ( v29 != v27 )
                v7 = 0;
            }
          }
          v11 = *(_QWORD *)v9;
        }
        if ( *(_BYTE *)(v11 + 16) != 1
          && (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) != 1
           || (v11 = sub_B0D320(v11)) == 0) )
        {
          if ( v7 )
            goto LABEL_4;
          goto LABEL_20;
        }
LABEL_31:
        sub_690DD0(a1, *(_QWORD *)(v11 + 32), a3);
        return a1;
      }
    }
    else
    {
      v11 = *(_QWORD *)v9;
      v12 = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
      if ( v12 == 9 )
      {
        if ( (*(_BYTE *)(a3 + 49) & 0x10) == 0 )
          goto LABEL_31;
        goto LABEL_9;
      }
    }
    if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(v11 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) == 9 )
    {
      v11 = sub_B0D320(v11);
      if ( v11 && (*(_BYTE *)(a3 + 49) & 0x10) == 0 )
        goto LABEL_31;
      v11 = *(_QWORD *)v9;
      v12 = *(_BYTE *)(*(_QWORD *)v9 + 16LL);
    }
    if ( v12 == 39 )
      goto LABEL_31;
    goto LABEL_9;
  }
LABEL_3:
  v7 = 0;
  v6 = 0;
LABEL_4:
  *(_DWORD *)a1 = v7;
  *(_QWORD *)(a1 + 8) = v6;
  *(_QWORD *)(a1 + 16) = a3;
  return a1;
}

