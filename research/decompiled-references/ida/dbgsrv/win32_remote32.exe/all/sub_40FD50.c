/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_40FD50
// Address: 0x0040FD50

//----- (0040FD50) --------------------------------------------------------
int __userpurge sub_40FD50@<eax>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, int *a4, int *a5, int a6, const char *a7)
{
  int v7; // ecx
  _BYTE *v8; // ecx
  unsigned int v9; // kr00_4
  signed int v10; // esi
  unsigned int v11; // edi
  int v12; // ecx
  void *v13; // eax
  unsigned int v14; // esi
  __m128i v15; // xmm0
  int v16; // edi
  _BYTE *v17; // ecx
  unsigned int v18; // kr04_4
  signed int v19; // eax
  __int32 v20; // esi
  void *v21; // eax
  void *v22; // eax
  unsigned int v23; // esi
  int v24; // esi
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+Ch] [ebp-4ECh] BYREF
  int v27; // [esp+28h] [ebp-4D0h] BYREF
  int v28; // [esp+2Ch] [ebp-4CCh]
  int v29; // [esp+30h] [ebp-4C8h]
  int v30; // [esp+34h] [ebp-4C4h]
  void *v31; // [esp+38h] [ebp-4C0h]
  unsigned __int32 v32; // [esp+3Ch] [ebp-4BCh]
  unsigned __int32 v33; // [esp+40h] [ebp-4B8h]
  __int128 v34; // [esp+44h] [ebp-4B4h]
  __int64 v35; // [esp+54h] [ebp-4A4h]
  _BYTE v36[4]; // [esp+5Ch] [ebp-49Ch] BYREF
  int v37; // [esp+60h] [ebp-498h]
  int v38; // [esp+64h] [ebp-494h]
  int v39; // [esp+68h] [ebp-490h]
  int v40; // [esp+6Ch] [ebp-48Ch]
  void *v41; // [esp+70h] [ebp-488h] BYREF
  signed int v42; // [esp+74h] [ebp-484h]
  unsigned int v43; // [esp+78h] [ebp-480h]
  __int128 v44; // [esp+7Ch] [ebp-47Ch]
  __m128i v45; // [esp+8Ch] [ebp-46Ch] BYREF
  int *v46; // [esp+9Ch] [ebp-45Ch]
  int *v47; // [esp+A0h] [ebp-458h]
  int v48; // [esp+A4h] [ebp-454h]
  int v49; // [esp+A8h] [ebp-450h] BYREF
  int v50; // [esp+ACh] [ebp-44Ch]
  int v51; // [esp+B0h] [ebp-448h]
  int v52; // [esp+B4h] [ebp-444h]
  void *v53; // [esp+B8h] [ebp-440h] BYREF
  signed int v54; // [esp+BCh] [ebp-43Ch]
  unsigned __int32 v55; // [esp+C0h] [ebp-438h]
  __int128 v56; // [esp+C4h] [ebp-434h]
  __int64 v57; // [esp+D4h] [ebp-424h]
  _BYTE *v58; // [esp+DCh] [ebp-41Ch] BYREF
  signed int v59; // [esp+E0h] [ebp-418h]
  int v60; // [esp+E4h] [ebp-414h]
  _DWORD v61[256]; // [esp+E8h] [ebp-410h] BYREF
  int v62; // [esp+4F4h] [ebp-4h]

  v48 = a1;
  v47 = a4;
  v46 = a5;
  v7 = *(_DWORD *)(a6 + 4) - *(_DWORD *)(a6 + 8);
  v45.m128i_i32[3] = (__int32)a7;
  v37 = v7;
  sub_453D50(a2, v61, 1024, "%sStack[%08X]", a7, a3);
  v8 = nullptr;
  v58 = nullptr;
  v59 = 0;
  v60 = 0;
  v62 = 0;
  v9 = strlen((const char *)v61);
  if ( v9 != -1 )
  {
    v8 = sub_453B00((int)&v58, nullptr, v9 + 1, 1u);
    v58 = v8;
  }
  v59 = v9 + 1;
  sub_464310((unsigned int)v8, (unsigned int)v61, v9);
  v58[v9] = 0;
  v10 = 0;
  v11 = v59;
  v38 = v48;
  v12 = *(_DWORD *)(a6 + 8);
  v62 = 1;
  v39 = v12;
  v40 = v37;
  v41 = nullptr;
  v42 = 0;
  v43 = 0;
  if ( v59 )
  {
    v41 = sub_4539E0(v59);
    v43 = v11;
    sub_464310((unsigned int)v41, (unsigned int)v58, v11);
    v12 = v39;
    v10 = v11;
    v42 = v11;
  }
  v44 = 0;
  v45.m128i_i64[0] = 0;
  LOBYTE(v62) = 4;
  if ( v58 )
  {
    v59 = 0;
    sub_453A20(v58);
    v10 = v42;
    v12 = v39;
    v58 = nullptr;
    v60 = 0;
  }
  v50 = v38;
  LOBYTE(v62) = 3;
  v49 = v12;
  v51 = v12;
  v52 = v40;
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  if ( v10 )
  {
    v53 = sub_4539E0(v10);
    v55 = v10;
    sub_464310((unsigned int)v53, (unsigned int)v41, v10);
    v54 = v10;
  }
  v56 = v44;
  v57 = v45.m128i_i64[0];
  LOBYTE(v62) = 5;
  sub_408F80(v47, (int)v36, (int)&v49);
  LOBYTE(v62) = 6;
  if ( v53 )
    sub_453A20(v53);
  LOBYTE(v62) = 3;
  if ( v43 >= 6 )
  {
    v13 = v41;
  }
  else
  {
    v13 = sub_453B00((int)&v41, v41, 6u, 1u);
    v41 = v13;
  }
  v42 = 6;
  sub_464310((unsigned int)v13, (unsigned int)"STACK", 5u);
  v53 = nullptr;
  v54 = 0;
  v55 = 0;
  *((_BYTE *)v41 + 5) = 0;
  v14 = v42;
  v50 = v38;
  v49 = v39;
  v51 = v39;
  v52 = v40;
  if ( v42 )
  {
    v53 = sub_4539E0(v42);
    v55 = v14;
    sub_464310((unsigned int)v53, (unsigned int)v41, v14);
    v54 = v14;
  }
  v56 = v44;
  v15 = _mm_loadl_epi64(&v45);
  v57 = v15.m128i_i64[0];
  LOBYTE(v62) = 7;
  sub_408F80(v46, (int)v36, (int)&v49);
  LOBYTE(v62) = 8;
  if ( v53 )
    sub_453A20(v53);
  v16 = v39 - 4096;
  LOBYTE(v62) = 3;
  if ( VirtualQueryEx(*(HANDLE *)(v48 + 452), (LPCVOID)(v39 - 4096), &Buffer, 0x1Cu) && (Buffer.Protect & 0x100) != 0 )
  {
    sub_453D50(v15, v61, 1024, "%sStack_PAGE_GUARD[%08X]", (const char *)v45.m128i_i32[3], a3);
    v17 = nullptr;
    v58 = nullptr;
    v59 = 0;
    v60 = 0;
    LOBYTE(v62) = 9;
    v18 = strlen((const char *)v61);
    v19 = v18 + 1;
    if ( v18 != -1 )
    {
      v17 = sub_453B00((int)&v58, nullptr, v18 + 1, 1u);
      v19 = v18 + 1;
      v58 = v17;
    }
    v59 = v19;
    sub_464310((unsigned int)v17, (unsigned int)v61, v18);
    v58[v18] = 0;
    v20 = 0;
    v50 = v48;
    LOBYTE(v62) = 10;
    v51 = v16;
    v52 = 4096;
    v53 = nullptr;
    v54 = 0;
    v55 = 0;
    v45.m128i_i32[3] = v59;
    if ( v59 )
    {
      v21 = sub_4539E0(v59);
      v20 = v45.m128i_i32[3];
      v53 = v21;
      v55 = v45.m128i_u32[3];
      sub_464310((unsigned int)v21, (unsigned int)v58, v45.m128i_u32[3]);
      v16 = v51;
      v54 = v20;
    }
    v56 = 0;
    v57 = 0;
    LOBYTE(v62) = 13;
    if ( v58 )
    {
      v59 = 0;
      sub_453A20(v58);
      v20 = v54;
      v16 = v51;
      v58 = nullptr;
      v60 = 0;
    }
    v28 = v50;
    LOBYTE(v62) = 12;
    v27 = v16;
    v29 = v16;
    v30 = v52;
    v31 = nullptr;
    v32 = 0;
    v33 = 0;
    if ( v20 )
    {
      v31 = sub_4539E0(v20);
      v33 = v20;
      sub_464310((unsigned int)v31, (unsigned int)v53, v20);
      v32 = v20;
    }
    v34 = v56;
    v35 = v57;
    LOBYTE(v62) = 14;
    sub_408F80(v47, (int)&v45.m128i_i32[2], (int)&v27);
    LOBYTE(v62) = 15;
    if ( v31 )
      sub_453A20(v31);
    LOBYTE(v62) = 12;
    if ( v55 >= 6 )
    {
      v22 = v53;
    }
    else
    {
      v22 = sub_453B00((int)&v53, v53, 6u, 1u);
      v53 = v22;
    }
    v54 = 6;
    sub_464310((unsigned int)v22, (unsigned int)"STACK", 5u);
    v31 = nullptr;
    v32 = 0;
    v33 = 0;
    *((_BYTE *)v53 + 5) = 0;
    v23 = v54;
    v28 = v50;
    v27 = v51;
    v29 = v51;
    v30 = v52;
    if ( v54 )
    {
      v31 = sub_4539E0(v54);
      v33 = v23;
      sub_464310((unsigned int)v31, (unsigned int)v53, v23);
      v32 = v23;
    }
    v34 = v56;
    v35 = v57;
    LOBYTE(v62) = 16;
    sub_408F80(v46, (int)&v45.m128i_i32[2], (int)&v27);
    LOBYTE(v62) = 17;
    if ( v31 )
      sub_453A20(v31);
    v24 = 2;
    LOBYTE(v62) = 18;
    if ( v53 )
    {
      v54 = 0;
      sub_453A20(v53);
    }
  }
  else
  {
    v24 = 1;
  }
  v62 = 19;
  if ( v41 )
  {
    v42 = 0;
    sub_453A20(v41);
  }
  return v24;
}
