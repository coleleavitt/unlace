unsigned __int64 __fastcall sub_16FFA70(
        unsigned __int64 a1,
        __int64 a2,
        __int64 *a3,
        __int64 a4,
        __int64 a5,
        __int64 a6)
{
  unsigned __int64 result; // rax
  unsigned int v7; // edi
  __int64 *v8; // r8
  unsigned int v11; // ebx
  __int64 v12; // rax
  __int64 v13; // rsi
  __int64 v14; // r13
  unsigned __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 v26; // rdx
  unsigned __int64 v27; // rcx

  result = a1;
  v7 = *(_DWORD *)(a2 + 8);
  if ( v7 )
  {
    v8 = (__int64 *)(result & 0xFFFFFFFFFFFFFFF0LL);
    if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      v11 = 0;
      while ( 1 )
      {
        v14 = *(_QWORD *)a2 + 40LL * v11;
        if ( (unsigned int)(*(_DWORD *)v14 - 1) <= 1 )
        {
          v12 = *v8;
          if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xFB) != 2
            && (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) - 3) > 2u )
          {
            return 0;
          }
          v13 = *(unsigned __int8 *)(v12 + 16);
          if ( (unsigned __int8)(v13 - 2) > 4u )
          {
            v12 = sub_F63050(
                    *v8,
                    v13,
                    (unsigned int)(v13 - 2),
                    *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*v8 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 16LL) & 0xFB);
            v7 = *(_DWORD *)(a2 + 8);
          }
          result = *(_QWORD *)(v12 + 32);
        }
        else
        {
          v15 = sub_15B8A80(a3, result, 0, 0, (__int64)v8, a6);
          v20 = sub_15B7F90(a3, v15, v16, v17, v18, v19);
          if ( !v20 )
            return 0;
          v24 = (*((_BYTE *)v20 + 28) & 0x7Fu) - 58;
          if ( (unsigned int)v24 > 3 || (*((_BYTE *)v20 + 74) & 1) == 0 )
            return 0;
          result = sub_B94670((unsigned __int64)(v20 + 8), *(_QWORD *)(v14 + 8), v24, v21, v22, v23);
          if ( result )
          {
            while ( 1 )
            {
              v25 = result & 0xFFFFFFFFFFFFFFF8LL;
              v26 = result & 0xFFFFFFFFFFFFFFF8LL;
              if ( (result & 4) == 0 )
                break;
              if ( !v25 )
              {
                result = 0;
                goto LABEL_23;
              }
              v27 = *(_QWORD *)v25;
              if ( (*(_BYTE *)(v27 + 28) & 0x7Fu) - 49 <= 2 )
              {
                v26 = v27;
LABEL_22:
                result = *(_QWORD *)(v26 + 48);
                goto LABEL_23;
              }
              result = *(_QWORD *)(v26 + 8);
              if ( !result )
                goto LABEL_23;
            }
            result = 0;
            if ( (*(_BYTE *)(v25 + 28) & 0x7Fu) - 49 <= 2 )
              goto LABEL_22;
          }
LABEL_23:
          v7 = *(_DWORD *)(a2 + 8);
        }
        if ( ++v11 < v7 )
        {
          v8 = (__int64 *)(result & 0xFFFFFFFFFFFFFFF0LL);
          if ( (result & 0xFFFFFFFFFFFFFFF0LL) != 0 )
            continue;
        }
        return result;
      }
    }
  }
  return result;
}
