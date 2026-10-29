void __fastcall sub_17E3530(__int64 a1, __int64 a2, __m128i a3, double a4)
{
  __int64 v4; // rax
  __int64 v5; // rax
  unsigned __int64 v6; // rbx
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // r14
  int v10; // eax
  __int64 i; // r15
  int v12; // eax
  _QWORD v13[8]; // [rsp+8h] [rbp-40h] BYREF

  v4 = *(_QWORD *)(a2 + 48);
  v13[0] = a1;
  if ( (*(_BYTE *)(v4 + 17) & 4) == 0 )
  {
    v5 = sub_B8E970(a2 + 64);
    v6 = v5;
    if ( v5 )
    {
      v7 = *(_BYTE *)(v5 + 28) & 0x7F;
      if ( (unsigned int)(v7 - 64) > 2 )
        goto LABEL_8;
LABEL_5:
      sub_17E1070(a1, v6, (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179E990, (__int64)v13, a3, a4);
      while ( 1 )
      {
        v6 = *(_QWORD *)(v6 + 8) & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v6 )
          break;
        v7 = *(_BYTE *)(v6 + 28) & 0x7F;
        if ( (unsigned int)(v7 - 64) <= 2 )
          goto LABEL_5;
LABEL_8:
        if ( (unsigned int)(v7 - 58) <= 3 && (*(_BYTE *)(*(_QWORD *)(v6 + 48) + 17LL) & 4) == 0 )
        {
          v8 = sub_B8E970(v6 + 64);
          v9 = v8;
          if ( v8 )
          {
            v10 = *(_BYTE *)(v8 + 28) & 0x7F;
            if ( (unsigned int)(v10 - 64) <= 2 )
            {
LABEL_12:
              sub_17E1070(a1, v9, (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179E990, (__int64)v13, a3, a4);
              goto LABEL_13;
            }
            while ( 1 )
            {
              if ( (unsigned int)(v10 - 58) <= 3 && (*(_BYTE *)(*(_QWORD *)(v9 + 48) + 17LL) & 4) == 0 )
              {
                for ( i = sub_B8E970(v9 + 64); i; i = *(_QWORD *)(i + 8) & 0xFFFFFFFFFFFFFFF8LL )
                {
                  v12 = *(_BYTE *)(i + 28) & 0x7F;
                  if ( (unsigned int)(v12 - 64) > 2 )
                  {
                    if ( (unsigned int)(v12 - 58) <= 3 )
                      sub_17E24D0(
                        a1,
                        i,
                        (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179E990,
                        (__int64)v13,
                        a3,
                        a4);
                  }
                  else
                  {
                    sub_17E1070(a1, i, (void (__fastcall *)(__int64, _QWORD, _BYTE *))sub_179E990, (__int64)v13, a3, a4);
                  }
                }
              }
LABEL_13:
              v9 = *(_QWORD *)(v9 + 8) & 0xFFFFFFFFFFFFFFF8LL;
              if ( !v9 )
                break;
              v10 = *(_BYTE *)(v9 + 28) & 0x7F;
              if ( (unsigned int)(v10 - 64) <= 2 )
                goto LABEL_12;
            }
          }
        }
      }
    }
  }
}
