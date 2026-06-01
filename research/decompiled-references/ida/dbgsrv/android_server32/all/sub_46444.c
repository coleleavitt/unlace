/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_46444
// Address: 0x00046444

//----- (00046444) --------------------------------------------------------
int __fastcall sub_46444(_DWORD *a1, _DWORD *a2, const char **a3, unsigned __int8 **a4)
{
  unsigned int v5; // r5
  unsigned int v8; // r1
  int v9; // r0
  int v10; // r0
  const char *v11; // r3
  const char *v12; // r2
  const char *v13; // r1
  unsigned __int8 *v15; // [sp+Ch] [bp-1Ch]
  char *v17; // [sp+18h] [bp-10h] BYREF
  int v18; // [sp+1Ch] [bp-Ch]
  int v19; // [sp+20h] [bp-8h]

  v5 = a2[4];
  if ( v5 )
  {
    v15 = *a4;
    v8 = a2[4];
    while ( 1 )
    {
      v9 = sub_40FB8(a1[1], v8);
      if ( *(_DWORD *)(v9 + 32) != -1 )
        break;
      v8 = *(_DWORD *)(v9 + 12);
      if ( !v8 )
        goto LABEL_5;
    }
    *a4 = nullptr;
    return sub_47764((int)a1, a2, *(_DWORD *)(v9 + 32), (int)a3, v15, 1);
  }
  else
  {
LABEL_5:
    v18 = 0;
    v17 = nullptr;
    v19 = 0;
    v10 = sub_40FB8(a1[1], v5);
    v11 = &byte_B3CBE;
    v12 = &byte_B3CBE;
    if ( *(_DWORD *)(v10 + 24) )
      v12 = *(const char **)(v10 + 20);
    if ( a3[1] )
      v11 = *a3;
    sub_1DA58((int)&v17, "%s.%s", v12, v11);
    if ( v18 )
      v13 = v17;
    else
      v13 = &byte_B3CBE;
    set_error_string(0, v13);
    set_qerrno(1538);
    sub_468C4(a1);
    if ( v17 )
    {
      v18 = 0;
      qfree(v17);
      v19 = 0;
      v17 = nullptr;
    }
    return 0;
  }
}
// B3CBE: using guessed type char byte_B3CBE;
