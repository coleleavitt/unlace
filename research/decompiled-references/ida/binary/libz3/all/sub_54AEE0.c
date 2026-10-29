__int64 __fastcall sub_54AEE0(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 (__fastcall *v6)(__int64); // rax
  char v7; // al
  __int64 v8; // rdx
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 result; // rax
  __int64 v11; // r15
  __int64 v12; // r15
  __int64 i; // rbx
  __int64 v14; // rbp
  __int64 v15; // rsi
  __int64 v16; // rdi

  v6 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)a3 + 24LL);
  if ( v6 == sub_54A3A0 )
    v7 = *(_BYTE *)(a3 + 28);
  else
    v7 = v6(a3);
  v8 = *(_QWORD *)a2;
  if ( v7 )
  {
    result = *(_QWORD *)(v8 + 64);
    if ( (void (__fastcall *)(__int64))result == sub_54A3B0 )
      *(_BYTE *)(a2 + 28) = 1;
    else
      return ((__int64 (__fastcall *)(__int64))result)(a2);
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(__int64))(v8 + 24);
    if ( v9 == sub_54A3A0 )
      result = *(unsigned __int8 *)(a2 + 28);
    else
      result = v9(a2);
    if ( !(_BYTE)result )
    {
      result = *(_QWORD *)(a2 + 16);
      if ( result )
      {
        v11 = *(unsigned int *)(result - 4);
        if ( (_DWORD)v11 )
        {
          v12 = 8 * v11;
          for ( i = 0; v12 != i; i += 8 )
          {
            while ( 1 )
            {
              result = *(_QWORD *)(a3 + 40);
              v14 = *(_QWORD *)(result + i);
              if ( v14 )
                break;
LABEL_10:
              i += 8;
              if ( v12 == i )
                return result;
            }
            result = i + *(_QWORD *)(a2 + 40);
            v15 = *(_QWORD *)result;
            if ( !*(_QWORD *)result )
            {
              ++*(_DWORD *)(v14 + 8);
              *(_QWORD *)result = v14;
              goto LABEL_10;
            }
            if ( *(_QWORD *)(v15 + 16) != *(_QWORD *)(a1 + 8)
              || v14 != *(_QWORD *)(v15 + 32) && v14 != *(_QWORD *)(v15 + 40) )
            {
              goto LABEL_10;
            }
            ++*(_DWORD *)(v14 + 8);
            v16 = *(_QWORD *)(a2 + 32);
            if ( (*(_DWORD *)(v15 + 8))-- == 1 )
            {
              sub_15D7BC0(v16, v15);
              result = i + *(_QWORD *)(a2 + 40);
            }
            *(_QWORD *)result = v14;
          }
        }
      }
    }
  }
  return result;
}

