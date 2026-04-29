__int64 __fastcall sub_3E57E0(__int64 a1, int a2, unsigned int a3, __int64 a4, __int64 a5)
{
  __int64 v6; // rdx
  unsigned __int8 *v7; // r9
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 result; // rax
  __int64 v11; // rsi
  __int64 (__fastcall *v12)(__int64, int); // rax

  v6 = 40LL * a2;
  v7 = (unsigned __int8 *)(a1 + v6 + 64);
  switch ( *(_BYTE *)(a1 + v6 + 65) )
  {
    case 1:
      goto LABEL_6;
    case 2:
    case 7:
      sub_3E5360(a1, v7, 2u, *(_QWORD *)(a1 + 40LL * a2 + 80), a3);
      return a3;
    case 3:
      goto LABEL_4;
    case 4:
      v8 = *(unsigned __int16 *)(a1 + 48);
      if ( (unsigned __int16)v8 <= 0x12u && (v9 = 393236, _bittest64(&v9, v8)) )
      {
LABEL_6:
        v11 = *(unsigned __int16 *)(a1 + 40LL * a2 + 70);
        v12 = *(__int64 (__fastcall **)(__int64, int))(**(_QWORD **)(a1 + 832) + 168LL);
        if ( v12 == sub_3E21C0 )
        {
          result = (unsigned int)(4 * v11 + 8);
          if ( (int)v11 > 63 )
          {
            result = (unsigned int)(v11 - 64);
            if ( (int)v11 >= 68 )
              result = 0xFFFFFFFFLL;
          }
        }
        else
        {
          result = v12(*(_QWORD *)(a1 + 832), v11);
        }
      }
      else
      {
LABEL_4:
        sub_3E5520(a1, (__int64)v7, a3, (*(_DWORD *)(a1 + 52) & 0x18) != 16, a5);
        result = a3;
      }
      break;
    case 5:
      sub_3E5360(a1, v7, *(_BYTE *)(a1 + 40LL * a2 + 69), *(_QWORD *)(a1 + 40LL * a2 + 72), a3);
      result = a3;
      break;
    default:
      result = 0xFFFFFFFFLL;
      break;
  }
  return result;
}
