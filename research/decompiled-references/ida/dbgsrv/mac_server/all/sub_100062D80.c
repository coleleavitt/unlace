/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_100062D80
// Address: 0x0000000100062D80

//----- (0000000100062D80) ----------------------------------------------------
__int64 __fastcall sub_100062D80(__int64 a1, __int64 a2)
{
  __int64 v2; // rcx
  __int64 result; // rax
  __int64 v4; // r14
  __int64 v5; // r15
  __int64 v6; // rcx
  __int64 v7; // r13
  __int64 v8; // rbx
  __int64 v9; // r13
  __int64 v10; // rax
  __int64 v11; // rbx
  char *v12; // r12
  __int64 v13; // r14
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v17; // r13
  char *v18; // r14
  void *v19; // rdi
  __int64 v20; // [rsp+0h] [rbp-40h]
  __int64 v21; // [rsp+10h] [rbp-30h]
  __int64 v22; // [rsp+10h] [rbp-30h]

  v2 = *(_QWORD *)(a1 + 312);
  result = 0xFFFFFFFFLL;
  if ( v2 )
  {
    v4 = a1;
    v5 = a1 + 312;
    do
    {
      if ( *(_DWORD *)(v2 + 32) >= (int)a2 )
        v5 = v2;
      v2 = *(_QWORD *)(v2 + 8LL * (*(_DWORD *)(v2 + 32) < (int)a2));
    }
    while ( v2 );
    if ( v5 != a1 + 312 && *(_DWORD *)(v5 + 32) <= (int)a2 )
    {
      v6 = *(_QWORD *)(v5 + 48);
      if ( v6 )
      {
        v20 = a1 + 304;
        v7 = *(_QWORD *)(v5 + 40);
        v8 = 48 * v6;
        if ( (*(unsigned __int8 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)a1 + 480LL))(
               a1,
               a2,
               48 * v6 + v7 - 48) )
        {
          v9 = v8 + v7;
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 320LL))(
            a1,
            4,
            *(_QWORD *)(v9 - 16),
            *(_QWORD *)(a1 + 408),
            *(unsigned int *)(a1 + 416));
          if ( *(_BYTE *)(v9 - 8) != 1
            || (*(unsigned __int8 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _QWORD))(*(_QWORD *)a1 + 440LL))(
                 a1,
                 (unsigned int)a2,
                 0,
                 *(unsigned int *)(v9 - 40),
                 *(_QWORD *)(v9 - 48)) )
          {
            v10 = *(_QWORD *)(v5 + 48);
            v21 = *(_QWORD *)(v5 + 40);
            v11 = *(_QWORD *)(v21 + 48 * v10 - 40);
            if ( v11 )
            {
              v22 = 48 * v10 + v21;
              v12 = (char *)qalloc_or_throw(32 * v11);
              v13 = 0;
              v14 = v11;
              do
              {
                v15 = v13 + *(_QWORD *)(v22 - 48);
                *(_DWORD *)&v12[v13] = -2;
                *(_OWORD *)&v12[v13 + 8] = 0;
                *(_QWORD *)&v12[v13 + 24] = 0;
                sub_10005FB50((__int64)&v12[v13], v15);
                v13 += 32;
                --v14;
              }
              while ( v14 );
              v10 = *(_QWORD *)(v5 + 48);
              v4 = a1;
            }
            else
            {
              v12 = nullptr;
            }
            if ( v10 )
            {
              v16 = v10 - 1;
              *(_QWORD *)(v5 + 48) = v16;
              sub_10000A1B0((char **)(*(_QWORD *)(v5 + 40) + 48 * v16));
            }
            if ( v12 )
            {
              v17 = v4;
              if ( v11 )
              {
                v18 = v12;
                do
                {
                  if ( *(int *)v18 >= -1 )
                  {
                    v19 = *((void **)v18 + 1);
                    if ( v19 )
                    {
                      *((_QWORD *)v18 + 2) = 0;
                      qfree(v19);
                      *((_QWORD *)v18 + 1) = 0;
                      *((_QWORD *)v18 + 3) = 0;
                    }
                    *(_DWORD *)v18 = -2;
                  }
                  v18 += 32;
                  --v11;
                }
                while ( v11 );
              }
              qfree(v12);
              v4 = v17;
            }
            if ( !*(_QWORD *)(v5 + 48) )
              sub_100064730(v20, (__int64 *)v5);
            return 2 * (unsigned int)(*(_QWORD *)(v4 + 160) != 0) + 1;
          }
          sub_100005090(a1, "Failed to restore %zu registers!\n", *(_QWORD *)(v9 - 40));
        }
        return 0xFFFFFFFFLL;
      }
    }
  }
  return result;
}
