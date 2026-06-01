__int64 __fastcall sub_55D860(__int64 a1, __int64 a2)
{
  __int64 result; // rax
  unsigned int v5; // edx
  int v6; // ecx
  unsigned __int8 *v7; // rsi
  unsigned __int8 *v8; // rdx
  unsigned __int8 v9; // di
  unsigned int v10; // esi
  unsigned int v11; // ecx

  result = *(unsigned int *)(a1 + 8);
  v5 = *(_DWORD *)(a2 + 8);
  if ( (unsigned int)result < v5 )
  {
    v10 = *(_DWORD *)(a1 + 12);
    if ( v10 < v5 )
    {
      v11 = 8;
      if ( v5 >= 8 )
        v11 = v5;
      if ( v11 < 2 * v10 )
        v11 = 2 * v10;
      if ( v10 < v11 )
      {
        sub_55D020(a1, 1, v11);
        v5 = *(_DWORD *)(a2 + 8);
        LODWORD(result) = *(_DWORD *)(a1 + 8);
      }
    }
    result = (__int64)memset((void *)(*(_QWORD *)a1 + (unsigned int)result), 0, v5 - (unsigned int)result);
    v5 = *(_DWORD *)(a2 + 8);
    *(_DWORD *)(a1 + 8) = v5;
  }
  v6 = 0;
  if ( (_WORD)v5 )
  {
    while ( 2 )
    {
      if ( (unsigned __int16)v6 < v5 )
      {
        if ( (unsigned int)(unsigned __int16)v6 < *(_DWORD *)(a1 + 8) )
        {
          v8 = (unsigned __int8 *)(*(_QWORD *)a1 + (unsigned __int16)v6);
          v7 = (unsigned __int8 *)((unsigned __int16)v6 + *(_QWORD *)a2);
          v9 = *v7;
          result = *v8;
          switch ( (char)result )
          {
            case 0:
              result = *v7;
              ++v6;
              *v8 = v9;
              v5 = *(_DWORD *)(a2 + 8);
              if ( (unsigned __int16)v6 >= (unsigned __int16)v5 )
                return result;
              continue;
            case 1:
              if ( v9 > 2u )
                goto LABEL_7;
              if ( v9 )
                result = 2;
              ++v6;
              *v8 = result;
              v5 = *(_DWORD *)(a2 + 8);
              if ( (unsigned __int16)v6 >= (unsigned __int16)v5 )
                return result;
              continue;
            case 2:
              if ( v9 > 2u )
              {
LABEL_7:
                LOBYTE(result) = (unsigned __int8)(v9 - 3) <= 1u;
                result = (unsigned int)(4 * result);
              }
              goto LABEL_8;
            case 3:
              if ( !v9 )
                goto LABEL_8;
              LOBYTE(result) = (unsigned __int8)(v9 - 1) <= 3u;
              ++v6;
              result = (unsigned int)(4 * result);
              *v8 = result;
              v5 = *(_DWORD *)(a2 + 8);
              if ( (unsigned __int16)v6 >= (unsigned __int16)v5 )
                return result;
              continue;
            case 4:
              goto LABEL_8;
            default:
              result = 0;
LABEL_8:
              *v8 = result;
              v5 = *(_DWORD *)(a2 + 8);
              if ( (unsigned __int16)++v6 >= (unsigned __int16)v5 )
                return result;
              continue;
          }
        }
        __assert_fail("(uint32_t)(id) < (self)->size", "lib/src/./query.c", 0x2D0u, "capture_quantifiers_add_all");
      }
      break;
    }
    __assert_fail("(uint32_t)(id) < (quantifiers)->size", "lib/src/./query.c", 0x2CFu, "capture_quantifiers_add_all");
  }
  return result;
}
