/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40CF30
// Address: 0x000000000040CF30

//----- (000000000040CF30) ----------------------------------------------------
__int64 __fastcall sub_40CF30(__int64 a1, char **a2)
{
  __int64 v3; // x23
  __int64 v5; // x19
  int v6; // w2
  char v7; // w0
  void *v8; // x27
  __int64 v9; // x28
  const char *v10; // x1
  __int64 v11; // x26
  const char *v12; // x0
  __int64 v14; // x1
  void *v15; // x3
  __int64 v16; // x0
  char *v17; // x0
  unsigned __int64 v18; // x27
  char *v19; // x28
  unsigned __int64 v20; // x24
  void *v21; // x0
  char *v22; // x0
  char *v23; // x2
  char *v24; // x26
  __int64 v25; // x2
  char *v26; // x27
  char *v27; // x28
  void *v28; // x0
  char *src; // [xsp+68h] [xbp-38h]
  void *srca; // [xsp+68h] [xbp-38h]
  __int64 v31; // [xsp+70h] [xbp-30h]
  void *ptr; // [xsp+80h] [xbp-20h] BYREF
  __int64 v33; // [xsp+88h] [xbp-18h]
  __int64 v34; // [xsp+90h] [xbp-10h]
  __int64 v35; // [xsp+98h] [xbp-8h]

  v3 = a1 + 1920;
  v5 = *(_QWORD *)(a1 + 1936);
  if ( v5 != a1 + 1920 )
  {
    while ( 1 )
    {
      v6 = *(_DWORD *)(v5 + 40);
      ptr = nullptr;
      v33 = 0;
      v34 = 0;
      v7 = sub_40CE10(a1, (__int64)&ptr, v6);
      v8 = ptr;
      if ( !v7 )
        goto LABEL_9;
      v9 = *(_QWORD *)(v5 + 80);
      v10 = (const char *)&qword_4B2D48;
      v11 = v33;
      if ( v33 )
        v12 = (const char *)ptr;
      else
        v12 = (const char *)&qword_4B2D48;
      if ( v9 )
        v10 = *(const char **)(v5 + 72);
      if ( !strcmp(v12, v10) )
        goto LABEL_9;
      v14 = v34;
      v15 = *(void **)(v5 + 72);
      v16 = *(_QWORD *)(v5 + 88);
      *(_QWORD *)(v5 + 72) = v8;
      *(_QWORD *)(v5 + 80) = v11;
      *(_QWORD *)(v5 + 88) = v14;
      v33 = v9;
      v34 = v16;
      v17 = a2[1];
      v18 = (unsigned __int64)a2[2];
      ptr = v15;
      if ( (unsigned __int64)(v17 + 1) > v18 )
      {
        v22 = (char *)sub_491288((__int64)a2, nullptr, (unsigned __int64)(v17 + 1), 0x20u);
        v23 = a2[1];
        v24 = a2[2];
        src = v22;
        a2[2] = (char *)v18;
        v25 = (__int64)(v23 - 1);
        v26 = *a2;
        if ( v25 >= 0 )
        {
          v27 = v22;
          do
          {
            *(_DWORD *)v27 = *(_DWORD *)v26;
            *((_QWORD *)v27 + 1) = *((_QWORD *)v26 + 1);
            *((_QWORD *)v26 + 1) = 0;
            *((_QWORD *)v27 + 2) = *((_QWORD *)v26 + 2);
            *((_QWORD *)v26 + 2) = 0;
            *((_QWORD *)v27 + 3) = *((_QWORD *)v26 + 3);
            *((_QWORD *)v26 + 3) = 0;
            v28 = *((void **)v26 + 1);
            if ( v28 )
            {
              *((_QWORD *)v26 + 2) = 0;
              v31 = v25;
              j__free(v28);
              v25 = v31;
            }
            --v25;
            v26 += 32;
            v27 += 32;
          }
          while ( v25 != -1 );
          v26 = *a2;
        }
        j__free(v26);
        v17 = a2[1];
        *a2 = src;
        a2[2] = v24;
      }
      else
      {
        src = *a2;
      }
      v19 = &src[32 * (_QWORD)v17];
      *((_QWORD *)v19 + 1) = 0;
      *((_QWORD *)v19 + 2) = 0;
      *((_QWORD *)v19 + 3) = 0;
      ++a2[1];
      *(_DWORD *)v19 = *(_DWORD *)(v5 + 40);
      if ( (char *)(v5 + 72) == v19 + 8 )
        goto LABEL_21;
      v20 = *(_QWORD *)(v5 + 80);
      if ( v20 > 1 )
        break;
      v8 = ptr;
      *((_QWORD *)v19 + 2) = 0;
LABEL_9:
      if ( v8 )
      {
        v33 = 0;
        j__free(v8);
      }
      v5 = sub_49F6E8(v5);
      if ( v3 == v5 )
        return v35 ^ _stack_chk_guard;
    }
    srca = *(void **)(v5 + 72);
    v21 = *((void **)v19 + 1);
    if ( v20 > *((_QWORD *)v19 + 3) )
    {
      v21 = sub_491288((__int64)(v19 + 8), *((void **)v19 + 1), v20, 1u);
      *((_QWORD *)v19 + 1) = v21;
    }
    *((_QWORD *)v19 + 2) = v20;
    memmove(v21, srca, v20 - 1);
    *(_BYTE *)(*((_QWORD *)v19 + 1) + v20 - 1) = 0;
LABEL_21:
    v8 = ptr;
    goto LABEL_9;
  }
  return v35 ^ _stack_chk_guard;
}
// 40CF30: could not find valid save-restore pair for x24
// 40CF30: could not find valid save-restore pair for x26
// 40CF30: could not find valid save-restore pair for x27
// 40CF30: could not find valid save-restore pair for x28
// 4B2D48: using guessed type __int64 qword_4B2D48;
