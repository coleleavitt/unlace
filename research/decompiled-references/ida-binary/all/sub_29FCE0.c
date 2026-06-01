__m128i *__fastcall sub_29FCE0(__int64 *a1, const __m128i *a2, __int32 a3)
{
  const __m128i *v4; // r15
  __int64 *v5; // rbp
  __int64 v6; // r12
  int v7; // edx
  int v8; // ebp
  const __m128i *v9; // r12
  __int64 v10; // r13
  __int32 v11; // eax
  _DWORD *v12; // rdi
  __int32 v13; // r9d
  __int32 v14; // r14d
  const __m128i *v15; // rax
  __int32 v16; // ebx
  __int32 v17; // r15d
  __int32 v18; // r12d
  const __m128i *v19; // rbx
  int v20; // eax
  __int32 v21; // edx
  __int32 v22; // ecx
  int v23; // r8d
  int v24; // ecx
  __int64 v25; // rbx
  int v27; // eax
  int v28; // edx
  int v29; // eax
  int v30; // edx
  int v31; // eax
  bool v32; // [rsp+3h] [rbp-55h]
  __int32 v33; // [rsp+4h] [rbp-54h]
  __int32 v34; // [rsp+8h] [rbp-50h]
  int v35; // [rsp+Ch] [rbp-4Ch]
  __int64 v36; // [rsp+10h] [rbp-48h]

  v4 = a2;
  v5 = a1;
  v6 = a1[1];
  v35 = v6;
  v7 = v6 - 1;
  if ( (int)v6 - 1 < 0 )
  {
LABEL_34:
    v25 = v35;
    if ( v35 != v6 )
      return sub_29FB40((_QWORD *)(*v5 + 48 * v25), v4);
    goto LABEL_28;
  }
  v36 = a1[1];
  v8 = v6 - 1;
  v9 = a2;
  v33 = a3;
  v10 = *a1 + 48LL * v7 + 8;
  while ( 2 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD **)(v10 + 16);
      if ( v12 != (_DWORD *)v10 )
        break;
      v35 = v8;
LABEL_9:
      --v8;
      v10 -= 48;
      if ( v8 == -1 )
        goto LABEL_27;
    }
    v13 = v9[1].m128i_i32[0];
    v14 = v9->m128i_i32[3];
    v15 = v9;
    v16 = v14;
    v17 = v14;
    v34 = v13;
    if ( v13 >= v14 )
      v16 = v9[1].m128i_i32[0];
    if ( v13 <= v14 )
      v17 = v9[1].m128i_i32[0];
    v32 = v13 > v14;
    v18 = v16;
    v19 = v15;
    do
    {
      v20 = v12[12];
      v21 = v12[11];
      v22 = v21;
      if ( v20 <= v21 )
        v22 = v12[12];
      if ( v22 < v17 )
        v22 = v17;
      v23 = v22;
      v24 = v12[11];
      if ( v20 >= v21 )
        v24 = v12[12];
      if ( v24 > v18 )
        v24 = v18;
      if ( v23 <= v24 )
      {
        if ( v20 > v21 == v32 )
        {
          if ( v21 == v14 )
          {
            v27 = v20 - v14;
            if ( v27 <= 0 )
              v27 = -v27;
            v28 = v14 - v34;
            if ( v34 - v14 > 0 )
              v28 = v34 - v14;
            if ( v28 < (unsigned __int64)v27 )
            {
LABEL_33:
              v6 = v36;
              v5 = a1;
              v4 = v19;
              goto LABEL_34;
            }
          }
          else if ( v20 == v34 )
          {
            v29 = v34 - v21;
            v30 = v21 - v34;
            if ( v30 < 0 )
              v30 = v29;
            v31 = v14 - v34;
            if ( v34 - v14 > 0 )
              v31 = v34 - v14;
            if ( v30 < (unsigned __int64)v31 )
              goto LABEL_33;
          }
          else if ( v20 <= v21 )
          {
            if ( v21 < v14 )
              goto LABEL_33;
          }
          else if ( v21 > v14 )
          {
            goto LABEL_33;
          }
        }
        v11 = v19->m128i_i32[1];
        if ( (v12[9] != v11 || v33 > v11) && (v12[8] != v19->m128i_i32[0] || v33 > v19->m128i_i32[0]) )
        {
          v9 = v19;
          goto LABEL_9;
        }
      }
      v12 = (_DWORD *)std::_Rb_tree_increment(v12);
    }
    while ( v12 != (_DWORD *)v10 );
    v35 = v8--;
    v9 = v19;
    v10 -= 48;
    if ( v8 != -1 )
      continue;
    break;
  }
LABEL_27:
  v4 = v9;
  v25 = v35;
  v5 = a1;
  if ( v35 == v36 )
LABEL_28:
    sub_29D700(v5, v35 + 1);
  return sub_29FB40((_QWORD *)(*v5 + 48 * v25), v4);
}
