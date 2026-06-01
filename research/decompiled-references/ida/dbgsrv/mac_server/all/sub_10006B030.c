/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_10006B030
// Address: 0x000000010006B030

//----- (000000010006B030) ----------------------------------------------------
__int64 __fastcall sub_10006B030(__int64 a1, __int64 *a2)
{
  __int64 v2; // rax
  __int64 v3; // r15
  __int64 v4; // r12
  __int64 v5; // r13
  __int64 v6; // rbx
  bool v7; // cc
  const char *v8; // rax
  const char *v9; // r15
  size_t v10; // rax
  size_t v11; // r12
  unsigned __int64 v12; // r14
  void *v13; // rax
  unsigned int v15; // [rsp+14h] [rbp-3Ch]
  __int64 v16; // [rsp+18h] [rbp-38h] BYREF

  v2 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 24LL))(a1);
  if ( v2 )
  {
    v15 = -1;
    if ( !*(_BYTE *)(a1 + 8) )
    {
      v3 = v2;
      sub_10006B820((__int64)a2);
      v4 = *a2;
      v5 = a2[1];
      v15 = 0;
      sub_10006ACD0(&v16, v3, 0, v5);
      if ( v5 > 0 )
      {
        while ( 1 )
        {
          v6 = sub_10006AA70(v3);
          if ( v6 < 0 )
            break;
          sub_10006AD20(&v16);
          v4 += v6;
          v7 = v5 <= v6;
          v5 -= v6;
          if ( v7 )
            goto LABEL_15;
        }
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 48LL))(a1, v4);
        *(_BYTE *)(a1 + 8) = 1;
        v15 = -1;
        if ( (unsigned int)sub_10006AA90(v3) != -15059582 )
        {
          v8 = (const char *)sub_10006AAA0(v3);
          v9 = v8;
          if ( v8 && (v10 = strlen(v8)) != 0 )
          {
            v11 = v10;
            v12 = v10 + 1;
            v13 = *(void **)(a1 + 16);
            if ( *(_QWORD *)(a1 + 32) < v12 )
            {
              v13 = qvector_reserve(a1 + 16, *(void **)(a1 + 16), v12, 1u);
              *(_QWORD *)(a1 + 16) = v13;
            }
            *(_QWORD *)(a1 + 24) = v12;
            memmove(v13, v9, v11);
            *(_BYTE *)(*(_QWORD *)(a1 + 16) + v11) = 0;
          }
          else
          {
            *(_QWORD *)(a1 + 24) = 0;
          }
        }
      }
LABEL_15:
      sub_10006ACF0(&v16);
    }
  }
  else
  {
    return (unsigned int)-1;
  }
  return v15;
}
