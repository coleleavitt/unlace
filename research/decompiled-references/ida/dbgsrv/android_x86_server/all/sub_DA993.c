/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_DA993
// Address: 0x000DA993

//----- (000DA993) --------------------------------------------------------
int __usercall Unwind_ForcedUnwind@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3, int a4, int a5)
{
  _DWORD *v5; // edx
  int result; // eax
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edi
  _DWORD v11[32]; // [esp+4h] [ebp-118h] BYREF
  _DWORD v12[33]; // [esp+84h] [ebp-98h] BYREF
  int v13; // [esp+108h] [ebp-14h]
  int v14; // [esp+10Ch] [ebp-10h]
  int retaddr; // [esp+120h] [ebp+4h]

  v14 = a2;
  v13 = a1;
  sub_DA4F0(v11, (int)&a3, retaddr);
  v5 = a3;
  a3[3] = a4;
  qmemcpy(v12, v11, 0x80u);
  v5[4] = a5;
  result = sub_DA683(v5, v12);
  if ( result == 7 )
  {
    v8 = sub_D9224((int)v11, (int)v12, v7);
    v9 = v12[19];
    v10 = v8;
    sub_DA82D();
    *(int *)((char *)&retaddr + v10) = v9;
    return v13;
  }
  return result;
}
// DA9FC: variable 'v7' is possibly undefined
