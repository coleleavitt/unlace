__int64 __fastcall sub_F040F0(_QWORD *a1, char *a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  char *v7; // rbx
  __int64 v8; // rax
  __int64 v9; // rdi
  __int64 result; // rax

  v7 = a2;
  v8 = *((_QWORD *)a2 + 2);
  v9 = *a1;
  if ( v8 )
  {
    a2 = (char *)v9;
    sub_E90250(v8, v9, (const __m128i *)(a1 + 3), 0, 1);
    v9 = *a1;
  }
  if ( (*(_DWORD *)v7 & 0x80000) != 0 )
  {
    a4 = *((unsigned int *)v7 + 16);
    if ( (_DWORD)a4 )
    {
      a2 = "template ";
      sub_995540(v9, "template ");
      v9 = *a1;
    }
  }
  sub_B86AA0(v9, (__int64)a2, a3, a4, a5, a6, *((_QWORD *)v7 + 4));
  result = HIWORD(*(_DWORD *)v7);
  if ( (*(_DWORD *)v7 & 0x80000) != 0 )
  {
    if ( *((_DWORD *)v7 + 14) )
      return sub_F79380(*a1, &v7[16 * ((*(_DWORD *)v7 & 0x80000) != 0) + 56], *((unsigned int *)v7 + 17), a1 + 3, 0);
  }
  return result;
}
