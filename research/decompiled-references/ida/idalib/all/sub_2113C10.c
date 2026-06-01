__int64 __fastcall sub_2113C10(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rbx
  void *v7; // rdx
  __int64 v8; // rax
  _WORD *v9; // rdi
  __int64 v10; // r13
  unsigned __int64 v11; // r14
  const void *v12; // rsi
  unsigned __int64 v13; // rax
  int v14; // edx
  _BYTE *v15; // rax
  unsigned __int64 v16; // rcx
  int v17; // edx
  _BYTE *v18; // rax
  unsigned __int64 v19; // rcx
  char *v20; // rax
  char *v21; // rdx
  __int64 v22; // rax
  __int64 v23; // rdx
  __int64 v25; // rdi
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rsi
  __int64 v29; // rax
  __int64 v30; // rdi
  _BYTE *v31; // rax
  unsigned __int64 v32; // rax
  _BYTE *v33; // rdi
  const void *v34; // rsi
  size_t v35; // rbp

  v6 = a4;
  if ( *(_QWORD *)(a1 + 184) || *(_DWORD *)(a1 + 196) != -1 )
    goto LABEL_2;
  v22 = *(_QWORD *)(a1 + 160);
  v23 = *(_QWORD *)(a1 + 152);
  if ( v22 != 5 )
  {
    if ( v22 == 4 && *(_DWORD *)v23 == 1936941614 )
      goto LABEL_98;
LABEL_2:
    v7 = *(void **)(a4 + 32);
    if ( *(_QWORD *)(a4 + 24) - (_QWORD)v7 > 9u )
    {
      v10 = a4;
      qmemcpy(v7, "\t.section\t", 10);
      v9 = (_WORD *)(*(_QWORD *)(a4 + 32) + 10LL);
      *(_QWORD *)(a4 + 32) = v9;
    }
    else
    {
      v8 = sub_227BF10(a4, "\t.section\t", 10);
      v9 = *(_WORD **)(v8 + 32);
      v10 = v8;
    }
    v11 = *(_QWORD *)(a1 + 160);
    v12 = *(const void **)(a1 + 152);
    v13 = *(_QWORD *)(v10 + 24) - (_QWORD)v9;
    if ( v11 > v13 )
    {
      v27 = sub_227BF10(v10, v12, *(_QWORD *)(a1 + 160));
      v9 = *(_WORD **)(v27 + 32);
      v10 = v27;
      if ( *(_QWORD *)(v27 + 24) - (_QWORD)v9 <= 1u )
      {
LABEL_8:
        sub_227BF10(v10, ",\"", 2);
        goto LABEL_9;
      }
    }
    else
    {
      if ( v11 )
      {
        memcpy(v9, v12, *(_QWORD *)(a1 + 160));
        v29 = *(_QWORD *)(v10 + 24);
        v9 = (_WORD *)(v11 + *(_QWORD *)(v10 + 32));
        *(_QWORD *)(v10 + 32) = v9;
        v13 = v29 - (_QWORD)v9;
      }
      if ( v13 <= 1 )
        goto LABEL_8;
    }
    *v9 = 8748;
    *(_QWORD *)(v10 + 32) += 2LL;
LABEL_9:
    v14 = *(_DWORD *)(a1 + 172);
    v15 = *(_BYTE **)(v6 + 32);
    v16 = *(_QWORD *)(v6 + 24);
    if ( (v14 & 0x40) != 0 )
    {
      if ( (unsigned __int64)v15 >= v16 )
      {
        sub_227BA10(v6, 100);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v15 + 1;
        *v15 = 100;
      }
      v14 = *(_DWORD *)(a1 + 172);
      v15 = *(_BYTE **)(v6 + 32);
      v16 = *(_QWORD *)(v6 + 24);
    }
    if ( (v14 & 0x80u) != 0 )
    {
      if ( v16 <= (unsigned __int64)v15 )
      {
        sub_227BA10(v6, 98);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v15 + 1;
        *v15 = 98;
      }
      v14 = *(_DWORD *)(a1 + 172);
      v15 = *(_BYTE **)(v6 + 32);
      v16 = *(_QWORD *)(v6 + 24);
    }
    if ( (v14 & 0x20000000) != 0 )
    {
      if ( v16 <= (unsigned __int64)v15 )
      {
        sub_227BA10(v6, 120);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v15 + 1;
        *v15 = 120;
      }
      v14 = *(_DWORD *)(a1 + 172);
      v15 = *(_BYTE **)(v6 + 32);
      v16 = *(_QWORD *)(v6 + 24);
    }
    if ( v14 < 0 )
    {
      if ( (unsigned __int64)v15 >= v16 )
      {
        sub_227BA10(v6, 119);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v15 + 1;
        *v15 = 119;
      }
    }
    else if ( (v14 & 0x40000000) != 0 )
    {
      if ( (unsigned __int64)v15 >= v16 )
      {
        sub_227BA10(v6, 114);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v15 + 1;
        *v15 = 114;
      }
    }
    else if ( (unsigned __int64)v15 >= v16 )
    {
      sub_227BA10(v6, 121);
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v15 + 1;
      *v15 = 121;
    }
    v17 = *(_DWORD *)(a1 + 172);
    v18 = *(_BYTE **)(v6 + 32);
    v19 = *(_QWORD *)(v6 + 24);
    if ( (v17 & 0x800) != 0 )
    {
      if ( (unsigned __int64)v18 >= v19 )
      {
        sub_227BA10(v6, 110);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v18 + 1;
        *v18 = 110;
      }
      v17 = *(_DWORD *)(a1 + 172);
      v18 = *(_BYTE **)(v6 + 32);
      v19 = *(_QWORD *)(v6 + 24);
    }
    if ( (v17 & 0x10000000) != 0 )
    {
      if ( v19 <= (unsigned __int64)v18 )
      {
        sub_227BA10(v6, 115);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v18 + 1;
        *v18 = 115;
      }
      v17 = *(_DWORD *)(a1 + 172);
      v18 = *(_BYTE **)(v6 + 32);
      v19 = *(_QWORD *)(v6 + 24);
    }
    if ( (v17 & 0x2000000) != 0 )
    {
      v28 = *(_QWORD *)(a1 + 152);
      if ( *(_QWORD *)(a1 + 160) <= 5u || *(_DWORD *)v28 != 1650811950 || *(_WORD *)(v28 + 4) != 26485 )
      {
        if ( (unsigned __int64)v18 >= v19 )
        {
          sub_227BA10(v6, 68);
        }
        else
        {
          *(_QWORD *)(v6 + 32) = v18 + 1;
          *v18 = 68;
        }
        v17 = *(_DWORD *)(a1 + 172);
        v18 = *(_BYTE **)(v6 + 32);
        v19 = *(_QWORD *)(v6 + 24);
      }
    }
    if ( (v17 & 0x200) != 0 )
    {
      if ( (unsigned __int64)v18 >= v19 )
      {
        sub_227BA10(v6, 105);
      }
      else
      {
        *(_QWORD *)(v6 + 32) = v18 + 1;
        *v18 = 105;
      }
      v18 = *(_BYTE **)(v6 + 32);
      v19 = *(_QWORD *)(v6 + 24);
    }
    if ( (unsigned __int64)v18 >= v19 )
    {
      sub_227BA10(v6, 34);
    }
    else
    {
      *(_QWORD *)(v6 + 32) = v18 + 1;
      *v18 = 34;
    }
    v20 = *(char **)(v6 + 24);
    v21 = *(char **)(v6 + 32);
    if ( *(_DWORD *)(a1 + 196) == -1 )
    {
      if ( (*(_BYTE *)(a1 + 173) & 0x10) == 0 )
        goto LABEL_69;
      v26 = *(_QWORD *)(a1 + 184);
    }
    else
    {
      if ( *(_QWORD *)(a1 + 184) )
      {
        if ( (*(_BYTE *)(a1 + 173) & 0x10) == 0 )
        {
LABEL_72:
          if ( (unsigned __int64)(v20 - v21) > 7 )
          {
            v25 = v6;
            *(_QWORD *)v21 = 0x2C657571696E752CLL;
            *(_QWORD *)(v6 + 32) += 8LL;
          }
          else
          {
            v25 = sub_227BF10(v6, ",unique,", 8);
          }
          sub_227B910(v25, *(unsigned int *)(a1 + 196));
          v21 = *(char **)(v6 + 32);
          v20 = *(char **)(v6 + 24);
          goto LABEL_69;
        }
        goto LABEL_43;
      }
      if ( (unsigned __int64)(v20 - v21) > 7 )
      {
        v30 = v6;
        *(_QWORD *)v21 = 0x2C657571696E752CLL;
        *(_QWORD *)(v6 + 32) += 8LL;
      }
      else
      {
        v30 = sub_227BF10(v6, ",unique,", 8);
      }
      sub_227B910(v30, *(unsigned int *)(a1 + 196));
      if ( (*(_BYTE *)(a1 + 173) & 0x10) == 0 )
      {
LABEL_67:
        v20 = *(char **)(v6 + 24);
        v21 = *(char **)(v6 + 32);
        if ( *(_DWORD *)(a1 + 196) == -1 || !*(_QWORD *)(a1 + 184) )
          goto LABEL_69;
        goto LABEL_72;
      }
      v26 = *(_QWORD *)(a1 + 184);
      v20 = *(char **)(v6 + 24);
      v21 = *(char **)(v6 + 32);
    }
    if ( !v26 )
    {
      if ( (unsigned __int64)(v20 - v21) > 0xB )
      {
        qmemcpy(v21, "\n\t.linkonce\t", 12);
        v21 = (char *)(*(_QWORD *)(v6 + 32) + 12LL);
        *(_QWORD *)(v6 + 32) = v21;
      }
      else
      {
        sub_227BF10(v6, "\n\t.linkonce\t", 12);
        v21 = *(char **)(v6 + 32);
      }
      goto LABEL_45;
    }
LABEL_43:
    if ( v20 == v21 )
    {
      sub_227BF10(v6, ",", 1);
      v21 = *(char **)(v6 + 32);
    }
    else
    {
      *v21 = 44;
      v21 = (char *)(*(_QWORD *)(v6 + 32) + 1LL);
      *(_QWORD *)(v6 + 32) = v21;
    }
LABEL_45:
    v20 = *(char **)(v6 + 24);
    switch ( *(_DWORD *)(a1 + 192) )
    {
      case 1:
        if ( (unsigned __int64)(v20 - v21) > 7 )
        {
          *(_QWORD *)v21 = 0x796C6E6F5F656E6FLL;
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 8LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "one_only", 8);
          v21 = *(char **)(v6 + 32);
        }
        goto LABEL_62;
      case 2:
        if ( (unsigned __int64)(v20 - v21) > 6 )
        {
          *(_DWORD *)v21 = 1668508004;
          *((_WORD *)v21 + 2) = 29281;
          v21[6] = 100;
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 7LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "discard", 7);
          v21 = *(char **)(v6 + 32);
        }
        goto LABEL_62;
      case 3:
        if ( (unsigned __int64)(v20 - v21) > 8 )
        {
          v21[8] = 101;
          *(_QWORD *)v21 = 0x7A69735F656D6173LL;
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 9LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "same_size", 9);
          v21 = *(char **)(v6 + 32);
        }
        goto LABEL_62;
      case 4:
        if ( (unsigned __int64)(v20 - v21) > 0xC )
        {
          qmemcpy(v21, "same_contents", 13);
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 13LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "same_contents", 13);
          v21 = *(char **)(v6 + 32);
        }
        goto LABEL_62;
      case 5:
        if ( (unsigned __int64)(v20 - v21) > 0xA )
        {
          qmemcpy(v21, "associative", 11);
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 11LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "associative", 11);
          v21 = *(char **)(v6 + 32);
        }
        goto LABEL_62;
      case 6:
        if ( (unsigned __int64)(v20 - v21) > 6 )
        {
          *(_DWORD *)v21 = 1735549292;
          *((_WORD *)v21 + 2) = 29541;
          v21[6] = 116;
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 7LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "largest", 7);
          v21 = *(char **)(v6 + 32);
        }
        goto LABEL_62;
      case 7:
        if ( (unsigned __int64)(v20 - v21) > 5 )
        {
          *(_DWORD *)v21 = 1702323566;
          *((_WORD *)v21 + 2) = 29811;
          v21 = (char *)(*(_QWORD *)(v6 + 32) + 6LL);
          *(_QWORD *)(v6 + 32) = v21;
        }
        else
        {
          sub_227BF10(v6, "newest", 6);
          v21 = *(char **)(v6 + 32);
        }
LABEL_62:
        v20 = *(char **)(v6 + 24);
        break;
      default:
        break;
    }
    if ( !*(_QWORD *)(a1 + 184) )
    {
LABEL_69:
      if ( v21 < v20 )
      {
        *(_QWORD *)(v6 + 32) = v21 + 1;
        *v21 = 10;
        return (__int64)(v21 + 1);
      }
      return sub_227BA10(v6, 10);
    }
    if ( v21 == v20 )
    {
      sub_227BF10(v6, ",", 1);
    }
    else
    {
      *v21 = 44;
      ++*(_QWORD *)(v6 + 32);
    }
    sub_2123400(*(_QWORD *)(a1 + 184), v6, a2);
    goto LABEL_67;
  }
  if ( (*(_DWORD *)v23 != 2019914798 || *(_BYTE *)(v23 + 4) != 116)
    && (*(_DWORD *)v23 != 1952539694 || *(_BYTE *)(v23 + 4) != 97) )
  {
    goto LABEL_2;
  }
LABEL_98:
  v31 = *(_BYTE **)(a4 + 32);
  if ( *(_QWORD *)(a4 + 24) <= (unsigned __int64)v31 )
  {
    v6 = sub_227BA10(a4, 9);
  }
  else
  {
    *(_QWORD *)(a4 + 32) = v31 + 1;
    *v31 = 9;
  }
  v32 = *(_QWORD *)(v6 + 24);
  v33 = *(_BYTE **)(v6 + 32);
  v34 = *(const void **)(a1 + 152);
  v35 = *(_QWORD *)(a1 + 160);
  if ( v35 > v32 - (unsigned __int64)v33 )
  {
    v6 = sub_227BF10(v6, v34, v35);
    v32 = *(_QWORD *)(v6 + 24);
    v33 = *(_BYTE **)(v6 + 32);
  }
  else if ( v35 )
  {
    memcpy(v33, v34, v35);
    v32 = *(_QWORD *)(v6 + 24);
    v33 = (_BYTE *)(v35 + *(_QWORD *)(v6 + 32));
    *(_QWORD *)(v6 + 32) = v33;
  }
  if ( (unsigned __int64)v33 >= v32 )
    return sub_227BA10(v6, 10);
  *(_QWORD *)(v6 + 32) = v33 + 1;
  *v33 = 10;
  return (__int64)(v33 + 1);
}
