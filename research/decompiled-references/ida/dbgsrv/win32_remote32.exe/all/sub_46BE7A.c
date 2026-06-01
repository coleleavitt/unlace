/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46BE7A
// Address: 0x0046BE7A

//----- (0046BE7A) --------------------------------------------------------
unsigned int __usercall sub_46BE7A@<eax>(
        unsigned __int16 **a1@<ecx>,
        int a2@<ebx>,
        int a3@<edi>,
        int a4,
        _DWORD *a5,
        int a6)
{
  unsigned __int16 *v7; // [esp-14h] [ebp-14h] BYREF
  unsigned __int16 **v8; // [esp-10h] [ebp-10h]
  int v9; // [esp-Ch] [ebp-Ch]
  int v10; // [esp-8h] [ebp-8h]
  unsigned __int16 **v11; // [esp-4h] [ebp-4h]

  v11 = a1;
  v10 = 1;
  v9 = a6;
  v8 = a1;
  v7 = (unsigned __int16 *)a1;
  sub_46BDE1(&v7, a4, a5);
  return sub_4686F2(a2, a3, nullptr, v7, v8, v9, v10);
}
