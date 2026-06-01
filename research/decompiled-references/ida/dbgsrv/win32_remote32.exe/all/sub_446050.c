/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_446050
// Address: 0x00446050

//----- (00446050) --------------------------------------------------------
int __userpurge sub_446050@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, __m128i **a3, int a4, _DWORD *a5, int a6, int a7)
{
  int v7; // esi
  _DWORD *v8; // eax
  int v9; // ecx
  CHAR *v11; // ebx
  unsigned int v12; // esi
  unsigned int v13; // edi
  const CHAR *v14; // eax
  int *v15; // ecx
  int v16; // esi
  int v17; // edi
  unsigned int *v19; // [esp+20h] [ebp-10h]
  int *v20; // [esp+48h] [ebp+18h]

  v7 = *(unsigned __int16 *)(a1 + 4);
  v8 = *(_DWORD **)a7;
  v9 = *(_DWORD *)a7 + 4 * *(_DWORD *)(a7 + 4);
  if ( *(_DWORD *)a7 == v9 )
  {
LABEL_4:
    sub_402760("Bad DWARF section index: %uh.\n");
    return -1;
  }
  else
  {
    while ( v7 != *v8 )
    {
      if ( ++v8 == (_DWORD *)v9 )
        goto LABEL_4;
    }
    v11 = nullptr;
    v19 = (unsigned int *)(*(int (__thiscall **)(_DWORD))(*(_DWORD *)*a5 + 4))(*a5);
    v12 = 0;
    v13 = v19[1];
    if ( v13 )
    {
      v11 = (CHAR *)sub_4539E0(v13);
      sub_464310((unsigned int)v11, *v19, v13);
      v12 = v13;
    }
    v14 = MultiByteStr;
    if ( v12 )
      v14 = v11;
    v15 = sub_45C5A0((int)v11, (int)MultiByteStr, a2, v14, 0);
    v20 = v15;
    if ( v15 )
    {
      v17 = a5[13] + 104 * *(unsigned __int16 *)(a1 + 4);
      sub_45C810((int)v11, v17, (int)v15, *(_QWORD *)(v17 + 32), 0);
      sub_4028B0((int)a3, *(_DWORD *)(v17 + 8));
      if ( sub_45C7E0((int)v20, *a3, *(_DWORD *)(v17 + 8)) == *(_DWORD *)(v17 + 8) )
      {
        v16 = 0;
      }
      else
      {
        sub_402760("Cannot read %u bytes (got %zu).\n");
        v16 = -1;
      }
      sub_45C550((int)v11, v17, v20);
    }
    else
    {
      sub_402760("Invalid file path: %s.\n");
      v16 = -1;
    }
    if ( v11 )
      sub_453A20(v11);
    return v16;
  }
}
