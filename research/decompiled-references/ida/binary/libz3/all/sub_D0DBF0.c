__int64 __fastcall sub_D0DBF0(__int64 a1, const void *a2, size_t a3)
{
  __int64 v4; // r14
  __int64 v5; // rax
  char v6; // si
  size_t v7; // r15
  const void *v8; // r12
  size_t v9; // rbx
  signed __int64 v10; // rax
  int v11; // eax
  __int64 v12; // r15
  __int64 v14; // rax

  v4 = *(_QWORD *)(a1 + 16);
  if ( !v4 )
  {
    v4 = a1 + 8;
    goto LABEL_21;
  }
  while ( 1 )
  {
    v7 = *(_QWORD *)(v4 + 40);
    v8 = *(const void **)(v4 + 32);
    v9 = v7;
    if ( a3 <= v7 )
      v9 = a3;
    if ( !v9 || (LODWORD(v10) = memcmp(a2, *(const void **)(v4 + 32), v9), !(_DWORD)v10) )
    {
      v10 = a3 - v7;
      if ( (__int64)(a3 - v7) >= 0x80000000LL )
        goto LABEL_3;
      if ( v10 <= (__int64)0xFFFFFFFF7FFFFFFFLL )
        break;
    }
    if ( (int)v10 < 0 )
      break;
LABEL_3:
    v5 = *(_QWORD *)(v4 + 24);
    v6 = 0;
    if ( !v5 )
      goto LABEL_13;
LABEL_4:
    v4 = v5;
  }
  v5 = *(_QWORD *)(v4 + 16);
  v6 = 1;
  if ( v5 )
    goto LABEL_4;
LABEL_13:
  if ( !v6 )
    goto LABEL_14;
LABEL_21:
  if ( v4 == *(_QWORD *)(a1 + 24) )
    return 0;
  v14 = std::_Rb_tree_decrement();
  v7 = *(_QWORD *)(v14 + 40);
  v8 = *(const void **)(v14 + 32);
  v4 = v14;
  v9 = v7;
  if ( a3 <= v7 )
    v9 = a3;
LABEL_14:
  if ( v9 && (v11 = memcmp(v8, a2, v9)) != 0 )
  {
LABEL_19:
    if ( v11 < 0 )
      return 0;
  }
  else
  {
    v12 = v7 - a3;
    if ( v12 <= 0x7FFFFFFF )
    {
      if ( v12 >= (__int64)0xFFFFFFFF80000000LL )
      {
        v11 = v12;
        goto LABEL_19;
      }
      return 0;
    }
  }
  return v4;
}

