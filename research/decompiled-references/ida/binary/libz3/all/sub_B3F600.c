__int64 __fastcall sub_B3F600(__int64 a1, int *a2, _DWORD *a3)
{
  __int64 v6; // rdi
  unsigned int v7; // eax
  __int64 v8; // rcx
  unsigned int v9; // eax
  unsigned int v10; // eax
  int v11; // edx
  __int64 result; // rax
  __int64 v13; // rdx
  unsigned int v14; // r14d
  __int64 v15; // rax
  _DWORD *v16; // rax
  __int64 v17; // rdx
  __int64 v18; // rax
  bool v19; // r8
  bool v20; // cl
  int v21; // eax
  int v22; // edx
  unsigned int *v23; // rsi
  __int64 v24; // rax
  __int64 v25; // rdx
  unsigned int v26; // eax
  unsigned int v27; // edx
  int v28; // r8d
  __int64 v29; // r14
  __int64 v30; // rdx
  __int64 v31; // r11
  __int64 v32; // rsi
  _DWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rbp
  int v36; // r8d
  int v37; // r12d
  unsigned int v38; // edx
  unsigned int v39; // edi
  __int64 v40; // r10
  double v41; // xmm2_8
  unsigned int *v42; // rbp
  double v43; // xmm1_8
  __int64 v44; // rcx
  int v45; // esi
  unsigned int *v46; // r9
  _DWORD *v47; // rdx
  unsigned int v48; // eax
  double v49; // xmm0_8
  __int64 v50; // [rsp+0h] [rbp-58h]
  int v51; // [rsp+8h] [rbp-50h]
  int v52; // [rsp+Ch] [rbp-4Ch]
  unsigned int *v53; // [rsp+18h] [rbp-40h] BYREF

  v6 = *(_QWORD *)(a1 + 8);
  v7 = 214013 * *(_DWORD *)(v6 + 7504) + 2531011;
  if ( (HIWORD(v7) & 0x7FFF) > 0x28Eu )
  {
    *(_DWORD *)(v6 + 7504) = v7;
  }
  else
  {
    v8 = *(_QWORD *)(v6 + 8560);
    v9 = 214013 * v7 + 2531011;
    *(_DWORD *)(v6 + 7504) = v9;
    v10 = HIWORD(v9) & 0x7FFF;
    if ( !v8 )
      BUG();
    v11 = v10 % *(_DWORD *)(v8 - 4);
    result = *(_QWORD *)(v6 + 8848);
    *a2 = v11;
    if ( !*(_BYTE *)(result + (unsigned int)(2 * v11)) )
      return result;
  }
  v13 = *(_QWORD *)(a1 + 32);
  *a3 = 0;
  if ( v13 )
  {
    v14 = *(_DWORD *)(v13 - 4);
    v15 = *(unsigned int *)(a1 + 40);
    if ( (unsigned int)v15 < v14 )
    {
      while ( 1 )
      {
        v23 = *(unsigned int **)(v13 + 8 * v15);
        if ( *((_WORD *)v23 + 2) || (v16 = *(_DWORD **)(*((_QWORD *)v23 + 2) + 24LL)) == nullptr )
        {
          v24 = *(_QWORD *)(v6 + 8832);
          if ( !v24 )
            goto LABEL_17;
          v25 = *v23;
          if ( (unsigned int)v25 >= *(_DWORD *)(v24 - 4) )
            goto LABEL_17;
          v21 = *(_DWORD *)(v24 + 4 * v25);
          if ( v21 == 0x7FFFFFFF )
            goto LABEL_17;
          v19 = 0;
          v20 = 0;
        }
        else
        {
          if ( *v16 )
          {
            v17 = *(_QWORD *)(v6 + 8832);
            v18 = *v23;
            if ( !v17 || (unsigned int)v18 >= *(_DWORD *)(v17 - 4) )
              goto LABEL_17;
            v19 = 0;
            v20 = 0;
          }
          else
          {
            v28 = v16[1];
            v17 = *(_QWORD *)(v6 + 8832);
            v20 = v28 == 6;
            if ( !v17 || (v18 = *v23, (unsigned int)v18 >= *(_DWORD *)(v17 - 4)) )
            {
LABEL_30:
              if ( !v20 )
                goto LABEL_17;
LABEL_15:
              v22 = 1;
              goto LABEL_16;
            }
            v19 = v28 == 5;
          }
          v21 = *(_DWORD *)(v17 + 4 * v18);
          if ( v21 == 0x7FFFFFFF )
            goto LABEL_30;
        }
        *a2 = v21;
        result = (unsigned int)*(char *)(*(_QWORD *)(v6 + 8848) + (unsigned int)(2 * v21));
        if ( (_DWORD)result == 1 && v20 )
          goto LABEL_15;
        if ( (_DWORD)result != -1 || !v19 )
        {
          if ( !(_DWORD)result )
          {
            *a3 = 0;
            return result;
          }
          goto LABEL_17;
        }
        v22 = -1;
LABEL_16:
        v53 = nullptr;
        if ( !(unsigned __int8)sub_B3F3F0(v6, (__int64)v23, v22, &v53, *(_DWORD *)(*(_QWORD *)(a1 + 24) + 584LL)) )
        {
          v26 = sub_B645B0(*(_QWORD *)(a1 + 8), v53);
          v27 = v26 >> 1;
          *a2 = v26 >> 1;
          result = (v26 & 1) == 0 ? 1 : -1;
          *a3 = result;
          if ( v27 == 0x7FFFFFFF )
            goto LABEL_37;
          return result;
        }
LABEL_17:
        v15 = (unsigned int)(*(_DWORD *)(a1 + 40) + 1);
        *(_DWORD *)(a1 + 40) = v15;
        if ( (unsigned int)v15 >= v14 )
          break;
        v13 = *(_QWORD *)(a1 + 32);
        v6 = *(_QWORD *)(a1 + 8);
      }
    }
  }
  *a2 = 0x7FFFFFFF;
LABEL_37:
  v29 = *(_QWORD *)(a1 + 56);
  *a3 = 0;
  result = *(unsigned int *)(v29 - 4);
  if ( (_DWORD)result == 1 )
  {
LABEL_38:
    *a2 = 0x7FFFFFFF;
  }
  else
  {
    while ( 1 )
    {
      v31 = *(_QWORD *)(a1 + 64);
      v32 = *(unsigned int *)(v29 + 4);
      v33 = (_DWORD *)(v31 + 4 * v32);
      if ( (_DWORD)result == 2 )
      {
        *v33 = 0;
        --*(_DWORD *)(v29 - 4);
      }
      else
      {
        v34 = *(unsigned int *)(v29 + 4LL * (unsigned int)(result - 1));
        *(_DWORD *)(v29 + 4) = v34;
        *(_DWORD *)(v31 + 4 * v34) = 1;
        *v33 = 0;
        v35 = *(unsigned int *)(v29 + 4);
        v36 = *(_DWORD *)(v29 - 4) - 1;
        *(_DWORD *)(v29 - 4) = v36;
        v37 = v35;
        if ( v36 <= 2 )
        {
          v47 = (_DWORD *)(v29 + 4);
          v39 = 1;
        }
        else
        {
          v51 = v35;
          v38 = 2;
          v39 = 1;
          v50 = v35;
          v40 = **(_QWORD **)(a1 + 48);
          v52 = v32;
          v41 = *(double *)(v40 + 8 * v35);
          while ( 1 )
          {
            v48 = v38 + 1;
            v46 = (unsigned int *)(v29 + 4LL * v38);
            v44 = *v46;
            v49 = *(double *)(v40 + 8 * v44);
            v45 = *v46;
            if ( v36 <= (int)(v38 + 1)
              || (v42 = (unsigned int *)(v29 + 4LL * v48), v43 = *(double *)(v40 + 8LL * *v42), v43 <= v49) )
            {
              v48 = v38;
              v47 = (_DWORD *)(v29 + 4LL * v39);
              if ( v49 <= v41 )
              {
LABEL_51:
                v37 = v51;
                v35 = v50;
                LODWORD(v32) = v52;
                goto LABEL_52;
              }
            }
            else
            {
              v44 = *v42;
              v45 = *v42;
              v46 = (unsigned int *)(v29 + 4LL * v48);
              v47 = (_DWORD *)(v29 + 4LL * v39);
              if ( v43 <= v41 )
                goto LABEL_51;
            }
            *v47 = v45;
            v38 = 2 * v48;
            *(_DWORD *)(v31 + 4 * v44) = v39;
            if ( v36 <= (int)(2 * v48) )
              break;
            v39 = v48;
          }
          v37 = v51;
          v35 = v50;
          v47 = v46;
          v39 = v48;
          LODWORD(v32) = v52;
        }
LABEL_52:
        *v47 = v37;
        *(_DWORD *)(v31 + 4 * v35) = v39;
      }
      v30 = *(_QWORD *)(a1 + 8);
      result = (unsigned int)(2 * v32);
      *a2 = v32;
      if ( !*(_BYTE *)(*(_QWORD *)(v30 + 8848) + result) )
        break;
      result = *(unsigned int *)(v29 - 4);
      if ( (_DWORD)result == 1 )
        goto LABEL_38;
    }
  }
  return result;
}

