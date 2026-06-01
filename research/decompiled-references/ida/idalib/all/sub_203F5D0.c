__int64 __fastcall sub_203F5D0(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned __int8 v5; // al
  int v6; // edx
  __int64 v7; // rbx
  __int64 v8; // r13
  unsigned __int8 *v9; // r14
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  _BYTE *v14; // rax
  size_t v15; // rax
  void *v16; // rdi
  size_t v18; // [rsp+8h] [rbp-40h]

  sub_995540(a1, "!{");
  v5 = *(_BYTE *)(a2 - 16);
  if ( (v5 & 2) != 0 )
    v6 = *(_DWORD *)(a2 - 24);
  else
    v6 = (*(_WORD *)(a2 - 16) >> 6) & 0xF;
  if ( v6 )
  {
    v7 = 0;
    v8 = 8LL * (unsigned int)(v6 - 1);
    if ( (v5 & 2) == 0 )
      goto LABEL_15;
LABEL_5:
    v9 = *(unsigned __int8 **)(*(_QWORD *)(a2 - 32) + v7);
    if ( v9 )
    {
LABEL_6:
      if ( (unsigned int)*v9 - 1 > 1 )
      {
        sub_20399E0(a1, (__int64)v9, a3);
        (*(void (__fastcall **)(__int64 *, unsigned __int8 *))*a3)(a3, v9);
      }
      else
      {
        v10 = *((_QWORD *)v9 + 16);
        sub_2034FF0(a3[1], *(_QWORD *)(v10 + 8), a1);
        v14 = *(_BYTE **)(a1 + 32);
        if ( (unsigned __int64)v14 >= *(_QWORD *)(a1 + 24) )
        {
          sub_227BA10(a1, 32);
        }
        else
        {
          *(_QWORD *)(a1 + 32) = v14 + 1;
          *v14 = 32;
        }
        sub_2038AA0(a1, v10, (__int64)a3, v11, v12, v13);
      }
      if ( v7 != v8 )
        goto LABEL_11;
    }
    else
    {
      while ( 1 )
      {
        sub_995540(a1, "null");
        if ( v7 == v8 )
          break;
LABEL_11:
        v15 = j__strlen(", ");
        v16 = *(void **)(a1 + 32);
        if ( v15 > *(_QWORD *)(a1 + 24) - (_QWORD)v16 )
        {
          sub_227BF10(a1, ", ", v15);
        }
        else if ( v15 )
        {
          v18 = v15;
          memcpy(v16, ", ", v15);
          *(_QWORD *)(a1 + 32) += v18;
        }
        v5 = *(_BYTE *)(a2 - 16);
        v7 += 8;
        if ( (v5 & 2) != 0 )
          goto LABEL_5;
LABEL_15:
        v9 = *(unsigned __int8 **)(a2 + -16 - 8LL * ((v5 >> 2) & 0xF) + v7);
        if ( v9 )
          goto LABEL_6;
      }
    }
  }
  return sub_995540(a1, "}");
}
