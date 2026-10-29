/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_7A0F0
// Address: 0x0007A0F0

//----- (0007A0F0) --------------------------------------------------------
int __cdecl sub_7A0F0(int a1, int a2, int a3)
{
  int v3; // edi
  unsigned int v4; // ecx
  char *v5; // eax
  int v6; // edi
  unsigned __int32 v7; // edx
  unsigned __int32 v8; // esi
  unsigned __int32 i; // edi
  int v10; // esi
  int v11; // eax
  size_t v12; // edi
  _DWORD *v13; // ecx
  int v14; // esi
  void *v15; // eax
  _DWORD *v16; // esi
  char *v18; // [esp+8h] [ebp-474h]
  char *v19; // [esp+Ch] [ebp-470h]
  int v20; // [esp+14h] [ebp-468h]
  void *v21; // [esp+18h] [ebp-464h] BYREF
  int v22; // [esp+1Ch] [ebp-460h]
  int v23; // [esp+20h] [ebp-45Ch]
  int v24; // [esp+28h] [ebp-454h] BYREF
  _BYTE src[1076]; // [esp+2Ch] [ebp-450h] BYREF
  int v26; // [esp+460h] [ebp-1Ch]
  int v27; // [esp+464h] [ebp-18h]
  unsigned int v28; // [esp+468h] [ebp-14h]

  v3 = a2;
  v28 = __readgsdword(0x14u);
  v19 = *(char **)a2;
  v4 = *(unsigned __int16 *)(a2 + 24);
  v21 = nullptr;
  v22 = 0;
  v23 = 0;
  v5 = byte_EF875;
  v18 = byte_EF875;
  if ( !v4 )
  {
LABEL_15:
    if ( *(_DWORD *)(a3 + 4) )
      v18 = *(char **)a3;
    v10 = *(_DWORD *)(v3 + 12);
    sub_25930((int)&v24, (int)v18, 0, v19, (char *)(v3 + 1050), 0, v5);
    v24 = (int)&off_1383C8;
    v26 = v3 + 16;
    v27 = v10;
    if ( sub_25BE0((int)&v24) )
    {
      v6 = 0;
      if ( a1 )
      {
        v11 = __strlen_chk(src, 1084);
        v12 = v11;
        v13 = (_DWORD *)a1;
        if ( v11 )
        {
          v14 = v11 + 1;
          if ( *(_DWORD *)(a1 + 8) >= (unsigned int)(v11 + 1) )
          {
            v15 = *(void **)a1;
          }
          else
          {
            v15 = qvector_reserve(a1, *(void **)a1, v11 + 1, 1u);
            v13 = (_DWORD *)a1;
            *(_DWORD *)a1 = v15;
          }
          v13[1] = v14;
          v16 = v13;
          memmove(v15, src, v12);
          *(_BYTE *)(*v16 + v12) = 0;
        }
        else
        {
          *(_DWORD *)(a1 + 4) = 0;
        }
        v6 = 0;
      }
    }
    else
    {
      v6 = -1;
    }
    sub_260F0((int)&v24);
    if ( v21 )
    {
      v22 = 0;
      qfree(v21);
      v21 = nullptr;
      v23 = 0;
    }
    return v6;
  }
  v6 = -1;
  if ( v4 >= 0xC )
  {
    v7 = _byteswap_ulong(*(_DWORD *)(a2 + 26));
    if ( !*(_BYTE *)(a2 + 16) )
      v7 = *(_DWORD *)(a2 + 26);
    v8 = _byteswap_ulong(*(_DWORD *)(a2 + 30));
    if ( !*(_BYTE *)(a2 + 16) )
      v8 = *(_DWORD *)(a2 + 30);
    v6 = -1;
    if ( v7 + v8 + 12 <= v4 )
    {
      v5 = byte_EF875;
      v3 = a2;
      if ( v8 )
      {
        v20 = a2 + v7 + 38;
        for ( i = 0; i < v8; ++i )
          sub_31370((int)&v21, "%02x", *(unsigned __int8 *)(v20 + i));
        if ( v22 )
          v5 = (char *)v21;
        else
          v5 = byte_EF875;
        v3 = a2;
      }
      goto LABEL_15;
    }
  }
  return v6;
}
// 17B50: using guessed type int __cdecl __strlen_chk(_DWORD, _DWORD);
// 1383C8: using guessed type int (__cdecl *off_1383C8)(int, int);
