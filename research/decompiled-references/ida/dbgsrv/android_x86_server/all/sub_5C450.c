/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_5C450
// Address: 0x0005C450

//----- (0005C450) --------------------------------------------------------
int __cdecl sub_5C450(int a1, _DWORD *a2, char **a3, char **a4)
{
  unsigned int v4; // edi
  unsigned int v5; // eax
  int v6; // eax
  int v7; // eax
  char *v8; // ecx
  char *v9; // edx
  char *v10; // eax
  char *v12; // [esp+4h] [ebp-28h]
  char *v13; // [esp+8h] [ebp-24h] BYREF
  int v14; // [esp+Ch] [ebp-20h]
  int v15; // [esp+10h] [ebp-1Ch]
  unsigned int v16; // [esp+18h] [ebp-14h]

  v16 = __readgsdword(0x14u);
  v4 = a2[4];
  if ( v4 )
  {
    v12 = *a4;
    v5 = a2[4];
    while ( 1 )
    {
      v6 = sub_538B0(*(_DWORD *)(a1 + 4), v5);
      if ( *(_DWORD *)(v6 + 32) != -1 )
        break;
      v5 = *(_DWORD *)(v6 + 12);
      if ( !v5 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    return sub_5E430(a1, a2, *(_DWORD *)(v6 + 32), (int)a3, v12, 1);
  }
  else
  {
LABEL_5:
    v13 = nullptr;
    v14 = 0;
    v15 = 0;
    v7 = sub_538B0(*(_DWORD *)(a1 + 4), v4);
    v8 = byte_EF875;
    v9 = byte_EF875;
    if ( *(_DWORD *)(v7 + 24) )
      v9 = *(char **)(v7 + 20);
    if ( a3[1] )
      v8 = *a3;
    sub_1F400((int)&v13, "%s.%s", v9, v8);
    if ( v14 )
      v10 = v13;
    else
      v10 = byte_EF875;
    set_error_string(0, v10);
    set_qerrno(1538);
    sub_5CBC0(a1);
    if ( v13 )
    {
      v14 = 0;
      qfree(v13);
      v13 = nullptr;
      v15 = 0;
    }
    return 0;
  }
}
