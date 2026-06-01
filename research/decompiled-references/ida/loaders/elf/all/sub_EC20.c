const char *__fastcall sub_EC20(__int64 a1, const char *a2, double a3, double a4)
{
  const char *v4; // r12
  int v5; // r15d
  __int64 v6; // r13
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned __int64 qword; // kr00_8
  unsigned __int32 v11; // ebx
  unsigned __int64 v12; // rcx
  __int64 v14; // rdx
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  unsigned __int64 v19; // r15
  unsigned __int64 v20; // rax
  int v21; // r9d
  int v22; // ecx
  unsigned __int64 dword; // r13
  char v24; // al
  __int16 v25; // cx
  int v26; // eax
  __int64 v27; // r8
  __int64 v28; // r10
  unsigned __int64 v29; // r15
  unsigned __int64 v30; // rax
  unsigned __int64 v31; // rdx
  unsigned int v32; // [rsp+0h] [rbp-48h]
  __int16 v33; // [rsp+0h] [rbp-48h]
  __int64 v34; // [rsp+0h] [rbp-48h]
  __int64 v35; // [rsp+8h] [rbp-40h]

  v4 = *(const char **)(a2 + 4);
  v5 = *(_DWORD *)a2;
  v6 = *(_QWORD *)(a2 + 20);
  v7 = *(_QWORD *)(a2 + 12);
  qword = get_qword(v4);
  v11 = qword;
  v12 = qword;
  switch ( (char)v5 )
  {
    case 0:
      return &byte_4;
    case 1:
      v21 = 4;
      LODWORD(v12) = v6 + qword;
      goto LABEL_16;
    case 2:
      LODWORD(v12) = v6 + qword;
      v21 = 12;
      goto LABEL_16;
    case 3:
      v21 = 4;
      v26 = qword ^ (v6 + qword);
      LODWORD(v6) = qword + v6;
      LODWORD(v12) = qword ^ v26;
      goto LABEL_16;
    case 4:
      v22 = qword ^ (unsigned __int16)(qword ^ (v6 + qword));
      LODWORD(v6) = (unsigned __int16)qword + (_DWORD)v6;
      goto LABEL_20;
    case 5:
      return nullptr;
    case 6:
      if ( v7 || v6 != 4 )
        return "Non standard .got displacement relocation";
      dword = (unsigned int)get_dword(v4 + 4, a2, v8, qword, v9);
      v24 = getinf_flag(3, 32);
      v25 = qword;
      if ( v24 )
      {
        v11 = _byteswap_ulong(qword);
        v25 = v11;
        dword = _byteswap_ulong(dword);
      }
      if ( v11 >> 26 != 9 || dword >> 26 != 8 )
        return "Non standard .got displacement relocation";
      v33 = v25;
      append_cmt(v4, "Load hi .got displacement", 0);
      append_cmt(v4 + 4, "Load low .got displacement", 0);
      if ( v33 )
        goto LABEL_31;
      if ( (_WORD)dword )
      {
        if ( (unsigned __int16)dword == 4 )
        {
          del_items(v4 - 4, 0, 4, 0);
          create_insn(v4 - 4, 0);
        }
        else
        {
LABEL_31:
          sub_EAA0((__int64)"%a: non standard .got displacement offset!\n", a3);
        }
      }
LABEL_21:
      create_insn(v4, 0);
      return nullptr;
    case 7:
      v27 = 0x1FFFFF;
      v28 = -2097152;
      v29 = v6 - 4 - (_QWORD)v4;
      goto LABEL_36;
    case 8:
      v29 = v6;
      v27 = 0x3FFF;
      v28 = -16384;
LABEL_36:
      if ( (v29 & 3) != 0 )
      {
        v35 = v27;
        v34 = v28;
        sub_EAA0((__int64)"%a: %s %a\n", a3, v4, a4);
        a2 = "non aligned relative relocation address";
        append_cmt(v4, "non aligned relative relocation address", 0);
        v27 = v35;
        v28 = v34;
      }
      v30 = v27 & ((v29 >> 2) + qword);
      v31 = v30 ^ ((unsigned __int64)(v4 + 4) >> 2);
      if ( (v28 & v31) != 0 )
        sub_EB70((__int64)"Offset in 16/23bit relocation too big", a2, v31, v12);
      v22 = v30 | qword & v28;
LABEL_20:
      sub_42050(a1, (_DWORD)v4, v7, v22, v6 - v7, 4, 0, 0, 0);
      goto LABEL_21;
    case 9:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 19:
    case 20:
    case 21:
    case 22:
    case 23:
    case 24:
      return (_BYTE *)(&dword_0 + 3);
    case 10:
      v21 = 4;
      LODWORD(v12) = qword + v6 - (_DWORD)v4;
      goto LABEL_16;
    case 11:
      v21 = 12;
      LODWORD(v12) = v6 - (_DWORD)v4 + qword;
      goto LABEL_16;
    case 25:
      sub_42050(a1, (_DWORD)v4, v7, v6, v6 - v7, 12, 0, 0, 0);
      return nullptr;
    case 26:
      v14 = *(_QWORD *)(a1 + 348);
      if ( v14 )
      {
        v15 = *(_QWORD *)(v14 + 16);
        if ( qword >= v15 + 16 && *(_QWORD *)(v14 + 32) + v15 - 16 >= qword )
        {
          v32 = get_dword(qword, a2, v14, v15 + 16, v9);
          v19 = (unsigned int)get_dword(qword + 4, a2, v16, v17, v18);
          if ( (unsigned __int8)getinf_flag(3, 32) )
          {
            v19 = _byteswap_ulong(v19);
            v20 = _byteswap_ulong(v32);
          }
          else
          {
            v20 = v32;
          }
          if ( v20 >> 26 == 9 && v19 >> 26 == 8 )
          {
            del_items(qword, 0, 8, 0);
            create_insn(qword, 0);
            sub_E890(qword, 1u, (__int64)"call .got entry (%a)", a3);
            add_dref(qword, v4, 5);
          }
        }
      }
      LODWORD(v12) = v6;
      v21 = 12;
      goto LABEL_16;
    case 27:
      LODWORD(v6) = qword;
      v21 = 4;
LABEL_16:
      sub_42050(a1, (_DWORD)v4, v7, v12, v6 - v7, v21, 0, 0, 0);
      return nullptr;
    default:
      return (_BYTE *)(&dword_0 + 2);
  }
}

