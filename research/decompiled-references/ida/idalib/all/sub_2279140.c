void __fastcall sub_2279140(__int64 a1)
{
  __int64 v1; // rbx
  __int64 *v2; // rbp
  size_t *v3; // r14
  size_t v4; // r13
  __int64 v5; // r15
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rbx
  __int64 v9; // rbx
  __int64 v10; // r10
  int v11; // eax
  int v12; // eax
  int v13; // eax
  __int64 *v14; // rax
  size_t **v15; // rax
  char **v16; // rsi
  __int64 ***v17; // rdi
  __int64 v18; // rax
  __int64 v19; // [rsp+10h] [rbp-C8h]
  __int64 v20; // [rsp+18h] [rbp-C0h]
  __int64 *v21; // [rsp+20h] [rbp-B8h]
  _QWORD v23[2]; // [rsp+40h] [rbp-98h] BYREF
  size_t *v24; // [rsp+50h] [rbp-88h]
  size_t v25; // [rsp+58h] [rbp-80h]
  __int16 v26; // [rsp+60h] [rbp-78h]
  __int64 *v27[2]; // [rsp+70h] [rbp-68h] BYREF
  char *v28; // [rsp+80h] [rbp-58h]
  __int16 v29; // [rsp+90h] [rbp-48h]

  v1 = *(_QWORD *)(a1 + 672);
  v20 = v1;
  if ( v1 )
  {
    if ( *(_DWORD *)(*(_QWORD *)v1 + 32LL) == 4 )
    {
      sub_2279100(v27, *(__int64 **)(v1 + 8), *(_DWORD *)(v1 + 16) == 0);
      v2 = v27[0];
      sub_2279100(v27, (__int64 *)(*(_QWORD *)(v1 + 8) + 8LL * *(unsigned int *)(v1 + 16)), 1);
      v21 = v27[0];
      if ( v2 != v27[0] )
      {
        v3 = (size_t *)*v2;
        while ( 1 )
        {
          v4 = *v3;
          v5 = *(_QWORD *)(v20 + 32);
          v6 = 32LL * *(unsigned int *)(v20 + 40);
          v19 = v5 + v6;
          v7 = v6 >> 5;
          v8 = v6 >> 7;
          if ( v8 )
          {
            v9 = v5 + (v8 << 7);
            while ( v4 != *(_QWORD *)(v5 + 8) || v4 && memcmp(*(const void **)v5, v3 + 4, v4) )
            {
              v10 = v5 + 32;
              if ( v4 == *(_QWORD *)(v5 + 40)
                && (!v4 || (v11 = memcmp(*(const void **)(v5 + 32), v3 + 4, v4), v10 = v5 + 32, !v11))
                || (v10 = v5 + 64, v4 == *(_QWORD *)(v5 + 72))
                && (!v4 || (v12 = memcmp(*(const void **)(v5 + 64), v3 + 4, v4), v10 = v5 + 64, !v12))
                || (v10 = v5 + 96, v4 == *(_QWORD *)(v5 + 104))
                && (!v4 || (v13 = memcmp(*(const void **)(v5 + 96), v3 + 4, v4), v10 = v5 + 96, !v13)) )
              {
                if ( v19 != v10 )
                  goto LABEL_21;
                goto LABEL_29;
              }
              v5 += 128;
              if ( v9 == v5 )
              {
                v7 = (v19 - v5) >> 5;
                goto LABEL_32;
              }
            }
LABEL_20:
            if ( v19 != v5 )
              goto LABEL_21;
            goto LABEL_29;
          }
LABEL_32:
          if ( v7 != 2 )
          {
            if ( v7 != 3 )
            {
              if ( v7 != 1 )
                goto LABEL_29;
              goto LABEL_35;
            }
            if ( v4 == *(_QWORD *)(v5 + 8) && (!v4 || !memcmp(*(const void **)v5, v3 + 4, v4)) )
              goto LABEL_20;
            v5 += 32;
          }
          if ( v4 == *(_QWORD *)(v5 + 8) && (!v4 || !memcmp(*(const void **)v5, v3 + 4, v4)) )
            goto LABEL_20;
          v5 += 32;
LABEL_35:
          if ( v4 == *(_QWORD *)(v5 + 8) && (!v4 || !memcmp(*(const void **)v5, v3 + 4, v4)) )
            goto LABEL_20;
LABEL_29:
          v16 = (char **)(v3 + 2);
          v17 = *(__int64 ****)(a1 + 80);
          if ( !*(_BYTE *)(a1 + 681) )
          {
            v24 = v3 + 4;
            v23[0] = "unknown key '";
            v26 = 1283;
            v27[0] = v23;
            v28 = "'";
            v29 = 770;
            v25 = v4;
            sub_226EF50(v17, v16, (__int64)v27, 0);
            v18 = std::_V2::generic_category((std::_V2 *)v17);
            *(_DWORD *)(a1 + 96) = 22;
            *(_QWORD *)(a1 + 104) = v18;
            return;
          }
          v24 = v3 + 4;
          v23[0] = "unknown key '";
          v26 = 1283;
          v29 = 770;
          v27[0] = v23;
          v25 = v4;
          v27[1] = nullptr;
          v28 = "'";
          sub_226EF50(v17, v16, (__int64)v27, 1);
LABEL_21:
          v3 = (size_t *)v2[1];
          v14 = v2 + 1;
          if ( v3 && v3 != (size_t *)-8LL )
          {
            ++v2;
            if ( v21 == v14 )
              return;
          }
          else
          {
            v15 = (size_t **)(v2 + 2);
            do
            {
              do
              {
                v3 = *v15;
                v2 = (__int64 *)v15++;
              }
              while ( !v3 );
            }
            while ( v3 == (size_t *)-8LL );
            if ( v21 == v2 )
              return;
          }
        }
      }
    }
  }
}
