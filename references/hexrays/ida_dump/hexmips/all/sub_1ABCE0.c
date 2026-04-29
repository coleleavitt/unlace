unsigned __int64 __fastcall sub_1ABCE0(
        _QWORD *a1,
        __int64 *a2,
        __int64 (__fastcall *a3)(__int64 *a1, int a2),
        __int64 a4)
{
  __int64 (__fastcall *v4)(__int64 *, int); // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  char v8; // si
  int v9; // ebp
  unsigned __int64 v10; // rbx
  int v11; // eax
  const char *v12; // rdx
  int v13; // r15d
  __int64 v14; // r9
  unsigned __int64 v15; // rdx
  __int64 v16; // rsi
  __int64 v17; // rax
  __int64 v19; // rbx
  __int64 v20; // rsi
  __int64 v21; // r15
  unsigned __int64 v22; // rdx
  __int64 v23; // rax
  unsigned __int64 v25; // [rsp+18h] [rbp-70h]
  unsigned __int64 v26; // [rsp+18h] [rbp-70h]
  __int64 v27; // [rsp+20h] [rbp-68h]
  const char *v28; // [rsp+30h] [rbp-58h] BYREF
  __int128 v29; // [rsp+38h] [rbp-50h]
  unsigned __int64 v30; // [rsp+48h] [rbp-40h]

  v30 = __readfsqword(0x28u);
  if ( *a1 )
  {
    v4 = a3;
    if ( !a3 )
      v4 = sub_1AB3A0;
    v6 = a1[1];
    v7 = 0;
    v8 = 1;
    v9 = -1;
    do
    {
      if ( v6 == v7 )
        goto LABEL_22;
      do
      {
        while ( 1 )
        {
          while ( (*(_QWORD *)(*a1 + 8 * (v7 >> 6)) & (1LL << v7)) != 0 )
          {
            if ( v9 == -1 )
            {
              v9 = v7;
              goto LABEL_23;
            }
            if ( v6 < ++v7 )
              return v30 - __readfsqword(0x28u);
            if ( v6 == v7 )
              goto LABEL_10;
          }
LABEL_22:
          if ( v9 == -1 )
            goto LABEL_23;
LABEL_10:
          if ( !v8 )
          {
            v19 = a2[1];
            if ( v19 )
            {
              v22 = v19 + 1;
              v21 = a2[1];
              v20 = *a2;
              --v19;
              if ( a2[2] >= v22 )
                goto LABEL_33;
            }
            else
            {
              v20 = *a2;
              v21 = 1;
              v22 = 2;
              if ( (unsigned __int64)a2[2] >= 2 )
              {
LABEL_33:
                a2[1] = v22;
                *(_BYTE *)(v20 + v19) = 44;
                *(_BYTE *)(*a2 + v21) = 0;
                goto LABEL_11;
              }
            }
            v26 = v22;
            v23 = qvector_reserve(a2, v20, v22, 1);
            v22 = v26;
            *a2 = v23;
            v20 = v23;
            goto LABEL_33;
          }
LABEL_11:
          v10 = v7 - v9;
          while ( 1 )
          {
            v28 = nullptr;
            v29 = 0;
            v11 = ((__int64 (__fastcall *)(const char **, _QWORD, _QWORD, __int64))v4)(
                    &v28,
                    (unsigned int)v9,
                    (unsigned int)v10,
                    a4);
            v12 = s1;
            v9 += v11;
            v10 -= v11;
            v13 = v11;
            if ( (_QWORD)v29 )
              v12 = v28;
            sub_F68D0(a2, (__int64)"%s.%d", v12, v11);
            if ( !v13 || !v10 )
              break;
            v14 = a2[1];
            v15 = 2;
            if ( v14 )
              v15 = v14-- + 1;
            v16 = *a2;
            if ( a2[2] < v15 )
            {
              v27 = v14;
              v25 = v15;
              v17 = qvector_reserve(a2, v16, v15, 1);
              v14 = v27;
              v15 = v25;
              *a2 = v17;
              v16 = v17;
            }
            a2[1] = v15;
            *(_BYTE *)(v16 + v14) = 44;
            *(_BYTE *)(*a2 + v14 + 1) = 0;
            if ( v28 )
            {
              *(_QWORD *)&v29 = 0;
              qfree(v28);
            }
          }
          if ( v28 )
          {
            *(_QWORD *)&v29 = 0;
            qfree(v28);
          }
          v6 = a1[1];
          if ( v6 < v7 + 1 )
            return v30 - __readfsqword(0x28u);
          v9 = -1;
          v8 = 0;
          if ( v6 == v7 + 1 )
            break;
          ++v7;
        }
        v7 += 2LL;
        if ( v6 < v7 )
          return v30 - __readfsqword(0x28u);
      }
      while ( v7 != v6 );
LABEL_23:
      ++v7;
    }
    while ( v6 >= v7 );
  }
  return v30 - __readfsqword(0x28u);
}
