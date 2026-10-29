unsigned __int64 __fastcall sub_F28870(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  size_t v4; // rax
  __int64 v5; // rax
  __int64 v6; // rdx
  _BYTE *v7; // rbx
  unsigned __int64 result; // rax
  _BYTE *v9; // r14
  void *v10; // rdx
  __int64 v11; // rbp
  __int64 v12; // rdx
  size_t v13; // rax
  void *v14; // rdi
  size_t v15; // r15

  v3 = *(_QWORD *)(a1 + 1096);
  v4 = j__strlen(" ");
  v5 = sub_9954E0(v3, " ", v4);
  sub_EBD870(v5, *(unsigned int ***)(a2 + 48));
  v6 = *(unsigned int *)(a2 + 104);
  v7 = *(_BYTE **)(a2 + 112);
  result = 7 * v6;
  v9 = &v7[56 * v6];
  if ( v7 != v9 )
  {
    while ( 1 )
    {
      v11 = *(_QWORD *)(a1 + 1096);
      if ( !*v7 )
      {
        v10 = *(void **)(v11 + 32);
        if ( *(_QWORD *)(v11 + 24) - (_QWORD)v10 > 0xAu )
        {
          result = 28281;
          qmemcpy(v10, " TargetSync", 11);
          *(_QWORD *)(v11 + 32) += 11LL;
        }
        else
        {
          result = sub_227BF10(*(_QWORD *)(a1 + 1096), " TargetSync", 11);
        }
        goto LABEL_5;
      }
      if ( v7[1] )
        break;
      v12 = *(_QWORD *)(v11 + 32);
      result = *(_QWORD *)(v11 + 24) - v12;
      if ( result > 6 )
      {
        *(_DWORD *)v12 = 1918981152;
        *(_WORD *)(v12 + 4) = 25959;
        *(_BYTE *)(v12 + 6) = 116;
        *(_QWORD *)(v11 + 32) += 7LL;
LABEL_5:
        v7 += 56;
        if ( v7 == v9 )
          return result;
      }
      else
      {
        v7 += 56;
        result = sub_227BF10(*(_QWORD *)(a1 + 1096), " Target", 7);
        if ( v7 == v9 )
          return result;
      }
    }
    v13 = j__strlen(" Target_TargetSync");
    v14 = *(void **)(v11 + 32);
    v15 = v13;
    result = *(_QWORD *)(v11 + 24) - (_QWORD)v14;
    if ( v15 > result )
    {
      result = sub_227BF10(v11, " Target_TargetSync", v15);
    }
    else if ( v15 )
    {
      result = (unsigned __int64)memcpy(v14, " Target_TargetSync", v15);
      *(_QWORD *)(v11 + 32) += v15;
    }
    goto LABEL_5;
  }
  return result;
}
