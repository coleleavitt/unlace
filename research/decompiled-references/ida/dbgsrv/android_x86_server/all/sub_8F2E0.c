/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_8F2E0
// Address: 0x0008F2E0

//----- (0008F2E0) --------------------------------------------------------
int __cdecl sub_8F2E0(int a1, int a2)
{
  int v2; // edi
  char *v3; // eax
  int v4; // ecx
  int v5; // eax
  int v7; // [esp+24h] [ebp-28h]
  int v8; // [esp+28h] [ebp-24h] BYREF
  __int64 v9; // [esp+2Ch] [ebp-20h]
  int v10; // [esp+34h] [ebp-18h]
  unsigned int v11; // [esp+38h] [ebp-14h]

  v11 = __readgsdword(0x14u);
  v2 = sub_8EB10();
  if ( *(_DWORD *)(a1 + 28) )
    v3 = *(char **)(a1 + 24);
  else
    v3 = byte_EF875;
  v7 = (*(int (__cdecl **)(int, char *, _DWORD))(*(_DWORD *)v2 + 244))(v2, v3, 0);
  if ( v7 < 0 )
  {
    if ( !(_BYTE)under_debugger )
      interr(30055);
    BUG();
  }
  v4 = idcv_int64(a1);
  if ( !v4 )
  {
    v8 = -2;
    v10 = 0;
    v9 = *(_QWORD *)(a1 + 4);
    v5 = sub_8EB30();
    *(_DWORD *)(a2 + 4) = (*(int (__cdecl **)(int, int, int, int *, _DWORD))(*(_DWORD *)v2 + 116))(v2, v5, v7, &v8, 0);
    v4 = 0;
    if ( v8 >= -1 )
    {
      if ( (_DWORD)v9 )
      {
        HIDWORD(v9) = 0;
        qfree((void *)v9);
        LODWORD(v9) = 0;
        v10 = 0;
        v4 = 0;
      }
      v8 = -2;
    }
  }
  return v4;
}
// 13E34C: using guessed type int under_debugger;
