char __fastcall sub_BC350(_QWORD *a1, unsigned __int8 *a2, unsigned __int8 *a3)
{
  __int64 v3; // r12
  __int64 v4; // r13
  __int64 v7; // rax
  unsigned __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // r9
  __int64 v14; // rdx
  __int64 v15; // r13
  unsigned __int8 *v17; // rdx
  _QWORD *v18; // rdx
  _QWORD *v19; // rsi
  int v20; // r9d
  __int64 v21; // rdx
  __int64 v22; // rax
  _QWORD *v23; // r12
  _QWORD *v24; // rbx
  int v25; // r13d
  __int64 v26; // rax
  __int64 v27; // rax
  int v28; // r13d
  __int64 v29; // rsi
  char v30; // [rsp+8h] [rbp-50h]
  _BYTE v31[4]; // [rsp+10h] [rbp-48h] BYREF
  int v32; // [rsp+14h] [rbp-44h]
  unsigned __int64 v33; // [rsp+28h] [rbp-30h]
  unsigned __int8 *v34; // [rsp+38h] [rbp-20h]
  unsigned __int8 *v35; // [rsp+40h] [rbp-18h]
  __int64 v36; // [rsp+48h] [rbp-10h]
  __int64 v37; // [rsp+50h] [rbp-8h]

  v33 = __readfsqword(0x28u);
LABEL_2:
  v7 = *a2;
  v8 = *a3;
  if ( (_BYTE)v8 == (_BYTE)v7 )
  {
    while ( 2 )
    {
      if ( *((_DWORD *)a2 + 1) == *((_DWORD *)a3 + 1) )
      {
        switch ( v7 )
        {
          case 0LL:
            return 1;
          case 1LL:
            return *((_DWORD *)a2 + 2) == *((_DWORD *)a3 + 2);
          case 2LL:
            return *(_QWORD *)(*((_QWORD *)a2 + 1) + 16LL) == *(_QWORD *)(*((_QWORD *)a3 + 1) + 16LL);
          case 3LL:
          case 11LL:
            return strcmp(*((const char **)a2 + 1), *((const char **)a3 + 1)) == 0;
          case 4LL:
            return sub_BC1C0(a1, *((unsigned int **)a2 + 1), *((_QWORD *)a3 + 1), 0);
          case 5LL:
          case 6LL:
            return *((_QWORD *)a2 + 1) == *((_QWORD *)a3 + 1);
          case 7LL:
            return *(_DWORD *)(a1[2] + 4LL * *((int *)a2 + 2)) == *((_DWORD *)a3 + 2);
          case 8LL:
            v18 = *((_QWORD **)a3 + 1);
            v19 = *((_QWORD **)a2 + 1);
            v22 = v19[4];
            if ( v18[4] != v22 )
              return 0;
            v37 = v4;
            v36 = v3;
            v23 = v19;
            v35 = a3;
            v34 = a2;
            v24 = v18;
            if ( v22 )
            {
              v25 = 0;
              v26 = 0;
              while ( (unsigned __int8)sub_BC350(a1, v19[3] + 80 * v26, 80 * v26 + v24[3]) )
              {
                v26 = ++v25;
                if ( (unsigned __int64)v25 >= v19[4] )
                  goto LABEL_54;
              }
            }
            else
            {
LABEL_54:
              v27 = v19[7];
              if ( v24[7] == v27 )
              {
                v28 = 0;
                v29 = 0;
                if ( !v27 )
                  return 1;
                while ( (unsigned __int8)sub_BC350(a1, v23[6] + 16 * v29, 16 * v29 + v24[6]) )
                {
                  v29 = ++v28;
                  if ( (unsigned __int64)v28 >= v23[7] )
                    return 1;
                }
              }
            }
            return 0;
          case 9LL:
            goto LABEL_5;
          case 10LL:
            v17 = *((unsigned __int8 **)a3 + 1);
            a2 = *((unsigned __int8 **)a2 + 1);
            if ( *((_QWORD *)a2 + 2) != *((_QWORD *)v17 + 2) )
              return 0;
            a3 = *((unsigned __int8 **)a3 + 1);
            v7 = *a2;
            v8 = *v17;
            if ( (_BYTE)v7 == (_BYTE)v8 )
              continue;
            goto LABEL_3;
          case 13LL:
            return (unsigned int)ecmp() == 0;
          case 14LL:
            if ( !(unsigned __int8)sub_BC350(a1, *((_QWORD *)a2 + 1), *((_QWORD *)a3 + 1)) )
              return 0;
            a3 = (unsigned __int8 *)(*((_QWORD *)a3 + 1) + 16LL);
            a2 = (unsigned __int8 *)(*((_QWORD *)a2 + 1) + 16LL);
            goto LABEL_2;
          default:
            if ( !under_debugger )
              sub_383060(50042);
            goto LABEL_62;
        }
      }
      return 0;
    }
  }
LABEL_3:
  if ( (_BYTE)v7 != 9 || *((_DWORD *)a2 + 1) != *((_DWORD *)a3 + 1) )
    return 0;
LABEL_5:
  v9 = *((_QWORD *)a2 + 1);
  v10 = a1[40];
  v11 = *(int *)(v9 + 16);
  if ( v11 >= *(_QWORD *)(v10 + 1936) )
    goto LABEL_65;
  v20 = *(_DWORD *)(*(_QWORD *)(v10 + 1928) + 4 * v11);
  if ( (v20 & 1) != 0 )
  {
    if ( (_BYTE)v8 != 2 )
      return 0;
    goto LABEL_9;
  }
  if ( (v20 & 2) != 0 )
  {
    if ( (_BYTE)v8 == 2 )
      return 0;
  }
  else
  {
LABEL_65:
    if ( (int)v11 >= *(_DWORD *)(v10 + 1528) )
    {
      if ( (unsigned __int8)v8 > 0xAu )
        return 0;
      v12 = 1638;
      if ( !_bittest64(&v12, v8) )
        return 0;
    }
  }
LABEL_9:
  v13 = *(_QWORD *)(a1[8] + 8 * v11);
  v14 = *(_QWORD *)(v9 + 8);
  if ( !v13 )
  {
    if ( !v14 )
      return sub_BC080(a1, *(_DWORD *)(v9 + 16), (__int64)a3);
    if ( a1[41] )
    {
      if ( !under_debugger )
        sub_383060(50955);
LABEL_62:
      BUG();
    }
    return 0;
  }
  v15 = *(_QWORD *)(v10 + 1504);
  if ( !v14 )
    return sub_1255D0(v13, v15, a3, 9);
  sub_123A40(v31);
  v21 = *(_QWORD *)(*((_QWORD *)a2 + 1) + 8LL);
  if ( (v32 == -1 || v32 > v21) && (unsigned __int8)sub_126F10(v31, v15, v21) )
  {
    v30 = sub_1255D0(v31, v15, a3, 9);
    sub_11CDA0(v31);
    return v30;
  }
  else
  {
    sub_11CDA0(v31);
    return 0;
  }
}
