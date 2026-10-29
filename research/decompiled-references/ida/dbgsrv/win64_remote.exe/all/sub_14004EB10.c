/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14004EB10
// Address: 0x000000014004EB10

//----- (000000014004EB10) ----------------------------------------------------
void __fastcall sub_14004EB10(__int64 a1, _QWORD *a2, unsigned __int64 *a3)
{
  double v3; // xmm1_8
  _QWORD *v5; // rsi
  __int64 v7; // r12
  int v8; // ebp
  const char *v9; // r14
  char *v10; // rbx
  __int64 v11; // r15
  _BYTE *v12; // rcx
  const char *v13; // rsi
  size_t v15; // rax
  int v16; // eax
  unsigned __int8 *v17; // rcx
  unsigned __int8 v18; // bp
  unsigned __int64 v19; // rax
  void *v20; // rcx
  const void *v21; // rdx
  unsigned __int64 v22; // rax
  __int64 v23; // rax
  const char *v24; // r8
  unsigned int v25; // eax
  unsigned int v26; // ebx
  bool v27; // zf
  void *v28; // rbx
  size_t v29; // rax
  size_t v30; // rdi
  size_t v31; // rbx
  unsigned __int64 v32; // rdx
  void *Block; // [rsp+30h] [rbp-68h] BYREF
  __int64 v34; // [rsp+38h] [rbp-60h]
  __int64 v35; // [rsp+40h] [rbp-58h]
  void *v36[10]; // [rsp+48h] [rbp-50h] BYREF
  int v37; // [rsp+A0h] [rbp+8h]
  unsigned int v39; // [rsp+B0h] [rbp+18h] BYREF

  v5 = a2;
  v7 = 0;
  memset(v36, 0, 24);
  v8 = sub_14005B690(a3, a3[1]);
  v37 = v8;
  sub_14004DD20((__int64 *)v36, v8);
  v9 = Str1;
  if ( v8 > 0 )
  {
    v10 = (char *)v36[0] + 40;
    v11 = (unsigned int)v8;
    while ( 1 )
    {
      v10[384] = 0;
      v7 += sub_14005B7B0(a3, a3[1]) - 1;
      *((_QWORD *)v10 - 5) = v7;
      v12 = (_BYTE *)*a3;
      v13 = (const char *)*a3;
      while ( (unsigned __int64)v12 < a3[1] )
      {
        if ( !*v12++ )
        {
          *a3 = (unsigned __int64)v12;
          if ( v13 )
          {
            v15 = strlen(v13);
            if ( v15 )
            {
              sub_140001810((__int64)(v10 - 32), v13, v15);
              goto LABEL_10;
            }
          }
          break;
        }
      }
      *((_QWORD *)v10 - 3) = 0;
LABEL_10:
      if ( *((_QWORD *)v10 - 3) <= 1u )
        goto LABEL_30;
      *((_DWORD *)v10 + 97) = 0;
      v16 = sub_14005B690(a3, a3[1]);
      *((_DWORD *)v10 - 2) = v16;
      if ( v16 != 4 )
        *((_DWORD *)v10 + 97) = sub_14005B690(a3, a3[1]);
      v17 = (unsigned __int8 *)*a3;
      v18 = 0;
      if ( *a3 < a3[1] )
        v18 = *v17;
      v19 = (unsigned __int64)(v17 + 1);
      if ( *a3 >= a3[1] )
        v19 = *a3;
      *a3 = v19;
      if ( v18 )
        break;
LABEL_28:
      v23 = sub_14005B7B0(a3, a3[1]) - 1;
      *((_QWORD *)v10 + 5) = v23;
      if ( v23 != -1 )
        sub_1400515E0(v10 + 24, a3);
LABEL_30:
      if ( *(_BYTE *)(a1 + 184) )
      {
        v24 = Str1;
        if ( *((_QWORD *)v10 - 3) )
          v24 = *((const char **)v10 - 4);
        sub_140002CE0((struct __crt_locale_pointers *)"update_lowcnd(ea=%a cnd=%s)\n", v3, v24);
      }
      v10 += 432;
      if ( !--v11 )
      {
        v5 = a2;
        v8 = v37;
        goto LABEL_36;
      }
    }
    if ( (unsigned __int64)v18 <= *((_QWORD *)v10 + 1) )
    {
      if ( v18 == *((_QWORD *)v10 + 1) || (unsigned __int64)v18 >= *((_QWORD *)v10 + 1) )
      {
LABEL_25:
        v20 = *(void **)v10;
        v21 = (const void *)*a3;
        v22 = *a3 + v18;
        if ( v22 >= *a3 && v22 <= a3[1] )
        {
          *a3 = v22;
          memcpy(v20, v21, v18);
        }
        goto LABEL_28;
      }
    }
    else
    {
      if ( (unsigned __int64)v18 > *((_QWORD *)v10 + 2) )
        *(_QWORD *)v10 = sub_14005ABE0((__int64)v10, *(void **)v10, v18, 1u);
      memset((void *)(*(_QWORD *)v10 + *((_QWORD *)v10 + 1)), 0, v18 - *((_QWORD *)v10 + 1));
    }
    *((_QWORD *)v10 + 1) = v18;
    goto LABEL_25;
  }
LABEL_36:
  Block = nullptr;
  v34 = 0;
  v35 = 0;
  v25 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, void *, _QWORD, void **))(**(_QWORD **)(a1 + 440) + 344LL))(
          *(_QWORD *)(a1 + 440),
          &v39,
          v36[0],
          (unsigned int)v8,
          &Block);
  v26 = v25;
  if ( *(_BYTE *)(a1 + 184) )
    sub_140002CE0((struct __crt_locale_pointers *)"  update_lowcnds => %d\n", v25);
  sub_140002D20(v5, v26);
  sub_140002D20(v5, v39);
  v27 = v26 == 1;
  v28 = Block;
  if ( !v27 )
  {
    if ( v34 )
    {
      v9 = pNodeName;
      if ( Block )
        v9 = (const char *)Block;
    }
    v29 = strlen(v9);
    v30 = v29 + 1;
    if ( v29 != -1 )
    {
      v31 = v5[1];
      v32 = v31 + v30;
      if ( v31 + v30 < v31 )
        v32 = 0x7FFFFFFFFFFFFFFFLL;
      sub_140002EF0((__int64)v5, v32);
      memcpy((void *)(v31 + *v5), v9, v30);
      v28 = Block;
    }
  }
  if ( v28 )
  {
    v34 = 0;
    j_free(v28);
    Block = nullptr;
    v35 = 0;
  }
  if ( v36[0] )
  {
    sub_14004DF20((__int64 *)v36, 0);
    j_free(v36[0]);
  }
}
// 14004ECFB: variable 'v3' is possibly undefined
// 1400515E0: using guessed type __int64 __fastcall sub_1400515E0(_QWORD, _QWORD);
