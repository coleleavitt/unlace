__int64 __fastcall sub_1377C0(__int64 a1, __int64 a2)
{
  int v2; // ecx
  __int64 result; // rax
  __int64 i; // rbx
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rbx
  __int64 v8; // rbp
  __int64 v9; // rsi
  char v10; // al
  __int64 j; // rbx
  _DWORD *v12; // rbp
  unsigned int v13; // r15d
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // r15
  int v19; // eax
  _DWORD *v20; // rax
  unsigned int *v21; // rsi
  __int64 v22; // rdx
  unsigned int *v23; // rcx
  unsigned int *v24; // rax
  unsigned __int64 v25; // rdx
  __int64 v26; // rdx
  __int64 v27; // rcx
  int v28; // eax
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rbp
  _QWORD *func; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  __int64 v41; // r9
  char v42; // [rsp+Bh] [rbp-5Dh]
  int v43; // [rsp+Ch] [rbp-5Ch]
  __int64 v44[11]; // [rsp+10h] [rbp-58h] BYREF

  v2 = *(_DWORD *)(a1 + 64);
  v44[3] = __readfsqword(0x28u);
  if ( v2 <= 0 )
    return 0;
  result = sub_1B52A0();
  if ( (int)result >= 0 )
  {
    for ( i = *(_QWORD *)(a1 + 520); i; i = *(_QWORD *)(i + 8) )
    {
      v5 = *(_QWORD *)(i + 56);
      if ( v5 )
      {
        if ( (unsigned int)(*(_DWORD *)v5 - 55) <= 1 && *(_BYTE *)(v5 + 32) == 6 )
        {
          v35 = *(_QWORD *)(v5 + 40);
          func = (_QWORD *)get_func(v35);
          if ( func )
          {
            if ( v35 == *func )
              func_does_return(v35, a2, v37);
          }
        }
      }
    }
    v6 = sub_1D0330(a1);
    v7 = *(_QWORD *)(a1 + 520);
    v42 = 0;
    v43 = 0;
    v8 = v6;
    if ( v7 )
    {
      do
      {
        v9 = v8;
        sub_1D0380(v7, v8);
        if ( !*(_DWORD *)(v7 + 76) )
        {
          ++v43;
          *(_QWORD *)(a1 + 488) = *(_QWORD *)(*(_QWORD *)(v7 + 56) + 24LL);
        }
        v10 = *(_BYTE *)(v7 + 24);
        v7 = *(_QWORD *)(v7 + 8);
        v42 |= (v10 & 8) != 0;
      }
      while ( v7 );
      for ( j = *(_QWORD *)(a1 + 520); j; j = *(_QWORD *)(j + 8) )
      {
        while ( 1 )
        {
          v12 = *(_DWORD **)(j + 56);
          if ( v12 )
          {
            if ( *v12 == 42 )
              break;
          }
          j = *(_QWORD *)(j + 8);
          if ( !j )
            goto LABEL_40;
        }
        v44[0] = 0;
        v13 = v12[18];
        v44[1] = 0;
LABEL_20:
        v9 = v13;
        sub_5F710(v44, v13);
        while ( 1 )
        {
          if ( v13 >= *(_DWORD *)(a1 + 64) )
            sub_12FAF0(v44, v9, v14, v15, v16, v17);
          v18 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 528) + 8LL * v13) + 48LL);
          if ( !v18 )
            break;
          if ( *(_DWORD *)v18 != *v12 )
            break;
          v9 = (__int64)(v12 + 8);
          if ( !sub_120FA0((unsigned __int8 *)(v18 + 32), (__int64)(v12 + 8), 0) )
            break;
          v13 = *(_DWORD *)(v18 + 72);
          v9 = v13;
          if ( sub_5FEB0(v44, v13) )
            break;
          v12[18] = v13;
          v19 = *(_DWORD *)(j + 76);
          if ( v19 == 3 )
          {
            v21 = *(unsigned int **)(j + 368);
            v22 = *(_QWORD *)(j + 376);
            v23 = &v21[v22];
            if ( v21 == v23 )
              goto LABEL_35;
            v24 = *(unsigned int **)(j + 368);
            while ( v13 != *v24 )
            {
              if ( v23 == ++v24 )
                goto LABEL_35;
            }
            if ( v24 == v23 )
            {
LABEL_35:
              v25 = v22 + 1;
              if ( *(_QWORD *)(j + 384) < v25 )
              {
                v33 = qvector_reserve(j + 368, v21, v25, 4);
                v34 = *(_QWORD *)(j + 376);
                *(_QWORD *)(j + 368) = v33;
                v23 = (unsigned int *)(v33 + 4 * v34);
              }
              *v23 = v13;
              *(_DWORD *)(j + 76) = 4;
              ++*(_QWORD *)(j + 376);
            }
            goto LABEL_20;
          }
          if ( v19 != 4 )
          {
            if ( !under_debugger )
              sub_37CFE0(51211);
            BUG();
          }
          v20 = *(_DWORD **)(j + 368);
          if ( v13 == *v20 )
          {
            sub_155180(v12 + 8, *(_QWORD *)(a1 + 1504), j, v12, 0);
            sub_9E8C0(j, (__int64)v12);
            v9 = (unsigned int)(*(_DWORD *)(j + 72) + 1);
            sub_66840(j, v9, v26, v27);
            v28 = *(_DWORD *)(j + 24);
            BYTE1(v28) &= ~2u;
            LOBYTE(v28) = v28 | 0x80;
            *(_DWORD *)(j + 24) = v28;
            break;
          }
          v20[1] = v13;
          v9 = v13;
          sub_5F710(v44, v13);
        }
        qfree(v44[0]);
      }
LABEL_40:
      sub_1D0190(a1);
      if ( v42 )
        sub_F2C80(a1);
      sub_1371B0(a1, v9, v29, v30, v31, v32);
      if ( v43 )
        return 4294967292LL;
    }
    else
    {
      sub_1D0190(a1);
      sub_1371B0(a1, a2, v38, v39, v40, v41);
    }
    return 0;
  }
  return result;
}
