/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004C980
// Address: 0x000000014004C980

//----- (000000014004C980) ----------------------------------------------------
void __fastcall sub_14004C980(__int16 **a1, _QWORD *a2, _QWORD *a3)
{
  __int16 *v6; // rax
  __int64 v7; // rcx
  int v8; // eax
  __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  const void *v12; // r14
  size_t v13; // rax
  size_t v14; // rbx
  __int64 v15; // rsi
  __int16 *v16; // rax
  __int16 *v17; // r9
  __int64 v18; // r8
  unsigned __int64 v19; // rdx
  __int16 *v20; // [rsp+20h] [rbp-20h] BYREF
  __int64 v21; // [rsp+28h] [rbp-18h]
  unsigned __int64 v22; // [rsp+30h] [rbp-10h]

  v20 = nullptr;
  v21 = 0;
  v22 = 0;
  v20 = (__int16 *)sub_14005ABE0((__int64)&v20, nullptr, 9u, 1u);
  v21 = 9;
  *(_QWORD *)v20 = *a2;
  *((_BYTE *)v20 + 8) = 0;
  v6 = word_1400CAE32;
  v7 = v21;
  if ( v21 )
    v6 = v20;
  if ( *(_BYTE *)v6 == 47 )
  {
    v8 = unknown_libname_43((char *)v20 + 1);
    if ( v8 <= 0 )
      goto LABEL_14;
    v9 = a3[1];
    v10 = v8;
    v11 = v9 - 1;
    if ( !v9 )
      v11 = 0;
    if ( v10 >= v11 )
      goto LABEL_14;
    v12 = (const void *)(v10 + *a3);
    if ( v12 )
    {
      v13 = strlen((const char *)(v10 + *a3));
      v14 = v13;
      if ( v13 )
      {
        v15 = v13 + 1;
        if ( v13 + 1 <= v22 )
        {
          v16 = v20;
        }
        else
        {
          v16 = (__int16 *)sub_14005ABE0((__int64)&v20, v20, v13 + 1, 1u);
          v20 = v16;
        }
        v21 = v15;
        memcpy(v16, v12, v14);
        *((_BYTE *)v20 + v14) = 0;
LABEL_14:
        v7 = v21;
        goto LABEL_15;
      }
    }
    v7 = 0;
  }
LABEL_15:
  v17 = *a1;
  v18 = (__int64)a1[1];
  v19 = (unsigned __int64)a1[2];
  *a1 = v20;
  a1[1] = (__int16 *)v7;
  a1[2] = (__int16 *)v22;
  v20 = v17;
  v21 = v18;
  v22 = v19;
  if ( v17 )
  {
    v21 = 0;
    j_free(v17);
  }
}
// 140070E80: using guessed type __int64 __fastcall unknown_libname_43(_QWORD);
// 1400CAE32: using guessed type __int16 word_1400CAE32[3];
