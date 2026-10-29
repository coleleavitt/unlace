/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44DF70
// Address: 0x0044DF70

//----- (0044DF70) --------------------------------------------------------
void __cdecl sub_44DF70(int a1)
{
  struct _RTL_CRITICAL_SECTION *v1; // esi
  char *v2; // ebx
  int v3; // edi
  char *v4; // esi
  char *v5; // ebx
  int v6; // [esp+1Ch] [ebp-14h]

  v1 = dword_4B6C98;
  sub_4562D0(dword_4B6C98);
  v2 = (char *)dword_4B6C9C;
  v3 = dword_4B6CA0;
  v6 = dword_4B6C9C;
  dword_4B6C9C = 0;
  dword_4B6CA0 = 0;
  dword_4B6CA4 = 0;
  sub_4562F0(v1);
  v4 = v2;
  if ( v2 != &v2[4 * v3] )
  {
    v5 = &v2[4 * v3];
    do
    {
      (***(void (__thiscall ****)(_DWORD, int))v4)(*(_DWORD *)v4, a1);
      v4 += 4;
    }
    while ( v4 != v5 );
    v2 = (char *)v6;
  }
  if ( v2 )
    sub_453A20(v2);
}
// 4B6C9C: using guessed type int dword_4B6C9C;
// 4B6CA0: using guessed type int dword_4B6CA0;
// 4B6CA4: using guessed type int dword_4B6CA4;
