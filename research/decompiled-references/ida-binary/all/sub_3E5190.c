__int64 __fastcall sub_3E5190(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        int *a4,
        double a5,
        __m128 a6,
        __m128 a7,
        __m128 a8,
        double a9,
        double a10,
        __m128 a11,
        __m128 a12)
{
  const char *v15; // r15
  char *v16; // rax
  __int64 v17; // r9
  __int64 v18; // rbp
  __int64 v19; // rdi
  char *v20; // rsi
  char v21; // al
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  double v25; // xmm4_8
  double v26; // xmm5_8
  bool v27; // zf
  char v28; // r12
  __int64 v29; // rdx
  int v30; // edi
  char *v31; // rbp
  __int64 custom_argloc; // rax
  int v33; // edx
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // eax
  int v38; // eax
  char *v40; // rax
  __int64 v41; // rdx
  __int64 v42; // rcx
  __int64 v43; // r8
  __int64 v44; // r9
  __int64 v45; // [rsp+8h] [rbp-50h]
  __int64 v46[9]; // [rsp+10h] [rbp-48h] BYREF

  v46[1] = __readfsqword(0x28u);
  ++dword_8D1258;
  if ( (debug & 0x40000) != 0 )
  {
    if ( a4 )
      v15 = (const char *)dstr_tinfo(a4);
    else
      v15 = "(null)";
    v45 = *a2;
    v16 = sub_3DED80(a1, 0);
    sub_3E25E0(
      (__int64)"<%s>: eval_source_item(si=%p, ea=%a fixed_type=%s)\n",
      (__int64)v16,
      v45,
      a3,
      (__int64)v15,
      v17);
  }
  cleanup_argloc(a1 + 104);
  v18 = *a2;
  v19 = a1 + 104;
  v46[0] = v18;
  if ( v18 )
  {
    ++*(_DWORD *)(v18 + 8);
    v20 = (char *)a4;
    v21 = sub_3DFC50(v19, a4, a3, v46, a5);
    v27 = (*(_DWORD *)(v18 + 8))-- == 1;
    v28 = v21;
    if ( v27 )
      (**(void (__fastcall ***)(__int64))v18)(v18);
  }
  else
  {
    v20 = (char *)a4;
    v28 = sub_3DFC50(v19, a4, a3, v46, a5);
  }
  v29 = debug & 0x40000;
  if ( v28 )
  {
    ++dword_8D1258;
    if ( !(_DWORD)v29 )
      goto LABEL_23;
    v30 = *(_DWORD *)(a1 + 104);
    if ( v30 > 6 )
    {
      custom_argloc = retrieve_custom_argloc();
      v33 = *(_DWORD *)(a1 + 104);
      v31 = "!!UNKNOWN CUSTOM!!";
      if ( custom_argloc )
        v31 = *(char **)(custom_argloc + 8);
      if ( v33 != 5 )
      {
        if ( v33 <= 5 )
        {
          if ( v33 != 2 )
          {
            if ( v33 != 3 )
              goto LABEL_15;
            goto LABEL_42;
          }
LABEL_44:
          v31 = "scattered";
          goto LABEL_22;
        }
        if ( v33 != 6 )
          goto LABEL_22;
LABEL_21:
        v31 = "static";
        goto LABEL_22;
      }
    }
    else if ( v30 != 5 )
    {
      if ( v30 != 6 )
      {
        if ( v30 != 2 )
        {
          if ( v30 != 3 )
          {
LABEL_15:
            v31 = "!!UNKNOWN!!";
LABEL_22:
            v20 = sub_3DED80(a1, 0);
            sub_3E25E0(
              (__int64)"<%s>: source item location resolved. Type is %s\n",
              (__int64)v20,
              (__int64)v31,
              v34,
              v35,
              v36);
LABEL_23:
            v37 = *(_DWORD *)(a1 + 104);
            if ( v37 == 6 )
            {
              sub_3E44D0(a1, a5, (__int64)v20, v29, v22, v23, v24);
              goto LABEL_28;
            }
            if ( v37 > 6 )
            {
              if ( v37 == 7 )
              {
                sub_3E4560(a1, a5, (__int64)v20, v29, v22, v23, v24);
                goto LABEL_28;
              }
            }
            else
            {
              if ( v37 == 3 )
              {
                sub_3E4DC0(a1, a5, a6, a7, a8, v25, v26, a11, a12);
                goto LABEL_28;
              }
              if ( v37 == 5 )
              {
                sub_3E4350((__int64 *)a1, a5, a6, a7, a8, v25, v26, a11, a12);
LABEL_28:
                v38 = dword_8D1258 - 1;
                goto LABEL_32;
              }
            }
            sub_3E3770((__int64 *)(a1 + 216), "Unavailable", 0, a5);
            sub_3E3770((__int64 *)(a1 + 120), "Unavailable", 0, a5);
            goto LABEL_28;
          }
LABEL_42:
          v31 = "reg";
          goto LABEL_22;
        }
        goto LABEL_44;
      }
      goto LABEL_21;
    }
    v31 = "rrel";
    goto LABEL_22;
  }
  if ( (_DWORD)v29 )
  {
    v40 = sub_3DED80(a1, 0);
    sub_3E25E0((__int64)"<%s>: FAILED resolving location\n", (__int64)v40, v41, v42, v43, v44);
  }
  v38 = dword_8D1258;
LABEL_32:
  dword_8D1258 = v38 - 1;
  return 1;
}
