__int64 __fastcall sub_741C0(__int128 a1, __int64 a2, double a3)
{
  __int64 v3; // r14
  int v5; // r12d
  unsigned __int16 v6; // ax
  int v7; // edx
  __int64 v8; // rbx
  __int64 v10; // rbx
  __int64 func; // r14
  __int64 v12; // rbx
  __int64 v13; // rax
  char v14; // dl
  unsigned __int8 byte; // bl
  char *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // ecx
  char v23; // al
  __int64 v24; // [rsp+0h] [rbp-448h] BYREF
  __int64 v25; // [rsp+8h] [rbp-440h] BYREF
  __int128 v26; // [rsp+10h] [rbp-438h] BYREF
  __int64 v27; // [rsp+20h] [rbp-428h]
  __int64 v28; // [rsp+28h] [rbp-420h]
  __int64 v29; // [rsp+30h] [rbp-418h]
  char v30; // [rsp+38h] [rbp-410h] BYREF
  __int64 v31; // [rsp+48h] [rbp-400h]
  char v32; // [rsp+178h] [rbp-2D0h] BYREF
  unsigned __int64 v33; // [rsp+418h] [rbp-30h]

  v3 = a1;
  *(_QWORD *)&a1 = a2;
  v33 = __readfsqword(0x28u);
  v24 = 0;
  v5 = sub_22C00(a2);
  v6 = *(_WORD *)(a2 + 24);
  if ( v6 > 0x2Eu )
  {
    switch ( *(_WORD *)(a2 + 24) )
    {
      case 0x56:
      case 0x57:
      case 0x58:
      case 0x59:
        v10 = sub_73080(v3, a2, 0);
        if ( v10 == -1 )
          goto LABEL_4;
        func = get_func();
        if ( *((_QWORD *)&a1 + 1) == func
          || func == 0
          || !*((_QWORD *)&a1 + 1)
          || (*(_BYTE *)(func + 16) & 1) != 0
          || *(_QWORD *)func != v10 )
        {
          goto LABEL_4;
        }
        v12 = sub_6DCD0(*((__int64 *)&a1 + 1), 0);
        v13 = sub_6DCD0(func, (char *)&v25);
        v7 = *(_DWORD *)(a2 + 28);
        v8 = v12 - v13;
        if ( !v8 )
          goto LABEL_6;
        if ( !(_BYTE)v25 )
          goto LABEL_5;
        goto LABEL_19;
      case 0x5C:
        v8 = 0;
        v7 = *(_DWORD *)(a2 + 28);
        if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 4 || *(_BYTE *)(a2 + 81) != 4 )
          goto LABEL_6;
        if ( *(_BYTE *)(a2 + 112) )
        {
          LODWORD(v17) = *(_BYTE *)(a2 + 113) & 7;
          if ( (v7 & 0x10) != 0 && (*(_BYTE *)(a2 + 33) & 1) != 0 )
            goto LABEL_6;
        }
        else
        {
          v17 = *(unsigned __int16 *)(a2 + 86);
          v22 = *(_DWORD *)(a2 + 28) & 0x1018;
          if ( v22 == 4096 || v22 == 8 )
          {
            if ( (_WORD)v17 == 0xFFFF )
              goto LABEL_100;
            if ( (unsigned __int16)v17 > 7u )
            {
              sub_69250(a1, *((_QWORD *)&a1 + 1), a3);
              return sub_74870();
            }
            LODWORD(v17) = dword_1598C0[v17];
          }
        }
        if ( (_DWORD)v17 != 4 )
        {
          if ( (_DWORD)v17 != 5 || !*((_QWORD *)&a1 + 1) )
            goto LABEL_5;
          v18 = sub_6DC80(*((__int64 *)&a1 + 1), a2 + 80);
          v8 = v18 - get_spd();
LABEL_72:
          v24 = v8;
          if ( (get_flags_ex() & 0xF000000) == 0xB000000 )
          {
            num_flag();
            set_op_type();
          }
LABEL_74:
          v7 = *(_DWORD *)(a2 + 28);
LABEL_19:
          if ( v5 > 3 && (v8 & 1) != 0 )
          {
            if ( v8 <= 0 )
              v8 &= ~1uLL;
            else
LABEL_22:
              ++v8;
          }
          goto LABEL_6;
        }
LABEL_100:
        v8 = *(_QWORD *)(a2 + 96);
        goto LABEL_72;
      case 0x5E:
        if ( !*((_QWORD *)&a1 + 1) )
          goto LABEL_15;
        *(_QWORD *)&a1 = v3;
        v20 = sub_31500(a1, 0, 0, 0, 0, 0, 0, 0);
        v7 = *(_DWORD *)(a2 + 28);
        v8 = v5 + v20;
        goto LABEL_19;
      case 0x7A:
        if ( !*((_QWORD *)&a1 + 1)
          || *(_BYTE *)(a2 + 41) != 1
          || *(_WORD *)(a2 + 46) != 4
          || *(_BYTE *)(a2 + 81) != 1
          || *(_WORD *)(a2 + 86) != 5 )
        {
          goto LABEL_4;
        }
        *(_QWORD *)&a1 = v3;
        v19 = sub_31500(a1, 0, &v25, 0, 0, 0, 0, 0);
        v7 = *(_DWORD *)(a2 + 28);
        v8 = v19 - v25;
        goto LABEL_19;
      case 0x86:
      case 0x8B:
      case 0x8C:
      case 0x8D:
      case 0x8E:
LABEL_15:
        v8 = v5;
        v7 = *(_DWORD *)(a2 + 28);
        if ( v5 <= 3 )
          v8 = 2;
        goto LABEL_6;
      case 0x87:
      case 0x88:
      case 0x89:
      case 0x8A:
        v7 = *(_DWORD *)(a2 + 28);
        v8 = 8 * v5;
        if ( v5 <= 3 )
          v8 = 16;
        goto LABEL_6;
      case 0x8F:
        v7 = *(_DWORD *)(a2 + 28);
        if ( (v7 & 8) == 0 )
          goto LABEL_24;
        byte = get_byte();
        if ( (unsigned __int8)(byte - 72) > 7u )
          goto LABEL_23;
        v27 = -1;
        v16 = &v30;
        v28 = 0;
        v29 = 0;
        v26 = -1;
        do
        {
          *(_WORD *)v16 = 0;
          v16 += 40;
          *((_WORD *)v16 - 19) = 0;
          *((_WORD *)v16 - 18) = 0;
          *((_DWORD *)v16 - 2) = 0;
          *((_WORD *)v16 - 17) = 0;
          *((_OWORD *)v16 - 2) = 0;
          *((_QWORD *)v16 - 2) = 0;
        }
        while ( v16 != &v32 );
        decode_insn();
        if ( (_WORD)v28 != 78
          || v31 != *(_QWORD *)(a2 + 8)
          || !(unsigned __int8)sub_73E00(v3, a2, (__int16)(byte - 72), &v25, 0) )
        {
          goto LABEL_23;
        }
        v7 = *(_DWORD *)(a2 + 28);
        v8 = -v5 * (v25 + 1);
        goto LABEL_6;
      case 0x90:
      case 0x91:
      case 0x92:
      case 0x93:
        v7 = *(_DWORD *)(a2 + 28);
        v8 = -16;
        if ( v5 > 3 )
          v8 = -8 * v5;
        goto LABEL_6;
      case 0x94:
      case 0x95:
      case 0x96:
      case 0x97:
LABEL_23:
        v7 = *(_DWORD *)(a2 + 28);
        goto LABEL_24;
      case 0xD1:
        goto LABEL_46;
      default:
        goto LABEL_4;
    }
  }
  if ( v6 <= 5u )
  {
LABEL_4:
    v7 = *(_DWORD *)(a2 + 28);
LABEL_5:
    v8 = 0;
  }
  else
  {
    switch ( *(_WORD *)(a2 + 24) )
    {
      case 6:
LABEL_46:
        if ( *(_BYTE *)(a2 + 41) != 1 || *(_WORD *)(a2 + 46) != 4 )
          goto LABEL_4;
        v14 = *(_BYTE *)(a2 + 81);
        if ( v14 == 5 )
        {
          v8 = *(_QWORD *)(a2 + 88);
        }
        else
        {
          if ( v14 != 1 )
          {
            if ( v6 != 209 )
              goto LABEL_4;
            v8 = 0;
            goto LABEL_52;
          }
          v23 = sub_73E00(v3, a2, *(unsigned __int16 *)(a2 + 86), &v24, 0);
          v8 = v24;
          if ( !v23 )
            goto LABEL_74;
          v6 = *(_WORD *)(a2 + 24);
        }
        if ( v6 != 209 )
          goto LABEL_74;
LABEL_52:
        v8 = -v8;
        v24 = v8;
        if ( sub_73FC0() == -1 )
          goto LABEL_74;
        v7 = *(_DWORD *)(a2 + 28);
        v8 = v25 * -v5;
        break;
      case 0x10:
        if ( *(_BYTE *)(a2 + 41) != 7 )
          goto LABEL_4;
        v8 = 0;
        v21 = sub_7F350(v3, a2, a2 + 40);
        v7 = *(_DWORD *)(a2 + 28);
        if ( v21 == *(_QWORD *)(a2 + 16) + *(unsigned __int16 *)(a2 + 26) )
        {
LABEL_24:
          v8 = -v5;
          if ( v5 <= 3 )
            v8 = -2;
        }
        break;
      case 0x22:
        v7 = *(_DWORD *)(a2 + 28);
        v8 = 0;
        if ( v5 == 2 && *(_BYTE *)(a2 + 41) == 1 )
          v8 = -(__int64)(*(_WORD *)(a2 + 46) == 4);
        break;
      case 0x24:
      case 0x25:
      case 0x26:
      case 0x27:
        v7 = *(_DWORD *)(a2 + 28);
        v8 = -(*(_QWORD *)(a2 + 48) + v5 + v5 * (*(_QWORD *)(a2 + 88) & 0x1FLL));
        goto LABEL_19;
      case 0x2C:
        v7 = *(_DWORD *)(a2 + 28);
        v8 = 0;
        if ( v5 == 2 && *(_BYTE *)(a2 + 41) == 1 )
          v8 = *(_WORD *)(a2 + 46) == 4;
        break;
      case 0x2E:
        if ( !sub_61E40(a2) || !(unsigned __int8)sub_61860(v3, (_QWORD *)a2, (__int64)&v26) )
          goto LABEL_4;
        v8 = (unsigned __int16)v26;
        v7 = *(_DWORD *)(a2 + 28);
        if ( v5 <= 3 || (v26 & 1) == 0 )
          break;
        goto LABEL_22;
      default:
        goto LABEL_4;
    }
  }
LABEL_6:
  if ( (v7 & 0x18) == 0 )
    return (__int16)v8;
  if ( (v7 & 8) != 0 )
    return (int)v8;
  return v8;
}
