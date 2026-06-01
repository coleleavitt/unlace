void __fastcall sub_1821930(__int64 a1, __int64 a2, const __m128i *a3, __m128i a4, double a5)
{
  __int64 v8; // rsi
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  __m128i *v13; // rax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  char **v18; // rax
  char *v19; // rcx
  char **v20; // r13
  __int64 v21; // r8
  char *v22; // rsi
  __int64 v23; // rax
  char *v24; // rdi
  char *v25; // rax
  char *v26; // r14
  char *v27; // rax
  char *v28; // r8
  __int64 v29; // rax
  __int64 v30; // rax
  unsigned int v31; // [rsp+8h] [rbp-D0h] BYREF
  int v32; // [rsp+Ch] [rbp-CCh] BYREF
  _DWORD *v33; // [rsp+10h] [rbp-C8h] BYREF
  __int64 v34; // [rsp+18h] [rbp-C0h]
  _BYTE v35[184]; // [rsp+20h] [rbp-B8h] BYREF

  v33 = nullptr;
  v31 = 0;
  v34 = 0;
  if ( (unsigned __int8)sub_181F2D0(a1, (__int64)a3, &v33, &v31, a4, a5) )
  {
    v8 = v34;
    if ( (unsigned __int8)sub_B13160(v33, v34, &v32) )
    {
      if ( (*(_BYTE *)(a2 + 29) & 1) == 0 )
      {
LABEL_4:
        v13 = sub_B259E0(*(_QWORD *)(a1 + 248), v32, a3);
        sub_B8CC60(a2, (__int64)v13, v14, v15, v16, v17);
        return;
      }
      v18 = (char **)sub_B8C3D0(a2, v8, v9, v10, v11, v12);
      v19 = *v18;
      v20 = v18;
      v21 = 8LL * *((unsigned int *)v18 + 2);
      v22 = &(*v18)[v21];
      v23 = v21 >> 3;
      if ( v21 >> 5 )
      {
        if ( *(_WORD *)(*(_QWORD *)v19 + 36LL) == 220 )
        {
          v24 = v19;
        }
        else
        {
          v24 = v19 + 8;
          if ( *(_WORD *)(*((_QWORD *)v19 + 1) + 36LL) != 220 )
          {
            v24 = v19 + 16;
            if ( *(_WORD *)(*((_QWORD *)v19 + 2) + 36LL) != 220 )
            {
              v25 = v19;
              v24 = v19 + 24;
              if ( *(_WORD *)(*((_QWORD *)v19 + 3) + 36LL) != 220 )
              {
                while ( 1 )
                {
                  v24 = v25 + 32;
                  if ( &v19[32 * (v21 >> 5)] == v25 + 32 )
                  {
                    v23 = (v22 - v24) >> 3;
                    goto LABEL_18;
                  }
                  if ( *(_WORD *)(*((_QWORD *)v25 + 4) + 36LL) == 220 )
                    goto LABEL_23;
                  if ( *(_WORD *)(*((_QWORD *)v25 + 5) + 36LL) == 220 )
                  {
                    v24 = v25 + 40;
                    goto LABEL_23;
                  }
                  if ( *(_WORD *)(*((_QWORD *)v25 + 6) + 36LL) == 220 )
                  {
                    v24 = v25 + 48;
                    goto LABEL_23;
                  }
                  if ( *(_WORD *)(*((_QWORD *)v25 + 7) + 36LL) == 220 )
                    break;
                  v25 += 32;
                }
                v24 = v25 + 56;
              }
            }
          }
        }
LABEL_23:
        if ( v22 != v24 )
        {
          v27 = v24 + 8;
          if ( v22 == v24 + 8 )
          {
            v26 = v24;
          }
          else
          {
            do
            {
              if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) != 220 )
              {
                *(_QWORD *)v24 = *(_QWORD *)v27;
                v24 += 8;
              }
              v27 += 8;
            }
            while ( v22 != v27 );
            v19 = *v20;
            v28 = &(*v20)[v21];
            v26 = &v24[v28 - v22];
            if ( v22 != v28 )
            {
              memmove(v24, v22, v28 - v22);
              v19 = *v20;
            }
          }
          goto LABEL_30;
        }
        goto LABEL_21;
      }
      v24 = v19;
LABEL_18:
      if ( v23 != 2 )
      {
        if ( v23 != 3 )
        {
          if ( v23 != 1 )
          {
LABEL_21:
            v26 = v22;
            goto LABEL_30;
          }
          goto LABEL_39;
        }
        if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 220 )
          goto LABEL_23;
        v24 += 8;
      }
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) == 220 )
        goto LABEL_23;
      v24 += 8;
LABEL_39:
      v26 = v22;
      if ( *(_WORD *)(*(_QWORD *)v24 + 36LL) != 220 )
      {
LABEL_30:
        v29 = (v26 - v19) >> 3;
        *((_DWORD *)v20 + 2) = v29;
        if ( !(_DWORD)v29 )
          *(_BYTE *)(a2 + 29) &= ~1u;
        goto LABEL_4;
      }
      goto LABEL_23;
    }
    sub_168B9F0((__int64)v35, (__int64 *)(a1 + 8), v31, 0x19C0u, 0);
    v30 = sub_15DD120((__int64)v35, (__int64)a3);
    sub_1682BA0(v30, (__int64)&v33);
    sub_15F7200(v35);
  }
}
