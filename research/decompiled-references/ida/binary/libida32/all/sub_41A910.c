__int64 __fastcall sub_41A910(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 i; // rax
  const char *v4; // rdx
  unsigned int v5; // ebx
  const char *v6; // rcx
  __int64 v8; // rdx
  __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rax
  int v13; // [rsp+18h] [rbp-60h] BYREF
  int v14; // [rsp+1Ch] [rbp-5Ch] BYREF
  void *ptr; // [rsp+20h] [rbp-58h] BYREF
  __int128 v16; // [rsp+28h] [rbp-50h]
  unsigned __int64 v17; // [rsp+38h] [rbp-40h]

  v17 = __readfsqword(0x28u);
  netnode_check(&v13, "$ desktops", 0, 0);
  if ( v13 == -1 )
  {
    return 1;
  }
  else
  {
    v16 = 0;
    ptr = nullptr;
    for ( i = sub_79C160(&v13, a2, &ptr, 72); ; i = sub_79C1D0(&v13, a2, &ptr, v6, 72) )
    {
      if ( i <= 0 )
      {
        v5 = 1;
        goto LABEL_11;
      }
      v4 = haystack;
      if ( (_QWORD)v16 )
        v4 = (const char *)ptr;
      v14 = sub_79C090(&v13, a2, v4, 72);
      v5 = sub_79B370(a2, &v14);
      if ( !(_BYTE)v5 )
        break;
      v6 = haystack;
      if ( (_QWORD)v16 )
        v6 = (const char *)ptr;
    }
    v8 = a3[1];
    v9 = *a3;
    if ( a3[2] < (unsigned __int64)(v8 + 1) )
    {
      v11 = qvector_reserve(a3, v9, v8 + 1, 24);
      *a3 = v11;
      v8 = a3[1];
      v9 = v11;
    }
    v10 = v9 + 24 * v8;
    *(_QWORD *)v10 = 0;
    *(_OWORD *)(v10 + 8) = 0;
    ++a3[1];
    sub_3573A0((char **)v10);
LABEL_11:
    if ( ptr )
    {
      *(_QWORD *)&v16 = 0;
      qfree(ptr);
    }
  }
  return v5;
}

