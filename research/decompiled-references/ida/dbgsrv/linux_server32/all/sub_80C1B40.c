/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80C1B40
// Address: 0x080C1B40

//----- (080C1B40) --------------------------------------------------------
int __cdecl sub_80C1B40(int a1)
{
  int v1; // edx
  void *v2; // eax
  unsigned int v3; // ecx
  void *v4; // eax
  unsigned int v5; // edx
  char *v6; // eax
  void *v7; // eax
  char *v8; // eax
  void *v9; // eax
  int v10; // edi
  char *v12; // [esp+10h] [ebp-434h]
  int v13; // [esp+10h] [ebp-434h]
  char **v14; // [esp+14h] [ebp-430h]
  unsigned int v15; // [esp+14h] [ebp-430h]
  void *ptr; // [esp+1Ch] [ebp-428h] BYREF
  unsigned int v17; // [esp+20h] [ebp-424h]
  unsigned int v18; // [esp+24h] [ebp-420h]
  char file[1024]; // [esp+28h] [ebp-41Ch] BYREF
  unsigned int v20; // [esp+428h] [ebp-1Ch]

  v20 = __readgsdword(0x14u);
  ptr = nullptr;
  v17 = 0;
  v18 = 0;
  if ( !(unsigned __int8)sub_80D2000("OPENSSL_LIBRARY_PATH", &ptr) )
    goto LABEL_7;
  if ( (dword_811F8A4 & 0x100000) != 0 )
    sub_80BE360();
  v1 = v17;
  v2 = ptr;
  if ( !v17 )
  {
    v3 = 2;
    if ( v18 >= 2 )
      goto LABEL_6;
LABEL_27:
    v13 = v1;
    v15 = v3;
    v2 = sub_80CF920((int)&ptr, ptr, v3, 1u);
    v1 = v13;
    ptr = v2;
    v3 = v15;
    goto LABEL_6;
  }
  if ( v17 != 1 && *((char *)ptr + v17 - 2) == 47 )
    goto LABEL_7;
  v3 = v17 + 1;
  v1 = v17 - 1;
  if ( v18 < v17 + 1 )
    goto LABEL_27;
LABEL_6:
  v17 = v3;
  *((_BYTE *)v2 + v1) = 47;
  *((_BYTE *)ptr + v1 + 1) = 0;
LABEL_7:
  v14 = off_811C860;
  while ( 1 )
  {
    if ( *(_DWORD *)(a1 + 16) )
      dlclose(*(void **)(a1 + 16));
    *(_DWORD *)(a1 + 16) = 0;
    v4 = *(void **)(a1 + 12);
    if ( v4 )
      dlclose(v4);
    v5 = v17;
    *(_DWORD *)(a1 + 12) = 0;
    v12 = *v14;
    v6 = (char *)&dword_80DDFD8;
    if ( v5 )
      v6 = (char *)ptr;
    sub_80D0740((unsigned int)file, v6, 1024);
    sub_80D08C0(file, "libcrypto", 1024);
    sub_80D08C0(file, ".so", 1024);
    sub_80D08C0(file, v12, 1024);
    v7 = dlopen(file, 2);
    *(_DWORD *)(a1 + 12) = v7;
    if ( v7 )
    {
      v8 = (char *)&dword_80DDFD8;
      if ( v17 )
        v8 = (char *)ptr;
      sub_80D0740((unsigned int)file, v8, 1024);
      sub_80D08C0(file, "libssl", 1024);
      sub_80D08C0(file, ".so", 1024);
      sub_80D08C0(file, v12, 1024);
      v9 = dlopen(file, 2);
      *(_DWORD *)(a1 + 16) = v9;
      if ( v9 )
        break;
    }
    if ( ++v14 == &off_811C878 )
    {
      v10 = 0;
      goto LABEL_20;
    }
  }
  if ( *v12 && (dword_811F8A4 & 0x100000) != 0 )
    sub_80BE360();
  v10 = 1;
LABEL_20:
  if ( ptr )
  {
    v17 = 0;
    sub_80CF780(ptr);
  }
  if ( v20 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v10;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811C860: using guessed type char *off_811C860[5];
// 811C878: using guessed type char *off_811C878;
// 811F8A4: using guessed type int dword_811F8A4;
