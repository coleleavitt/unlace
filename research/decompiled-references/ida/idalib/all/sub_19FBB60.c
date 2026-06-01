void __fastcall sub_19FBB60(_DWORD *a1, _QWORD *a2)
{
  unsigned __int64 v4; // rcx
  __int64 v5; // rax
  const void *v6; // rdx
  __int64 v7; // rsi
  __int64 v8; // rdi
  __int64 v9; // rax
  int v10; // r14d
  __int64 v11; // r15
  __int64 v12; // r12
  int v13; // ebp
  size_t v14; // rax
  __int64 v15; // rax
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // r9
  __m128i *v24; // rdi
  __int64 v25; // rsi
  unsigned __int64 v26; // rdx
  _WORD *v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 *v30; // r14
  __int64 *v31; // rbp
  unsigned __int64 *v32; // rax
  unsigned __int64 v33; // rax
  __int64 v34; // rax
  _WORD **v35; // rax
  size_t v36; // [rsp+8h] [rbp-40h]

  v4 = (unsigned int)a1[44];
  if ( (_DWORD)v4 )
  {
    v5 = *(_QWORD *)a1;
    v6 = *((const void **)a1 + 21);
    v7 = *(_QWORD *)(*(_QWORD *)a1 + 3032LL);
    v8 = *(_QWORD *)(*(_QWORD *)a1 + 248LL);
    if ( !v7 )
      v7 = *(_QWORD *)(v5 + 544);
    v9 = sub_B7E260(v8, v7, v6, v4);
    v10 = a1[58];
    v11 = *(_QWORD *)a1;
    v12 = v9;
    a1[58] = v10 + 1;
    v13 = 2 * (*(_BYTE *)(v9 + 92) != 0);
    v36 = j__strlen("0");
    v14 = j__strlen(&byte_22F0C30);
    v15 = sub_B30D50(*(_QWORD *)(v11 + 248), &byte_22F0C30, v14, "0", v36, 0);
    *(_DWORD *)(v15 + 72) = v13;
    *(_DWORD *)(v15 + 88) = v10;
    *(_QWORD *)(v15 + 76) = 0;
    *(_DWORD *)(v15 + 84) = 0;
    *(_BYTE *)(v15 + 92) = 1;
    sub_B8CC60(v12, v15, v16, v17, v18, v19);
    v24 = *(__m128i **)(*(_QWORD *)a1 + 3032LL);
    if ( !v24 )
      v24 = *(__m128i **)(*(_QWORD *)a1 + 544LL);
    sub_B94AD0(v24, v12, v20, v21, v22, v23);
    v25 = v12;
    sub_19FA760(*(_QWORD *)a1, v12);
    v30 = *((__int64 **)a1 + 21);
    v31 = &v30[a1[44]];
    if ( v31 != v30 )
    {
      while ( 1 )
      {
        if ( (*(_BYTE *)(*v30 + 29) & 1) == 0 )
          goto LABEL_12;
        v32 = sub_B8C3D0(*v30, v25, v26, (__int64)v27, v28, v29);
        v26 = *v32;
        v33 = *v32 + 8LL * *((unsigned int *)v32 + 2);
        if ( v26 >= v33 )
        {
          if ( v26 == v33 )
            goto LABEL_12;
          v27 = *(_WORD **)v33;
          if ( *(_WORD *)(*(_QWORD *)v33 + 36LL) == 226 )
            goto LABEL_16;
          v35 = (_WORD **)(v33 + 8);
          while ( 1 )
          {
            v27 = v35;
            if ( (_WORD **)v26 == v35 )
              break;
            v27 = *v35++;
            if ( v27[18] == 226 )
              goto LABEL_16;
          }
          if ( v31 == ++v30 )
            break;
        }
        else
        {
          v27 = (_WORD *)v26;
          while ( 1 )
          {
            v25 = *(_QWORD *)v27;
            if ( *(_WORD *)(*(_QWORD *)v27 + 36LL) == 226 )
              break;
            v27 += 4;
            if ( (_WORD *)v33 == v27 )
              goto LABEL_12;
          }
          if ( (_WORD *)v33 == v27 )
            goto LABEL_12;
LABEL_16:
          v34 = *(_QWORD *)v26;
          if ( *(_WORD *)(*(_QWORD *)v26 + 36LL) != 226 )
          {
            v26 += 8LL;
            do
            {
              v34 = *(_QWORD *)v26;
              v26 += 8LL;
            }
            while ( *(_WORD *)(v34 + 36) != 226 );
          }
          if ( *(_BYTE *)(v34 + 80) && *(_DWORD *)(v34 + 72) == 4 )
          {
            *(_BYTE *)(v12 + 93) = 1;
            break;
          }
LABEL_12:
          if ( v31 == ++v30 )
            break;
        }
      }
    }
    (*(void (__fastcall **)(_QWORD, __int64))(**(_QWORD **)(*(_QWORD *)a1 + 256LL) + 24LL))(
      *(_QWORD *)(*(_QWORD *)a1 + 256LL),
      v12);
  }
  sub_19FB6A0((__int64 *)a1, a2);
}
