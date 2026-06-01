__int64 __fastcall sub_1290D0(__int64 a1, __int64 *a2, __int64 a3)
{
  __int64 v5; // r15
  const char *v6; // r14
  char *v7; // rax
  signed __int64 v8; // rax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r15
  char *v11; // rax
  signed __int64 v12; // rax
  char *v13; // rax
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // r10
  size_t v16; // r15
  const char *v17; // r13
  int v18; // r14d
  const char *v19; // rdx
  __int64 v20; // r15
  __int64 v22; // rdx
  _DWORD *v23; // rcx
  _DWORD *v24; // rax
  const char *v25; // rdx
  const char *v26; // rsi
  void *v27; // rdi
  __int64 v28; // rax
  __int64 v29; // rdx
  unsigned __int64 v31; // [rsp+8h] [rbp-60h]
  __int64 v32; // [rsp+10h] [rbp-58h]
  unsigned __int64 v33; // [rsp+28h] [rbp-40h]

  v33 = __readfsqword(0x28u);
  if ( *a2 )
  {
    a2[1] = 0;
    qfree();
    *a2 = 0;
    a2[2] = 0;
  }
  v5 = *(_QWORD *)(a3 + 8);
  if ( v5 )
  {
    v6 = *(const char **)a3;
    v7 = strchr(*(const char **)a3, 45);
    if ( v7 )
    {
      v8 = v7 - v6;
      if ( v8 != -1 )
      {
        v9 = v8 + 1;
        if ( v8 != -2 )
        {
          v10 = v5 - 1;
          do
          {
            if ( v10 >= v9 && (v13 = strchr(&v6[v9], 45)) != nullptr && (v14 = v13 - v6, v10 >= v14) )
            {
              v15 = v9;
              if ( v14 <= v9 )
                v15 = v14;
              v16 = v14 - v15;
            }
            else
            {
              v15 = v9;
              if ( v10 <= v9 )
                v15 = v10;
              v16 = v10 - v15;
            }
            v17 = s1;
            v32 = 0;
            if ( v16 )
            {
              v27 = nullptr;
              if ( v16 != -1 )
              {
                v31 = v15;
                v32 = qvector_reserve();
                v15 = v31;
                v27 = (void *)v32;
              }
              memmove(v27, &v6[v15], v16);
              *(_BYTE *)(v32 + v16++) = 0;
              if ( v16 )
                v17 = (const char *)v32;
              else
                v17 = s1;
            }
            v18 = sub_128B20(a1, v17);
            if ( v18 == -1 )
            {
              v19 = s1;
              if ( *(_QWORD *)(a3 + 8) )
                v19 = *(const char **)a3;
              sub_8F740((__int64)"unknown option '%s' in abi desc '%s'\n", v17, v19);
            }
            else
            {
              v22 = a2[1];
              v23 = (_DWORD *)(*a2 + 4 * v22);
              if ( (_DWORD *)*a2 == v23 )
                goto LABEL_45;
              v24 = (_DWORD *)*a2;
              while ( v18 != *v24 )
              {
                if ( v23 == ++v24 )
                  goto LABEL_45;
              }
              if ( v24 == v23 )
              {
LABEL_45:
                if ( a2[2] < (unsigned __int64)(v22 + 1) )
                {
                  v28 = qvector_reserve();
                  v29 = a2[1];
                  *a2 = v28;
                  v23 = (_DWORD *)(v28 + 4 * v29);
                }
                *v23 = v18;
                ++a2[1];
              }
              else
              {
                v25 = s1;
                if ( *(_QWORD *)(a3 + 8) )
                  v25 = *(const char **)a3;
                v26 = s1;
                if ( v16 )
                  v26 = (const char *)v32;
                sub_8F740((__int64)"duplicate option '%s' in abi desc '%s'\n", v26, v25);
              }
            }
            if ( v32 )
              qfree();
            v20 = *(_QWORD *)(a3 + 8);
            if ( !v20 )
              break;
            v10 = v20 - 1;
            if ( v10 < v9 )
              break;
            v6 = *(const char **)a3;
            v11 = strchr((const char *)(*(_QWORD *)a3 + v9), 45);
            if ( !v11 )
              break;
            v12 = v11 - v6;
            if ( v12 == -1 )
              break;
            v9 = v12 + 1;
          }
          while ( v12 != -2 );
        }
      }
    }
  }
  if ( (unsigned __int64)a2[1] > 0x10 )
    return sub_8F740((__int64)"too many abi options (max 16)\n");
  else
    return v33 - __readfsqword(0x28u);
}

