/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80B9FB0
// Address: 0x080B9FB0

//----- (080B9FB0) --------------------------------------------------------
int __cdecl sub_80B9FB0(_DWORD *a1, int a2, _DWORD *a3, int a4)
{
  int v4; // esi
  unsigned int v5; // eax
  void *v6; // ecx
  char *v7; // ecx
  int v8; // edx
  int *v9; // eax
  void *v10; // ebx
  int v12; // eax
  int v13; // [esp+0h] [ebp-50h]
  int v14; // [esp+4h] [ebp-4Ch]
  char v15; // [esp+13h] [ebp-3Dh] BYREF
  int v16; // [esp+14h] [ebp-3Ch] BYREF
  void *v17; // [esp+18h] [ebp-38h] BYREF
  int v18; // [esp+1Ch] [ebp-34h]
  int v19; // [esp+20h] [ebp-30h]
  int v20; // [esp+24h] [ebp-2Ch] BYREF
  void *ptr; // [esp+28h] [ebp-28h]
  int v22; // [esp+2Ch] [ebp-24h]
  int v23; // [esp+30h] [ebp-20h]
  unsigned int v24; // [esp+34h] [ebp-1Ch]

  v24 = __readgsdword(0x14u);
  v4 = sub_809D6B0((int)a1, a2, a3, a4);
  if ( !(_BYTE)v4 )
  {
    v17 = nullptr;
    v18 = 0;
    v5 = a1[87];
    v19 = 0;
    if ( v5 || (v5 = a1[99], v6 = nullptr, v5) )
    {
      v20 = -2;
      v23 = 0;
      ptr = (void *)-1;
      v22 = -1;
      sub_80A2720((int)&v17, v5, (int)&v20);
      if ( v20 >= -1 && ptr )
      {
        v22 = 0;
        sub_80CF780(ptr);
      }
      v6 = v17;
    }
    if ( (*(int (__cdecl **)(_DWORD *, int, int, void *, _DWORD))(*a1 + 112))(a1, a2, 1, v6, 0) == 1
      && (*(int (__cdecl **)(_DWORD *, _DWORD, char *, int, _DWORD))(*a1 + 144))(
           a1,
           *((_DWORD *)v17 + 4 * a1[101] + 1),
           &v15,
           1,
           0) == 1
      && (unsigned __int8)(v15 + 62) <= 1u )
    {
      v16 = -1;
      if ( (*(int (__cdecl **)(_DWORD *, _DWORD, int *, int, _DWORD))(*a1 + 144))(
             a1,
             *((_DWORD *)v17 + 4 * a1[100] + 1),
             &v16,
             4,
             0) == 4 )
      {
        v12 = a4;
        LOBYTE(v12) = v16 == a4;
        v4 = v12;
      }
    }
    v7 = (char *)v17;
    if ( v17 )
    {
      v8 = v18;
      if ( v18 )
      {
        v14 = 0;
        do
        {
          v9 = (int *)&v7[16 * v14];
          if ( *v9 >= -1 )
          {
            v10 = (void *)v9[1];
            if ( v10 )
            {
              v13 = v8;
              v9[2] = 0;
              sub_80CF780(v10);
              v7 = (char *)v17;
              v8 = v13;
            }
          }
          ++v14;
        }
        while ( v8 != v14 );
      }
      v18 = 0;
      sub_80CF780(v7);
    }
  }
  if ( v24 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return v4;
}
