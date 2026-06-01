void __fastcall sub_1E05F10(__int64 a1, __int64 a2)
{
  int v2; // edx
  __int64 v3; // rax
  char v4; // al
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  __int64 vars8; // [rsp+8h] [rbp+8h]
  char vars10; // [rsp+10h] [rbp+10h] BYREF
  char vars40; // [rsp+40h] [rbp+40h]

  v2 = *(_DWORD *)(a2 + 8);
  ptr = &vars10;
  vars8 = 0x600000000LL;
  if ( v2 )
    sub_1576230((char ***)&ptr, (char ***)a2);
  v3 = *(unsigned __int8 *)(a1 + 144);
  vars40 = 0;
  if ( (_BYTE)v3 != 0xFF )
  {
    if ( (_BYTE)v3 == 4 )
    {
      sub_1576230((char ***)(a1 + 16), (char ***)&ptr);
      *(_BYTE *)(a1 + 80) = vars40;
      goto LABEL_9;
    }
    funcs_1576A39[v3]();
  }
  *(_QWORD *)(a1 + 16) = a1 + 32;
  *(_QWORD *)(a1 + 24) = 0x600000000LL;
  if ( (_DWORD)vars8 )
    sub_1576230((char ***)(a1 + 16), (char ***)&ptr);
  v4 = vars40;
  *(_BYTE *)(a1 + 144) = 4;
  *(_BYTE *)(a1 + 80) = v4;
LABEL_9:
  if ( ptr != &ptr )
    free(ptr);
}
