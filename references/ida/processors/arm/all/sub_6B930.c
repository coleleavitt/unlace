__int64 __fastcall sub_6B930(__int64 a1, __int64 *a2)
{
  __int64 v2; // rdx
  unsigned int v3; // r13d
  __int64 v4; // r12
  char v5; // al
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // rax
  __int64 result; // rax
  int v9; // edx
  int v10; // ecx
  _DWORD *v11; // rbp
  __int64 v12; // rbx
  unsigned __int64 v13; // r13
  __int64 v14; // [rsp+0h] [rbp-48h]
  unsigned int v15; // [rsp+Ch] [rbp-3Ch]

  v2 = 0;
  v3 = 0;
  v14 = a1 + 16;
  if ( a2[1] )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        v4 = *a2 + 40 * v2;
        v5 = *(_BYTE *)(v4 + 1);
        if ( v5 == 1 )
          break;
        if ( v5 == 99 )
          goto LABEL_8;
LABEL_4:
        v2 = ++v3;
        if ( v3 >= (unsigned __int64)a2[1] )
          goto LABEL_15;
      }
      if ( sub_2C410(*(_QWORD *)(a1 + 888), v14, *(unsigned __int16 *)(v4 + 6), 0) )
        goto LABEL_9;
      if ( *(_BYTE *)(v4 + 1) != 99 )
        goto LABEL_4;
LABEL_8:
      if ( !(unsigned __int8)sub_25F60(v14) )
        goto LABEL_4;
LABEL_9:
      if ( a2[1] )
      {
        v6 = 0;
        do
        {
          if ( (*(unsigned __int8 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                 a1,
                 40 * v6 + *a2,
                 v4) )
          {
            *(_BYTE *)(*a2 + 40 * v6 + 1) = 0;
          }
          v7 = a2[1];
          ++v6;
        }
        while ( v6 < v7 );
        v2 = ++v3;
        if ( v3 < v7 )
          continue;
      }
      break;
    }
  }
LABEL_15:
  result = get_ph();
  v9 = *(unsigned __int16 *)(a1 + 40);
  v10 = *(_DWORD *)(result + 104);
  if ( v9 >= v10 && v9 < *(_DWORD *)(result + 108) )
  {
    result = *(unsigned int *)(*(_QWORD *)(result + 112) + 16LL * (v9 - v10) + 8);
    v15 = result;
    if ( (_DWORD)result )
    {
      v11 = dword_8B1C0;
      v12 = a1 + 56;
      do
      {
        result = *v11 & v15;
        if ( (*v11 & v15) != 0 && *(_BYTE *)(v12 + 1) > 1u && a2[1] )
        {
          v13 = 0;
          do
          {
            result = (*(__int64 (__fastcall **)(__int64, unsigned __int64, __int64))(*(_QWORD *)a1 + 8LL))(
                       a1,
                       40 * v13 + *a2,
                       v12);
            if ( (_BYTE)result )
            {
              result = *a2;
              *(_BYTE *)(*a2 + 40 * v13 + 1) = 0;
            }
            ++v13;
          }
          while ( v13 < a2[1] );
        }
        ++v11;
        v12 += 40;
      }
      while ( a1 + 256 != v12 );
    }
  }
  return result;
}
