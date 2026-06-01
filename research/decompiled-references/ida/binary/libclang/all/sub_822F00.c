_BYTE *__fastcall sub_822F00(__int64 a1, __int64 a2)
{
  __int64 v4; // rdi
  _BYTE *v5; // rax
  __int64 v6; // rdi
  unsigned int v7; // r12d
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 *v11; // rbp
  unsigned int v12; // edx
  __int64 v13; // rbx
  unsigned int i; // eax
  __int64 v15; // rdx
  _WORD *v16; // rdx
  __int64 v17; // rbx
  _BYTE *v18; // rax
  _WORD *v19; // rdx
  __int64 v20; // rsi
  __int64 v21; // r10
  unsigned int v22; // ecx
  unsigned __int64 v23; // rdx
  unsigned int v24; // eax
  __int64 v25; // rax
  __int64 v26; // rdi
  _BYTE *result; // rax
  __int64 v28; // rdi
  __int16 v29; // ax
  __int64 v30; // rbx
  char *v31; // rcx
  char *v32; // rdx
  _BYTE *v33; // rax
  __int64 v34; // rdi
  unsigned __int64 v35; // rax
  _BYTE *v36; // rax
  unsigned int v37; // [rsp+4h] [rbp-94h]
  char v38; // [rsp+13h] [rbp-85h]
  unsigned int v39; // [rsp+14h] [rbp-84h]
  __int64 v40; // [rsp+18h] [rbp-80h]
  unsigned int v41; // [rsp+20h] [rbp-78h] BYREF
  char v42; // [rsp+24h] [rbp-74h]

  v4 = *(_QWORD *)(a1 + 24);
  if ( ((*(_BYTE *)(v4 + 28) + 95) & 0x7Fu) > 2 )
    goto LABEL_2;
  v38 = sub_7A5610((_DWORD *)v4);
  if ( !v38 )
  {
LABEL_51:
    v4 = *(_QWORD *)(a1 + 24);
LABEL_2:
    (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v4 + 96LL))(
      v4,
      a2,
      *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 17304LL,
      0);
    v37 = 0;
    v38 = 0;
    goto LABEL_3;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    v28 = *(_QWORD *)(a1 + 40);
    if ( v28 )
    {
      v29 = *(_WORD *)v28 & 0x1FF;
      if ( v29 == 93 )
      {
        v30 = sub_8C3120(v28);
        sub_AE6C50(v30, a2, 0, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 17304, 0, 0, "\n", 1u);
        v31 = *(char **)(a2 + 24);
        v32 = *(char **)(a2 + 32);
        if ( *(_BYTE *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v30 + 8) & 0xFFFFFFFFFFFFFFF0LL) + 8LL)
                                  & 0xFFFFFFFFFFFFFFF0LL)
                      + 16LL) == 41 )
        {
          if ( (unsigned __int64)(v31 - v32) <= 1 )
          {
            sub_26240F0(a2, "->", 2);
          }
          else
          {
            *(_WORD *)v32 = 15917;
            *(_QWORD *)(a2 + 32) += 2LL;
          }
          goto LABEL_51;
        }
        if ( v32 != v31 )
        {
          *v32 = 46;
          ++*(_QWORD *)(a2 + 32);
          goto LABEL_51;
        }
LABEL_59:
        sub_26240F0(a2, ".", 1);
        goto LABEL_51;
      }
      if ( v29 == 92 )
      {
        sub_AE6C50(
          *(_QWORD *)(v28 + 8LL * ((*(_BYTE *)(v28 + 2) & 8) != 0) + 8 + *(unsigned __int8 *)(v28 + 3)),
          a2,
          0,
          *(_DWORD *)(*(_QWORD *)(a1 + 8) + 16LL) + 17304,
          0,
          0,
          "\n",
          1u);
        v33 = *(_BYTE **)(a2 + 32);
        if ( *(_BYTE **)(a2 + 24) != v33 )
        {
          *v33 = 46;
          ++*(_QWORD *)(a2 + 32);
          goto LABEL_51;
        }
        goto LABEL_59;
      }
    }
    v34 = *(_QWORD *)(a1 + 32);
    v42 &= ~1u;
    v41 = 0;
    sub_81F730(v34, (__int64)&v41);
    v35 = sub_6C4DA0(*(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL), 1u);
    sub_6A3280((__int64)&v41, (char *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), v35);
    v36 = *(_BYTE **)(a2 + 32);
    if ( *(_BYTE **)(a2 + 24) == v36 )
    {
      sub_26240F0(a2, ".", 1);
    }
    else
    {
      *v36 = 46;
      ++*(_QWORD *)(a2 + 32);
    }
    if ( v41 > 1 )
      sub_69F740((__int64)&v41);
    goto LABEL_51;
  }
  v37 = 1;
LABEL_3:
  v5 = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)v5 >= *(_QWORD *)(a2 + 24) )
  {
    sub_26239D0(a2, 40);
  }
  else
  {
    *(_QWORD *)(a2 + 32) = v5 + 1;
    *v5 = 40;
  }
  v6 = *(_QWORD *)(a1 + 24);
  v7 = 0;
  v8 = *(__int64 **)(v6 + 120);
  sub_77F620(v6);
  v9 = *(_QWORD *)(a1 + 24);
  v10 = *(_QWORD *)(v9 + 120);
  v11 = (__int64 *)(v10 + 8LL * (unsigned int)sub_77F620(v9));
  if ( v11 != v8 )
  {
    while ( 1 )
    {
      v12 = *(_DWORD *)(a1 + 56);
      v13 = *(_QWORD *)(*(_QWORD *)(a1 + 8) + 32LL);
      for ( i = *(_DWORD *)(v13 + 176); v12 < i; i = *(_DWORD *)(v13 + 176) )
        v13 = *(_QWORD *)(v13 + 16);
      if ( v12 != i )
        goto LABEL_9;
      v20 = *v8;
      v21 = *(_QWORD *)(a1 + 48);
      v22 = *(_DWORD *)(a1 + 60);
      v23 = *v8;
      if ( v21 )
      {
        v24 = (unsigned __int8)(*(_WORD *)(v20 + 98) >> 4);
        if ( v24 == 255 )
        {
          v40 = *(_QWORD *)(a1 + 48);
          v39 = *(_DWORD *)(a1 + 60);
          v24 = sub_77D6D0(*v8);
          v21 = v40;
          v22 = v39;
        }
        v23 = *(_QWORD *)(*(_QWORD *)(v21 + 120) + 8LL * v24);
      }
      v25 = *(_QWORD *)(v13 + 88);
      if ( !v25 )
        goto LABEL_9;
      v26 = v13 + 80;
      do
      {
        while ( *(_QWORD *)(v25 + 32) >= v23 && (*(_QWORD *)(v25 + 32) != v23 || *(_DWORD *)(v25 + 40) >= v22) )
        {
          v26 = v25;
          v25 = *(_QWORD *)(v25 + 16);
          if ( !v25 )
            goto LABEL_32;
        }
        v25 = *(_QWORD *)(v25 + 24);
      }
      while ( v25 );
LABEL_32:
      if ( v13 + 80 != v26 && *(_QWORD *)(v26 + 32) == v23 && v22 == *(_DWORD *)(v26 + 40) )
      {
        sub_6A3280(v26 + 48, (char *)a2, *(_QWORD *)(*(_QWORD *)(a1 + 8) + 16LL), *(_QWORD *)(v20 + 48));
      }
      else
      {
LABEL_9:
        v15 = *(_QWORD *)(a2 + 32);
        if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v15) <= 4 )
        {
          sub_26240F0(a2, "<...>", 5);
        }
        else
        {
          *(_DWORD *)v15 = 774778428;
          *(_BYTE *)(v15 + 4) = 62;
          *(_QWORD *)(a2 + 32) += 5LL;
        }
      }
      if ( !v7 && v38 )
      {
        v16 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v16 <= 1u )
        {
          v17 = sub_26240F0(a2, "->", 2);
        }
        else
        {
          v17 = a2;
          *v16 = 15917;
          *(_QWORD *)(a2 + 32) += 2LL;
        }
        sub_77A870(*(_QWORD *)(a1 + 24), v17);
        v18 = *(_BYTE **)(v17 + 32);
        if ( (unsigned __int64)v18 >= *(_QWORD *)(v17 + 24) )
        {
          sub_26239D0(v17, 40);
        }
        else
        {
          *(_QWORD *)(v17 + 32) = v18 + 1;
          *v18 = 40;
        }
      }
      ++v8;
      ++v7;
      if ( v8 == v11 )
        break;
      if ( v37 < v7 )
      {
        v19 = *(_WORD **)(a2 + 32);
        if ( *(_QWORD *)(a2 + 24) - (_QWORD)v19 <= 1u )
        {
          sub_26240F0(a2, ", ", 2);
        }
        else
        {
          *v19 = 8236;
          *(_QWORD *)(a2 + 32) += 2LL;
        }
      }
    }
  }
  result = *(_BYTE **)(a2 + 32);
  if ( (unsigned __int64)result >= *(_QWORD *)(a2 + 24) )
    return (_BYTE *)sub_26239D0(a2, 41);
  *(_QWORD *)(a2 + 32) = result + 1;
  *result = 41;
  return result;
}

