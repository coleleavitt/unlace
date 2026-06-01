/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BE26
// Address: 0x0046BE26

//----- (0046BE26) --------------------------------------------------------
unsigned int __usercall sub_46BE26@<eax>(
        unsigned __int8 **a1@<ecx>,
        char a2@<bl>,
        int a3@<edi>,
        int a4,
        _DWORD *a5,
        int a6)
{
  unsigned __int8 *v7; // [esp-14h] [ebp-14h] BYREF
  unsigned __int8 **v8; // [esp-10h] [ebp-10h]
  int v9; // [esp-Ch] [ebp-Ch]
  int v10; // [esp-8h] [ebp-8h]
  unsigned __int8 **v11; // [esp-4h] [ebp-4h]

  v11 = a1;
  v10 = 0;
  v9 = a6;
  v8 = a1;
  v7 = (unsigned __int8 *)a1;
  sub_46BDE1(&v7, a4, a5);
  return sub_4684CF(a2, a3, nullptr, v7, v8, v9, v10);
}
