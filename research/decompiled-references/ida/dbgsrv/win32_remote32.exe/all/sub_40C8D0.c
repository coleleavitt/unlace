/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40C8D0
// Address: 0x0040C8D0

//----- (0040C8D0) --------------------------------------------------------
int __userpurge sub_40C8D0@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, unsigned int a3, int *a4, int *a5)
{
  int *v5; // esi
  int v6; // ecx
  int v7; // edx
  LPVOID v8; // edi
  _BYTE *v9; // ecx
  unsigned int v10; // kr00_4
  signed int v11; // eax
  unsigned int v12; // esi
  void *v13; // edi
  LPVOID v14; // eax
  int *v15; // esi
  int v16; // esi
  _BYTE Buffer[24]; // [esp+Ch] [ebp-4BCh] BYREF
  LPVOID v19; // [esp+24h] [ebp-4A4h]
  int v20; // [esp+28h] [ebp-4A0h]
  LPVOID v21; // [esp+2Ch] [ebp-49Ch]
  int v22; // [esp+30h] [ebp-498h]
  LPVOID v23; // [esp+34h] [ebp-494h]
  unsigned int v24; // [esp+38h] [ebp-490h]
  unsigned int v25; // [esp+3Ch] [ebp-48Ch]
  __int128 v26; // [esp+40h] [ebp-488h]
  __int64 v27; // [esp+50h] [ebp-478h]
  _DWORD v28[4]; // [esp+58h] [ebp-470h] BYREF
  void *v29; // [esp+68h] [ebp-460h]
  unsigned int v30; // [esp+6Ch] [ebp-45Ch]
  unsigned int v31; // [esp+70h] [ebp-458h]
  __int128 v32; // [esp+74h] [ebp-454h]
  __int64 v33; // [esp+84h] [ebp-444h]
  int *v34; // [esp+8Ch] [ebp-43Ch]
  int *v35; // [esp+90h] [ebp-438h]
  char v36[4]; // [esp+94h] [ebp-434h] BYREF
  int v37; // [esp+98h] [ebp-430h]
  LPVOID v38; // [esp+9Ch] [ebp-42Ch]
  unsigned int v39; // [esp+A0h] [ebp-428h]
  signed int v40; // [esp+A4h] [ebp-424h] BYREF
  _BYTE *v41; // [esp+A8h] [ebp-420h] BYREF
  signed int v42; // [esp+ACh] [ebp-41Ch]
  int v43; // [esp+B0h] [ebp-418h]
  int v44; // [esp+B4h] [ebp-414h]
  _DWORD v45[256]; // [esp+B8h] [ebp-410h] BYREF
  int v46; // [esp+4C4h] [ebp-4h]

  v44 = a1;
  v5 = (int *)(a1 + 604);
  v35 = a4;
  v34 = a5;
  v39 = a3;
  v40 = a3;
  sub_408C10((int *)(a1 + 604), &v41, (unsigned int *)&v40);
  v6 = v43;
  if ( *(_BYTE *)(v43 + 13) || a3 < *(_DWORD *)(v43 + 16) )
    v6 = *v5;
  v7 = 0;
  if ( v6 != *v5 )
    v7 = v6 + 20;
  if ( !v7 )
    return 0;
  v38 = *(LPVOID *)(v7 + 4);
  v8 = v38;
  if ( sub_40C190(v44, a2, v38, Buffer, 0x1Cu, 0, 0) != 28 || v19 != v8 )
    return 0;
  sub_453D50(a2, v45, 1024, "TIB[%08X]", v39);
  v9 = nullptr;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  v46 = 0;
  v10 = strlen((const char *)v45);
  v11 = v10 + 1;
  if ( v10 != -1 )
  {
    v9 = sub_453B00((int)&v41, nullptr, v10 + 1, 1u);
    v11 = v10 + 1;
    v41 = v9;
  }
  v42 = v11;
  sub_464310((unsigned int)v9, (unsigned int)v45, v10);
  v41[v10] = 0;
  v12 = 0;
  v20 = v44;
  v21 = v8;
  v13 = nullptr;
  v37 = dword_4B401C;
  v22 = dword_4B401C;
  v46 = 1;
  v23 = nullptr;
  v24 = 0;
  v25 = 0;
  v40 = v42;
  if ( v42 )
  {
    v14 = sub_4539E0(v42);
    v12 = v40;
    v13 = v14;
    v23 = v14;
    v25 = v40;
    sub_464310((unsigned int)v14, (unsigned int)v41, v40);
    v24 = v12;
  }
  v26 = 0;
  v27 = 0;
  LOBYTE(v46) = 4;
  if ( v41 )
  {
    v42 = 0;
    sub_453A20(v41);
    v41 = nullptr;
    v43 = 0;
  }
  v28[0] = v38;
  v28[2] = v38;
  LOBYTE(v46) = 3;
  v28[1] = v44;
  v28[3] = v37;
  v29 = nullptr;
  v30 = 0;
  v31 = 0;
  if ( v12 )
  {
    v29 = sub_4539E0(v12);
    v31 = v12;
    sub_464310((unsigned int)v29, (unsigned int)v13, v12);
    v30 = v12;
  }
  v32 = 0;
  v33 = 0;
  v15 = v35;
  LOBYTE(v46) = 5;
  sub_408F80(v35, (int)v36, (int)v28);
  LOBYTE(v46) = 6;
  if ( v29 )
    sub_453A20(v29);
  LOBYTE(v46) = 3;
  v16 = sub_40FD50(v44, (__m128i)0LL, v39, v15, v34, (int)Buffer, pNodeName);
  v46 = 7;
  if ( v13 )
    sub_453A20(v13);
  return v16;
}
// 4B401C: using guessed type int dword_4B401C;
