__int64 __fastcall sub_21EBBA0(_BYTE *a1, const void *a2, const void *a3, size_t a4, const void *a5, size_t a6)
{
  _BYTE *v6; // rbx
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rax
  __int64 v10; // r14
  size_t v11; // r12
  const void *v12; // r13
  __int64 v13; // rbp
  __int64 v14; // r15
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 result; // rax
  char *v19; // rsi
  char *v20; // rsi
  int v21; // eax
  int *v22; // rsi
  __int64 v23; // rax
  int v24[4]; // [rsp+Ch] [rbp-ACh] BYREF
  int v25; // [rsp+1Ch] [rbp-9Ch] BYREF
  _QWORD v26[4]; // [rsp+20h] [rbp-98h] BYREF
  __int16 v27; // [rsp+40h] [rbp-78h]
  _QWORD v28[4]; // [rsp+50h] [rbp-68h] BYREF
  __int16 v29; // [rsp+70h] [rbp-48h]

  v6 = a1;
  v7 = a1[168] == 0;
  v24[0] = (int)a2;
  v25 = 0;
  if ( !v7 )
  {
    v8 = *((_QWORD *)a1 + 22);
    if ( v8 != *((_QWORD *)a1 + 23) )
      *((_QWORD *)a1 + 23) = v8;
    v9 = *((_QWORD *)a1 + 15);
    if ( v9 != *((_QWORD *)a1 + 16) )
      *((_QWORD *)a1 + 16) = v9;
    a1[168] = 0;
  }
  v10 = *((unsigned int *)a1 + 56);
  if ( *(_QWORD *)(*((_QWORD *)a1 + 26) + 24LL) )
  {
    a4 = a6;
    a3 = a5;
  }
  v11 = a4;
  v12 = a3;
  if ( *((_DWORD *)a1 + 56) )
  {
    v13 = *((_QWORD *)a1 + 27);
    if ( a4 )
    {
      v14 = 0;
      while ( 1 )
      {
        if ( v11 == *(_QWORD *)(v13 + 8) )
        {
          a1 = *(_BYTE **)v13;
          a2 = v12;
          v15 = memcmp(*(const void **)v13, v12, v11);
          v16 = v13;
          if ( !v15 )
            break;
        }
        ++v14;
        v13 += 48;
        if ( v14 == v10 )
          goto LABEL_15;
      }
    }
    else
    {
      v23 = 0;
      while ( 1 )
      {
        v16 = v13;
        if ( !*(_QWORD *)(v13 + 8) )
          break;
        ++v23;
        v13 += 48;
        if ( v10 == v23 )
          goto LABEL_15;
      }
    }
    v25 = *(_DWORD *)(v16 + 40);
  }
  else
  {
LABEL_15:
    v17 = sub_227D6D0(a1, a2);
    v29 = 770;
    v27 = 1283;
    v26[0] = "Cannot find option named '";
    v28[0] = v26;
    v26[2] = v12;
    v26[3] = v11;
    v28[2] = "'!";
    result = sub_22116C0(v6, v28, 0, 0, v17);
    if ( (_BYTE)result )
      return result;
  }
  v19 = *((char **)v6 + 16);
  if ( v19 == *((char **)v6 + 17) )
  {
    sub_21EB580((__int64)(v6 + 120), v19, &v25);
  }
  else
  {
    v20 = v19 + 4;
    *((_DWORD *)v20 - 1) = v25;
    *((_QWORD *)v6 + 16) = v20;
  }
  v21 = v24[0];
  v22 = *((int **)v6 + 23);
  *((_WORD *)v6 + 6) = v24[0];
  if ( v22 == *((int **)v6 + 24) )
  {
    sub_9A8F30((__int64)(v6 + 176), v22, v24);
  }
  else
  {
    *v22 = v21;
    *((_QWORD *)v6 + 23) = v22 + 1;
  }
  if ( !*((_QWORD *)v6 + 79) )
    std::__throw_bad_function_call();
  (*((void (__fastcall **)(_BYTE *, int *))v6 + 80))(v6 + 616, &v25);
  return 0;
}
