/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_407E30
// Address: 0x00407E30

//----- (00407E30) --------------------------------------------------------
int __userpurge sub_407E30@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, int a4, BSTR bstrString)
{
  int v5; // ecx
  signed int v6; // ebx
  bool v7; // sf
  OLECHAR *v8; // eax
  unsigned int v9; // esi
  unsigned int v10; // eax
  BSTR v12; // [esp-8h] [ebp-28h]
  int v13; // [esp+10h] [ebp-10h] BYREF
  int v14; // [esp+1Ch] [ebp-4h]

  v13 = 0;
  v5 = *(_DWORD *)(a1 + 28);
  v14 = 0;
  v6 = (*(int (__stdcall **)(int, BSTR, int *))(*(_DWORD *)v5 + 88))(v5, bstrString, &v13);
  v7 = v6 < 0;
  if ( v6 || (v6 = (*(int (__stdcall **)(int, BSTR *))(*(_DWORD *)v13 + 16))(v13, &bstrString), v7 = v6 < 0, v6) )
  {
    if ( v7 && a4 )
    {
      v8 = (OLECHAR *)sub_453860(a2, v6);
      bstrString = v8;
      if ( v8 && (v9 = strlen((const char *)v8)) != 0 )
      {
        v10 = v9 + 1;
        if ( v9 + 1 > *(_DWORD *)(a4 + 8) )
        {
          *(_DWORD *)a4 = sub_453B00(a4, *(void **)a4, v9 + 1, 1u);
          v10 = v9 + 1;
        }
        v12 = bstrString;
        *(_DWORD *)(a4 + 4) = v10;
        sub_464310(*(_DWORD *)a4, (unsigned int)v12, v9);
        *(_BYTE *)(v9 + *(_DWORD *)a4) = 0;
      }
      else
      {
        *(_DWORD *)(a4 + 4) = 0;
      }
    }
  }
  else
  {
    sub_45A700(a3, bstrString, -1);
    SysFreeString(bstrString);
  }
  v14 = 1;
  if ( v13 )
    (*(void (__stdcall **)(int))(*(_DWORD *)v13 + 8))(v13);
  return v6;
}
