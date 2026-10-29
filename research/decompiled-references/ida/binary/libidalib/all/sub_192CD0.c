__int64 __fastcall sub_192CD0(__int64 a1, __int64 a2, char *a3, __int64 a4)
{
  __int64 v4; // rax
  _QWORD *v6; // rdi
  __int64 v7; // rbp
  unsigned int v8; // edx
  unsigned int v9; // r12d
  __int64 v11; // rax
  _QWORD *v12; // rsi
  __int64 v13; // rax

  v4 = -1;
  if ( *(_QWORD *)(a1 + 8) )
    v4 = **(_QWORD **)a1;
  v6 = (_QWORD *)(a2 + a4);
  if ( ((unsigned __int8)a3 & 1) != 0 )
    a3 = *(char **)&a3[*v6 - 1];
  v7 = ((__int64 (__fastcall *)(_QWORD *, __int64))a3)(v6, v4);
  v9 = v8;
  if ( v8 )
  {
    if ( *(_QWORD *)a1 )
    {
      *(_QWORD *)(a1 + 8) = 0;
      qfree();
      *(_QWORD *)a1 = 0;
      *(_QWORD *)(a1 + 16) = 0;
    }
    if ( v7 >= 0 )
    {
      v11 = *(_QWORD *)(a1 + 8);
      v12 = *(_QWORD **)a1;
      if ( *(_QWORD *)(a1 + 16) < (unsigned __int64)(v11 + 1) )
      {
        v13 = qvector_reserve();
        *(_QWORD *)a1 = v13;
        v12 = (_QWORD *)v13;
        v11 = *(_QWORD *)(a1 + 8);
      }
      v12[v11] = v7;
      ++*(_QWORD *)(a1 + 8);
    }
  }
  return v9;
}

