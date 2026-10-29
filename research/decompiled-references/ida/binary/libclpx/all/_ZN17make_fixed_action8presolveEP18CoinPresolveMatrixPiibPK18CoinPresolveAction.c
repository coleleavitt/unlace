__int64 __fastcall make_fixed_action::presolve(
        make_fixed_action *this,
        CoinPresolveMatrix *a2,
        int *a3,
        char a4,
        __int64 a5,
        const CoinPresolveAction *a6)
{
  __int64 v7; // r15
  __int64 v8; // r14
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 v11; // rcx
  char v12; // r11
  __int64 v13; // r12
  __int64 v14; // rdx
  __int64 v15; // rax
  _QWORD *v16; // r9
  const CoinPresolveAction *v17; // r8
  double *v18; // rax
  double v19; // xmm1_8
  __int64 v20; // rax
  int v21; // edx
  __int64 v22; // r10
  __int64 v23; // r9
  const CoinPresolveAction *v24; // rax
  __int64 v25; // rdx
  double v26; // xmm0_8
  __int64 v27; // rbx
  __int64 result; // rax
  double *v29; // rax
  __int64 v30; // [rsp+0h] [rbp-80h]
  __int64 v31; // [rsp+8h] [rbp-78h]
  __int64 v32; // [rsp+10h] [rbp-70h]
  __int64 v33; // [rsp+18h] [rbp-68h]
  CoinPresolveMatrix *v34; // [rsp+20h] [rbp-60h]
  __int64 v35; // [rsp+28h] [rbp-58h]
  unsigned int v36; // [rsp+30h] [rbp-50h]

  if ( (int)a3 > 0 )
  {
    v7 = *((_QWORD *)this + 11);
    v8 = *((_QWORD *)this + 12);
    v9 = *((_QWORD *)this + 20);
    v10 = *((_QWORD *)this + 22);
    v32 = *((_QWORD *)this + 8);
    v34 = a2;
    v36 = (unsigned int)a3;
    v33 = *((_QWORD *)this + 7);
    v30 = *((_QWORD *)this + 5);
    v31 = *((_QWORD *)this + 6);
    v35 = operator new[](16LL * (int)a3);
    v11 = v35;
    v12 = *((_BYTE *)this + 440);
    v13 = *((_QWORD *)this + 45);
    while ( 1 )
    {
      v14 = *(int *)a2;
      if ( v12 && (*(_BYTE *)(v13 + v14) & 2) != 0 )
        abort();
      *(_DWORD *)(v11 + 8) = *(_DWORD *)a2;
      v15 = 8 * v14;
      v16 = (_QWORD *)(v7 + 8 * v14);
      v17 = (const CoinPresolveAction *)(v8 + 8 * v14);
      if ( a4 )
      {
        *(_QWORD *)v11 = *(_QWORD *)v17;
        *(_QWORD *)v17 = *v16;
        if ( v9 )
        {
          v18 = (double *)(v9 + v15);
          v19 = *(double *)v16 - *v18;
          *v18 = *(double *)v16;
LABEL_8:
          if ( v19 != 0.0 )
          {
            v20 = *(int *)(v30 + 4 * v14);
            v21 = *(_DWORD *)(v31 + 4 * v14);
            v17 = (const CoinPresolveAction *)(unsigned int)(v20 + v21);
            if ( (int)v20 < (int)v17 )
            {
              v17 = (const CoinPresolveAction *)((unsigned int)(v21 - 1) + 1LL);
              v22 = v33 + 4 * v20;
              v23 = v32 + 8 * v20;
              v24 = nullptr;
              do
              {
                v25 = *(int *)(v22 + 4LL * (_QWORD)v24);
                v26 = *(double *)(v23 + 8LL * (_QWORD)v24);
                v24 = (const CoinPresolveAction *)((char *)v24 + 1);
                *(double *)(v10 + 8 * v25) = v26 * v19 + *(double *)(v10 + 8 * v25);
              }
              while ( v17 != v24 );
            }
          }
        }
      }
      else
      {
        *(_QWORD *)v11 = *v16;
        *v16 = *(_QWORD *)v17;
        if ( v9 )
        {
          v29 = (double *)(v9 + v15);
          v19 = *(double *)v17 - *v29;
          *v29 = *(double *)v17;
          goto LABEL_8;
        }
      }
      v11 += 16;
      a2 = (CoinPresolveMatrix *)((char *)a2 + 4);
      if ( v35 + 16LL * (v36 - 1) + 16 == v11 )
      {
        v27 = remove_fixed_action::presolve(this, v34, (int *)v36, 0, v17);
        result = operator new(0x30u);
        *(_DWORD *)(result + 16) = v36;
        *(_QWORD *)(result + 40) = v27;
        *(_QWORD *)(result + 8) = a5;
        *(_QWORD *)result = &off_4D1E48;
        *(_QWORD *)(result + 24) = v35;
        *(_BYTE *)(result + 32) = a4;
        return result;
      }
    }
  }
  return a5;
}

