__int64 __fastcall sub_441240(const char **a1)
{
  __int64 v2; // rbx
  __int64 v3; // rdx
  __int64 v4; // rcx
  __int64 v5; // rax
  __int64 v6; // rax
  _QWORD *v7; // rbp
  int v8; // r15d
  __int64 (__fastcall *v9)(__int64); // rax
  __int64 v10; // rax
  int v11; // r12d
  __int64 v12; // rbx
  int i; // ebp
  __int64 v14; // rax
  const char *v15; // rsi
  const char *v16; // rdi
  __int64 v18; // [rsp+8h] [rbp-70h]
  __int64 v19; // [rsp+10h] [rbp-68h] BYREF
  __int128 v20; // [rsp+18h] [rbp-60h]
  __int64 v21; // [rsp+28h] [rbp-50h]
  unsigned __int64 v22; // [rsp+38h] [rbp-40h]

  v22 = __readfsqword(0x28u);
  v2 = qalloc_or_throw(320);
  sub_441000(v2, (__int64)a1);
  v19 = 0;
  v5 = sub_4AED50(v2, &v19, v3, v4);
  if ( v5 == -2 )
    return 0;
  if ( v5 != -3 )
  {
    v6 = sub_49EE00(v2);
    v18 = v6;
    if ( v6 )
    {
      *(_QWORD *)(v6 + 2152) = 9;
      *(_QWORD *)(v6 + 2144) = &off_86B420;
      v7 = sub_426230(v2, (const char *)&v19);
      v8 = *(_DWORD *)(sub_4180E0((__int64)v7) + 8) == -3
         ? *(_DWORD *)(v2 + 280)
         : *(_DWORD *)(sub_4180E0((__int64)v7) + 8);
      v9 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v2 + 40LL);
      if ( v9 == file_history_chooser_t__::vfunc_5 )
        v10 = *(_QWORD *)(v2 + 240);
      else
        LODWORD(v10) = v9(v2);
      v11 = v10;
      if ( (int)v10 > 0 )
      {
        v12 = *(_QWORD *)(v2 + 232);
        for ( i = 0; v11 != i; ++i )
        {
          if ( v8 != *(_DWORD *)(v12 + 144) )
            goto LABEL_10;
          v14 = *(_QWORD *)(v12 + 8);
          if ( a1[1] )
          {
            v15 = *a1;
            v16 = &s1;
            if ( !v14 )
              goto LABEL_14;
          }
          else
          {
            if ( !v14 )
            {
LABEL_15:
              v21 = i;
              v19 = 0;
              v20 = 0;
              v19 = qvector_reserve(&v19, 0, 1, 8);
              *(_QWORD *)(v19 + 8 * v20) = i;
              *(_QWORD *)&v20 = v20 + 1;
              sub_4A8920(v18, &v19, 7);
              if ( v19 )
              {
                *(_QWORD *)&v20 = 0;
                qfree(v19, (const char *)&v19);
              }
              return 1;
            }
            v15 = &s1;
          }
          v16 = *(const char **)v12;
LABEL_14:
          if ( !strcmp(v16, v15) )
            goto LABEL_15;
LABEL_10:
          v12 += 152;
        }
      }
    }
  }
  return 1;
}
