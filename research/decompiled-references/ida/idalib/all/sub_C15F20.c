_BYTE *__fastcall sub_C15F20(__int64 a1, __int64 a2, double a3)
{
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rcx
  _BYTE *v7; // rax
  __int64 v8; // rdx
  __int64 v9; // rdi
  unsigned int v10; // r13d
  __int64 *v11; // r14
  __int64 v12; // rdi
  __int64 v13; // rbx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 *v16; // r12
  unsigned int v17; // edi
  __int64 v18; // rdx
  __int64 v19; // rsi
  __int64 v20; // rbx
  unsigned int v21; // ecx
  unsigned int i; // eax
  __int64 v23; // rdx
  _WORD *v24; // rdx
  __int64 v25; // rbx
  _BYTE *v26; // rax
  unsigned __int64 v27; // r10
  unsigned int v28; // eax
  __int64 v29; // rax
  __int64 v30; // rdi
  _WORD *v31; // rdx
  _BYTE *result; // rax
  __int64 v33; // rdi
  __int16 v34; // ax
  __int64 v35; // rbx
  size_t v36; // r14
  size_t v37; // rax
  void *v38; // rdi
  size_t v39; // rbx
  __int64 v40; // rbx
  size_t v41; // r14
  size_t v42; // rax
  __int64 v43; // rdi
  unsigned __int64 v44; // rax
  size_t v45; // rax
  void *v46; // rdi
  size_t v47; // r12
  size_t v48; // rax
  void *v49; // rdi
  size_t v50; // rbx
  unsigned __int8 v51; // [rsp+7h] [rbp-91h]
  __int64 v52; // [rsp+8h] [rbp-90h]
  unsigned int v53; // [rsp+14h] [rbp-84h]
  __int64 v54; // [rsp+18h] [rbp-80h]
  unsigned int v55; // [rsp+20h] [rbp-78h] BYREF
  char v56; // [rsp+24h] [rbp-74h]

  v4 = a2;
  v5 = *(_QWORD *)(a1 + 24);
  if ( ((*(_BYTE *)(v5 + 28) + 93) & 0x7Fu) > 2 )
    goto LABEL_2;
  v51 = sub_B98200((_QWORD *)v5, a2);
  if ( !v51 )
  {
LABEL_54:
    v5 = *(_QWORD *)(a1 + 24);
LABEL_2:
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v5 + 96LL))(
      v5,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 17464LL,
      0);
    v51 = 0;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v33 = *(_QWORD *)(a1 + 40);
    if ( v33 )
    {
      v34 = *(_WORD *)v33 & 0x1FF;
      if ( v34 == 92 )
      {
        v35 = sub_C94680(v33);
        v36 = j__strlen("\n");
        sub_F07C00(v35, a2, 0, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 17464, 0, 0, (__int64)"\n", v36);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v35 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 42 )
        {
          v48 = j__strlen("->");
          v49 = *(void **)(a2 + 32);
          v50 = v48;
          if ( v48 > *(_QWORD *)(a2 + 24) - (_QWORD)v49 )
          {
            sub_227BF10(a2, "->", v48);
          }
          else if ( v48 )
          {
            memcpy(v49, "->", v48);
            *(_QWORD *)(a2 + 32) += v50;
          }
          goto LABEL_54;
        }
        v37 = j__strlen(".");
        v38 = *(void **)(a2 + 32);
        v39 = v37;
        if ( v37 <= *(_QWORD *)(a2 + 24) - (_QWORD)v38 )
          goto LABEL_52;
LABEL_57:
        sub_227BF10(a2, ".", v39);
        goto LABEL_54;
      }
      if ( v34 == 91 )
      {
        v40 = *(_QWORD *)(v33 + 8 * (((*(_BYTE *)(v33 + 2) & 8) != 0) + 1LL) + 32);
        v41 = j__strlen("\n");
        sub_F07C00(v40, a2, 0, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 17464, 0, 0, (__int64)"\n", v41);
        v42 = j__strlen(".");
        v38 = *(void **)(a2 + 32);
        v39 = v42;
        if ( v42 <= *(_QWORD *)(a2 + 24) - (_QWORD)v38 )
        {
LABEL_52:
          if ( v39 )
          {
            memcpy(v38, ".", v39);
            *(_QWORD *)(a2 + 32) += v39;
          }
          goto LABEL_54;
        }
        goto LABEL_57;
      }
    }
    v43 = *(_QWORD *)(a1 + 32);
    v56 &= ~1u;
    v55 = 0;
    sub_C0F890(v43, (__int64)&v55);
    v44 = sub_A73030(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL), 1u);
    sub_A53AE0(&v55, (char *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v44, a3);
    v45 = j__strlen(".");
    v46 = *(void **)(a2 + 32);
    v47 = v45;
    if ( v45 > *(_QWORD *)(a2 + 24) - (_QWORD)v46 )
    {
      sub_227BF10(a2, ".", v45);
    }
    else if ( v45 )
    {
      memcpy(v46, ".", v45);
      *(_QWORD *)(a2 + 32) += v47;
    }
    if ( v55 > 1 )
      sub_A4F8E0((int *)&v55);
    goto LABEL_54;
  }
LABEL_3:
  v7 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v7 >= *(_QWORD *)(a2 + 24) )
  {
    a2 = 40;
    sub_227BA10(v4, 40);
  }
  else
  {
    v8 = (__int64)(v7 + 1);
    *(_QWORD *)(a2 + 32) = v7 + 1;
    *v7 = 40;
  }
  v9 = *(_QWORD *)(a1 + 24);
  v10 = 0;
  v11 = *(__int64 **)(v9 + 120);
  sub_B76070(v9, a2, v8, v6);
  v12 = *(_QWORD *)(a1 + 24);
  v13 = *(_QWORD *)(v12 + 120);
  v16 = (__int64 *)(v13 + 8LL * (unsigned int)sub_B76070(v12, a2, v14, v15));
  if ( v16 != v11 )
  {
    while ( 1 )
    {
      v17 = *(_DWORD *)(a1 + 56);
      v18 = *v11;
      v19 = *(_QWORD *)(a1 + 48);
      v20 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      v21 = *(_DWORD *)(a1 + 60);
      for ( i = *(_DWORD *)(v20 + 128); v17 < i; i = *(_DWORD *)(v20 + 128) )
        v20 = *(_QWORD *)(v20 + 16);
      if ( v17 != i )
        goto LABEL_9;
      v27 = *v11;
      if ( v19 )
      {
        v28 = (unsigned __int8)(*(_WORD *)(v18 + 98) >> 4);
        if ( v28 == 255 )
        {
          v54 = *(_QWORD *)(a1 + 48);
          v53 = *(_DWORD *)(a1 + 60);
          v52 = *v11;
          v28 = sub_B74880(*v11);
          v19 = v54;
          v21 = v53;
          v18 = v52;
        }
        v27 = *(_QWORD *)(*(_QWORD *)(v19 + 120) + 8LL * v28);
      }
      v29 = *(_QWORD *)(v20 + 88);
      if ( !v29 )
        goto LABEL_9;
      v30 = v20 + 80;
      do
      {
        while ( v27 <= *(_QWORD *)(v29 + 32) && (v27 != *(_QWORD *)(v29 + 32) || v21 <= *(_DWORD *)(v29 + 40)) )
        {
          v30 = v29;
          v29 = *(_QWORD *)(v29 + 16);
          if ( !v29 )
            goto LABEL_30;
        }
        v29 = *(_QWORD *)(v29 + 24);
      }
      while ( v29 );
LABEL_30:
      if ( v20 + 80 != v30 && v27 == *(_QWORD *)(v30 + 32) && v21 == *(_DWORD *)(v30 + 40) )
      {
        sub_A53AE0((_DWORD *)(v30 + 48), (char *)v4, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), *(_QWORD *)(v18 + 48), a3);
        if ( v10 )
          goto LABEL_34;
LABEL_12:
        if ( !v51 )
          goto LABEL_34;
        v24 = *(_WORD **)(v4 + 32);
        if ( *(_QWORD *)(v4 + 24) - (_QWORD)v24 > 1u )
        {
          v25 = v4;
          *v24 = 15917;
          *(_QWORD *)(v4 + 32) += 2LL;
        }
        else
        {
          v25 = sub_227BF10(v4, "->", 2);
        }
        sub_B72CF0(*(_QWORD *)(a1 + 24), v25);
        v26 = *(_BYTE **)(v25 + 32);
        if ( (unsigned __int64)v26 >= *(_QWORD *)(v25 + 24) )
        {
          sub_227BA10(v25, 40);
        }
        else
        {
          *(_QWORD *)(v25 + 32) = v26 + 1;
          *v26 = 40;
        }
        if ( v16 == ++v11 )
          break;
        v10 = 1;
      }
      else
      {
LABEL_9:
        v23 = *(_QWORD *)(v4 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(v4 + 24) - v23) > 4 )
        {
          *(_DWORD *)v23 = 774778428;
          *(_BYTE *)(v23 + 4) = 62;
          *(_QWORD *)(v4 + 32) += 5LL;
        }
        else
        {
          sub_227BF10(v4, "<...>", 5);
        }
        if ( !v10 )
          goto LABEL_12;
LABEL_34:
        ++v11;
        ++v10;
        if ( v11 == v16 )
          break;
        if ( v51 < v10 )
        {
          v31 = *(_WORD **)(v4 + 32);
          if ( *(_QWORD *)(v4 + 24) - (_QWORD)v31 > 1u )
          {
            *v31 = 8236;
            *(_QWORD *)(v4 + 32) += 2LL;
          }
          else
          {
            sub_227BF10(v4, ", ", 2);
          }
        }
      }
    }
  }
  result = *(_BYTE **)(v4 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(v4 + 24) )
    return (_BYTE *)sub_227BA10(v4, 41);
  *(_QWORD *)(v4 + 32) = result + 1;
  *result = 41;
  return result;
}
