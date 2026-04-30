__int64 __fastcall sel_chooser_t__::vfunc_13(__int64 a1, void **a2)
{
  unsigned int *v2; // rax
  unsigned int *v3; // rax
  unsigned int v4; // edx
  _QWORD v6[3]; // [rsp+0h] [rbp-18h] BYREF

  v2 = (unsigned int *)*a2;
  v6[1] = __readfsqword(0x28u);
  if ( (unsigned __int8)getn_selector(0, v6, *v2) )
    sub_192AA0(0, 16LL * v6[0], -1, 1u);
  v3 = (unsigned int *)a2[1];
  v4 = 0;
  if ( v3 != (unsigned int *)((char *)&dword_0 + 1) )
  {
    memmove(*a2, (char *)*a2 + 8, 8LL * (_QWORD)v3 - 8);
    a2[1] = (char *)a2[1] - 1;
    return 2;
  }
  return v4;
}
