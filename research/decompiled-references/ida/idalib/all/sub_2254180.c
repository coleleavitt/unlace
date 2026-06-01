unsigned __int64 __fastcall sub_2254180(const char **a1, __int64 a2)
{
  const char *v4; // r12
  size_t v5; // rax
  void *v6; // rdi
  size_t v7; // r13
  unsigned __int64 result; // rax
  const char *v9; // r12
  size_t v10; // rbx
  void *v11; // rdi
  size_t v12; // rdx
  unsigned __int64 v13; // rsi
  _BYTE *v14; // rax
  unsigned __int64 v15; // rsi
  unsigned __int64 v16; // rsi

  v4 = *a1;
  switch ( *((_BYTE *)a1 + 32) )
  {
    case 2:
      sub_2253400(a2, *(_QWORD *)v4, *((_QWORD *)v4 + 1), v4[32]);
      sub_2253400(a2, *((_QWORD *)v4 + 2), *((_QWORD *)v4 + 3), v4[33]);
      break;
    case 3:
      if ( v4 )
      {
        v5 = strlen(*a1);
        v6 = *(void **)(a2 + 32);
        v7 = v5;
        if ( v5 <= *(_QWORD *)(a2 + 24) - (_QWORD)v6 )
          goto LABEL_17;
        goto LABEL_4;
      }
      break;
    case 4:
      sub_227BF10(a2, *(_QWORD *)v4, *((_QWORD *)v4 + 1));
      break;
    case 5:
    case 6:
      v7 = (size_t)a1[1];
      v6 = *(void **)(a2 + 32);
      if ( *(_QWORD *)(a2 + 24) - (_QWORD)v6 < v7 )
      {
LABEL_4:
        sub_227BF10(a2, v4, v7);
      }
      else
      {
LABEL_17:
        if ( v7 )
        {
          memcpy(v6, v4, v7);
          *(_QWORD *)(a2 + 32) += v7;
        }
      }
      break;
    case 7:
      sub_227C750(a2, *a1);
      break;
    case 8:
      v14 = *(_BYTE **)(a2 + 32);
      if ( (unsigned __int64)v14 >= *(_QWORD *)(a2 + 24) )
      {
        sub_227BA10(a2, (unsigned __int8)v4);
      }
      else
      {
        *(_QWORD *)(a2 + 32) = v14 + 1;
        *v14 = (_BYTE)v4;
      }
      break;
    case 9:
      sub_227B910(a2, (unsigned int)v4);
      break;
    case 0xA:
      sub_227B930(a2, (int)v4);
      break;
    case 0xB:
      sub_227B910(a2, *(_QWORD *)v4);
      break;
    case 0xC:
      sub_227B930(a2, *(_QWORD *)v4);
      break;
    case 0xD:
      sub_227B950(a2);
      break;
    case 0xE:
      sub_227B970(a2);
      break;
    case 0xF:
      sub_227B990(a2, *(_QWORD *)v4);
      break;
    default:
      break;
  }
  result = *((unsigned __int8 *)a1 + 33);
  v9 = a1[2];
  switch ( *((_BYTE *)a1 + 33) )
  {
    case 2:
      sub_2253400(a2, *(_QWORD *)v9, *((_QWORD *)v9 + 1), v9[32]);
      return sub_2253400(a2, *((_QWORD *)v9 + 2), *((_QWORD *)v9 + 3), v9[33]);
    case 3:
      if ( v9 )
      {
        v10 = strlen(a1[2]);
        goto LABEL_7;
      }
      return result;
    case 4:
      v12 = *((_QWORD *)v9 + 1);
      v13 = *(_QWORD *)v9;
      return sub_227BF10(a2, v13, v12);
    case 5:
    case 6:
      v10 = (size_t)a1[3];
LABEL_7:
      v11 = *(void **)(a2 + 32);
      v12 = v10;
      v13 = (unsigned __int64)v9;
      result = *(_QWORD *)(a2 + 24) - (_QWORD)v11;
      if ( v10 > result )
        return sub_227BF10(a2, v13, v12);
      if ( v10 )
      {
        result = (unsigned __int64)memcpy(v11, v9, v10);
        *(_QWORD *)(a2 + 32) += v10;
      }
      return result;
    case 7:
      return sub_227C750(a2, a1[2]);
    case 8:
      result = *(_QWORD *)(a2 + 32);
      if ( result >= *(_QWORD *)(a2 + 24) )
        return sub_227BA10(a2, (unsigned __int8)v9);
      *(_QWORD *)(a2 + 32) = result + 1;
      *(_BYTE *)result = (_BYTE)v9;
      return result;
    case 9:
      v15 = (unsigned int)v9;
      goto LABEL_38;
    case 0xA:
      v16 = (int)v9;
      goto LABEL_40;
    case 0xB:
      v15 = *(_QWORD *)v9;
LABEL_38:
      result = sub_227B910(a2, v15);
      break;
    case 0xC:
      v16 = *(_QWORD *)v9;
LABEL_40:
      result = sub_227B930(a2, v16);
      break;
    case 0xD:
      result = sub_227B950(a2);
      break;
    case 0xE:
      result = sub_227B970(a2);
      break;
    case 0xF:
      result = sub_227B990(a2, *(_QWORD *)v9);
      break;
    default:
      return result;
  }
  return result;
}
