__int64 __fastcall segm_editor_t__::vfunc_13(__int64 a1, void **a2)
{
  __int64 *v3; // rax
  unsigned int *v4; // rax

  if ( (*(_BYTE *)(a1 + 12) & 1) != 0 )
    return 0;
  v3 = (__int64 *)getnseg(*(unsigned int *)*a2);
  if ( v3 )
    sub_192AA0(0, *v3, -1, 1u);
  v4 = (unsigned int *)a2[1];
  if ( v4 == (unsigned int *)((char *)&dword_0 + 1) )
    return 0;
  memmove(*a2, (char *)*a2 + 8, 8LL * (_QWORD)v4 - 8);
  a2[1] = (char *)a2[1] - 1;
  return 2;
}
