_UNKNOWN *__ptr32 *__fastcall sub_11E7D90(__int64 a1, __int64 a2, __int64 a3)
{
  _UNKNOWN *__ptr32 *result; // rax
  char v6; // bp
  unsigned int *v7; // rbp
  __int64 v8; // rax
  __int64 v9; // r14
  __int64 v10; // rax
  __int64 v11; // rcx
  __int64 v12; // rcx
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rsi
  __int64 v15; // rcx
  unsigned __int64 v16; // rcx
  __int64 v17; // rax
  __int64 *v18; // rdi
  void *v19; // [rsp+8h] [rbp-A0h]
  __int64 v20; // [rsp+8h] [rbp-A0h]
  __int64 v21; // [rsp+8h] [rbp-A0h]
  __int64 v22; // [rsp+8h] [rbp-A0h]
  const char *v23; // [rsp+10h] [rbp-98h]
  __int64 v24; // [rsp+18h] [rbp-90h]
  void *v25[2]; // [rsp+20h] [rbp-88h] BYREF
  __int64 v26; // [rsp+30h] [rbp-78h] BYREF
  const char *v27; // [rsp+40h] [rbp-68h] BYREF
  __int64 v28; // [rsp+48h] [rbp-60h]
  __int16 v29; // [rsp+60h] [rbp-48h]

  if ( (unsigned __int8)sub_1131B70(a2) || (result = (_UNKNOWN *__ptr32 *)sub_1131C50(a2), (_BYTE)result) )
  {
    sub_11E7860(a1, a2, a3, (__int64)"profile", 7, 1, 0);
    v6 = sub_1131C50(a2);
    result = (_UNKNOWN *__ptr32 *)sub_11E5C00(a2);
    if ( (_BYTE)result )
    {
      if ( v6 )
      {
        sub_10DC5D0(a3, (__int64)"-exported_symbol");
        sub_10DC5D0(a3, (__int64)"___gcov_dump");
        sub_10DC5D0(a3, (__int64)"-exported_symbol");
        sub_10DC5D0(a3, (__int64)"___gcov_reset");
        sub_10DC5D0(a3, (__int64)"-exported_symbol");
        sub_10DC5D0(a3, (__int64)"_writeout_fn_list");
        sub_10DC5D0(a3, (__int64)"-exported_symbol");
        return (_UNKNOWN *__ptr32 *)sub_10DC5D0(a3, (__int64)"_reset_fn_list");
      }
    }
    else if ( v6 )
    {
      return result;
    }
    v7 = (unsigned int *)&unk_2600568;
    v24 = a3 + 16;
    do
    {
      while ( 1 )
      {
        sub_21C7250(v25, *v7, 5, 0);
        v28 = 6;
        v29 = 261;
        v23 = (const char *)v25[0];
        v19 = v25[1];
        v27 = "__DATA";
        v8 = sub_10DA6C0(a2, (__int64)&v27);
        v29 = 261;
        v9 = v8;
        v27 = v23;
        v28 = (__int64)v19;
        v10 = sub_10DA6C0(a2, (__int64)&v27);
        v11 = *(unsigned int *)(a3 + 8);
        if ( v11 + 1 > (unsigned __int64)*(unsigned int *)(a3 + 12) )
        {
          v22 = v10;
          sub_2237220(a3, v24, v11 + 1, 8);
          v11 = *(unsigned int *)(a3 + 8);
          v10 = v22;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v11) = "-sectalign";
        v12 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
        v13 = *(unsigned int *)(a3 + 12);
        *(_DWORD *)(a3 + 8) = v12;
        if ( v12 + 1 > v13 )
        {
          v21 = v10;
          sub_2237220(a3, v24, v12 + 1, 8);
          v12 = *(unsigned int *)(a3 + 8);
          v10 = v21;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v12) = v9;
        v14 = *(unsigned int *)(a3 + 12);
        v15 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
        *(_DWORD *)(a3 + 8) = v15;
        if ( v15 + 1 > v14 )
        {
          v20 = v10;
          sub_2237220(a3, v24, v15 + 1, 8);
          v15 = *(unsigned int *)(a3 + 8);
          v10 = v20;
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v15) = v10;
        v16 = *(unsigned int *)(a3 + 12);
        v17 = (unsigned int)(*(_DWORD *)(a3 + 8) + 1);
        *(_DWORD *)(a3 + 8) = v17;
        if ( v17 + 1 > v16 )
        {
          sub_2237220(a3, v24, v17 + 1, 8);
          v17 = *(unsigned int *)(a3 + 8);
        }
        *(_QWORD *)(*(_QWORD *)a3 + 8 * v17) = "0x4000";
        v18 = (__int64 *)v25[0];
        ++*(_DWORD *)(a3 + 8);
        if ( v18 == &v26 )
          break;
        operator delete(v18);
        ++v7;
        result = jpt_1202CD3;
        if ( v7 == (unsigned int *)jpt_1202CD3 )
          return result;
      }
      ++v7;
      result = jpt_1202CD3;
    }
    while ( jpt_1202CD3 != (_UNKNOWN *__ptr32 *)v7 );
  }
  return result;
}
