__int64 __fastcall sub_CCCE60(__int64 a1, __int64 *a2)
{
  __int64 result; // rax
  _QWORD *v4; // rbx
  __int64 v5; // r10
  __int64 v6; // rbp
  __int64 v7; // rax
  int v8; // edi
  __int64 *v9; // rcx
  unsigned int v10; // edx
  __int64 *v11; // rsi
  __int64 v12; // rdx
  __int64 *v13; // r8
  __int64 *j; // rax
  __int64 v15; // rdx
  int v16; // ecx
  int v17; // r8d
  int v18; // r9d
  int v19; // edi
  __int64 v20; // rax
  void *v21; // rbp
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *i; // [rsp+10h] [rbp-78h]
  _BYTE v26[8]; // [rsp+20h] [rbp-68h] BYREF
  __int64 v27; // [rsp+28h] [rbp-60h]
  __int64 v28; // [rsp+30h] [rbp-58h] BYREF
  __int64 v29; // [rsp+38h] [rbp-50h]
  __int64 v30; // [rsp+40h] [rbp-48h] BYREF
  __int64 v31; // [rsp+48h] [rbp-40h]

  result = sub_16669D0(v26, *(_QWORD *)(a1 + 32));
  v4 = *(_QWORD **)(a1 + 40);
  if ( v4 )
  {
    result = (__int64)&v4[2 * *((unsigned int *)v4 - 1)];
    for ( i = (_QWORD *)result; i != v4; v4 += 2 )
    {
      v5 = v4[1];
      v6 = *a2;
      if ( v5 )
      {
        v7 = *(unsigned int *)(v6 + 32);
        v8 = *(_DWORD *)(v5 + 12);
        v9 = *(__int64 **)(v6 + 24);
        v10 = v7 - 1;
        v7 *= 24;
        v11 = (__int64 *)((char *)v9 + v7);
        v12 = 24LL * (v8 & v10);
        v13 = &v9[(unsigned __int64)v12 / 8];
        if ( v12 != v7 )
        {
          for ( j = &v9[(unsigned __int64)v12 / 8]; v11 != j; j += 3 )
          {
            v15 = *j;
            if ( (unsigned __int64)*j > 1 )
            {
              if ( *(_DWORD *)(v15 + 12) == v8 && v5 == v15 )
              {
LABEL_16:
                v22 = j[2];
                if ( v22 && *(_QWORD *)(*(_QWORD *)(a1 + 32) + 864LL) != v22 )
                {
                  v28 = 1;
                  v29 = 0;
                  v30 = 1;
                  v31 = 0;
                  sub_182CBA0(qword_1C7F2C0, &v30);
                  v19 = v27;
                  BYTE4(v30) &= ~1u;
                  LODWORD(v30) = 1;
                  if ( !v27 )
                  {
                    sub_16669E0(v26);
                    v19 = v27;
                  }
                  goto LABEL_13;
                }
LABEL_11:
                v28 = 0;
                v29 = 0;
                v30 = 1;
                v31 = 0;
                sub_182CBA0(qword_1C7F2C0, &v30);
                v19 = v27;
                BYTE4(v30) &= ~1u;
                LODWORD(v30) = 1;
                if ( !v27 )
                {
                  sub_16669E0(v26);
                  v19 = v27;
                }
                goto LABEL_13;
              }
            }
            else if ( !v15 )
            {
              goto LABEL_11;
            }
          }
        }
        if ( v9 != v13 )
        {
          while ( 1 )
          {
            v23 = *v9;
            if ( (unsigned __int64)*v9 > 1 )
            {
              if ( *(_DWORD *)(v23 + 12) == v8 && v5 == v23 )
              {
                j = v9;
                goto LABEL_16;
              }
            }
            else if ( !v23 )
            {
              goto LABEL_11;
            }
            v9 += 3;
            if ( v13 == v9 )
              goto LABEL_11;
          }
        }
        goto LABEL_11;
      }
      v28 = 0;
      v29 = 0;
      v30 = 1;
      v31 = 0;
      sub_182CBA0(qword_1C7F2C0, &v30);
      v19 = v27;
      BYTE4(v30) &= ~1u;
      LODWORD(v30) = 1;
      if ( !v27 )
      {
        sub_16669E0(v26);
        v19 = v27;
      }
LABEL_13:
      v20 = sub_166A700(v19, (unsigned int)&v28, 1, v16, v17, v18);
      sub_135F9B0(v6, *v4, v20);
      v21 = qword_1C7F2C0;
      sub_182CBA0(qword_1C7F2C0, &v28);
      result = sub_182CBA0(v21, &v30);
    }
  }
  return result;
}

