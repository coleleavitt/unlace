__int64 __fastcall sub_169D3F0(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v7; // rbx
  unsigned __int8 v8; // al
  __int64 v9; // rdx
  unsigned __int64 v10; // rax
  unsigned __int8 v11; // al
  __int64 *v12; // rdx
  __int64 v13; // rax

  if ( a2 )
  {
    v7 = a2;
    v8 = *(_BYTE *)(a2 + 28) & 0x7F;
    if ( (unsigned int)v8 - 53 <= 1 || (v9 = (v8 + 52) & 0x7F, (unsigned __int8)v9 <= 1u) )
    {
      v7 = sub_B72ED0(a2);
      v8 = *(_BYTE *)(v7 + 28) & 0x7F;
    }
    if ( v8 != 24 )
    {
      if ( (unsigned int)v8 - 58 > 9 )
        return 0;
      v10 = *(_QWORD *)(v7 + 48);
      if ( !v10 )
        v10 = sub_A7AA70(*(_QWORD *)(a1 + 248), v7, v9, a4, a5, a6);
      if ( (*(_BYTE *)(*(_QWORD *)(v10 & 0xFFFFFFFFFFFFFFF0LL) + 17LL) & 4) == 0 )
      {
        v11 = *(_BYTE *)(v7 + 28) & 0x7F;
        if ( (unsigned int)v11 - 64 > 2 )
        {
          if ( (unsigned int)v11 - 58 > 3 )
          {
            if ( v11 == 62 )
            {
LABEL_15:
              if ( (*(_BYTE *)(*(_QWORD *)(*(_QWORD *)(a1 + 248) + 2320LL) + 1LL) & 0x10) == 0 )
              {
                if ( a3 )
                  *a3 = 1;
                return 0;
              }
              return 1;
            }
            return 0;
          }
        }
        else
        {
          v12 = (__int64 *)(*(_QWORD *)(v7 + 80) & 0xFFFFFFFFFFFFFFF8LL);
          if ( (*(_QWORD *)(v7 + 80) & 4) != 0 )
            v13 = v12[1];
          else
            v13 = *v12;
          if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                        + 16LL) != 48 )
          {
            if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 & 0xFFFFFFFFFFFFFFF0LL) + 8LL) & 0xFFFFFFFFFFFFFFF0LL)
                          + 16LL) == 47 )
              goto LABEL_15;
            return 0;
          }
        }
      }
    }
    return 1;
  }
  return 0;
}
