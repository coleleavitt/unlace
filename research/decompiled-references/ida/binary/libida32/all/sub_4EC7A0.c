__int64 __fastcall sub_4EC7A0(unsigned int *a1, unsigned int *a2)
{
  __int64 (__fastcall *v2)(unsigned int *, _BYTE *, _BYTE *); // rax
  __int64 v3; // rax
  _BYTE *v4; // rdx
  __int64 v5; // rcx
  _BYTE v7[1024]; // [rsp+0h] [rbp-428h] BYREF
  _BYTE v8[8]; // [rsp+400h] [rbp-28h] BYREF
  unsigned __int64 v9; // [rsp+408h] [rbp-20h]

  v2 = *((__int64 (__fastcall **)(unsigned int *, _BYTE *, _BYTE *))a1 + 7);
  v9 = __readfsqword(0x28u);
  if ( v2 )
  {
    v3 = v2(a2, v7, v8);
    v4 = v7;
    v5 = v3;
  }
  else
  {
    v5 = *((unsigned __int16 *)a1 + 2);
    v4 = a2;
  }
  return netnode_supset(*a1, *a2, v4, v5, 339);
}

