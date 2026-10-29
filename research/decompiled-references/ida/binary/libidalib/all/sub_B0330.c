__int64 __fastcall sub_B0330(__int64 a1, const void *a2, int a3, __int64 *a4)
{
  __int64 v7; // rax
  unsigned int v8; // r13d
  __int64 v9; // rdx
  __int64 v10; // rsi
  unsigned __int64 v11; // rax
  __int64 v12; // r12
  size_t v13; // r15
  __int64 v14; // r8
  size_t v15; // rax
  size_t v16; // r15
  __int64 v17; // rsi
  size_t v18; // r12
  unsigned __int64 v19; // rax
  size_t v20; // r8
  unsigned __int64 v21; // rdx
  const void *errdesc; // rax
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // [rsp+0h] [rbp-48h]
  unsigned __int64 v27; // [rsp+0h] [rbp-48h]
  size_t v28; // [rsp+8h] [rbp-40h]

  if ( dbg )
  {
    v7 = fopenRB();
    if ( v7 )
    {
      v8 = sub_B00C0(a1, v7, a3, a4);
      if ( (_BYTE)v8 )
      {
        sub_9C440(*(_QWORD *)(a1 + 8) + 328LL, a2);
        goto LABEL_21;
      }
      if ( !a4 )
      {
LABEL_21:
        qfclose();
        return v8;
      }
      v9 = a4[1];
      v10 = *a4;
      v11 = a4[2];
      if ( v9 )
      {
        v12 = v9 + 2;
        v13 = v9 - 1;
        v14 = v9 + 1;
        if ( v11 >= v9 + 2 )
          goto LABEL_7;
      }
      else
      {
        if ( v11 > 2 )
        {
          a4[1] = 3;
          *(_BYTE *)(v10 + 2) = 0;
          goto LABEL_9;
        }
        v13 = 0;
        v12 = 3;
        v14 = 2;
      }
      v26 = v14;
      v24 = qvector_reserve();
      v14 = v26;
      *a4 = v24;
      v10 = v24;
LABEL_7:
      a4[1] = v12;
      *(_BYTE *)(v10 + v14) = 0;
      if ( v13 )
        memmove((void *)(*a4 + 2), (const void *)*a4, v13);
LABEL_9:
      *(_WORD *)*a4 = 8250;
      if ( a2 )
      {
        v15 = strlen((const char *)a2);
        v16 = a4[1];
        v17 = *a4;
        v18 = v15;
        v19 = a4[2];
        if ( v16 )
        {
          --v16;
          v20 = v18 + v16;
          v21 = v18 + v16 + 1;
          if ( v19 >= v21 )
            goto LABEL_12;
        }
        else
        {
          v21 = v18 + 1;
          if ( v19 >= v18 + 1 )
          {
            a4[1] = v21;
            *(_BYTE *)(v17 + v18) = 0;
LABEL_26:
            memmove((void *)*a4, a2, v18);
            goto LABEL_21;
          }
          v20 = v18;
        }
        v28 = v20;
        v27 = v21;
        v25 = qvector_reserve();
        v20 = v28;
        v21 = v27;
        *a4 = v25;
        v17 = v25;
LABEL_12:
        a4[1] = v21;
        *(_BYTE *)(v17 + v20) = 0;
        if ( v16 )
          memmove((void *)(*a4 + v18), (const void *)*a4, v16);
        goto LABEL_26;
      }
      goto LABEL_21;
    }
    if ( a4 )
    {
      errdesc = (const void *)get_errdesc();
      sub_9C440((__int64)a4, errdesc);
    }
  }
  else if ( a4 )
  {
    sub_9C440((__int64)a4, "No debugger is selected, please select one");
  }
  return 0;
}

