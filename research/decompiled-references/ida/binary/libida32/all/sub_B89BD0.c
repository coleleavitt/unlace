unsigned __int64 __fastcall sub_B89BD0(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // r14
  unsigned __int8 v9; // bl
  __int64 v10; // rax
  unsigned __int64 v11; // rax
  __int64 v12; // rsi
  unsigned __int64 result; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 *v18; // rbp
  unsigned __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // r15
  __int64 v24; // rax
  unsigned __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rbp
  __int64 *v28; // r15
  char v29; // [rsp+6h] [rbp-42h]
  char v30; // [rsp+7h] [rbp-41h]
  __int64 *v31; // [rsp+8h] [rbp-40h]

  v6 = a1;
  v9 = a3;
  v10 = *(_QWORD *)(a1 + 120);
  v29 = a4;
  v30 = a5;
  if ( !v10 )
  {
    sub_A557A0((__int64 *)(*(_QWORD *)(a1 + 96) + 88LL), *(_QWORD *)(a1 + 96), a3, a4, a5, a6);
    v10 = *(_QWORD *)(a1 + 120);
  }
  v11 = v10 & 0xFFFFFFFFFFFFFFF8LL;
  if ( v11 )
  {
    if ( (*(_BYTE *)(v11 + 72) & 1) != 0 )
      sub_B84BC0(a1);
    while ( 1 )
    {
      v12 = a2;
      result = sub_B86DC0(v6, a2, v9, a4, a5, a6);
      v18 = (__int64 *)result;
      if ( result )
        return result;
      v23 = sub_B89430(v6, a2, v14, v15, v16, v17);
      if ( v23 )
      {
LABEL_8:
        v12 = a2;
        result = sub_B86DC0(v23, a2, v9, v20, v21, v22);
        if ( result && (a6 != v23 || (*(_BYTE *)(result + 29) & 2) == 0) )
          return result;
        while ( 1 )
        {
          v23 = *(_QWORD *)(v23 + 128);
          if ( !v23 )
            break;
          while ( *(char *)(v23 + 28) >= 0 )
          {
            if ( (*(_BYTE *)(v23 + 8) & 6) == 0 )
              goto LABEL_8;
            v23 = *(_QWORD *)(v23 + 128);
            if ( !v23 )
              goto LABEL_15;
          }
        }
      }
LABEL_15:
      v24 = *(_QWORD *)(v6 + 120);
      if ( v24 )
      {
        v25 = v24 & 0xFFFFFFFFFFFFFFF8LL;
        if ( !v25 )
          goto LABEL_27;
      }
      else
      {
        v12 = *(_QWORD *)(v6 + 96);
        sub_A557A0((__int64 *)(v12 + 88), v12, v19, v20, v21, v22);
        v19 = *(_QWORD *)(v6 + 120);
        v25 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        if ( (v19 & 0xFFFFFFFFFFFFFFF8LL) == 0 )
        {
          if ( v19 )
            goto LABEL_27;
          v26 = 0;
LABEL_35:
          v12 = *(_QWORD *)(v6 + 96);
          sub_A557A0((__int64 *)(v12 + 88), v12, v19, v20, v21, v22);
          v25 = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFFFFFFF8LL;
LABEL_36:
          if ( !v25 )
            goto LABEL_22;
          goto LABEL_19;
        }
      }
      if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
      {
        sub_B84BC0(v6);
        v19 = *(_QWORD *)(v6 + 120);
        v25 = v19 & 0xFFFFFFFFFFFFFFF8LL;
        v12 = *(unsigned int *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 24);
        v20 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8LL) + 16);
        v26 = v20 + 8 * v12;
        if ( !v19 )
          goto LABEL_35;
        goto LABEL_36;
      }
      v20 = *(unsigned int *)(v25 + 24);
      v26 = *(_QWORD *)(v25 + 16) + 8 * v20;
LABEL_19:
      v19 = v25;
      if ( (*(_BYTE *)(v25 + 72) & 1) != 0 )
      {
        sub_B84BC0(v6);
        v19 = *(_QWORD *)(v6 + 120) & 0xFFFFFFFFFFFFFFF8LL;
      }
      v18 = *(__int64 **)(v19 + 16);
LABEL_22:
      while ( (__int64 *)v26 != v18 )
      {
        v12 = a2;
        result = sub_B86F00(*v18, a2, v9, v20, v21, v22);
        if ( result )
          return result;
        ++v18;
      }
LABEL_27:
      if ( !v29 )
      {
        v27 = sub_B89430(v6, v12, v19, v20, v21, v22);
        if ( v27 )
        {
LABEL_39:
          v20 = *(_QWORD *)(v27 + 104);
          v28 = (__int64 *)v20;
          v31 = (__int64 *)(v20 + 8LL * *(unsigned int *)(v27 + 112));
          if ( (__int64 *)v20 == v31 )
            goto LABEL_44;
          while ( 1 )
          {
            v12 = a2;
            result = sub_B86F00(*v28, a2, v9, v20, v21, v22);
            if ( result )
            {
              if ( a6 != v27 || (*(_BYTE *)(result + 29) & 2) == 0 )
                return result;
            }
            if ( v31 == ++v28 )
            {
LABEL_44:
              while ( 1 )
              {
                v27 = *(_QWORD *)(v27 + 128);
                if ( !v27 )
                  goto LABEL_28;
                if ( *(char *)(v27 + 28) >= 0 && (*(_BYTE *)(v27 + 8) & 6) == 0 )
                  goto LABEL_39;
              }
            }
          }
        }
      }
LABEL_28:
      if ( v30 )
      {
        v6 = sub_B878F0(v6, v12, v19, v20, v21, v22);
        if ( v6 )
          continue;
      }
      return 0;
    }
  }
  return 0;
}

