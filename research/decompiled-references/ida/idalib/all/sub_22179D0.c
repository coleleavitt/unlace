unsigned __int64 __fastcall sub_22179D0(__int64 a1, const char *a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // r15
  __int64 *v6; // r12
  __int64 v7; // r13
  __int64 *v8; // r9
  unsigned int v9; // eax
  char v10; // dl
  char v11; // r12
  unsigned __int64 result; // rax
  unsigned int v13; // eax
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  const char *v20; // [rsp+0h] [rbp-78h]
  __int64 v21; // [rsp+8h] [rbp-70h]
  const char *v22; // [rsp+10h] [rbp-68h] BYREF
  size_t v23; // [rsp+18h] [rbp-60h]
  const char *v24; // [rsp+20h] [rbp-58h] BYREF
  __int16 v25; // [rsp+30h] [rbp-48h]

  v4 = (__int64)a2;
  v5 = *((_QWORD *)a2 + 3);
  if ( !v5 )
    goto LABEL_4;
  v6 = (__int64 *)a1;
  v7 = a3 + 128;
  v8 = *((__int64 **)a2 + 2);
  if ( (a2[11] & 0x20) == 0 )
  {
LABEL_3:
    v22 = (const char *)v8;
    v23 = v5;
    v24 = a2;
    v9 = sub_2244B30(v8, v5);
    a2 = v22;
    a1 = v7;
    sub_2216B80(v7, v22, v23, v9, (__int64 *)&v24);
    if ( !v10 )
    {
      v14 = sub_227D6D0(v7, a2);
      v15 = v6[1];
      v16 = *v6;
      v11 = 1;
      v17 = sub_227BF10(v14, v16, v15);
      v18 = sub_995540(v17, ": CommandLine Error: Option '");
      a2 = "' registered more than once!\n";
      a1 = sub_9954E0(v18, *(const void **)(v4 + 16), *(_QWORD *)(v4 + 24));
      sub_995540(a1, "' registered more than once!\n");
      if ( ((*(_WORD *)(v4 + 10) >> 7) & 3) != 1 )
      {
LABEL_5:
        if ( (*(_BYTE *)(v4 + 11) & 8) != 0 )
        {
          result = *(unsigned int *)(a3 + 88);
          if ( result + 1 > *(unsigned int *)(a3 + 92) )
          {
            sub_2237220(a3 + 80, a3 + 96, result + 1, 8);
            result = *(unsigned int *)(a3 + 88);
          }
          *(_QWORD *)(*(_QWORD *)(a3 + 80) + 8 * result) = v4;
          ++*(_DWORD *)(a3 + 88);
        }
        else
        {
          result = *(_BYTE *)(v4 + 10) & 7;
          if ( (_BYTE)result == 4 )
          {
            if ( *(_QWORD *)(a3 + 152) )
            {
              v19 = sub_227D6D0(a1, a2);
              v25 = 259;
              v22 = "Cannot specify more than one option with cl::ConsumeAfter!";
              sub_2212D60(v4, (__int64)&v22, 0, 0, v19);
              *(_QWORD *)(a3 + 152) = v4;
              goto LABEL_21;
            }
            *(_QWORD *)(a3 + 152) = v4;
          }
        }
LABEL_7:
        if ( !v11 )
          return result;
LABEL_21:
        sub_2221C70("inconsistency in registered CommandLine options", 1);
      }
LABEL_15:
      result = *(unsigned int *)(a3 + 40);
      if ( result + 1 > *(unsigned int *)(a3 + 44) )
      {
        sub_2237220(a3 + 32, a3 + 48, result + 1, 8);
        result = *(unsigned int *)(a3 + 40);
      }
      *(_QWORD *)(*(_QWORD *)(a3 + 32) + 8 * result) = v4;
      ++*(_DWORD *)(a3 + 40);
      goto LABEL_7;
    }
LABEL_4:
    v11 = 0;
    if ( ((*(_WORD *)(v4 + 10) >> 7) & 3) != 1 )
      goto LABEL_5;
    goto LABEL_15;
  }
  v21 = *((_QWORD *)a2 + 2);
  sub_2217930((__int64 **)&v22, (__int64 *)(*(_QWORD *)(a3 + 128) + 8LL * *(unsigned int *)(a3 + 136)), 1);
  v20 = v22;
  v13 = sub_2244B30(v21, v5);
  result = (unsigned __int64)sub_2217970(v7, v21, v5, v13);
  if ( v20 == (const char *)result )
  {
    v5 = *((_QWORD *)a2 + 3);
    v8 = *((__int64 **)a2 + 2);
    goto LABEL_3;
  }
  return result;
}
