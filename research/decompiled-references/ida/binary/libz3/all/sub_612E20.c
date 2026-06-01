__int64 __fastcall sub_612E20(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5, double a6)
{
  unsigned int v7; // ebx
  __int64 *v8; // rax
  __int64 *v9; // r15
  __int64 result; // rax
  __int64 v11; // r13
  int v12; // r8d
  int v13; // r9d
  int v14; // r8d
  int v15; // r9d
  __int64 *v16; // r13
  __int64 v17; // rax
  unsigned __int64 v18; // rbx
  __int64 v19; // rsi
  bool v20; // zf
  __int64 *v21; // r13
  __int64 v22; // rax
  unsigned __int64 v23; // rbx
  __int64 v24; // rsi
  unsigned int v25; // [rsp+8h] [rbp-88h]
  unsigned int v26; // [rsp+8h] [rbp-88h]
  _QWORD *v29; // [rsp+20h] [rbp-70h]
  __int64 v31; // [rsp+30h] [rbp-60h] BYREF
  __int64 v32; // [rsp+38h] [rbp-58h]
  __int64 v33; // [rsp+40h] [rbp-50h] BYREF
  unsigned __int64 v34; // [rsp+48h] [rbp-48h]
  __int64 v35; // [rsp+50h] [rbp-40h] BYREF
  unsigned __int64 v36; // [rsp+58h] [rbp-38h]

  if ( a3 == *(_DWORD *)(a2 + 68) )
    return sub_63DAD0(a5, a2, a6);
  v7 = 0;
  v8 = (__int64 *)sub_63BA90(a4, *(_QWORD *)((*(_QWORD *)(a2 + 8LL * a3 + 80) & 0xFFFFFFFFFFFFFFF8LL) + 16));
  v31 = 0;
  v9 = v8;
  v29 = (_QWORD *)(a1 + 48);
  v32 = *(_QWORD *)(a1 + 40);
  result = *v8;
  if ( result )
  {
    do
    {
      if ( v7 >= *(_DWORD *)(result - 4) )
        break;
      v11 = *(_QWORD *)(result + 8LL * v7);
      if ( (unsigned __int8)sub_6008C0((__int64)v29, a2, a3, v11)
        && (unsigned __int8)sub_5FF6F0((__int64)v29, a2, a3, v11, &v31) )
      {
        sub_5FEED0(&v33, v29, a2, 1, v12, v13);
        sub_5FEED0(&v35, v29, v11, 0, v14, v15);
        sub_649570(*(_QWORD *)(a1 + 40), a2, v11, a3, &v33, &v35, v31);
        sub_612E20(a1, v31, a3 + *(_DWORD *)(v11 + 68), a4, a5);
        v16 = (__int64 *)v36;
        if ( v36 )
        {
          v17 = *(unsigned int *)(v36 - 4);
          if ( v36 >= v36 + 8 * v17 )
            goto LABEL_18;
          v25 = v7;
          v18 = v36 + 8 * v17;
          do
          {
            while ( 1 )
            {
              v19 = *v16;
              if ( *v16 )
              {
                v20 = (*(_DWORD *)(v19 + 8))-- == 1;
                if ( v20 )
                  break;
              }
              if ( (unsigned __int64)++v16 >= v18 )
                goto LABEL_17;
            }
            sub_15D7BC0(v35, v19);
            ++v16;
          }
          while ( (unsigned __int64)v16 < v18 );
LABEL_17:
          v16 = (__int64 *)v36;
          v7 = v25;
          if ( v36 )
LABEL_18:
            sub_186B220(v16 - 1);
        }
        v21 = (__int64 *)v34;
        if ( v34 )
        {
          v22 = *(unsigned int *)(v34 - 4);
          if ( v34 >= v34 + 8 * v22 )
            goto LABEL_27;
          v26 = v7;
          v23 = v34 + 8 * v22;
          do
          {
            while ( 1 )
            {
              v24 = *v21;
              if ( *v21 )
              {
                v20 = (*(_DWORD *)(v24 + 8))-- == 1;
                if ( v20 )
                  break;
              }
              if ( (unsigned __int64)++v21 >= v23 )
                goto LABEL_26;
            }
            sub_15D7BC0(v33, v24);
            ++v21;
          }
          while ( (unsigned __int64)v21 < v23 );
LABEL_26:
          v21 = (__int64 *)v34;
          v7 = v26;
          if ( v34 )
LABEL_27:
            sub_186B220(v21 - 1);
        }
      }
      result = *v9;
      ++v7;
    }
    while ( *v9 );
    if ( v31 )
      return sub_62A410(v32, v31);
  }
  return result;
}

