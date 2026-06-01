/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42DA4
// Address: 0x00042DA4

//----- (00042DA4) --------------------------------------------------------
int __fastcall sub_42DA4(int a1, int a2, unsigned int a3, int a4)
{
  unsigned int v5; // r0
  const void *v6; // r1
  unsigned __int8 *v9; // r0
  const void *v10; // r1
  unsigned __int8 *v11; // r0
  int v12; // r2
  int v13; // r6
  int v15; // [sp+4h] [bp-1Ch]
  int v16; // [sp+8h] [bp-18h]
  unsigned __int8 *v18; // [sp+10h] [bp-10h] BYREF
  int v19; // [sp+14h] [bp-Ch]
  int v20; // [sp+18h] [bp-8h]
  int v21; // [sp+1Ch] [bp-4h]

  v5 = *(_DWORD *)(a1 + 92);
  if ( v5 < a3 )
  {
    v6 = *(const void **)(a1 + 88);
    if ( (unsigned int)v6 > v5 )
      goto LABEL_16;
    sub_266B8(&v18, v6, v5 - (_DWORD)v6);
    if ( v19 )
      v9 = v18;
    else
      v9 = (unsigned __int8 *)&byte_B3CBE;
    v16 = qustrlen(v9);
    if ( v18 )
    {
      v19 = 0;
      qfree(v18);
      v20 = 0;
      v18 = nullptr;
    }
    v10 = *(const void **)(a1 + 92);
    if ( (unsigned int)v10 > a3 )
    {
LABEL_16:
      if ( !under_debugger )
        interr(1833);
      __debugbreak();
    }
    sub_266B8(&v18, v10, a3 - (_DWORD)v10);
    if ( v19 )
      v11 = v18;
    else
      v11 = (unsigned __int8 *)&byte_B3CBE;
    v12 = qustrlen(v11);
    v15 = a4;
    if ( v18 )
    {
      v13 = v12;
      v19 = 0;
      qfree(v18);
      v20 = 0;
      v18 = nullptr;
      v12 = v13;
    }
    (*(void (__fastcall **)(int, int, int, int))(*(_DWORD *)a2 + 8))(a2, v16, v12, v15);
    *(_DWORD *)(a1 + 92) = a3;
  }
  return _stack_chk_guard - v21;
}
// B3CBE: using guessed type char byte_B3CBE;
// E0550: using guessed type char under_debugger;
