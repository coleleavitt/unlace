/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_70D60
// Address: 0x00070D60

//----- (00070D60) --------------------------------------------------------
int __cdecl sub_70D60(int a1, int a2)
{
  int v2; // edi
  int v3; // eax
  int v4; // esi
  int result; // eax
  int qerrno; // eax
  int v7; // esi
  char v8; // al
  unsigned int v9; // ebx
  int v10; // edi
  unsigned int v11; // esi
  int v12; // edx
  int v13; // edx
  int v14; // ecx
  int v15; // ebx
  int v16; // [esp+4h] [ebp-28h]
  int v17; // [esp+Ch] [ebp-20h]
  unsigned int v18; // [esp+10h] [ebp-1Ch]
  int v19; // [esp+14h] [ebp-18h]
  int v20; // [esp+18h] [ebp-14h]

  v2 = a1;
  v3 = *(_DWORD *)(a1 + 180) + 1;
  *(_DWORD *)(a1 + 180) = v3;
  if ( v3 >= 1024 )
    longjmp((struct __jmp_buf_tag *)(a1 + 188), 54);
  sub_70F20(a1, a2, 1);
  v4 = *(_DWORD *)(a1 + 228);
  if ( *(_WORD *)(v4 + 12) != 41 )
    sub_70D30(a1);
  result = sub_6EB10(a1, v4, 0, nullptr);
  if ( !result && *(_DWORD *)(a1 + 32) )
    result = sub_6FBF0(a1, v4);
  if ( result )
  {
    qerrno = get_qerrno();
    longjmp((struct __jmp_buf_tag *)(a1 + 188), qerrno);
  }
  if ( *(_BYTE *)(a1 + 232) )
  {
    *(_BYTE *)(a1 + 232) = 0;
    v17 = *(_DWORD *)(a1 + 236);
    v7 = *(_DWORD *)(a1 + 240);
    sub_710A0(a1, a2, 0);
    v20 = v7;
    v8 = 64 - 8 * v7;
    v9 = 0xFFFFFFFF >> (v8 & 0x18);
    v10 = 0x8000000000000000LL >> v8;
    v11 = 0x80000000 >> (v8 & 0x18);
    v12 = 0xFFFFFFFFFFFFFFFFLL >> v8;
    if ( (v8 & 0x20) != 0 )
    {
      v12 = 0xFFFFFFFF >> (v8 & 0x18);
      v9 = 0;
      v10 = 0x80000000 >> (v8 & 0x18);
      v11 = 0;
    }
    v16 = v12;
    v19 = *(_DWORD *)(a2 + 4);
    v13 = v19 & v12;
    v14 = *(_DWORD *)(a2 + 8);
    v18 = v9;
    v15 = v14 & v9;
    *(_DWORD *)(a2 + 8) = v15;
    *(_DWORD *)(a2 + 4) = v13;
    *(_BYTE *)a2 = v17;
    if ( !(_BYTE)v17 && v10 & v13 | v11 & v15 )
    {
      *(_DWORD *)(a2 + 4) = v10 | ~v16 | v19;
      *(_DWORD *)(a2 + 8) = v11 | ~v18 | v14;
    }
    v2 = a1;
    *(_DWORD *)(a1 + 236) = v17;
    result = v20;
    *(_DWORD *)(a1 + 240) = v20;
  }
  --*(_DWORD *)(v2 + 180);
  return result;
}
