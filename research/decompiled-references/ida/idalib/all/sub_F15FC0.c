unsigned __int64 __fastcall sub_F15FC0(_QWORD *a1, __int64 a2)
{
  bool v2; // cl
  _WORD **v3; // rbx
  unsigned __int16 v4; // dx
  _WORD **v5; // r14
  unsigned __int64 result; // rax
  _QWORD *i; // r12
  _WORD *v8; // r15
  __int64 v9; // rbp
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  __int64 v12; // rax

  sub_F15AA0(a1, (_WORD *)a2);
  v2 = (*(_BYTE *)(a2 + 19) & 0x40) != 0;
  v3 = (_WORD **)(a2 + 8LL * v2 + 32);
  v4 = *(_WORD *)(a2 + 16) & 0x7FFF;
  v5 = &v3[v4];
  result = 8LL * (unsigned __int16)(v4 + v2) + 8LL * ((*(_BYTE *)(a2 + 19) & 0x40) == 0) + 32;
  for ( i = (_QWORD *)(a2 + result); v5 != v3; result = sub_F15AA0(a1, v8) )
  {
    v8 = *v3;
    if ( *i && (*(_QWORD *)*i & 0xFFFFFFFFFFFFFFF0LL) != 0 )
    {
      (*(void (__fastcall **)(_QWORD *))(*a1 + 32LL))(a1);
    }
    else
    {
      v9 = a1[1];
      v10 = *(unsigned int *)(v9 + 8);
      if ( v10 + 1 > (unsigned __int64)*(unsigned int *)(v9 + 12) )
      {
        sub_2237220(a1[1], v9 + 16, v10 + 1, 4);
        v10 = *(unsigned int *)(v9 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v9 + 4 * v10) = 0;
      v11 = *(unsigned int *)(v9 + 12);
      v12 = (unsigned int)(*(_DWORD *)(v9 + 8) + 1);
      *(_DWORD *)(v9 + 8) = v12;
      if ( v12 + 1 > v11 )
      {
        sub_2237220(v9, v9 + 16, v12 + 1, 4);
        v12 = *(unsigned int *)(v9 + 8);
      }
      *(_DWORD *)(*(_QWORD *)v9 + 4 * v12) = 0;
      ++*(_DWORD *)(v9 + 8);
    }
    ++v3;
    ++i;
  }
  return result;
}
