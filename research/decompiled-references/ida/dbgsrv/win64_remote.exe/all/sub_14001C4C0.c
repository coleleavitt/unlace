/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_14001C4C0
// Address: 0x000000014001C4C0

//----- (000000014001C4C0) ----------------------------------------------------
void __fastcall sub_14001C4C0(__int64 a1, __int64 a2)
{
  __int64 v3; // r14
  _QWORD *v4; // rax
  _QWORD *v5; // rbx
  int v6; // eax
  const char *v7; // rdx
  bool v8; // bp
  char *v9; // rcx
  char *v10; // rdi
  size_t v11; // rax
  _QWORD *v12; // r14
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rdi
  char *v15; // rax
  char *v16; // r13
  __int64 v17; // r12
  _QWORD *v18; // rdi
  __int64 v19; // rbp
  _QWORD *v20; // rsi
  _QWORD *v21; // rsi
  void *v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rax
  size_t v25; // r8
  __int64 **v26; // rcx
  __int64 i; // rax
  __int64 *j; // rcx
  char *Str1; // [rsp+30h] [rbp-58h] BYREF
  __int64 v30; // [rsp+38h] [rbp-50h]
  __int64 v31; // [rsp+40h] [rbp-48h]
  HLOCAL hMem; // [rsp+A0h] [rbp+18h] BYREF

  v3 = a1;
  v4 = *(_QWORD **)(a1 + 1088);
  v5 = (_QWORD *)*v4;
  if ( (_QWORD *)*v4 != v4 )
  {
    while ( !qword_1400CAE78 || (int)qword_1400CAE78(v5[5], &hMem) < 0 )
    {
LABEL_19:
      if ( (v5[11] & 4) != 0 )
      {
        v12 = (_QWORD *)(a2 + 8);
        v13 = *(_QWORD *)(a2 + 8) + 1LL;
        v14 = *(_QWORD *)(a2 + 16);
        if ( v13 <= v14 )
        {
          v20 = (_QWORD *)(a2 + 8);
        }
        else
        {
          v15 = (char *)sub_14005ABE0(a2, nullptr, v13, 0x20u);
          v16 = v15;
          v17 = *(_QWORD *)(a2 + 16);
          *(_QWORD *)(a2 + 16) = v14;
          v18 = *(_QWORD **)a2;
          v19 = *v12 - 1LL;
          v20 = (_QWORD *)(a2 + 8);
          if ( v19 >= 0 )
          {
            v21 = v15 + 16;
            do
            {
              *((_DWORD *)v21 - 4) = *(_DWORD *)v18;
              *(v21 - 1) = v18[1];
              v18[1] = 0;
              *v21 = v18[2];
              v18[2] = 0;
              v21[1] = v18[3];
              v18[3] = 0;
              v22 = (void *)v18[1];
              if ( v22 )
              {
                v18[2] = 0;
                j_free(v22);
                v18[1] = 0;
                v18[3] = 0;
              }
              v18 += 4;
              v21 += 4;
              --v19;
            }
            while ( v19 >= 0 );
            v20 = (_QWORD *)(a2 + 8);
            v12 = (_QWORD *)(a2 + 8);
          }
          j_free(*(void **)a2);
          *(_QWORD *)a2 = v16;
          *(_QWORD *)(a2 + 16) = v17;
        }
        v23 = *(_QWORD *)a2 + 32LL * *v12;
        *(_QWORD *)(v23 + 8) = 0;
        *(_QWORD *)(v23 + 16) = 0;
        *(_QWORD *)(v23 + 24) = 0;
        ++*v20;
        *(_DWORD *)v23 = *((_DWORD *)v5 + 18);
        if ( (_QWORD *)(v23 + 8) != v5 + 13 )
        {
          v24 = v5[14];
          v25 = v24 - 1;
          if ( !v24 )
            v25 = 0;
          if ( v25 )
            sub_140001810(v23 + 8, (const void *)v5[13], v25);
          else
            *(_QWORD *)(v23 + 16) = 0;
        }
        *((_DWORD *)v5 + 22) &= ~4u;
        v3 = a1;
      }
      v26 = (__int64 **)v5[2];
      if ( *((_BYTE *)v26 + 25) )
      {
        for ( i = v5[1]; !*(_BYTE *)(i + 25); i = *(_QWORD *)(i + 8) )
        {
          if ( v5 != *(_QWORD **)(i + 16) )
            break;
          v5 = (_QWORD *)i;
        }
        v5 = (_QWORD *)i;
      }
      else
      {
        v5 = (_QWORD *)v5[2];
        for ( j = *v26; !*((_BYTE *)j + 25); j = (__int64 *)*j )
          v5 = j;
      }
      if ( v5 == *(_QWORD **)(v3 + 1088) )
        return;
    }
    v6 = wcslen((const wchar_t *)hMem);
    Str1 = nullptr;
    v30 = 0;
    v31 = 0;
    if ( sub_140061280((unsigned __int64 *)&Str1, "UTF-16LE", "UTF-8", (char *)hMem, 2 * v6, 0) <= 0 )
      goto LABEL_17;
    v7 = ::Str1;
    if ( v5[14] )
      v7 = (const char *)v5[13];
    v8 = v30 == 0;
    v9 = (char *)::Str1;
    v10 = Str1;
    if ( v30 )
      v9 = Str1;
    if ( !strcmp(v9, v7) )
    {
LABEL_17:
      LocalFree(hMem);
      if ( Str1 )
      {
        v30 = 0;
        j_free(Str1);
      }
      goto LABEL_19;
    }
    if ( v8 )
    {
      v10 = (char *)::Str1;
    }
    else if ( !v10 )
    {
      goto LABEL_15;
    }
    v11 = strlen(v10);
    if ( v11 )
    {
      sub_140001810((__int64)(v5 + 13), v10, v11);
LABEL_16:
      *((_DWORD *)v5 + 22) |= 4u;
      goto LABEL_17;
    }
LABEL_15:
    v5[14] = 0;
    goto LABEL_16;
  }
}
// 1400CAE78: using guessed type __int64 (__fastcall *qword_1400CAE78)(_QWORD, _QWORD);
