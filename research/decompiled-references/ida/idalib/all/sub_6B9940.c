__int64 __fastcall sub_6B9940(__int64 a1, _QWORD *a2, char a3, const char *a4, char a5)
{
  __int64 result; // rax
  size_t v10; // r13
  void *v11; // rdi
  __int64 v12; // r15
  __int64 v13; // rdi
  __int64 v14; // rax

  result = (__int64)sub_6B8E80(a1);
  *(_BYTE *)(a1 + 32) = a3;
  if ( !a4 || (result = strlen(a4), (v10 = result) == 0) )
  {
    *(_QWORD *)(a1 + 8) = 0;
    if ( !a5 )
      return result;
    goto LABEL_8;
  }
  v11 = *(void **)a1;
  v12 = result + 1;
  if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(result + 1) )
  {
    v14 = qvector_reserve(a1, *(_QWORD *)a1, result + 1, 1);
    *(_QWORD *)a1 = v14;
    v11 = (void *)v14;
  }
  *(_QWORD *)(a1 + 8) = v12;
  memmove(v11, a4, v10);
  result = *(_QWORD *)a1;
  *(_BYTE *)(*(_QWORD *)a1 + v10) = 0;
  if ( a5 )
  {
LABEL_8:
    result = sub_6B9860(a2, a4, 0, 0);
    *(_QWORD *)(a1 + 24) = result;
    if ( result == -1 )
    {
      v13 = *(_QWORD *)(*a2 + 1872LL);
      if ( (*(_BYTE *)(a1 + 32) & 0x3F) == 0x2D )
        result = sub_6CA580(v13, a4);
      else
        result = sub_530980(v13, (__int64)a4);
      *(_QWORD *)(a1 + 24) = result;
    }
  }
  return result;
}
