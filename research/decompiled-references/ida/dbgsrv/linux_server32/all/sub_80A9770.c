/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80A9770
// Address: 0x080A9770

//----- (080A9770) --------------------------------------------------------
int __cdecl sub_80A9770(int a1)
{
  int *v1; // eax
  int *v2; // edi
  char *v3; // eax
  int i; // edi
  char *v5; // eax
  void *v6; // ecx
  void *v7; // ecx
  _DWORD *v8; // eax
  void *v9; // edi
  bool v10; // zf
  int v11; // eax
  int *v13; // [esp+0h] [ebp-45Ch]
  int v14; // [esp+8h] [ebp-454h]
  int v15; // [esp+Ch] [ebp-450h]
  char *v16; // [esp+10h] [ebp-44Ch]
  int (__cdecl **v17)(int, int, int); // [esp+1Ch] [ebp-440h] BYREF
  void *v18; // [esp+20h] [ebp-43Ch]
  int v19; // [esp+24h] [ebp-438h]
  int v20; // [esp+28h] [ebp-434h]
  _WORD v21[8]; // [esp+260h] [ebp-1FCh] BYREF
  void *v22; // [esp+270h] [ebp-1ECh]
  int v23; // [esp+274h] [ebp-1E8h]
  void *v24; // [esp+298h] [ebp-1C4h]
  int v25; // [esp+29Ch] [ebp-1C0h]
  void *v26; // [esp+334h] [ebp-128h]
  int v27; // [esp+338h] [ebp-124h]
  void *ptr; // [esp+428h] [ebp-34h]
  int v29; // [esp+42Ch] [ebp-30h]
  int v30; // [esp+434h] [ebp-28h]
  unsigned int v31; // [esp+440h] [ebp-1Ch]

  v31 = __readgsdword(0x14u);
  v1 = sub_80CD4D0(a1, 0);
  if ( v1 )
  {
    v2 = v1;
    sub_806D700((int)v21, v1, 0);
    if ( (unsigned __int8)sub_8069FC0((int)v21) && (unsigned __int8)sub_806A5B0(v21) )
      v14 = 18;
    else
      v14 = -1;
    if ( v30 )
      (*(void (__cdecl **)(int))(*(_DWORD *)v30 + 4))(v30);
    if ( ptr )
    {
      v29 = 0;
      sub_80CF780(ptr);
    }
    v3 = (char *)v26;
    if ( v26 )
    {
      if ( v27 )
      {
        v15 = v27;
        v13 = v2;
        for ( i = 0; i != v15; ++i )
        {
          v5 = &v3[68 * i];
          v6 = *((void **)v5 + 3);
          v16 = v5;
          if ( v6 )
          {
            *((_DWORD *)v5 + 4) = 0;
            sub_80CF780(v6);
          }
          v7 = *(void **)v16;
          if ( *(_DWORD *)v16 )
          {
            *((_DWORD *)v16 + 1) = 0;
            sub_80CF780(v7);
          }
          v3 = (char *)v26;
        }
        v2 = v13;
      }
      v27 = 0;
      sub_80CF780(v3);
    }
    if ( v24 )
    {
      v25 = 0;
      sub_80CF780(v24);
    }
    if ( v22 )
    {
      v23 = 0;
      sub_80CF780(v22);
    }
    sub_80CD620(v2);
  }
  else
  {
    v14 = -1;
  }
  v8 = sub_80CD4D0(a1, 0);
  v9 = v8;
  if ( v8 )
  {
    v18 = nullptr;
    v17 = &off_811C184;
    v19 = 0;
    v20 = 0;
    v10 = (unsigned __int8)sub_80A7C10((int)&v17, (int)v8, 0, 1) == 0;
    v11 = 11;
    v17 = &off_811C184;
    if ( v10 )
      v11 = v14;
    v14 = v11;
    if ( v18 )
    {
      v19 = 0;
      sub_80CF780(v18);
    }
    sub_80CD620(v9);
  }
  if ( v31 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v14;
}
// 811C184: using guessed type int (__cdecl *off_811C184)(int, int, int);
