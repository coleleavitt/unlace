/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_6C720
// Address: 0x000000000006C720

//----- (000000000006C720) ----------------------------------------------------
unsigned __int64 __fastcall sub_6C720(__int64 a1, int a2, int a3)
{
  __int64 v3; // rax
  char **v4; // rdi
  _DWORD v6[2]; // [rsp+8h] [rbp-10h] BYREF
  unsigned __int64 v7; // [rsp+10h] [rbp-8h]

  v7 = __readfsqword(0x28u);
  v3 = *(_QWORD *)(a1 + 120);
  v4 = (char **)(a1 + 112);
  if ( v3 && *(_DWORD *)&(*v4)[8 * v3 - 8] == a2 )
  {
    *(_DWORD *)&(*v4)[8 * v3 - 4] = a3;
  }
  else
  {
    v6[0] = a2;
    v6[1] = a3;
    sub_6C780(v4, (char *)v6);
  }
  return __readfsqword(0x28u);
}
