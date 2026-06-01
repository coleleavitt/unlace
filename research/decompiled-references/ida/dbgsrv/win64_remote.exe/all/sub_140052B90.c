/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_140052B90
// Address: 0x0000000140052B90

//----- (0000000140052B90) ----------------------------------------------------
__int64 __fastcall sub_140052B90(__int64 a1, __int64 *a2)
{
  __int64 v4; // rsi
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rax
  unsigned int v8; // ebx
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  __int64 v13; // [rsp+30h] [rbp+8h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  if ( v4 && !*(_BYTE *)(a1 + 8) )
  {
    sub_140054B20((__int64)a2);
    v5 = *a2;
    v6 = a2[1];
    sub_140054330(&v13, v4, 0, v6);
    if ( v6 > 0 )
    {
      while ( 1 )
      {
        v7 = sub_140054530(v4);
        if ( v7 < 0 )
          break;
        v6 -= v7;
        v5 += v7;
        sub_140054390(&v13);
        if ( v6 <= 0 )
          goto LABEL_6;
      }
      (*(void (__fastcall **)(__int64))(*(_QWORD *)a1 + 40LL))(a1);
      *(_BYTE *)(a1 + 8) = 1;
      if ( (unsigned int)sub_1400543B0(v4) != -15059582 )
      {
        v10 = (const char *)sub_1400545E0(v4);
        v11 = v10;
        if ( v10 )
        {
          v12 = strlen(v10);
          if ( v12 )
          {
            sub_140001810(a1 + 16, v11, v12);
            v8 = -1;
            goto LABEL_7;
          }
        }
        *(_QWORD *)(a1 + 24) = 0;
      }
      v8 = -1;
      goto LABEL_7;
    }
LABEL_6:
    v8 = 0;
LABEL_7:
    sub_140054360(&v13);
    return v8;
  }
  return 0xFFFFFFFFLL;
}
