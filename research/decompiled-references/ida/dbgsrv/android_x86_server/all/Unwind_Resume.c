/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume
// Address: 0x000DAA3E

//----- (000DAA3E) --------------------------------------------------------
void __usercall __noreturn Unwind_Resume(int a1@<eax>, int a2@<edx>, _DWORD *a3)
{
  bool v3; // zf
  int v4; // eax
  int v5; // ecx
  int v6; // eax
  int v7; // edi
  int v8; // esi
  _DWORD v9[32]; // [esp+4h] [ebp-118h] BYREF
  _DWORD v10[35]; // [esp+84h] [ebp-98h] BYREF
  int retaddr; // [esp+120h] [ebp+4h]

  v10[34] = a2;
  v10[33] = a1;
  sub_DA4F0(v9, (int)&a3, retaddr);
  v3 = a3[3] == 0;
  qmemcpy(v10, v9, 0x80u);
  if ( v3 )
    v4 = sub_DA5BB(a3, v10);
  else
    v4 = sub_DA683(a3, v10);
  if ( v4 != 7 )
    abort();
  v6 = sub_D9224((int)v9, (int)v10, v5);
  v7 = v10[19];
  v8 = v6;
  sub_DA82D();
  *(int *)((char *)&retaddr + v8) = v7;
}
// DAAB7: variable 'v5' is possibly undefined
