__int64 *__fastcall sub_614FC0(__int64 a1)
{
  __int64 v2; // rbx
  __int64 *result; // rax
  __int64 v4; // r13
  __int64 v5; // rdx
  __int64 *v6; // rbp
  __int64 *v7; // r14
  __int64 v8; // r15
  __int64 v9; // rax
  int v10; // edi
  __int64 *v11; // rcx
  unsigned int v12; // edx
  __int64 *v13; // rsi
  __int64 v14; // rdx
  __int64 *v15; // r8
  __int64 *i; // rax
  __int64 v17; // rdx
  unsigned int v18; // ecx
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  int v22; // edi
  int v23; // r9d
  __int64 *v24; // rcx
  unsigned int v25; // edx
  __int64 *v26; // rsi
  __int64 v27; // rdx
  __int64 *v28; // r8
  __int64 *v29; // rax
  __int64 v30; // rdx
  unsigned int v31; // edx
  unsigned int v32; // eax
  __int64 v33; // rax
  unsigned int v34[15]; // [rsp+Ch] [rbp-3Ch] BYREF

  v2 = *(_QWORD *)(a1 + 32);
  result = (__int64 *)sub_654200(v2, 0);
  v4 = *(_QWORD *)(v2 + 2968);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    result = *(__int64 **)(v5 + 2288);
    v6 = &result[*(unsigned int *)(v5 + 2296)];
    if ( result != v6 )
    {
      while ( 1 )
      {
        v7 = result;
        if ( (unsigned __int64)*result > 1 )
          break;
        if ( v6 == ++result )
          return result;
      }
      if ( result != v6 )
      {
        v8 = *result;
        while ( 1 )
        {
          v9 = *(unsigned int *)(a1 + 64);
          v10 = *(_DWORD *)(v8 + 12);
          v11 = *(__int64 **)(a1 + 56);
          v12 = v9 - 1;
          v9 *= 8;
          v13 = (__int64 *)((char *)v11 + v9);
          v14 = 8LL * (v10 & v12);
          v15 = &v11[(unsigned __int64)v14 / 8];
          if ( v14 != v9 )
          {
            for ( i = &v11[(unsigned __int64)v14 / 8]; v13 != i; ++i )
            {
              v17 = *i;
              if ( (unsigned __int64)*i > 1 )
              {
                if ( *(_DWORD *)(v17 + 12) == v10 && v17 == v8 )
                  goto LABEL_17;
              }
              else if ( !v17 )
              {
                goto LABEL_15;
              }
            }
          }
          for ( ; v15 != v11; ++v11 )
          {
            v19 = *v11;
            if ( (unsigned __int64)*v11 > 1 )
            {
              if ( *(_DWORD *)(v19 + 12) == v10 && v19 == v8 )
                goto LABEL_17;
            }
            else if ( !v19 )
            {
              break;
            }
          }
LABEL_15:
          if ( !(*(unsigned __int8 (__fastcall **)(__int64, __int64, unsigned int *, __int64 *, __int64 *))(*(_QWORD *)v4 + 344LL))(
                  v4,
                  v8,
                  v34,
                  v11,
                  v15) )
            goto LABEL_17;
          v18 = *(_DWORD *)(v8 + 32);
          if ( v18 > 0x1E )
            goto LABEL_17;
          if ( v18 )
          {
            v20 = v8;
            do
            {
              if ( *(_QWORD *)(*(_QWORD *)(a1 + 24) + 840LL) != *(_QWORD *)(v20 + 48) )
                goto LABEL_17;
              v20 += 8;
            }
            while ( v8 + 8LL * v18 != v20 );
          }
          v21 = *(unsigned int *)(a1 + 112);
          v22 = *(_DWORD *)(v8 + 12);
          v23 = 1 << v18;
          v24 = *(__int64 **)(a1 + 104);
          v25 = v21 - 1;
          v21 *= 16;
          v26 = (__int64 *)((char *)v24 + v21);
          v27 = 16LL * (v22 & v25);
          v28 = &v24[(unsigned __int64)v27 / 8];
          if ( v27 == v21 )
          {
LABEL_49:
            while ( v28 != v24 )
            {
              v33 = *v24;
              if ( (unsigned __int64)*v24 > 1 )
              {
                if ( *(_DWORD *)(v33 + 12) == v22 && v33 == v8 )
                {
                  v29 = v24;
                  goto LABEL_46;
                }
              }
              else if ( !v33 )
              {
                break;
              }
              v24 += 2;
            }
LABEL_42:
            v31 = v34[0];
LABEL_43:
            if ( v23 == v31 )
              goto LABEL_44;
            goto LABEL_17;
          }
          v29 = &v24[(unsigned __int64)v27 / 8];
          while ( 1 )
          {
            v30 = *v29;
            if ( (unsigned __int64)*v29 > 1 )
              break;
            if ( !v30 )
              goto LABEL_42;
LABEL_39:
            v29 += 2;
            if ( v26 == v29 )
              goto LABEL_49;
          }
          if ( *(_DWORD *)(v30 + 12) != v22 || v30 != v8 )
            goto LABEL_39;
LABEL_46:
          v31 = v34[0];
          v32 = *(_DWORD *)(v29[1] + 12);
          if ( v34[0] >= v32 )
            goto LABEL_43;
          v34[0] = v32;
          if ( v23 == v32 )
LABEL_44:
            sub_6147C0(a1, v8, 0);
LABEL_17:
          result = v7 + 1;
          if ( v6 != v7 + 1 )
          {
            while ( 1 )
            {
              v8 = *result;
              v7 = result;
              if ( (unsigned __int64)*result > 1 )
                break;
              if ( v6 == ++result )
                return result;
            }
            if ( result != v6 )
              continue;
          }
          return result;
        }
      }
    }
  }
  return result;
}

