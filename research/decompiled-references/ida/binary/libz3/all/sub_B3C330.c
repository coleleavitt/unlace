__int64 __fastcall sub_B3C330(__int64 a1, int *a2, _DWORD *a3)
{
  __int64 v5; // r12
  double v6; // xmm0_8
  unsigned int v7; // eax
  __int64 v8; // rbx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // r13
  __int64 v14; // rdx
  __int64 v15; // r11
  __int64 v16; // rsi
  _DWORD *v17; // rdx
  __int64 v18; // rax
  __int64 v19; // rbx
  int v20; // r8d
  int v21; // ebp
  unsigned int v22; // edx
  unsigned int v23; // edi
  __int64 v24; // r10
  double v25; // xmm2_8
  unsigned int *v26; // rbx
  double v27; // xmm1_8
  __int64 v28; // rcx
  int v29; // esi
  unsigned int *v30; // r9
  _DWORD *v31; // rdx
  unsigned int v32; // eax
  double v33; // xmm0_8
  __int64 v34; // [rsp+8h] [rbp-40h]
  int v35; // [rsp+10h] [rbp-38h]
  int v36; // [rsp+14h] [rbp-34h]

  v5 = *(_QWORD *)(a1 + 8);
  *a3 = 0;
  v6 = 32767.0 * *(double *)(*(_QWORD *)(a1 + 16) + 488LL);
  v7 = 214013 * *(_DWORD *)(v5 + 7504) + 2531011;
  *(_DWORD *)(v5 + 7504) = v7;
  if ( (int)v6 <= (int)(HIWORD(v7) & 0x7FFF) )
    goto LABEL_4;
  v8 = *(_QWORD *)(v5 + 8560);
  v9 = 214013 * v7 + 2531011;
  *(_DWORD *)(v5 + 7504) = v9;
  v10 = HIWORD(v9) & 0x7FFF;
  if ( !v8 )
    BUG();
  v11 = v10 % *(_DWORD *)(v8 - 4);
  *a2 = v11;
  result = (unsigned int)(2 * v11);
  if ( *(_BYTE *)(*(_QWORD *)(v5 + 8848) + result) )
  {
LABEL_4:
    v13 = *(_QWORD *)(a1 + 32);
    for ( result = *(unsigned int *)(v13 - 4); (_DWORD)result != 1; result = *(unsigned int *)(v13 - 4) )
    {
      v15 = *(_QWORD *)(a1 + 40);
      v16 = *(unsigned int *)(v13 + 4);
      v17 = (_DWORD *)(v15 + 4 * v16);
      if ( (_DWORD)result == 2 )
      {
        *v17 = 0;
        --*(_DWORD *)(v13 - 4);
      }
      else
      {
        v18 = *(unsigned int *)(v13 + 4LL * (unsigned int)(result - 1));
        *(_DWORD *)(v13 + 4) = v18;
        *(_DWORD *)(v15 + 4 * v18) = 1;
        *v17 = 0;
        v19 = *(unsigned int *)(v13 + 4);
        v20 = *(_DWORD *)(v13 - 4) - 1;
        *(_DWORD *)(v13 - 4) = v20;
        v21 = v19;
        if ( v20 <= 2 )
        {
          v31 = (_DWORD *)(v13 + 4);
          v23 = 1;
        }
        else
        {
          v22 = 2;
          v23 = 1;
          v35 = v19;
          v24 = **(_QWORD **)(a1 + 24);
          v34 = v19;
          v36 = v16;
          v25 = *(double *)(v24 + 8 * v19);
          while ( 1 )
          {
            v32 = v22 + 1;
            v30 = (unsigned int *)(v13 + 4LL * v22);
            v28 = *v30;
            v33 = *(double *)(v24 + 8 * v28);
            v29 = *v30;
            if ( v20 <= (int)(v22 + 1)
              || (v26 = (unsigned int *)(v13 + 4LL * v32), v27 = *(double *)(v24 + 8LL * *v26), v27 <= v33) )
            {
              v32 = v22;
              v31 = (_DWORD *)(v13 + 4LL * v23);
              if ( v33 <= v25 )
              {
LABEL_18:
                v21 = v35;
                v19 = v34;
                LODWORD(v16) = v36;
                goto LABEL_19;
              }
            }
            else
            {
              v28 = *v26;
              v29 = *v26;
              v30 = (unsigned int *)(v13 + 4LL * v32);
              v31 = (_DWORD *)(v13 + 4LL * v23);
              if ( v27 <= v25 )
                goto LABEL_18;
            }
            *v31 = v29;
            v22 = 2 * v32;
            *(_DWORD *)(v15 + 4 * v28) = v23;
            if ( v20 <= (int)(2 * v32) )
              break;
            v23 = v32;
          }
          v21 = v35;
          v31 = v30;
          v23 = v32;
          v19 = v34;
          LODWORD(v16) = v36;
        }
LABEL_19:
        *v31 = v21;
        *(_DWORD *)(v15 + 4 * v19) = v23;
      }
      v14 = *(_QWORD *)(v5 + 8848);
      result = (unsigned int)(2 * v16);
      *a2 = v16;
      if ( !*(_BYTE *)(v14 + result) )
        return result;
    }
    *a2 = 0x7FFFFFFF;
  }
  return result;
}

