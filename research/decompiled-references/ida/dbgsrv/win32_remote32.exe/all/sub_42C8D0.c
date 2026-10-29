/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_42C8D0
// Address: 0x0042C8D0

//----- (0042C8D0) --------------------------------------------------------
int __userpurge sub_42C8D0@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, const char *a3)
{
  int v4; // edi
  _DWORD *v5; // eax
  int v6; // eax
  const char *v7; // eax
  void **v8; // ebx
  int v9; // ebp
  unsigned int v10; // eax
  void **v11; // ebx
  unsigned int v12; // eax
  int v13; // ecx
  void ***v14; // edi
  int v15; // ebx
  int result; // eax

  v4 = a1 + 16;
  sub_402970(a2, (LPVOID *)(a1 + 16), "%s.%s", a3, a3);
  sub_42B8C0(a1);
  v5 = *(_DWORD **)(*(_DWORD *)(a1 + 184) + 4 * *(_DWORD *)(a1 + 188) - 4);
  if ( *v5 == 1 )
  {
    v6 = v5[2];
    if ( *(_DWORD *)(v6 + 4) )
      v7 = *(const char **)v6;
    else
      v7 = MultiByteStr;
    v4 = a1 + 16;
  }
  else
  {
    v7 = pNodeName;
  }
  sub_42EB90((char **)(a1 + 84), v7);
  v8 = (void **)(a1 + 136);
  v9 = *(_DWORD *)(a1 + 108);
  v10 = *(_DWORD *)(a1 + 140) + 1;
  if ( v10 > *(_DWORD *)(a1 + 144) )
    *v8 = sub_453B00(a1 + 136, *v8, v10, 4u);
  *((_DWORD *)*v8 + (*(_DWORD *)(a1 + 140))++) = v9;
  v11 = (void **)(a1 + 172);
  v12 = *(_DWORD *)(a1 + 176) + 1;
  if ( v12 > *(_DWORD *)(a1 + 180) )
    *v11 = sub_453B00(a1 + 172, *v11, v12, 2u);
  *((_WORD *)*v11 + (*(_DWORD *)(a1 + 176))++) = 0;
  if ( *(_DWORD *)(v4 + 8) < 5u )
    *(_DWORD *)v4 = sub_453B00(v4, *(void **)v4, 5u, 1u);
  *(_DWORD *)(v4 + 4) = 5;
  strcpy(*(char **)v4, "this");
  sub_42B8C0(a1);
  v13 = *(_DWORD *)(a1 + 188);
  v14 = *(void ****)(*(_DWORD *)(a1 + 184) + 4 * v13 - 4);
  if ( v13 )
    *(_DWORD *)(a1 + 188) = v13 - 1;
  v15 = sub_42D890(a1, v14, 0, 0);
  if ( v14 )
    sub_42C5A0(v14, 1);
  result = sub_45CC20(v15);
  if ( !result )
    return sub_42BF60(a1);
  return result;
}
