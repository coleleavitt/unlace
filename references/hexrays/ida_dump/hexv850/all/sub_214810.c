__int64 __fastcall sub_214810(__int64 a1, double a2, double a3)
{
  __int64 result; // rax
  __int64 v4; // rbx
  __int64 i; // r13
  int v6; // eax
  unsigned __int64 v7; // r8
  size_t v8; // r9
  __int64 v9; // rbp
  const char *v10; // rdx
  __int64 v11; // rcx
  __int64 *v12; // rax
  __int64 *v13; // rbx
  __int64 *v14; // rdx
  const void *v15; // r10
  void *v16; // rax
  __int64 v17; // rax
  unsigned __int64 v18; // r13
  unsigned __int64 v19; // rdx
  __int64 *v20; // rsi
  __int64 *v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rcx
  __int64 v24; // rax
  __int64 *v25; // rcx
  unsigned __int64 v26; // rdx
  __int64 *v27; // rsi
  unsigned __int64 v28; // [rsp+8h] [rbp-50h]
  unsigned __int64 v29; // [rsp+8h] [rbp-50h]
  size_t v30; // [rsp+10h] [rbp-48h]
  const void *v31; // [rsp+18h] [rbp-40h]

  result = *(_QWORD *)(a1 + 1264);
  v4 = *(_QWORD *)(a1 + 1256);
  for ( i = v4 + 96 * result; i != v4; v4 += 96 )
  {
    result = sub_2112A0(a1, v4, *(_QWORD *)(v4 + 80), 0, a2, a3);
    v9 = result;
    if ( result )
    {
      v10 = s1;
      if ( *(_QWORD *)(v4 + 32) )
        v10 = *(const char **)(v4 + 24);
      sub_20E990((_QWORD *)a1, result, v10, 36);
      if ( *(_BYTE *)(v4 + 48) )
      {
        if ( (v11 = *(_QWORD *)(v4 + 80), v11 <= 0)
          || v11 > *(int *)(v9 + 88)
          && *(_DWORD *)(a1 + 792) > (signed int)(-991146299 * ((v9 - *(_QWORD *)(a1 + 432)) >> 3))
          || !(unsigned __int8)sub_2120C0(a1, v9, (_QWORD *)(v4 + 48), v11) )
        {
          if ( (*(_BYTE *)(a1 + 2) & 8) != 0 )
            sub_68620(
              (__int64)"%a: incorrect user-defined type for '%s' has been skipped\n",
              a2,
              *(const char **)(a1 + 40));
        }
      }
      v6 = *(_DWORD *)(v4 + 88);
      if ( (v6 & 0x10) != 0 )
      {
        *(_DWORD *)(v9 + 24) |= 0x1000000u;
        v6 = *(_DWORD *)(v4 + 88);
      }
      if ( (v6 & 0x20) != 0 )
        *(_DWORD *)(v9 + 24) |= 0x8000000u;
      result = v4 + 56;
      if ( v9 + 56 != v4 + 56 )
      {
        v7 = *(_QWORD *)(v4 + 64);
        if ( v7 && (v8 = v7 - 1, v7 != 1) )
        {
          v15 = *(const void **)(v4 + 56);
          v16 = *(void **)(v9 + 56);
          if ( *(_QWORD *)(v9 + 72) < v7 )
          {
            v31 = *(const void **)(v4 + 56);
            v30 = v7 - 1;
            v29 = *(_QWORD *)(v4 + 64);
            v16 = (void *)qvector_reserve(v9 + 56, *(_QWORD *)(v9 + 56), v29, 1);
            v15 = v31;
            v8 = v30;
            *(_QWORD *)(v9 + 56) = v16;
            v7 = v29;
          }
          *(_QWORD *)(v9 + 64) = v7;
          v28 = v7;
          memmove(v16, v15, v8);
          result = *(_QWORD *)(v9 + 56);
          *(_BYTE *)(result + v28 - 1) = 0;
        }
        else
        {
          *(_QWORD *)(v9 + 64) = 0;
        }
      }
    }
  }
  if ( (*(_BYTE *)(a1 + 2) & 4) != 0 )
  {
    v12 = *(__int64 **)(a1 + 1280);
    if ( v12 )
    {
      if ( *(_QWORD *)(a1 + 1288) )
      {
        v13 = (__int64 *)v12[1];
        if ( v12 != v13 )
        {
          do
          {
            while ( 1 )
            {
              while ( !sub_2112A0(a1, (__int64)(v13 + 3), 0, 1, a2, a3)
                   || !sub_2112A0(a1, (__int64)(v13 + 6), 0, 0, a2, a3) )
              {
                v17 = *v13;
                v18 = (unsigned __int64)v13;
                if ( (*v13 & 2) == 0 )
                {
                  v19 = v13[2];
                  if ( (*(_BYTE *)v19 & 2) != 0 )
                  {
                    v18 = v17 & 0xFFFFFFFFFFFFFFFCLL;
                    v24 = *(_QWORD *)(v17 & 0xFFFFFFFFFFFFFFFCLL);
                    if ( (v24 & 2) == 0 )
                    {
                      v25 = v13;
                      while ( *(__int64 **)(v18 + 16) == v25 )
                      {
                        v25 = (__int64 *)v18;
                        v26 = v24 & 0xFFFFFFFFFFFFFFFCLL;
                        v24 = *(_QWORD *)(v24 & 0xFFFFFFFFFFFFFFFCLL);
                        v18 = v26;
                        if ( (v24 & 2) != 0 )
                        {
                          v27 = v13;
                          v13 = (__int64 *)v26;
                          sub_213500((unsigned __int64 **)(a1 + 1280), v27);
                          goto LABEL_40;
                        }
                      }
                    }
                  }
                  else
                  {
                    do
                    {
                      v18 = v19;
                      v19 = *(_QWORD *)(v19 + 8);
                    }
                    while ( (*(_BYTE *)v19 & 2) == 0 );
                  }
                }
                v20 = v13;
                v13 = (__int64 *)v18;
                sub_213500((unsigned __int64 **)(a1 + 1280), v20);
LABEL_40:
                if ( v13 == *(__int64 **)(a1 + 1280) )
                  return sub_214300(a1);
              }
              if ( (*v13 & 2) == 0 )
                break;
LABEL_31:
              if ( v13 == *(__int64 **)(a1 + 1280) )
                return sub_214300(a1);
            }
            v14 = (__int64 *)v13[2];
            if ( (*(_BYTE *)v14 & 2) == 0 )
            {
              do
              {
                v13 = v14;
                v14 = (__int64 *)v14[1];
              }
              while ( (*(_BYTE *)v14 & 2) == 0 );
              goto LABEL_31;
            }
            v21 = (__int64 *)(*v13 & 0xFFFFFFFFFFFFFFFCLL);
            v22 = *v21;
            if ( (*v21 & 2) == 0 )
            {
              while ( (__int64 *)v21[2] == v13 )
              {
                v13 = (__int64 *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                v22 = *(_QWORD *)(v22 & 0xFFFFFFFFFFFFFFFCLL);
                if ( (v22 & 2) != 0 )
                  goto LABEL_31;
                v23 = v21;
                v21 = v13;
                v13 = v23;
              }
            }
            v13 = v21;
          }
          while ( v21 != *(__int64 **)(a1 + 1280) );
        }
      }
    }
    return sub_214300(a1);
  }
  return result;
}
