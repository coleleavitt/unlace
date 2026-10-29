/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_44ACB0
// Address: 0x0044ACB0

//----- (0044ACB0) --------------------------------------------------------
int __thiscall sub_44ACB0(void *this, int a2, int a3, int a4)
{
  int v4; // eax
  void *v5; // edi
  int v7; // ecx
  int v8; // ebp
  unsigned __int8 *v9; // ecx
  const char *v10; // ebx
  unsigned __int8 *v12; // [esp+8h] [ebp-8h] BYREF
  unsigned int v13; // [esp+Ch] [ebp-4h]

  v4 = (*(int (__thiscall **)(void *, _DWORD, int))(*(_DWORD *)this + 4))(
         this,
         *(unsigned __int8 *)(*(_DWORD *)a2 + 4),
         a2);
  v5 = (void *)v4;
  if ( !v4 )
    return a3;
  v7 = *(_DWORD *)v4;
  v12 = (unsigned __int8 *)(v4 + 5);
  v13 = v7 + v4 + 5;
  v8 = sub_4541E0(&v12, v13);
  if ( v8 < 0 && a4 )
  {
    v9 = v12;
    v10 = (const char *)v12;
    while ( (unsigned int)v9 < v13 )
    {
      if ( !*v9++ )
      {
        v12 = v9;
        goto LABEL_10;
      }
    }
    v10 = nullptr;
LABEL_10:
    sub_401590(a4, v10);
  }
  sub_453A20(v5);
  return v8;
}
