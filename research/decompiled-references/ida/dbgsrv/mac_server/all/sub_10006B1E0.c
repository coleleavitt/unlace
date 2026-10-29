/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B1E0
// Address: 0x000000010006B1E0

//----- (000000010006B1E0) ----------------------------------------------------
__int64 __fastcall sub_10006B1E0(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  __int64 v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rbx
  int v9; // r12d
  const char *v10; // rax
  const char *v11; // rbx
  size_t v12; // rax
  size_t v13; // r14
  unsigned __int64 v14; // r15
  void *v15; // rax
  unsigned int v18; // [rsp+14h] [rbp-3Ch]
  __int64 v19; // [rsp+18h] [rbp-38h] BYREF

  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  sub_10006ACD0(&v19, v6, 1u, a3);
  v18 = 0;
  while ( a3 )
  {
    v7 = a4;
    if ( (int)sub_10006AAB0(v6) <= 0 )
    {
      v8 = -1;
      goto LABEL_7;
    }
    v7 = a2;
    v8 = sub_10006AA80(v6);
    if ( v8 <= 0 )
    {
LABEL_7:
      v9 = sub_10006AA90(v6);
      if ( v9 != -21015 )
      {
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v7);
        v18 = -1;
        if ( v8 )
        {
          *(_BYTE *)(a1 + 8) = 1;
          if ( v9 != -15059582 )
          {
            v10 = (const char *)sub_10006AAA0(v6);
            v11 = v10;
            if ( v10 && (v12 = strlen(v10)) != 0 )
            {
              v13 = v12;
              v14 = v12 + 1;
              v15 = *(void **)(a1 + 16);
              if ( *(_QWORD *)(a1 + 32) < v14 )
              {
                v15 = qvector_reserve(a1 + 16, *(void **)(a1 + 16), v14, 1u);
                *(_QWORD *)(a1 + 16) = v15;
              }
              *(_QWORD *)(a1 + 24) = v14;
              memmove(v15, v11, v13);
              *(_BYTE *)(*(_QWORD *)(a1 + 16) + v13) = 0;
            }
            else
            {
              *(_QWORD *)(a1 + 24) = 0;
            }
          }
        }
        break;
      }
    }
    else
    {
      sub_10006AD20(&v19);
      a3 -= v8;
      a2 += v8;
    }
  }
  sub_10006ACF0(&v19);
  return v18;
}
