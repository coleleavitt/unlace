unsigned __int64 __fastcall sub_2253400(__int64 a1, unsigned __int64 a2, size_t a3, unsigned __int8 a4)
{
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 v6; // rbp
  __int64 v7; // r12
  unsigned __int64 result; // rax
  unsigned __int64 v9; // kr18_8
  size_t v10; // r12
  unsigned __int64 v12; // rbx
  void *v13; // rdi
  size_t v14; // rdx
  __int64 v15; // [rsp-18h] [rbp-18h]
  __int64 v16; // [rsp-10h] [rbp-10h]
  __int64 v17; // [rsp-8h] [rbp-8h]

  while ( 2 )
  {
    v9 = v4;
    result = a4;
    v17 = v7;
    v10 = a3;
    v16 = v6;
    v15 = v5;
    v12 = a2;
    switch ( a4 )
    {
      case 0u:
      case 1u:
        return result;
      case 2u:
        v4 = sub_2253400(a1, *(_QWORD *)a2, *(_QWORD *)(a2 + 8), *(unsigned __int8 *)(a2 + 32));
        a4 = *(_BYTE *)(a2 + 33);
        a2 = *(_QWORD *)(a2 + 16);
        a3 = *(_QWORD *)(v12 + 24);
        v5 = v15;
        v6 = v16;
        v7 = v17;
        continue;
      case 3u:
        if ( !a2 )
          return result;
        v10 = strlen((const char *)a2);
LABEL_4:
        v13 = *(void **)(a1 + 32);
        v14 = v10;
        result = *(_QWORD *)(a1 + 24) - (_QWORD)v13;
        if ( v10 > result )
        {
LABEL_22:
          result = sub_227BF10(a1, a2, v14);
        }
        else if ( v10 )
        {
          result = (unsigned __int64)memcpy(v13, (const void *)a2, v10);
          *(_QWORD *)(a1 + 32) += v10;
        }
        break;
      case 4u:
        v14 = *(_QWORD *)(a2 + 8);
        a2 = *(_QWORD *)a2;
        goto LABEL_22;
      case 5u:
      case 6u:
        goto LABEL_4;
      case 7u:
        return sub_227C750(a1, a2);
      case 8u:
        result = *(_QWORD *)(a1 + 32);
        if ( result >= *(_QWORD *)(a1 + 24) )
          return sub_227BA10(a1, (unsigned __int8)a2);
        *(_QWORD *)(a1 + 32) = result + 1;
        *(_BYTE *)result = a2;
        return result;
      case 9u:
        a2 = (unsigned int)a2;
        goto LABEL_10;
      case 0xAu:
        a2 = (int)a2;
        goto LABEL_12;
      case 0xBu:
        a2 = *(_QWORD *)a2;
LABEL_10:
        result = sub_227B910(a1, a2);
        break;
      case 0xCu:
        a2 = *(_QWORD *)a2;
LABEL_12:
        result = sub_227B930(a1, a2);
        break;
      case 0xDu:
        result = sub_227B950(a1);
        break;
      case 0xEu:
        result = sub_227B970(a1);
        break;
      case 0xFu:
        result = sub_227B990(a1, *(_QWORD *)a2);
        break;
      default:
        result = v9;
        break;
    }
    return result;
  }
}
