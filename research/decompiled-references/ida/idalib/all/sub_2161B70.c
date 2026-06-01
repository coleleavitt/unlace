__int64 *__fastcall sub_2161B70(__int64 *a1, __int64 a2)
{
  __int64 *result; // rax
  __int64 v3; // rbx
  __int64 v4; // rdx
  _DWORD *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdx
  __int64 (__fastcall *v11)(); // rbx
  __int64 v12; // rdx
  unsigned int v13; // ecx
  __int64 v14; // rsi
  __int64 v15; // rcx
  int v16; // edx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 (__fastcall *v20)(); // rdx
  unsigned int *v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rcx
  __int64 v28; // r8
  __int64 v29; // r9
  __int64 v30; // rcx
  __int64 v31; // r8
  __int64 v32; // r9
  __int64 *v33; // [rsp+8h] [rbp-40h]
  __int64 *v34; // [rsp+8h] [rbp-40h]
  __int64 *v35; // [rsp+8h] [rbp-40h]
  __int64 (__fastcall *v36)(); // [rsp+10h] [rbp-38h] BYREF
  __int64 v37[6]; // [rsp+18h] [rbp-30h] BYREF

  result = a1;
  v3 = *(_QWORD *)(a2 + 80);
  if ( !v3 )
    goto LABEL_7;
  v4 = *(_QWORD *)(a2 + 64);
  v6 = (_DWORD *)(v4 ? v4 + 92 : *(_QWORD *)(a2 + 72) + 108LL);
  if ( *v6 <= 0xAu || v3 == -80 || !*(_DWORD *)(v3 + 80) )
    goto LABEL_7;
  v36 = nullptr;
  v33 = a1;
  sub_215F120(v37, (void **)a2, *(_DWORD *)(v3 + 80), &v36, (__int64)"load config table");
  v10 = v37[0];
  result = a1;
  if ( v37[0] )
    goto LABEL_10;
  sub_215ED20(
    v37,
    (unsigned __int64)v36,
    *(unsigned int *)(v3 + 84),
    v7,
    v8,
    v9,
    *(_QWORD *)(a2 + 16),
    *(_QWORD *)(a2 + 24));
  v10 = v37[0];
  result = a1;
  if ( v37[0] )
    goto LABEL_10;
  v11 = v36;
  v12 = *(_QWORD *)(a2 + 72);
  *(_QWORD *)(a2 + 208) = v36;
  if ( v12 )
  {
    v13 = *(_DWORD *)v11;
    if ( *(_DWORD *)v11 > 0xCFu )
    {
      v14 = *((_QWORD *)v11 + 25);
      if ( v14 )
      {
        v15 = *(_QWORD *)(a2 + 64);
        if ( v15 )
          v16 = *(_DWORD *)(v15 + 28);
        else
          v16 = *(_DWORD *)(v12 + 24);
        sub_215F120(v37, (void **)a2, v14 - v16, &v36, (__int64)"CHPE metadata");
        v10 = v37[0];
        result = a1;
        if ( v37[0] )
          goto LABEL_10;
        sub_215ED20(v37, (unsigned __int64)v36, 92, v17, v18, v19, *(_QWORD *)(a2 + 16), *(_QWORD *)(a2 + 24));
        v10 = v37[0];
        result = a1;
        if ( v37[0] )
          goto LABEL_10;
        v20 = v36;
        *(_QWORD *)(a2 + 216) = v36;
        if ( *((_DWORD *)v20 + 2) )
        {
          sub_215F120(v37, (void **)a2, *((_DWORD *)v20 + 1), &v36, (__int64)"CHPE code map");
          v10 = v37[0];
          result = a1;
          if ( v37[0] )
            goto LABEL_10;
          sub_215ED20(
            v37,
            (unsigned __int64)v36,
            8LL * *(unsigned int *)(*(_QWORD *)(a2 + 216) + 8LL),
            v30,
            v31,
            v32,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 24));
          v10 = v37[0];
          result = a1;
          if ( v37[0] )
            goto LABEL_10;
        }
        v21 = *(unsigned int **)(a2 + 216);
        if ( v21[12] )
        {
          v35 = result;
          sub_215F120(v37, (void **)a2, v21[3], &v36, (__int64)"CHPE entry point ranges");
          v10 = v37[0];
          result = v35;
          if ( v37[0] )
            goto LABEL_10;
          sub_215ED20(
            v37,
            (unsigned __int64)v36,
            12LL * *(unsigned int *)(*(_QWORD *)(a2 + 216) + 48LL),
            v27,
            v28,
            v29,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 24));
          v10 = v37[0];
          result = v35;
          if ( v37[0] )
            goto LABEL_10;
          v21 = *(unsigned int **)(a2 + 216);
        }
        if ( v21[13] )
        {
          v34 = result;
          sub_215F120(v37, (void **)a2, v21[4], &v36, (__int64)"CHPE redirection metadata");
          v10 = v37[0];
          result = v34;
          if ( v37[0] )
            goto LABEL_10;
          sub_215ED20(
            v37,
            (unsigned __int64)v36,
            8LL * *(unsigned int *)(*(_QWORD *)(a2 + 216) + 52LL),
            v24,
            v25,
            v26,
            *(_QWORD *)(a2 + 16),
            *(_QWORD *)(a2 + 24));
          v10 = v37[0];
          result = v34;
          if ( v37[0] )
            goto LABEL_10;
          v13 = *(_DWORD *)v11;
        }
        else
        {
          v13 = *(_DWORD *)v11;
        }
      }
      if ( v13 > 0xE5 )
      {
        v33 = result;
        v22 = *((unsigned int *)v11 + 56);
        v23 = *((unsigned __int16 *)v11 + 114);
        goto LABEL_27;
      }
    }
LABEL_7:
    *result = 0;
    return result;
  }
  if ( *(_DWORD *)v11 <= 0x8Du )
    goto LABEL_7;
  v22 = *((unsigned int *)v11 + 34);
  v23 = *((unsigned __int16 *)v11 + 70);
LABEL_27:
  sub_2161840(v37, (_QWORD *)a2, v23, v22);
  v10 = v37[0];
  result = v33;
  if ( !v37[0] )
    goto LABEL_7;
LABEL_10:
  *result = v10;
  return result;
}
