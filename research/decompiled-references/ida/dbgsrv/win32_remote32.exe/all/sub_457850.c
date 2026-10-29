/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_457850
// Address: 0x00457850

//----- (00457850) --------------------------------------------------------
char __userpurge sub_457850@<al>(__m128i a1@<xmm0>, __int8 *lpMultiByteStr, int a3, char *a4, char a5)
{
  char *v6; // eax
  char v7; // bl
  __int8 *v8; // [esp+10h] [ebp-1Ch] BYREF
  __int8 *v9; // [esp+14h] [ebp-18h] BYREF
  int v10; // [esp+18h] [ebp-14h]
  int v11; // [esp+1Ch] [ebp-10h]
  int v12; // [esp+28h] [ebp-4h]
  char v13[260]; // [esp+2Ch] [ebp+0h] BYREF

  if ( !a4 || !*a4 )
    return 0;
  if ( sub_4567D0((unsigned __int8 *)a4) )
  {
    sub_45ACB0((unsigned int)lpMultiByteStr, a4, a3);
    return 1;
  }
  v9 = nullptr;
  v10 = 0;
  v11 = 0;
  v12 = 0;
  if ( sub_4560B0("PATH", (void **)&v9) && (v6 = sub_45ADE0(v9, ";", &v8)) != nullptr )
  {
    while ( 1 )
    {
      if ( *v6 )
      {
        sub_4569C0(lpMultiByteStr, a3, v6, a4, 0);
        if ( sub_457B00(lpMultiByteStr) )
          break;
      }
      v6 = sub_45ADE0(nullptr, ";", &v8);
      if ( !v6 )
        goto LABEL_10;
    }
  }
  else
  {
LABEL_10:
    if ( !a5 || (sub_4566A0(a3, a1, v13, 260), sub_4569C0(lpMultiByteStr, a3, v13, a4, 0), !sub_457B00(lpMultiByteStr)) )
    {
      v7 = 0;
      goto LABEL_14;
    }
  }
  v7 = 1;
LABEL_14:
  v12 = 3;
  if ( v9 )
  {
    v10 = 0;
    sub_453A20(v9);
  }
  return v7;
}
