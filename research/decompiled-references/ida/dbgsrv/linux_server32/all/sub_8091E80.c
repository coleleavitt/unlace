/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8091E80
// Address: 0x08091E80

//----- (08091E80) --------------------------------------------------------
char *__usercall sub_8091E80@<eax>(char *a1@<eax>, int a2@<edx>, char *a3@<ecx>, int a4, char a5)
{
  char *v7; // eax
  char *v8; // ebp
  char v9; // al
  char dest[4096]; // [esp+14h] [ebp-1020h] BYREF
  unsigned int v12; // [esp+1014h] [ebp-20h]

  v12 = __readgsdword(0x14u);
  if ( a3 )
    sub_80CE6B0(dest, 0x1000u, a3);
  else
    sub_80CE7F0(dest, 0x1000u);
  v7 = sub_80CE680(a1, a2, dest, a4, 0);
  v8 = v7;
  if ( a5 )
    v9 = sub_8091BB0(a1, a2);
  else
    v9 = sub_80CED40((int)v7);
  if ( !v9 )
    v8 = nullptr;
  if ( v12 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v8;
}
