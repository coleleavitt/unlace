/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A8B60
// Address: 0x080A8B60

//----- (080A8B60) --------------------------------------------------------
int __cdecl sub_80A8B60(int a1, int *a2)
{
  char *v2; // eax
  char *v3; // edi
  void *v4; // eax
  void *v5; // eax
  _DWORD *v7; // eax
  _DWORD *v8; // eax
  size_t v9; // edi
  void *v10; // eax
  int v11; // [esp+0h] [ebp-22Ch]
  bool v12; // [esp+4h] [ebp-228h]
  char v13; // [esp+Ah] [ebp-222h]
  unsigned __int8 v14; // [esp+Bh] [ebp-221h]
  int v15; // [esp+Ch] [ebp-220h]
  int i; // [esp+10h] [ebp-21Ch]
  void *src; // [esp+14h] [ebp-218h] BYREF
  size_t n; // [esp+18h] [ebp-214h]
  int v19; // [esp+1Ch] [ebp-210h]
  void *v20; // [esp+24h] [ebp-208h] BYREF
  unsigned int v21; // [esp+28h] [ebp-204h]
  int v22; // [esp+2Ch] [ebp-200h]
  _WORD v23[8]; // [esp+30h] [ebp-1FCh] BYREF
  void *v24; // [esp+40h] [ebp-1ECh]
  int v25; // [esp+44h] [ebp-1E8h]
  _BYTE v26[16]; // [esp+58h] [ebp-1D4h] BYREF
  void *v27; // [esp+68h] [ebp-1C4h]
  int v28; // [esp+6Ch] [ebp-1C0h]
  void *v29; // [esp+104h] [ebp-128h]
  int v30; // [esp+108h] [ebp-124h]
  void *ptr; // [esp+1F8h] [ebp-34h]
  int v32; // [esp+1FCh] [ebp-30h]
  int v33; // [esp+204h] [ebp-28h]
  char v34; // [esp+20Ch] [ebp-20h]
  unsigned int v35; // [esp+210h] [ebp-1Ch]

  v35 = __readgsdword(0x14u);
  sub_806D700((int)v23, a2, 0);
  sub_8069F90((int)v23, nullptr);
  if ( (unsigned __int8)sub_8069FC0((int)v23) && (unsigned __int8)sub_806A5B0(v23) && (v14 = sub_806EF70((int)v23)) != 0 )
  {
    v11 = sub_8069B80((int)v23);
    src = nullptr;
    v13 = v34;
    n = 0;
    v19 = 0;
    v20 = nullptr;
    v21 = 0;
    v22 = 0;
    if ( sub_806EA50((int)v26, 1, ".debug_info") || sub_806EA50((int)v26, 1879048222, ".debug_info") )
      v12 = v14;
    else
      v12 = sub_806EA50((int)v26, 1, ".zdebug_info") != nullptr;
    v7 = sub_806EA50((int)v26, 7, ".note.gnu.build-id");
    if ( (v7 || (v7 = sub_806EA50((int)v26, 7, ".note.go.buildid")) != nullptr) && *((_QWORD *)v7 + 4) <= 0xFFFFu )
      sub_806F910((int)v26, (int)&src, (int)v7);
    v8 = sub_806EA50((int)v26, 1, ".gnu_debuglink");
    if ( v8 )
      sub_806E590((int)v23, (int)&v20, *((_QWORD *)v8 + 3));
    if ( v21 > 1 )
      sub_80D0740(a1 + 1034, (char *)v20, 4096);
    else
      *(_BYTE *)(a1 + 1034) = 0;
    v9 = n;
    v10 = src;
    if ( n > 0x400 )
    {
      *(_DWORD *)(a1 + 4) = v11;
      *(_WORD *)(a1 + 8) = 1024;
      memmove((void *)(a1 + 10), v10, 0x400u);
      *(_BYTE *)a1 = v13;
      *(_BYTE *)(a1 + 1) = v12;
    }
    else
    {
      *(_DWORD *)(a1 + 4) = v11;
      *(_WORD *)(a1 + 8) = v9;
      memmove((void *)(a1 + 10), v10, v9);
      *(_BYTE *)a1 = v13;
      *(_BYTE *)(a1 + 1) = v12;
      if ( !v9 && !v12 )
        v14 = v21 > 1;
    }
    if ( v20 )
    {
      v21 = 0;
      sub_80CF780(v20);
    }
    if ( src )
    {
      n = 0;
      sub_80CF780(src);
    }
  }
  else
  {
    v14 = 0;
  }
  if ( v33 )
    (*(void (__cdecl **)(int))(*(_DWORD *)v33 + 4))(v33);
  if ( ptr )
  {
    v32 = 0;
    sub_80CF780(ptr);
  }
  v2 = (char *)v29;
  if ( v29 )
  {
    if ( v30 )
    {
      v15 = v30;
      for ( i = 0; i != v15; ++i )
      {
        v3 = &v2[68 * i];
        v4 = *((void **)v3 + 3);
        if ( v4 )
        {
          *((_DWORD *)v3 + 4) = 0;
          sub_80CF780(v4);
        }
        v5 = *(void **)v3;
        if ( *(_DWORD *)v3 )
        {
          *((_DWORD *)v3 + 1) = 0;
          sub_80CF780(v5);
        }
        v2 = (char *)v29;
      }
    }
    v30 = 0;
    sub_80CF780(v2);
  }
  if ( v27 )
  {
    v28 = 0;
    sub_80CF780(v27);
  }
  if ( v24 )
  {
    v25 = 0;
    sub_80CF780(v24);
  }
  if ( v35 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v14;
}
