__int64 __fastcall sub_20BD860(__int64 a1, __int64 *a2)
{
  unsigned __int64 v3; // r14
  unsigned __int64 v4; // rbx
  _QWORD *v6; // r15
  unsigned __int64 v7; // r13
  __int64 v8; // rdx
  char *v9; // r13
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rbx
  _QWORD *v12; // r15
  _QWORD *v13; // rsi
  unsigned __int64 v14; // r11
  _QWORD *v15; // rsi
  _QWORD *v17; // r13
  _QWORD *v18; // rsi
  _QWORD *v19; // rax
  _QWORD **v20; // r14
  _QWORD *v21; // rbx
  int v22; // eax
  _QWORD *v23; // rsi
  _QWORD **v24; // rdi
  _QWORD *v25; // r13
  _QWORD *v26; // rsi
  unsigned __int64 v27; // rbx
  unsigned __int64 v28; // r11
  _QWORD *v29; // rsi
  __int64 v30; // r11
  _QWORD *v31; // rbx
  _QWORD **v32; // r14
  unsigned __int64 v33; // r15
  int v34; // eax
  _QWORD *v35; // rsi
  _QWORD **v36; // rdi
  _QWORD *v37; // r13
  _QWORD *v38; // rsi
  unsigned int v39; // [rsp+4h] [rbp-44h]
  __int64 v40; // [rsp+8h] [rbp-40h]
  __int64 v41; // [rsp+8h] [rbp-40h]

  if ( (__int64 *)a1 != a2 )
  {
    v3 = *a2;
    v4 = (unsigned __int64)(a2 + 2);
    v6 = *(_QWORD **)a1;
    v7 = *(unsigned int *)(a1 + 8);
    if ( a2 + 2 == (__int64 *)*a2 )
    {
      v39 = *((_DWORD *)a2 + 2);
      v8 = v39;
      if ( v39 <= v7 )
      {
        v19 = *(_QWORD **)a1;
        if ( v39 )
        {
          v20 = (_QWORD **)(v6 + 1);
          v21 = a2 + 3;
          v40 = 2LL * v39;
          do
          {
            v22 = *((_DWORD *)v21 - 2);
            v23 = v21;
            v24 = v20;
            v20 += 2;
            v21 += 2;
            *((_DWORD *)v20 - 6) = v22;
            sub_20B35C0(v24, v23);
          }
          while ( &v6[v40 + 1] != v20 );
          v19 = *(_QWORD **)a1;
          v7 = *(unsigned int *)(a1 + 8);
          v6 = (_QWORD *)((char *)v6 + v40 * 8);
        }
        v25 = &v19[2 * v7];
        while ( v6 != v25 )
        {
          while ( 1 )
          {
            v25 -= 2;
            v26 = (_QWORD *)v25[1];
            if ( !v26 )
              break;
            sub_20A0850((__int64)(v25 + 1), v26);
            if ( v6 == v25 )
              goto LABEL_35;
          }
        }
LABEL_35:
        v27 = *a2;
        *(_DWORD *)(a1 + 8) = v39;
        v28 = v27 + 16LL * *((unsigned int *)a2 + 2);
        if ( v27 != v28 )
        {
          while ( 1 )
          {
            v28 -= 16LL;
            v29 = *(_QWORD **)(v28 + 8);
            if ( v29 )
              break;
LABEL_39:
            if ( v27 == v28 )
              goto LABEL_16;
          }
          while ( 1 )
          {
            sub_20A0850(v28 + 8, v29);
            if ( v27 == v30 )
              break;
            v28 = v30 - 16;
            v29 = *(_QWORD **)(v28 + 8);
            if ( !v29 )
              goto LABEL_39;
          }
        }
      }
      else
      {
        if ( v39 > (unsigned __int64)*(unsigned int *)(a1 + 12) )
        {
          v37 = &v6[2 * v7];
          while ( v6 != v37 )
          {
            while ( 1 )
            {
              v37 -= 2;
              v38 = (_QWORD *)v37[1];
              if ( !v38 )
                break;
              v41 = v8;
              sub_20A0850((__int64)(v37 + 1), v38);
              v8 = v41;
              if ( v6 == v37 )
                goto LABEL_48;
            }
          }
LABEL_48:
          *(_DWORD *)(a1 + 8) = 0;
          v7 = 0;
          sub_20B3AD0(a1, v8);
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2;
        }
        else if ( *(_DWORD *)(a1 + 8) )
        {
          v7 *= 16LL;
          v31 = a2 + 3;
          v32 = (_QWORD **)(v6 + 1);
          v33 = (unsigned __int64)a2 + v7 + 24;
          do
          {
            v34 = *((_DWORD *)v31 - 2);
            v35 = v31;
            v36 = v32;
            v31 += 2;
            v32 += 2;
            *((_DWORD *)v32 - 6) = v34;
            sub_20B35C0(v36, v35);
          }
          while ( v31 != (_QWORD *)v33 );
          v3 = *a2;
          v8 = *((unsigned int *)a2 + 2);
          v6 = *(_QWORD **)a1;
          v4 = *a2 + v7;
        }
        v9 = (char *)v6 + v7;
        v10 = v3 + 16 * v8;
        if ( v10 != v4 )
        {
          v11 = (_QWORD *)(v4 + 8);
          v12 = (_QWORD *)(v10 + 8);
          do
          {
            v13 = (_QWORD *)*v11;
            *(_DWORD *)v9 = *((_DWORD *)v11 - 2);
            *((_QWORD *)v9 + 1) = v13;
            if ( v13 )
            {
              sub_20B3430((__int64)v11, v13, (__int64)(v9 + 8));
              *v11 = 0;
            }
            v11 += 2;
            v9 += 16;
          }
          while ( v11 != v12 );
          v3 = *a2;
        }
        *(_DWORD *)(a1 + 8) = v39;
        v14 = v3 + 16LL * *((unsigned int *)a2 + 2);
        while ( v14 != v3 )
        {
          while ( 1 )
          {
            v14 -= 16LL;
            v15 = *(_QWORD **)(v14 + 8);
            if ( !v15 )
              break;
            sub_20A0850(v14 + 8, v15);
            if ( v14 == v3 )
              goto LABEL_16;
          }
        }
      }
LABEL_16:
      *((_DWORD *)a2 + 2) = 0;
    }
    else
    {
      v17 = &v6[2 * v7];
      if ( v6 != v17 )
      {
        do
        {
          while ( 1 )
          {
            v17 -= 2;
            v18 = (_QWORD *)v17[1];
            if ( !v18 )
              break;
            sub_20A0850((__int64)(v17 + 1), v18);
            if ( v6 == v17 )
              goto LABEL_21;
          }
        }
        while ( v6 != v17 );
LABEL_21:
        v17 = *(_QWORD **)a1;
      }
      if ( v17 != (_QWORD *)(a1 + 16) )
        free(v17);
      *(_QWORD *)a1 = *a2;
      *(_DWORD *)(a1 + 8) = *((_DWORD *)a2 + 2);
      *(_DWORD *)(a1 + 12) = *((_DWORD *)a2 + 3);
      *a2 = v4;
      a2[1] = 0;
    }
  }
  return a1;
}
