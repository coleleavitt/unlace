/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_61A18
// Address: 0x00061A18

//----- (00061A18) --------------------------------------------------------
unsigned int __fastcall sub_61A18(int a1, unsigned __int8 **a2)
{
  unsigned __int8 *v3; // r6
  unsigned __int8 *v5; // r1
  unsigned __int8 *v6; // r3
  unsigned int result; // r0
  size_t v9; // r0
  size_t v10; // r7
  unsigned int v11; // r8
  void *v12; // r0

  v3 = *a2;
  v5 = a2[1];
  if ( v5 <= v3 )
    goto LABEL_6;
  v6 = v3 + 1;
  if ( *v3 )
  {
    while ( v5 != v6 )
    {
      if ( !*v6++ )
        goto LABEL_8;
    }
    goto LABEL_6;
  }
LABEL_8:
  *a2 = v6;
  if ( !v3 || (v9 = strlen((const char *)v3), (v10 = v9) == 0) )
  {
LABEL_6:
    *(_DWORD *)(a1 + 4) = 0;
    goto LABEL_7;
  }
  v11 = v9 + 1;
  v12 = *(void **)a1;
  if ( v11 > *(_DWORD *)(a1 + 8) )
  {
    v12 = sub_77EB0(a1, *(void **)a1, v11, 1u);
    *(_DWORD *)a1 = v12;
  }
  *(_DWORD *)(a1 + 4) = v11;
  memmove(v12, v3, v10);
  *(_BYTE *)(*(_DWORD *)a1 + v10) = 0;
LABEL_7:
  *(_DWORD *)(a1 + 12) = sub_76244(a2, (unsigned int)a2[1]) - 1;
  *(_DWORD *)(a1 + 16) = sub_76244(a2, (unsigned int)a2[1]) - 1;
  result = sub_76244(a2, (unsigned int)a2[1]) - 1;
  *(_DWORD *)(a1 + 20) = result;
  return result;
}
