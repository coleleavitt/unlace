/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8089AD0
// Address: 0x08089AD0

//----- (08089AD0) --------------------------------------------------------
int __usercall sub_8089AD0@<eax>(int a1@<eax>)
{
  char v2; // al
  int result; // eax
  void *v4; // eax
  char v5; // al
  _BYTE *v6; // eax
  char v7; // dl
  size_t n; // [esp+Ch] [ebp-42Ch]
  char v9[1024]; // [esp+1Ch] [ebp-41Ch] BYREF
  unsigned int v10; // [esp+41Ch] [ebp-1Ch]

  v10 = __readgsdword(0x14u);
  while ( 2 )
  {
    switch ( *(_BYTE *)a1 )
    {
      case 2:
        v2 = *(_BYTE *)(a1 + 4);
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 4) = 0;
        v9[0] = v2;
        *(_DWORD *)(a1 + 12) = 0;
        if ( !v2 )
          goto LABEL_4;
        v6 = sub_80CF920(a1 + 4, nullptr, 2u, 1u);
        goto LABEL_11;
      case 3:
        sub_80CA380((int)v9, 1024, (__m128i *)(a1 + 4), 50);
        *(_DWORD *)(a1 + 4) = 0;
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 12) = 0;
        n = strlen(v9);
        v4 = sub_80CF920(a1 + 4, nullptr, n + 1, 1u);
        *(_DWORD *)(a1 + 4) = v4;
        *(_DWORD *)(a1 + 8) = n + 1;
        memmove(v4, v9, n);
        *(_BYTE *)(*(_DWORD *)(a1 + 4) + n) = 0;
        *(_BYTE *)a1 = 7;
        goto LABEL_5;
      case 7:
        goto LABEL_5;
      case 9:
        v5 = *(_BYTE *)(a1 + 4);
        *(_DWORD *)(a1 + 8) = 0;
        *(_DWORD *)(a1 + 4) = 0;
        v9[0] = v5;
        *(_DWORD *)(a1 + 12) = 0;
        v6 = sub_80CF920(a1 + 4, nullptr, 2u, 1u);
LABEL_11:
        v7 = v9[0];
        *(_DWORD *)(a1 + 4) = v6;
        *(_DWORD *)(a1 + 8) = 2;
        *v6 = v7;
        *(_BYTE *)(*(_DWORD *)(a1 + 4) + 1) = 0;
LABEL_4:
        *(_BYTE *)a1 = 7;
LABEL_5:
        result = 0;
        break;
      case 0xA:
        if ( sub_8089920((unsigned __int8 *)a1, 2) )
          continue;
        result = sub_80C7850();
        break;
      default:
        result = sub_80C7880(1531);
        break;
    }
    break;
  }
  if ( v10 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
