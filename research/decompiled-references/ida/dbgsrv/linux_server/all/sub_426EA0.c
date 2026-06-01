/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_426EA0
// Address: 0x0000000000426EA0

//----- (0000000000426EA0) ----------------------------------------------------
__int64 __fastcall sub_426EA0(__int64 a1, _QWORD *a2, __int64 a3, unsigned __int64 a4, char a5)
{
  __int64 result; // rax
  bool v7; // cf
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rbp
  int v12; // r8d
  unsigned __int64 v13; // rdx
  __int64 v14; // r9
  void *v15; // rsi
  __int64 v16; // rbp
  char v17; // r14
  void *v18; // rax
  char *v19; // rsi
  unsigned __int64 v20; // r14
  unsigned __int64 v21; // rdx
  unsigned __int64 v22; // rax
  unsigned __int64 v23; // rax
  char *v24; // rdx
  char *v25; // rax
  char *v26; // rax
  unsigned __int64 v27; // [rsp+8h] [rbp-60h]
  int v28; // [rsp+14h] [rbp-54h]
  __int64 v29; // [rsp+18h] [rbp-50h]
  char v30; // [rsp+27h] [rbp-41h] BYREF
  unsigned __int64 v31; // [rsp+28h] [rbp-40h]

  v31 = __readfsqword(0x28u);
  result = 0;
  v7 = __CFADD__(a4, a3);
  v8 = a4 + a3;
  v9 = v7;
  if ( !v7 && a2[1] >= v8 )
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( a5 )
    {
      if ( *(_QWORD *)(a1 + 16) < a4 )
      {
        *(_QWORD *)a1 = sub_481540(a1, *(void **)a1, a4, 1u);
        goto LABEL_6;
      }
      if ( a4 )
      {
LABEL_6:
        v12 = 0;
        do
        {
          v17 = *(_BYTE *)(*a2 + v9 + a3);
          if ( !v17 )
            return 1;
          v16 = *(_QWORD *)(a1 + 8);
          if ( v16 )
          {
            v13 = v16 + 1;
            v14 = *(_QWORD *)(a1 + 8);
            v15 = *(void **)a1;
            --v16;
            if ( *(_QWORD *)(a1 + 16) < v13 )
              goto LABEL_12;
          }
          else
          {
            v15 = *(void **)a1;
            v14 = 1;
            v13 = 2;
            if ( *(_QWORD *)(a1 + 16) < 2u )
            {
LABEL_12:
              v29 = v14;
              v28 = v12;
              v27 = v13;
              v18 = sub_481540(a1, v15, v13, 1u);
              v14 = v29;
              v12 = v28;
              *(_QWORD *)a1 = v18;
              v13 = v27;
              v15 = v18;
            }
          }
          *(_QWORD *)(a1 + 8) = v13;
          ++v12;
          *((_BYTE *)v15 + v16) = v17;
          v9 = v12;
          *(_BYTE *)(*(_QWORD *)a1 + v14) = 0;
        }
        while ( v12 < a4 );
      }
    }
    else
    {
      v30 = 0;
      v19 = *(char **)a1;
      v20 = a4 + 1;
      if ( a4 != -1 )
      {
        v21 = *(_QWORD *)(a1 + 16);
        if ( &v30 < v19 || &v30 >= &v19[v21] )
        {
          if ( v21 >= v20
            || (v25 = (char *)sub_481540(a1, v19, v20, 1u),
                v9 = *(_QWORD *)(a1 + 8),
                *(_QWORD *)a1 = v25,
                v19 = v25,
                v9 < v20) )
          {
            do
            {
              v22 = v9;
              v19[v9++] = 0;
              v19 = *(char **)a1;
            }
            while ( a4 != v22 );
          }
          *(_QWORD *)(a1 + 8) = v20;
        }
        else
        {
          if ( v21 >= v20
            || (v26 = (char *)sub_481540(a1, v19, v20, 1u),
                v9 = *(_QWORD *)(a1 + 8),
                *(_QWORD *)a1 = v26,
                v19 = v26,
                v9 < v20) )
          {
            do
            {
              v19[v9] = 0;
              v19 = *(char **)a1;
              v23 = v9++;
              v24 = *(char **)a1;
            }
            while ( a4 != v23 );
          }
          else
          {
            v24 = v26;
          }
          *(_QWORD *)(a1 + 8) = v20;
          v19 = v24;
        }
      }
      v19[a4] = 0;
      memcpy(*(void **)a1, (const void *)(a3 + *a2), a4);
    }
    return 1;
  }
  return result;
}
