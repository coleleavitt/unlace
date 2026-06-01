void __fastcall sub_18C5220(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  int v4; // edx
  __int64 v5; // rax
  __int64 vars0; // [rsp+0h] [rbp+0h] BYREF
  int vars8; // [rsp+8h] [rbp+8h]
  void *ptr; // [rsp+10h] [rbp+10h] BYREF
  __int64 vars18; // [rsp+18h] [rbp+18h]
  char vars20; // [rsp+20h] [rbp+20h] BYREF

  vars8 = a3;
  v4 = *(_DWORD *)(a4 + 8);
  vars0 = a2;
  ptr = &vars20;
  vars18 = 0x600000000LL;
  if ( v4 )
    sub_1576230((char ***)&ptr, (char ***)a4);
  v5 = *(unsigned __int8 *)(a1 + 144);
  if ( (_BYTE)v5 != 0xFF )
  {
    if ( (_BYTE)v5 == 5 )
    {
      *(_QWORD *)(a1 + 16) = vars0;
      *(_DWORD *)(a1 + 24) = vars8;
      sub_1576230((char ***)(a1 + 32), (char ***)&ptr);
      goto LABEL_9;
    }
    funcs_1576A39[v5]();
  }
  *(_QWORD *)(a1 + 16) = vars0;
  *(_DWORD *)(a1 + 24) = vars8;
  *(_QWORD *)(a1 + 32) = a1 + 48;
  *(_QWORD *)(a1 + 40) = 0x600000000LL;
  if ( (_DWORD)vars18 )
    sub_1576230((char ***)(a1 + 32), (char ***)&ptr);
  *(_BYTE *)(a1 + 144) = 5;
LABEL_9:
  if ( ptr != &vars0 )
    free(ptr);
}
