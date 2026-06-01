/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7F020
// Address: 0x0007F020

//----- (0007F020) --------------------------------------------------------
void **__userpurge sub_7F020@<eax>(void **a1, int a2, int a3)
{
  unsigned __int8 v3; // al
  void *v4; // eax
  void *v5; // ecx
  void *v6; // edx
  void *v7; // esi
  void *v8; // edx
  void *v9; // esi
  void *v10; // eax
  char v12; // [esp+1Fh] [ebp-306Dh]
  void *s1; // [esp+1060h] [ebp-202Ch] BYREF
  void *v14; // [esp+1064h] [ebp-2028h]
  void *v15; // [esp+1068h] [ebp-2024h]
  void *dest; // [esp+2060h] [ebp-102Ch]
  void *v17; // [esp+2064h] [ebp-1028h]
  void *v18; // [esp+2068h] [ebp-1024h]
  unsigned int v19; // [esp+3078h] [ebp-14h]

  v19 = __readgsdword(0x14u);
  v12 = *(_BYTE *)(a2 + 153);
  *(_BYTE *)(a2 + 153) = 0;
  sub_96B40((int)a1, 0);
  v3 = *(_BYTE *)(a3 + 4) - 5;
  if ( v3 <= 0x2Bu )
    __asm { jmp     eax }
  sub_96B40((int)&s1, 1);
  v4 = s1;
  v5 = v14;
  dest = s1;
  s1 = nullptr;
  v17 = v14;
  v14 = nullptr;
  v6 = v15;
  v18 = v15;
  v15 = nullptr;
  v7 = *a1;
  if ( !*a1 )
  {
    *a1 = v4;
    a1[1] = v5;
    a1[2] = v6;
    if ( !v12 )
      return a1;
    goto LABEL_9;
  }
  a1[1] = nullptr;
  qfree(v7);
  v8 = v17;
  v9 = v18;
  v10 = s1;
  *a1 = dest;
  a1[1] = v8;
  a1[2] = v9;
  if ( !v10 )
  {
    if ( !v12 )
      return a1;
LABEL_9:
    *(_BYTE *)(a2 + 153) = 1;
    return a1;
  }
  v14 = nullptr;
  qfree(v10);
  s1 = nullptr;
  v15 = nullptr;
  if ( v12 )
    goto LABEL_9;
  return a1;
}
