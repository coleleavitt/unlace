void __fastcall sub_223BB70(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 *v6; // rcx
  int v7; // r12d
  __int64 v8; // rbx
  int v9; // eax
  __int64 v10; // rdx
  __int64 *v11; // rsi
  void *v12; // rdx
  __int64 (*v13)(void); // rax
  _BYTE *v14; // rdi
  size_t v15; // rbx
  const char *v16; // rsi
  __int64 v17; // rax
  _BYTE *v18; // rdx
  unsigned int v19; // eax
  __int64 v20; // rax
  _WORD *v21; // rcx
  __int64 v22; // rax
  size_t v23; // rdx
  _BYTE *v24; // rdx

  if ( a2 )
  {
    v6 = *(__int64 **)a1;
    v7 = -1431655765 * ((__int64)(*(_QWORD *)(a1 + 8) - *(_QWORD *)a1) >> 3);
    if ( v7 )
    {
      v8 = 0;
      v9 = 0;
      while ( 1 )
      {
        v10 = v6[v8];
        v11 = &v6[v8];
        if ( a2 >= *(_QWORD *)(v10 + 8) && a2 <= *(_QWORD *)(v10 + 16) )
          break;
        ++v9;
        v8 += 3;
        if ( v7 == v9 )
        {
          v8 = 0x2FFFFFFFDLL;
          v7 = 0;
          v11 = v6 + 0x2FFFFFFFDLL;
          goto LABEL_8;
        }
      }
      v7 = v9 + 1;
    }
    else
    {
      v8 = 0x2FFFFFFFDLL;
      v11 = v6 + 0x2FFFFFFFDLL;
    }
LABEL_8:
    sub_223BB70(a1, v11[2], a3);
    v12 = *(void **)(a3 + 32);
    if ( *(_QWORD *)(a3 + 24) - (_QWORD)v12 > 0xDu )
    {
      qmemcpy(v12, "Included from ", 14);
      *(_QWORD *)(a3 + 32) += 14LL;
    }
    else
    {
      a3 = sub_227BF10(a3, "Included from ", 14);
    }
    v13 = *(__int64 (**)(void))(**(_QWORD **)(*(_QWORD *)a1 + v8 * 8) + 16LL);
    if ( (char *)v13 == (char *)sub_FC62B0 )
    {
      v14 = *(_BYTE **)(a3 + 32);
      v15 = 14;
      v16 = "Unknown buffer";
      if ( *(_QWORD *)(a3 + 24) - (_QWORD)v14 <= 0xDu )
      {
LABEL_12:
        v17 = sub_227BF10(a3, v16, v15);
        v18 = *(_BYTE **)(v17 + 24);
        v14 = *(_BYTE **)(v17 + 32);
        a3 = v17;
        goto LABEL_13;
      }
    }
    else
    {
      v22 = v13();
      v14 = *(_BYTE **)(a3 + 32);
      v15 = v23;
      v18 = *(_BYTE **)(a3 + 24);
      v16 = (const char *)v22;
      if ( v18 - v14 < v15 )
        goto LABEL_12;
      if ( !v15 )
      {
LABEL_13:
        if ( v14 == v18 )
        {
LABEL_14:
          a3 = sub_227BF10(a3, ":", 1);
          goto LABEL_15;
        }
LABEL_22:
        *v14 = 58;
        ++*(_QWORD *)(a3 + 32);
LABEL_15:
        v19 = sub_223B700((__int64 **)a1, a2, v7);
        v20 = sub_227B910(a3, v19);
        v21 = *(_WORD **)(v20 + 32);
        if ( *(_QWORD *)(v20 + 24) - (_QWORD)v21 > 1u )
        {
          *v21 = 2618;
          *(_QWORD *)(v20 + 32) += 2LL;
        }
        else
        {
          sub_227BF10(v20, ":\n", 2);
        }
        return;
      }
    }
    memcpy(v14, v16, v15);
    v24 = *(_BYTE **)(a3 + 24);
    v14 = (_BYTE *)(v15 + *(_QWORD *)(a3 + 32));
    *(_QWORD *)(a3 + 32) = v14;
    if ( v14 == v24 )
      goto LABEL_14;
    goto LABEL_22;
  }
}
