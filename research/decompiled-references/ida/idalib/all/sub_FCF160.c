__int64 __fastcall sub_FCF160(__int64 a1, int a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rsi
  int v6; // eax
  int v7; // r8d
  unsigned int v8; // edi
  int *v9; // rax
  int v10; // r10d
  __int64 v11; // rbx
  unsigned int v14; // eax
  int v15; // eax
  __int64 *v16; // rsi
  char *v17; // r14
  __int64 v18; // rbx
  unsigned int v19; // r13d
  char *v20; // rbp
  size_t v21; // rax
  __int64 v22; // rdx
  __int64 *v23; // rbp
  __int64 v24; // rax
  unsigned __int64 v25; // r14
  int v26; // r12d
  __int64 v27; // rbx
  __int64 i; // r15
  __int64 *v29; // rdx
  int v30; // eax
  int v31; // r11d
  int v32; // r10d
  __int64 *v34; // [rsp+8h] [rbp-80h]
  __int64 v35; // [rsp+10h] [rbp-78h]
  __int64 v36; // [rsp+18h] [rbp-70h]
  __int64 *v37; // [rsp+28h] [rbp-60h] BYREF
  char *s[11]; // [rsp+30h] [rbp-58h] BYREF

  v5 = *(_QWORD *)(*(_QWORD *)a1 + 24LL);
  v6 = *(_DWORD *)(*(_QWORD *)a1 + 40LL);
  if ( !v6 )
    return 0;
  v7 = v6 - 1;
  v8 = (v6 - 1) & (37 * a2);
  v9 = (int *)(v5 + 16LL * v8);
  v10 = *v9;
  if ( *v9 == a2 )
    goto LABEL_3;
  v30 = 1;
  if ( v10 == -1 )
    return 0;
  while ( 1 )
  {
    v31 = v30 + 1;
    v8 = v7 & (v30 + v8);
    v9 = (int *)(v5 + 16LL * v8);
    v32 = *v9;
    if ( a2 == *v9 )
      break;
    v30 = v31;
    if ( v32 == -1 )
      return 0;
  }
LABEL_3:
  v11 = *((_QWORD *)v9 + 1);
  if ( !v11 )
    return 0;
  v14 = sub_2244B30("src", 3);
  v15 = sub_2244E60(v11 + 8, "src", 3, v14);
  v16 = (__int64 *)(v15 == -1
                  ? *(_QWORD *)(v11 + 8) + 8LL * *(unsigned int *)(v11 + 16)
                  : *(_QWORD *)(v11 + 8) + 8LL * v15);
  sub_FCF0E0((__int64 **)s, v16, 1);
  v17 = s[0];
  sub_FCF0E0((__int64 **)s, (__int64 *)(*(_QWORD *)(v11 + 8) + 8LL * *(unsigned int *)(v11 + 16)), 1);
  if ( s[0] == v17 )
    return 0;
  v18 = *(_QWORD *)v17;
  v19 = 0;
  sub_1022900(s, a4, a3, 1);
  v20 = s[0];
  if ( s[0] )
  {
    v21 = strlen(s[0]);
    v35 = sub_228B1B0(v20, v21, 0);
    v36 = v22;
    sub_FCF120(&v37, *(__int64 **)(v18 + 8), *(_DWORD *)(v18 + 16) == 0);
    v23 = v37;
    sub_FCF120(&v37, (__int64 *)(*(_QWORD *)(v18 + 8) + 8LL * *(unsigned int *)(v18 + 16)), 1);
    v34 = v37;
    if ( v23 != v37 )
    {
      v24 = *v23;
      v25 = 0;
      do
      {
        while ( 1 )
        {
          v26 = 1;
          if ( *(_QWORD *)v24 == 4 )
            LOBYTE(v26) = *(_DWORD *)(v24 + 56) != 1953066341;
          v27 = *(_QWORD *)(v24 + 8);
          for ( i = *(_QWORD *)(v24 + 16); i != v27; v27 += 8 )
          {
            if ( *(_QWORD *)(*(_QWORD *)v27 + 8LL) >= v25
              && (unsigned __int8)sub_22244B0(*(_QWORD *)v27 + 40LL, v35, v36) )
            {
              v19 = v26;
              v25 = *(_QWORD *)(*(_QWORD *)v27 + 8LL);
            }
          }
          v24 = v23[1];
          v29 = v23 + 1;
          if ( !v24 || v24 == -8 )
            break;
          ++v23;
          if ( v29 == v34 )
            return v19;
        }
        do
        {
          do
          {
            v24 = v29[1];
            v23 = ++v29;
          }
          while ( !v24 );
        }
        while ( v24 == -8 );
      }
      while ( v23 != v34 );
    }
  }
  return v19;
}
