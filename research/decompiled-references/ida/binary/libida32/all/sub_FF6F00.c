unsigned __int64 __fastcall sub_FF6F00(unsigned int *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rbx
  __int64 v5; // rdx
  char *v6; // rbp
  size_t v7; // rax
  _BYTE *v8; // rdi
  size_t v9; // r12
  unsigned __int64 v10; // rax
  __int64 v11; // rax
  _BYTE *v12; // rdx
  unsigned __int64 result; // rax
  void *v14; // rdx
  unsigned int v15; // eax
  void *v16; // rdx
  __int64 v17; // rdx
  char *s; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v19; // [rsp+Ch] [rbp-3Ch]
  unsigned int v20; // [rsp+10h] [rbp-38h]

  v4 = a2;
  v5 = *a1;
  if ( !(_DWORD)v5 )
  {
    v16 = *(void **)(a2 + 32);
    if ( *(_QWORD *)(a2 + 24) - (_QWORD)v16 <= 0xCu )
      return sub_22581D0(a2, "<invalid loc>", 13);
    qmemcpy(v16, "<invalid loc>", 13);
    *(_QWORD *)(a2 + 32) += 13LL;
    return 0x64696C61766E693CLL;
  }
  if ( (int)v5 >= 0 )
  {
    sub_FFEBC0(&s, a3, v5, 1);
    v6 = s;
    if ( !s )
    {
      v17 = *(_QWORD *)(a2 + 32);
      if ( (unsigned __int64)(*(_QWORD *)(a2 + 24) - v17) <= 8 )
        return sub_22581D0(a2, "<invalid>", 9);
      *(_BYTE *)(v17 + 8) = 62;
      *(_QWORD *)v17 = 0x64696C61766E693CLL;
      *(_QWORD *)(a2 + 32) += 9LL;
      return 0x64696C61766E693CLL;
    }
    v7 = strlen(s);
    v8 = *(_BYTE **)(a2 + 32);
    v9 = v7;
    v10 = *(_QWORD *)(a2 + 24);
    if ( v9 > v10 - (unsigned __int64)v8 )
    {
      v4 = sub_22581D0(a2, v6, v9);
      v8 = *(_BYTE **)(v4 + 32);
      if ( (unsigned __int64)v8 < *(_QWORD *)(v4 + 24) )
      {
LABEL_8:
        *(_QWORD *)(v4 + 32) = v8 + 1;
        *v8 = 58;
LABEL_9:
        v11 = sub_2257BD0(v4, v19);
        v12 = *(_BYTE **)(v11 + 32);
        if ( (unsigned __int64)v12 >= *(_QWORD *)(v11 + 24) )
        {
          v11 = sub_2257CD0(v11, 58);
        }
        else
        {
          *(_QWORD *)(v11 + 32) = v12 + 1;
          *v12 = 58;
        }
        return sub_2257BD0(v11, v20);
      }
    }
    else
    {
      if ( v9 )
      {
        memcpy(v8, v6, v9);
        v10 = *(_QWORD *)(a2 + 24);
        v8 = (_BYTE *)(v9 + *(_QWORD *)(a2 + 32));
        *(_QWORD *)(a2 + 32) = v8;
      }
      if ( (unsigned __int64)v8 < v10 )
        goto LABEL_8;
    }
    v4 = sub_2257CD0(v4, 58);
    goto LABEL_9;
  }
  LODWORD(s) = sub_FFD560(a3, (unsigned int)v5);
  sub_FF6F00(&s, a2, a3);
  v14 = *(void **)(a2 + 32);
  if ( *(_QWORD *)(a2 + 24) - (_QWORD)v14 > 0xAu )
  {
    qmemcpy(v14, " <Spelling=", 11);
    *(_QWORD *)(a2 + 32) += 11LL;
  }
  else
  {
    sub_22581D0(a2, " <Spelling=", 11);
  }
  v15 = *a1;
  if ( (*a1 & 0x80000000) != 0 )
    v15 = sub_FFDE50(a3, v15);
  LODWORD(s) = v15;
  sub_FF6F00(&s, a2, a3);
  result = *(_QWORD *)(a2 + 32);
  if ( result >= *(_QWORD *)(a2 + 24) )
    return sub_2257CD0(a2, 62);
  *(_QWORD *)(a2 + 32) = result + 1;
  *(_BYTE *)result = 62;
  return result;
}

