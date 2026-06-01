void __fastcall sub_9CB080(__int64 a1, __int64 a2, std::ostream *a3, unsigned int a4, char a5)
{
  __int64 v6; // rbx
  unsigned __int8 v7; // al
  std::ostream *v8; // rdx
  size_t v9; // rax
  __int64 v10; // r13
  __int64 v11; // rax
  __int64 v12; // rsi
  __int64 v13; // rax
  unsigned __int8 v14; // cl
  char *v15; // rsi
  __int64 v16; // r13
  __int64 v17; // rax
  std::ostream *v18; // rax
  __int64 v19; // rsi
  std::ostream *v20; // rdi
  __int64 v21; // r12
  __int64 v22; // rbx
  int v23; // r12d
  __int64 v24; // rbx
  __int64 *v25; // r13
  __int64 v26; // r15
  __int64 v27; // rbx
  unsigned __int64 v28; // r14
  __int64 *v29; // rax
  __int64 *v30; // r13
  __int64 *i; // rbx
  __int64 v32; // rsi
  size_t v33; // rax
  const char *v34; // rax
  __int64 v35; // rdx
  __int64 v36; // rax
  __int64 v37; // rsi
  const char *v38; // rax
  __int64 v39; // rdx
  __int64 v40; // rsi
  _BYTE *v41; // rsi
  char v42; // dl
  unsigned __int16 v43; // ax
  size_t v44; // rax
  __int64 v45; // rax
  void *v46[2]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v47; // [rsp+10h] [rbp-48h] BYREF

  if ( !a2 )
  {
    std::operator<<<std::char_traits<char>>(a3, "#null");
    return;
  }
  v6 = a2;
  v7 = *(_BYTE *)a2;
  if ( a5 && *(_QWORD *)(a2 + 8) )
  {
    if ( v7 != 5 )
    {
      v9 = j__strlen("_x");
      std::__ostream_insert<char,std::char_traits<char>>(a3, "_x", v9);
      std::ostream::_M_insert<unsigned long>(a3, *(unsigned int *)(a2 + 4));
      return;
    }
LABEL_5:
    if ( a4 >= dword_23DB780[v7] )
      goto LABEL_6;
LABEL_9:
    std::operator<<<std::char_traits<char>>(a3, "(");
    v8 = a3;
LABEL_10:
    sub_9CB080(a1, a2, v8, 6, 1);
LABEL_11:
    std::operator<<<std::char_traits<char>>(a3, ")");
    return;
  }
  if ( v7 <= 0x1Eu )
    goto LABEL_5;
  if ( a4 < 6 )
    goto LABEL_9;
LABEL_6:
  switch ( *(_BYTE *)a2 )
  {
    case 0:
      goto LABEL_16;
    case 1:
      std::operator<<<std::char_traits<char>>(a3, "#undefined");
      return;
    case 2:
      std::operator<<<std::char_traits<char>>(a3, "*");
      return;
    case 3:
      if ( *(_QWORD *)(a2 + 24) )
      {
        sub_9DD420(v46);
        goto LABEL_26;
      }
      v14 = *(_BYTE *)(a2 + 17);
      switch ( *(_BYTE *)(a2 + 16) )
      {
        case 0:
          std::operator<<<std::char_traits<char>>(a3, "void");
          break;
        case 1:
          if ( *(_BYTE *)(a2 + 32) )
            std::operator<<<std::char_traits<char>>(a3, "true");
          else
            std::operator<<<std::char_traits<char>>(a3, "false");
          break;
        case 2:
          v42 = *(_BYTE *)(a2 + 18);
          if ( v14 == 3 )
          {
            v43 = *(_WORD *)(a2 + 32);
            if ( v42 )
              std::ostream::operator<<(a3, (unsigned int)(__int16)v43);
            else
              std::ostream::_M_insert<unsigned long>(a3, v43);
          }
          else if ( v14 <= 3u )
          {
            if ( v14 != 2 )
              goto LABEL_108;
            if ( v42 )
            {
              LOBYTE(v46[0]) = *(_BYTE *)(a2 + 32);
              std::__ostream_insert<char,std::char_traits<char>>(a3, v46, 1);
            }
            else
            {
              v44 = j__strlen("'");
              std::__ostream_insert<char,std::char_traits<char>>(a3, "'", v44);
              LOBYTE(v46[0]) = *(_BYTE *)(a2 + 32);
              v45 = std::__ostream_insert<char,std::char_traits<char>>(a3, v46, 1);
              std::operator<<<std::char_traits<char>>(v45, "'");
            }
          }
          else if ( v14 == 4 )
          {
            if ( v42 )
              std::ostream::operator<<(a3, *(unsigned int *)(a2 + 32));
            else
              std::ostream::_M_insert<unsigned long>(a3, *(unsigned int *)(a2 + 32));
          }
          else
          {
            if ( v14 != 5 )
              goto LABEL_108;
            v19 = *(_QWORD *)(a2 + 32);
            v20 = a3;
            if ( !v42 )
              goto LABEL_49;
            std::ostream::_M_insert<long>(a3, v19);
          }
          break;
        case 3:
          if ( v14 == 4 )
          {
            std::ostream::_M_insert<double>(a3, *(float *)(a2 + 32));
          }
          else
          {
            if ( v14 != 5 )
              goto LABEL_108;
            std::ostream::_M_insert<double>(a3, *(double *)(a2 + 32));
          }
          break;
        case 4:
          std::operator<<<std::char_traits<char>>(a3, "\"");
          std::ostream::write(a3, *(const char **)(a2 + 32), *(_QWORD *)(a2 + 40));
          std::operator<<<std::char_traits<char>>(a3, "\"");
          break;
        case 5:
          std::operator<<<std::char_traits<char>>(a3, "#ptr");
          break;
        case 6:
          std::operator<<<std::char_traits<char>>(a3, "#vref");
          break;
        default:
LABEL_108:
          std::operator<<<std::char_traits<char>>(a3, "#lit");
          break;
      }
      break;
    case 4:
      v13 = *(_QWORD *)(a2 + 16);
      if ( v13 )
      {
        sub_B86A00(v46, v13 + 40);
LABEL_26:
        std::__ostream_insert<char,std::char_traits<char>>(a3, v46[0], v46[1]);
        if ( v46[0] != &v47 )
          operator delete(v46[0]);
      }
      else
      {
        std::operator<<<std::char_traits<char>>(a3, "<temporary>");
      }
      break;
    case 5:
      if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(a2 + 2) == 2 )
      {
        std::operator<<<std::char_traits<char>>(a3, "this");
      }
      else
      {
        v18 = (std::ostream *)std::ostream::write(a3, *(const char **)(a2 + 16), *(_QWORD *)(a2 + 24));
        v19 = *(unsigned int *)(a2 + 4);
        v20 = v18;
LABEL_49:
        std::ostream::_M_insert<unsigned long>(v20, v19);
      }
      return;
    case 6:
      sub_9CE8F0(a1, a2, a3, 0);
      return;
    case 7:
      std::operator<<<std::char_traits<char>>(a3, "@");
      v16 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(v16 + 2) == 2 )
      {
        std::operator<<<std::char_traits<char>>(a3, "this");
      }
      else
      {
        v17 = std::ostream::write(a3, *(const char **)(v16 + 16), *(_QWORD *)(v16 + 24));
        std::ostream::_M_insert<unsigned long>(v17, *(unsigned int *)(v16 + 4));
      }
      v15 = " ";
      goto LABEL_39;
    case 8:
      std::operator<<<std::char_traits<char>>(a3, ": ");
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 4, 1);
      v15 = " -> ";
      goto LABEL_39;
    case 9:
      std::operator<<<std::char_traits<char>>(a3, ": ");
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 4, 1);
      v15 = " = ";
LABEL_39:
      std::operator<<<std::char_traits<char>>(a3, v15);
      sub_9CB080(a1, *(_QWORD *)(v6 + 24), a3, 5, 1);
      return;
    case 0xA:
      sub_9CEA30(a1, a2, a3, 0);
      return;
    case 0xB:
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 1, 1);
      if ( !*(_QWORD *)(a2 + 24) )
        return;
      std::operator<<<std::char_traits<char>>(a3, "@(");
      a2 = *(_QWORD *)(a2 + 24);
      v8 = a3;
      if ( !a2 )
        a2 = *(_QWORD *)(v6 + 16);
      goto LABEL_10;
    case 0xC:
      sub_9CBCE0(a1, a2, a3);
      return;
    case 0xD:
      v41 = *(_BYTE **)(a2 + 16);
      if ( *v41 == 10 )
      {
        sub_9CEA30(a1, v41, a3, 1);
        std::operator<<<std::char_traits<char>>(a3, ")");
      }
      else
      {
        sub_9CB080(a1, v41, a3, 1, 1);
        std::operator<<<std::char_traits<char>>(a3, "()");
      }
      return;
    case 0xE:
      std::operator<<<std::char_traits<char>>(a3, "new ");
      v40 = *(_QWORD *)(a2 + 16);
      goto LABEL_77;
    case 0xF:
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 1, 1);
      if ( !*(_BYTE *)(a1 + 2) )
        std::operator<<<std::char_traits<char>>(a3, "^");
      return;
    case 0x10:
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 3, 1);
      std::operator<<<std::char_traits<char>>(a3, " := ");
      v40 = *(_QWORD *)(a2 + 24);
LABEL_77:
      sub_9CB080(a1, v40, a3, 3, 1);
      return;
    case 0x11:
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 1, 1);
      std::operator<<<std::char_traits<char>>(a3, "[");
      sub_9CB080(a1, *(_QWORD *)(a2 + 24), a3, 6, 1);
      std::operator<<<std::char_traits<char>>(a3, "]");
      return;
    case 0x12:
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 1, 1);
      std::operator<<<std::char_traits<char>>(a3, " + ");
LABEL_16:
      sub_9CB080(a1, *(_QWORD *)(a2 + 24), a3, 0, 1);
      return;
    case 0x13:
      v38 = (const char *)sub_9E1440(*(unsigned __int8 *)(a2 + 2));
      std::ostream::write(a3, v38, v39);
      v37 = *(_QWORD *)(a2 + 16);
      goto LABEL_73;
    case 0x14:
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 2, 1);
      v33 = j__strlen(" ");
      std::__ostream_insert<char,std::char_traits<char>>(a3, " ", v33);
      v34 = (const char *)sub_9E1490(*(unsigned __int8 *)(a2 + 2));
      v36 = std::ostream::write(a3, v34, v35);
      std::operator<<<std::char_traits<char>>(v36, " ");
      v37 = *(_QWORD *)(a2 + 24);
      goto LABEL_73;
    case 0x15:
      sub_9CEAE0(a1, a2, a3);
      return;
    case 0x16:
      std::operator<<<std::char_traits<char>>(a3, "CFG {\n");
      v29 = *(__int64 **)(a2 + 24);
      v30 = &v29[*(_QWORD *)(a2 + 32)];
      for ( i = v29; v30 != i; ++i )
      {
        v32 = *i;
        sub_9CAF30(a1, v32, a3);
      }
      std::operator<<<std::char_traits<char>>(a3, "}");
      std::operator<<<std::char_traits<char>>(a3, "\n");
      return;
    case 0x17:
      sub_9CAF30(a1, a2, a3);
      return;
    case 0x18:
      std::operator<<<std::char_traits<char>>(a3, "phi(");
      if ( *(_WORD *)(a2 + 2) == 1 )
      {
        sub_9CB080(a1, **(_QWORD **)(a2 + 16), a3, 6, 1);
      }
      else
      {
        v25 = *(__int64 **)(a2 + 16);
        if ( v25 != &v25[*(_QWORD *)(a2 + 24)] )
        {
          v26 = *v25;
          v27 = 0;
          v28 = (unsigned __int64)(8LL * *(_QWORD *)(a2 + 24) - 8) >> 3;
          while ( 1 )
          {
            sub_9CB080(a1, v26, a3, 6, 1);
            if ( v27 == v28 )
              break;
            v26 = v25[v27 + 1];
            if ( (_DWORD)v27 != -1 )
              std::operator<<<std::char_traits<char>>(a3, ", ");
            ++v27;
          }
        }
      }
      goto LABEL_11;
    case 0x19:
      std::operator<<<std::char_traits<char>>(a3, "goto ");
      v23 = *(_DWORD *)(a2 + 24);
      v24 = *(_QWORD *)(a2 + 16);
      if ( !v24 )
        goto LABEL_99;
      std::operator<<<std::char_traits<char>>(a3, "BB_");
      std::ostream::operator<<(a3, *(_DWORD *)(v24 + 32) & 0x7FFFFFFF);
      if ( v23 >= 0 )
      {
        std::operator<<<std::char_traits<char>>(a3, ":");
        std::ostream::operator<<(a3, (unsigned int)v23);
      }
      return;
    case 0x1A:
      std::operator<<<std::char_traits<char>>(a3, "branch (");
      sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 6, 1);
      std::operator<<<std::char_traits<char>>(a3, ") ");
      v21 = *(_QWORD *)(a2 + 24);
      if ( v21 )
      {
        std::operator<<<std::char_traits<char>>(a3, "BB_");
        std::ostream::operator<<(a3, *(_DWORD *)(v21 + 32) & 0x7FFFFFFF);
      }
      else
      {
        std::operator<<<std::char_traits<char>>(a3, "BB_null");
      }
      std::operator<<<std::char_traits<char>>(a3, " ");
      v22 = *(_QWORD *)(a2 + 32);
      if ( v22 )
      {
        std::operator<<<std::char_traits<char>>(a3, "BB_");
        std::ostream::operator<<(a3, *(_DWORD *)(v22 + 32) & 0x7FFFFFFF);
      }
      else
      {
LABEL_99:
        std::operator<<<std::char_traits<char>>(a3, "BB_null");
      }
      return;
    case 0x1B:
      std::operator<<<std::char_traits<char>>(a3, "return ");
      v12 = *(_QWORD *)(a2 + 16);
      goto LABEL_21;
    case 0x1C:
      std::ostream::write(a3, *(const char **)(a2 + 16), *(_QWORD *)(a2 + 24));
      return;
    case 0x1D:
      if ( *(_BYTE *)(a1 + 2) )
      {
        sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 2, 1);
        std::operator<<<std::char_traits<char>>(a3, " ? ");
        sub_9CB080(a1, *(_QWORD *)(a2 + 24), a3, 2, 1);
        std::operator<<<std::char_traits<char>>(a3, " : ");
        v37 = *(_QWORD *)(a2 + 32);
LABEL_73:
        sub_9CB080(a1, v37, a3, 2, 1);
      }
      else
      {
        std::operator<<<std::char_traits<char>>(a3, "if (");
        sub_9CB080(a1, *(_QWORD *)(a2 + 16), a3, 6, 1);
        std::operator<<<std::char_traits<char>>(a3, ") then ");
        sub_9CB080(a1, *(_QWORD *)(a2 + 24), a3, 4, 1);
        std::operator<<<std::char_traits<char>>(a3, " else ");
        v12 = *(_QWORD *)(a2 + 32);
LABEL_21:
        sub_9CB080(a1, v12, a3, 4, 1);
      }
      return;
    case 0x1E:
      std::operator<<<std::char_traits<char>>(a3, "let ");
      v10 = *(_QWORD *)(a2 + 16);
      if ( *(_BYTE *)(a1 + 2) && *(_WORD *)(v10 + 2) == 2 )
      {
        std::operator<<<std::char_traits<char>>(a3, "this");
      }
      else
      {
        v11 = std::ostream::write(a3, *(const char **)(v10 + 16), *(_QWORD *)(v10 + 24));
        std::ostream::_M_insert<unsigned long>(v11, *(unsigned int *)(v10 + 4));
      }
      std::operator<<<std::char_traits<char>>(a3, " = ");
      sub_9CB080(a1, *(_QWORD *)(*(_QWORD *)(a2 + 16) + 32LL), a3, 4, 1);
      std::operator<<<std::char_traits<char>>(a3, "; ");
      v12 = *(_QWORD *)(a2 + 24);
      goto LABEL_21;
    default:
      return;
  }
}
