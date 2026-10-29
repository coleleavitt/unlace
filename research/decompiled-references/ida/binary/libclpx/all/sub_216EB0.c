_DWORD *__fastcall sub_216EB0(__int64 a1, __int64 a2, __int64 a3, int a4, int a5, int a6)
{
  __int64 v6; // r12
  __int64 v7; // r15
  __int64 v8; // rbp
  __int64 v9; // r13
  int v10; // ebx
  int v11; // eax
  int v12; // r14d
  int v13; // r9d
  int *v14; // rcx
  __int64 v15; // r11
  __int64 v16; // r10
  int *v17; // rax
  int v18; // r9d
  __int64 v19; // rax
  __int64 v20; // r11
  int v21; // r14d
  __int64 v22; // rbx
  __int64 v23; // rax
  __int64 v24; // r12
  __int64 v25; // r10
  __int64 v26; // rax
  int *v27; // rcx
  int v28; // r9d
  int *v29; // rsi
  int v30; // edi
  __int64 v31; // rcx
  int v32; // ecx
  __int64 v33; // r14
  int v34; // ecx
  int v35; // edi
  _DWORD *v36; // rsi
  __int64 v37; // rax
  __int64 v38; // rdi
  _DWORD *v39; // rax
  __int64 v40; // rcx
  __int64 v41; // r12
  int v42; // eax
  int v43; // r8d
  int v44; // eax
  _QWORD *v45; // rdx
  __int64 v46; // xmm0_8
  _DWORD *result; // rax
  __int64 v48; // [rsp+0h] [rbp-98h]
  __int64 v50; // [rsp+10h] [rbp-88h]
  __int64 v51; // [rsp+18h] [rbp-80h]
  __int64 v52; // [rsp+28h] [rbp-70h]
  __int64 v53; // [rsp+30h] [rbp-68h]
  __int64 v54; // [rsp+38h] [rbp-60h]
  __int64 v55; // [rsp+40h] [rbp-58h]
  __int64 v56; // [rsp+48h] [rbp-50h]
  int v57; // [rsp+50h] [rbp-48h]
  __int64 v59; // [rsp+58h] [rbp-40h]
  __int64 v60; // [rsp+60h] [rbp-38h]

  v6 = *(_QWORD *)(a1 + 56);
  v53 = a5;
  v55 = *(_QWORD *)(a1 + 176);
  v7 = *(_QWORD *)(a1 + 160);
  v8 = *(_QWORD *)(a1 + 168);
  v52 = *(_QWORD *)(a1 + 80);
  v50 = *(_QWORD *)(a1 + 48);
  v48 = *(_QWORD *)(a1 + 64);
  v9 = *(_QWORD *)(a1 + 72);
  v10 = *(_DWORD *)(*(_QWORD *)(a1 + 40) + 4LL * a5);
  v54 = a6;
  v57 = *(_DWORD *)(a1 + 240);
  v11 = *(_DWORD *)(v50 + 4LL * a6);
  v12 = v10 + *(_DWORD *)(v6 + 4LL * a5);
  v13 = v11 + *(_DWORD *)(v48 + 4LL * a6);
  if ( v11 < v13 )
  {
    v14 = (int *)(v8 + 4LL * v11);
    v15 = v8 + 4 * ((unsigned int)(v13 - v11 - 1) + (__int64)v11) + 4;
    do
    {
      v16 = *v14;
      v17 = (int *)(a2 + 8 * v16);
      v18 = v17[1];
      v19 = *v17;
      if ( v18 > 0 )
        *(_DWORD *)(a2 + 8LL * v18) = v19;
      else
        *(_DWORD *)(v9 + 4LL * *(int *)(v6 + 4 * v16)) = v19;
      if ( (int)v19 > 0 )
        *(_DWORD *)(a2 + 8 * v19 + 4) = v18;
      ++v14;
    }
    while ( (int *)v15 != v14 );
  }
  if ( v12 <= v10 )
  {
    v41 = -4;
    v40 = -8;
    v56 = v10;
  }
  else
  {
    v20 = v10;
    v21 = v12 - v10;
    v22 = v10 + 1LL;
    v56 = v20;
    v23 = v20;
    v24 = -1;
    v59 = a1;
    v60 = a2;
    v51 = v22 + (unsigned int)(v21 - 1);
    while ( 1 )
    {
      v25 = (int)v23;
      v26 = *(int *)(v7 + 4 * v23);
      v27 = (int *)(a3 + 8 * v26);
      v28 = v26;
      v29 = (int *)(v48 + 4 * v26);
      v30 = v27[1];
      if ( !a4 || v57 >= v30 )
      {
        v31 = *v27;
        if ( v30 <= 0 )
          *(_DWORD *)(v52 + 4LL * *v29) = v31;
        else
          *(_DWORD *)(a3 + 8LL * v30) = v31;
        if ( (int)v31 > 0 )
          *(_DWORD *)(a3 + 8 * v31 + 4) = v30;
      }
      v32 = *v29 - 1;
      *v29 = v32;
      v33 = *(int *)(v50 + 4 * v26);
      v34 = v33 + v32;
      v35 = *(_DWORD *)(v50 + 4 * v26);
      v36 = (_DWORD *)(v8 + 4 * v33);
      if ( (int)v33 < v34 && *v36 != a5 )
      {
        v37 = v8 + 4 * v33 + 4;
        v38 = v8 + 4 + 4 * ((unsigned int)(~v35 + v34) + v33);
        do
        {
          v36 = (_DWORD *)v37;
          if ( v37 == v38 )
            break;
          v37 += 4;
        }
        while ( *(_DWORD *)(v37 - 4) != a5 );
      }
      v39 = (_DWORD *)(v8 + 4LL * v34);
      if ( a6 == v28 )
        v24 = v25;
      *v36 = *v39;
      *v39 = 0;
      v23 = v22;
      if ( v51 == v22 )
        break;
      ++v22;
    }
    a1 = v59;
    a2 = v60;
    v40 = 8 * v24;
    v41 = 4 * v24;
  }
  v42 = *(_DWORD *)(a1 + 296);
  v43 = v42 + 1;
  v44 = ~v42;
  *(_DWORD *)(a1 + 296) = v43;
  *(_DWORD *)(a2 + 8 * v53 + 4) = v44;
  *(_DWORD *)(a3 + 8 * v54 + 4) = v44;
  v45 = (_QWORD *)(v55 + 8 * v56);
  v46 = *(_QWORD *)(v55 + v40);
  *(_QWORD *)(v55 + v40) = *v45;
  result = (_DWORD *)(v7 + 4 * v56);
  *v45 = v46;
  *(_DWORD *)(v7 + v41) = *result;
  *result = a6;
  return result;
}

