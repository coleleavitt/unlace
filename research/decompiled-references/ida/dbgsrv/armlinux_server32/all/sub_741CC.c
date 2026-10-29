/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_741CC
// Address: 0x000741CC

//----- (000741CC) --------------------------------------------------------
char *__fastcall sub_741CC(char *a1, int a2, int a3, char *a4)
{
  int v5; // r4
  char *v8; // r3
  char *v9; // r6
  unsigned int v10; // r5
  char *v11; // r0
  _BOOL4 v12; // r0
  char *v13; // r8
  int v14; // r4
  char *v15; // r5
  void *v16; // r0
  char *v17; // r3
  int v19; // [sp+4h] [bp-20h]
  void *v20; // [sp+8h] [bp-1Ch]
  void **p_ptr; // [sp+Ch] [bp-18h]
  void *ptr; // [sp+10h] [bp-14h] BYREF
  char *v23; // [sp+14h] [bp-10h]
  int v24; // [sp+18h] [bp-Ch]

  v5 = 0;
  p_ptr = &ptr;
  ptr = nullptr;
  v23 = nullptr;
  v24 = 0;
  v20 = &_stack_chk_guard;
  sub_74008((int)&ptr, a4, 0);
  v8 = (char *)ptr;
  v9 = v23;
  if ( !v23 )
  {
    if ( !ptr )
      return nullptr;
    goto LABEL_15;
  }
  v10 = 0;
  while ( 1 )
  {
    v11 = *(_DWORD *)&v8[v5 + 4]
        ? sub_76B98(a1, a2, *(unsigned __int8 **)&v8[v5], a3, 0, v19, v20, p_ptr)
        : sub_76B98(a1, a2, (unsigned __int8 *)&dword_8DB98, a3, 0, v19, v20, p_ptr);
    v9 = v11;
    v12 = sub_7756C((int)v11);
    v8 = (char *)ptr;
    if ( v12 )
      break;
    ++v10;
    v5 += 12;
    if ( v10 >= (unsigned int)v23 )
    {
      v9 = nullptr;
      break;
    }
  }
  if ( ptr )
  {
    v13 = v23;
    if ( v23 )
    {
      v14 = 0;
      v15 = nullptr;
      do
      {
        v16 = *(void **)&v8[v14];
        v17 = &v8[v14];
        if ( v16 )
        {
          *((_DWORD *)v17 + 1) = 0;
          sub_77F70(v16);
        }
        ++v15;
        v14 += 12;
        v8 = (char *)ptr;
      }
      while ( v13 != v15 );
    }
LABEL_15:
    v23 = nullptr;
    sub_77F70(v8);
  }
  return v9;
}
// 7421A: variable 'v19' is possibly undefined
// 7421A: variable 'v20' is possibly undefined
// 7421A: variable 'p_ptr' is possibly undefined
// 8DB98: using guessed type int dword_8DB98;
