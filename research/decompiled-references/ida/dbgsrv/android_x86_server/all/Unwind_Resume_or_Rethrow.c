/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: Unwind_Resume_or_Rethrow
// Address: 0x000DAAEE

//----- (000DAAEE) --------------------------------------------------------
void __usercall __noreturn Unwind_Resume_or_Rethrow(int a1@<eax>, int a2@<edx>, _DWORD *a3)
{
  int v3; // ecx
  int v4; // eax
  int v5; // esi
  int v6; // edi
  _DWORD v7[32]; // [esp+4h] [ebp-118h] BYREF
  _DWORD v8[35]; // [esp+84h] [ebp-98h] BYREF
  int retaddr; // [esp+120h] [ebp+4h]

  v8[34] = a2;
  v8[33] = a1;
  if ( a3[3] )
  {
    sub_DA4F0(v7, (int)&a3, retaddr);
    qmemcpy(v8, v7, 0x80u);
    if ( sub_DA683(a3, v8) != 7 )
      abort();
    v4 = sub_D9224((int)v7, (int)v8, v3);
    v5 = v8[19];
    v6 = v4;
    sub_DA82D();
    *(int *)((char *)&retaddr + v6) = v5;
  }
  else
  {
    Unwind_RaiseException((int)a3, a2, a3);
  }
}
// DAB67: variable 'v3' is possibly undefined
