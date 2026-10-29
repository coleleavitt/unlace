void __fastcall sub_2274D70(__int64 a1, _QWORD *a2, __int64 a3, _QWORD *a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  __int64 v8; // rdi
  __int64 v9; // rax
  char *v10; // xmm0_8
  _BYTE *v11; // rsi
  __int64 v12; // rdx
  _QWORD *v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  int v16; // eax
  const char *v17; // rax
  __int64 ***v18; // rax
  __int64 *v19; // rax
  void *v20; // rdi
  __m128 *v21; // rsi
  __int64 v22; // rdx
  _QWORD *v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 **v27; // rdi
  __int64 v28; // rax
  int v29; // [rsp+0h] [rbp-98h]
  void *v30; // [rsp+18h] [rbp-80h] BYREF
  _BYTE v31[24]; // [rsp+28h] [rbp-70h] BYREF
  _QWORD v32[3]; // [rsp+40h] [rbp-58h] BYREF
  void *v33; // [rsp+58h] [rbp-40h]
  __int16 v34; // [rsp+60h] [rbp-38h]
  _BYTE v35[48]; // [rsp+68h] [rbp-30h] BYREF

  v6 = ****(_QWORD ****)(a1 + 8);
  if ( *(_BYTE *)(v6 + 75) )
  {
    *(_BYTE *)(a1 + 77) = 1;
    *(_QWORD *)(a1 + 80) = 0;
    return;
  }
  v8 = *(_QWORD *)(a1 + 80);
  if ( v8 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v6 = ****(_QWORD ****)(a1 + 8);
  }
  v9 = sub_2273810(v6, a2, a3, a4, a5, a6);
  v10 = (char *)_mm_loadu_si128((const __m128i *)(v9 + 8)).m128i_u64[0];
  v29 = *(_DWORD *)v9;
  v30 = v31;
  v11 = *(_BYTE **)(v9 + 24);
  sub_226E090(&v30, v11, (__int64)&v11[*(_QWORD *)(v9 + 32)]);
  v16 = *(_DWORD *)(a1 + 72);
  if ( v16 )
  {
    if ( v16 != 2 )
    {
      if ( v16 == 1 )
      {
        switch ( v29 )
        {
          case 0:
            goto LABEL_11;
          case 2:
          case 5:
          case 6:
            v17 = "Could not find closing ]!";
            goto LABEL_9;
          case 11:
            sub_2273D80((__int64)v32, ****(__m128 *****)(a1 + 8), v12, v13, v14, v15);
            if ( v33 != v35 )
              operator delete(v33);
            *(_BYTE *)(a1 + 78) = 1;
            sub_2274D70(a1);
            v20 = v30;
            if ( v30 != v31 )
              goto LABEL_13;
            return;
          case 13:
            goto LABEL_19;
          default:
            v27 = **(__int64 ****)(a1 + 8);
            if ( !*(_BYTE *)(a1 + 78) )
            {
              v32[0] = "Expected , between entries!";
              v34 = 259;
              v19 = *v27;
              goto LABEL_10;
            }
            v28 = sub_2273F00(v27, v11, v12, v13, v14, v15);
            *(_QWORD *)(a1 + 80) = v28;
            if ( !v28 )
              *(_BYTE *)(a1 + 77) = 1;
            *(_BYTE *)(a1 + 78) = 0;
            break;
        }
      }
      goto LABEL_12;
    }
    if ( v29 != 7 )
      goto LABEL_11;
  }
  else if ( v29 != 7 )
  {
    if ( v29 == 8 )
    {
LABEL_19:
      sub_2273D80((__int64)v32, ****(__m128 *****)(a1 + 8), v12, v13, v14, v15);
      if ( v33 != v35 )
        operator delete(v33);
    }
    else if ( v29 )
    {
      v17 = "Unexpected token. Expected Block Entry or Block End.";
LABEL_9:
      v32[0] = v17;
      v18 = *(__int64 ****)(a1 + 8);
      v34 = 259;
      v19 = **v18;
LABEL_10:
      sub_226E270(*v19, (__int64)v32, v10);
    }
    goto LABEL_11;
  }
  v21 = ****(__m128 *****)(a1 + 8);
  sub_2273D80((__int64)v32, v21, v12, v13, v14, v15);
  if ( v33 != v35 )
    operator delete(v33);
  v26 = sub_2273F00(**(__int64 ****)(a1 + 8), v21, v22, v23, v24, v25);
  *(_QWORD *)(a1 + 80) = v26;
  if ( !v26 )
  {
LABEL_11:
    *(_BYTE *)(a1 + 77) = 1;
    *(_QWORD *)(a1 + 80) = 0;
  }
LABEL_12:
  v20 = v30;
  if ( v30 != v31 )
LABEL_13:
    operator delete(v20);
}
