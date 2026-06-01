unsigned __int64 __fastcall sub_19C4E30(__int64 a1, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 result; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // rbp
  _QWORD *v11; // rcx
  __int64 v12; // rsi
  _QWORD *v13; // rdx
  _QWORD *v14; // rcx
  _QWORD *v15; // rdx

  result = *(unsigned int *)(*(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640);
  if ( (_DWORD)result != 3 && (unsigned int)result > 1 )
  {
    result = (unsigned int)*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                          & 0xFFFFFFFFFFFFFFF0LL)
                                              + 16LL)
           - 2;
    if ( (unsigned __int8)(*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a2[1] & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                                & 0xFFFFFFFFFFFFFFF0LL)
                                    + 16LL)
                         - 2) <= 4u )
    {
      if ( (*a2 & 0x80000LL) == 0 )
        return sub_18C1CC0(a1, a2[2]);
      return result;
    }
    if ( (*a2 & 0x80000LL) != 0 )
    {
      result = *(_QWORD *)(sub_F6B0C0(*(_QWORD *)(a2[2] + 8LL), *(_QWORD *)(a1 + 248), a3, a4, a5) & 0xFFFFFFFFFFFFFFF0LL);
      if ( *(_BYTE *)(result + 16) == 42 )
      {
        result = sub_F6A690(*(_QWORD *)(*(_QWORD *)(result + 32) & 0xFFFFFFFFFFFFFFF0LL), 21, v7, v8, v9);
        if ( (_BYTE)result )
        {
          v10 = *(_QWORD *)(a1 + 4616) + 640LL * *(unsigned int *)(a1 + 4624) - 640;
          if ( !*(_BYTE *)(v10 + 308) )
            goto LABEL_26;
          v11 = *(_QWORD **)(v10 + 288);
          v12 = *(unsigned int *)(v10 + 300);
          result = (unsigned __int64)v11;
          v13 = &v11[v12];
          if ( v11 != v13 )
          {
            if ( a2 == (_QWORD *)*v11 )
              goto LABEL_19;
            do
            {
              result += 8LL;
              if ( v13 == (_QWORD *)result )
                break;
            }
            while ( a2 != *(_QWORD **)result );
          }
          if ( (unsigned int)v12 < *(_DWORD *)(v10 + 296) )
          {
            *(_DWORD *)(v10 + 300) = v12 + 1;
            *v13 = a2;
            v11 = *(_QWORD **)(v10 + 288);
            result = (unsigned __int64)&v11[v12];
          }
          else
          {
LABEL_26:
            result = sub_2236760(v10 + 288, a2);
            v11 = *(_QWORD **)(v10 + 288);
            if ( !*(_BYTE *)(v10 + 308) )
            {
              v14 = &v11[*(unsigned int *)(v10 + 296)];
              goto LABEL_20;
            }
          }
LABEL_19:
          v14 = &v11[*(unsigned int *)(v10 + 300)];
LABEL_20:
          if ( v14 != (_QWORD *)result && *(_QWORD *)result >= 0xFFFFFFFFFFFFFFFELL )
          {
            result += 8LL;
            do
            {
              v15 = (_QWORD *)result;
              if ( v14 == (_QWORD *)result )
                break;
              result += 8LL;
            }
            while ( *v15 >= 0xFFFFFFFFFFFFFFFELL );
          }
        }
      }
    }
  }
  return result;
}
