unsigned __int64 __fastcall sub_1B0020(_QWORD *a1, __int64 *a2, __int64 (__fastcall *a3)(__int64 *a1), __int64 a4)
{
  __int64 (__fastcall *v4)(__int64 *); // r13
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // r12
  char v8; // si
  int v9; // ebp
  unsigned __int64 v10; // rbx
  int v11; // eax
  int v12; // r15d
  __int64 v13; // r9
  unsigned __int64 v14; // rdx
  __int64 v15; // rsi
  __int64 v16; // rax
  __int64 v18; // rbx
  __int64 v19; // rsi
  __int64 v20; // r15
  unsigned __int64 v21; // rdx
  __int64 v22; // rax
  unsigned __int64 v24; // [rsp+18h] [rbp-70h]
  unsigned __int64 v25; // [rsp+18h] [rbp-70h]
  __int64 v26; // [rsp+20h] [rbp-68h]
  __int64 v27; // [rsp+30h] [rbp-58h] BYREF
  __int128 v28; // [rsp+38h] [rbp-50h]
  unsigned __int64 v29; // [rsp+48h] [rbp-40h]

  v29 = __readfsqword(0x28u);
  if ( *a1 )
  {
    v4 = a3;
    if ( !a3 )
      v4 = sub_1AF6E0;
    v6 = a1[1];
    v7 = 0;
    v8 = 1;
    v9 = -1;
    do
    {
      if ( v6 == v7 )
        goto LABEL_20;
      do
      {
        while ( 1 )
        {
          while ( (*(_QWORD *)(*a1 + 8 * (v7 >> 6)) & (1LL << v7)) != 0 )
          {
            if ( v9 == -1 )
            {
              v9 = v7;
              goto LABEL_21;
            }
            if ( v6 < ++v7 )
              return v29 - __readfsqword(0x28u);
            if ( v6 == v7 )
              goto LABEL_10;
          }
LABEL_20:
          if ( v9 == -1 )
            goto LABEL_21;
LABEL_10:
          if ( !v8 )
          {
            v18 = a2[1];
            if ( v18 )
            {
              v21 = v18 + 1;
              v20 = a2[1];
              v19 = *a2;
              --v18;
              if ( a2[2] >= v21 )
                goto LABEL_31;
            }
            else
            {
              v19 = *a2;
              v20 = 1;
              v21 = 2;
              if ( (unsigned __int64)a2[2] >= 2 )
              {
LABEL_31:
                a2[1] = v21;
                *(_BYTE *)(v19 + v18) = 44;
                *(_BYTE *)(*a2 + v20) = 0;
                goto LABEL_11;
              }
            }
            v25 = v21;
            v22 = qvector_reserve();
            v21 = v25;
            *a2 = v22;
            v19 = v22;
            goto LABEL_31;
          }
LABEL_11:
          v10 = v7 - v9;
          while ( 1 )
          {
            v27 = 0;
            v28 = 0;
            v11 = ((__int64 (__fastcall *)(__int64 *, _QWORD, _QWORD, __int64))v4)(
                    &v27,
                    (unsigned int)v9,
                    (unsigned int)v10,
                    a4);
            v9 += v11;
            v10 -= v11;
            v12 = v11;
            sub_FAAD0(a2);
            if ( !v12 || !v10 )
              break;
            v13 = a2[1];
            v14 = 2;
            if ( v13 )
              v14 = v13-- + 1;
            v15 = *a2;
            if ( a2[2] < v14 )
            {
              v26 = v13;
              v24 = v14;
              v16 = qvector_reserve();
              v13 = v26;
              v14 = v24;
              *a2 = v16;
              v15 = v16;
            }
            a2[1] = v14;
            *(_BYTE *)(v15 + v13) = 44;
            *(_BYTE *)(*a2 + v13 + 1) = 0;
            if ( v27 )
            {
              *(_QWORD *)&v28 = 0;
              qfree();
            }
          }
          if ( v27 )
          {
            *(_QWORD *)&v28 = 0;
            qfree();
          }
          v6 = a1[1];
          if ( v6 < v7 + 1 )
            return v29 - __readfsqword(0x28u);
          v9 = -1;
          v8 = 0;
          if ( v6 == v7 + 1 )
            break;
          ++v7;
        }
        v7 += 2LL;
        if ( v6 < v7 )
          return v29 - __readfsqword(0x28u);
      }
      while ( v7 != v6 );
LABEL_21:
      ++v7;
    }
    while ( v6 >= v7 );
  }
  return v29 - __readfsqword(0x28u);
}
