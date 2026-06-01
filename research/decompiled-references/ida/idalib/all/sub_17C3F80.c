void __fastcall sub_17C3F80(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v3; // r12
  __int64 *i; // rbx
  __int64 v5; // rax
  __int64 v6; // r15
  __int64 v7; // r15
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  unsigned __int64 *v13; // rax
  __int64 *v14; // rdx
  unsigned __int64 v15; // rcx
  __int64 *v16; // rax
  __int64 v17; // rcx
  unsigned __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rax
  _QWORD *v24; // rax
  __int64 v25; // [rsp+8h] [rbp-E0h]
  __int64 v26; // [rsp+18h] [rbp-D0h] BYREF
  _QWORD v27[2]; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v28; // [rsp+30h] [rbp-B8h]
  unsigned __int8 *v29; // [rsp+40h] [rbp-A8h] BYREF
  char v30; // [rsp+98h] [rbp-50h]
  unsigned int v31; // [rsp+A0h] [rbp-48h]
  char v32; // [rsp+A4h] [rbp-44h]

  if ( *(_DWORD *)(a1 + 12596) >= *(_DWORD *)(a1 + 11320) )
  {
    v3 = (__int64 *)(a2 + 8 * a3);
    if ( (__int64 *)a2 != v3 )
    {
      for ( i = (__int64 *)a2; v3 != i; ++i )
      {
        v7 = *i;
        if ( !sub_B8C090((_BYTE *)*i) )
        {
          v12 = *(_QWORD *)(v7 + 40);
          if ( v12 )
          {
            if ( (*(_BYTE *)(v7 + 29) & 1) == 0 )
              goto LABEL_4;
            v13 = sub_B8C3D0(v7, a2, v8, v9, v10, v11);
            v14 = (__int64 *)*v13;
            v15 = *v13 + 8LL * *((unsigned int *)v13 + 2);
            if ( *v13 < v15 )
            {
              v18 = *v13;
              if ( *(_WORD *)(*v14 + 36) != 389 )
              {
                do
                {
                  v18 += 8LL;
                  if ( v15 == v18 )
                    goto LABEL_19;
                }
                while ( *(_WORD *)(*(_QWORD *)v18 + 36LL) != 389 );
              }
              if ( v15 == v18 )
                goto LABEL_19;
            }
            else
            {
              if ( v14 == (__int64 *)v15 )
                goto LABEL_19;
              if ( *(_WORD *)(*(_QWORD *)v15 + 36LL) != 389 )
              {
                v16 = (__int64 *)(v15 + 8);
                while ( v16 != v14 )
                {
                  v17 = *v16++;
                  if ( *(_WORD *)(v17 + 36) == 389 )
                    goto LABEL_9;
                }
LABEL_19:
                v12 = *(_QWORD *)(v7 + 40);
LABEL_4:
                if ( (v12 & 7) != 0 )
                  BUG();
                v5 = *(_QWORD *)((v12 & 0xFFFFFFFFFFFFFFF8LL) + 16);
                if ( *(_DWORD *)v5 != 1 || *(_BYTE *)(v5 + 16) != 95 )
                {
                  a2 = a1 + 8;
                  sub_168B9F0((__int64)v27, (__int64 *)(a1 + 8), *(_DWORD *)(v7 + 24), 0x1D6Au, 0);
                  v6 = *(_QWORD *)(v7 + 40);
                  if ( v30 )
                  {
                    a2 = v6;
                    sub_AE9DF0(&v29, v6, 9u);
                  }
                  else if ( v32 )
                  {
                    v19 = sub_168B9E0(v27);
                    v23 = v28;
                    if ( v28 )
                    {
                      v25 = v19;
                      v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v28 + 32LL))(v28);
                      v19 = v25;
                    }
                    v26 = v23;
                    v24 = sub_1587BC0(v19, &v26, v19, v20, v21, v22);
                    a2 = v6;
                    sub_AE9DF0((unsigned __int8 **)(*v24 + 32LL * v31 + 8), v6, 9u);
                  }
                  sub_15F7200(v27);
                }
              }
            }
          }
        }
LABEL_9:
        ;
      }
    }
  }
}
