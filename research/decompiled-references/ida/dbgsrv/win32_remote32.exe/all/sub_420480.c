/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_420480
// Address: 0x00420480

//----- (00420480) --------------------------------------------------------
char __userpurge sub_420480@<al>(int a1@<ecx>, __m128i a2@<xmm0>, int a3, unsigned int *a4, char **a5)
{
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // eax
  const char *v10; // edi
  int v11; // eax
  const char *v12; // eax
  const char *v14; // eax
  char *v15; // [esp-8h] [ebp-34h]
  char *v16; // [esp+10h] [ebp-1Ch] BYREF
  int v17; // [esp+14h] [ebp-18h]
  int v18; // [esp+18h] [ebp-14h]
  char *v19; // [esp+1Ch] [ebp-10h]
  int v20; // [esp+28h] [ebp-4h]
  unsigned int v21; // [esp+3Ch] [ebp+10h]

  v19 = *a5;
  v7 = *(_DWORD *)(a3 + 12);
  v8 = v7;
  v21 = v7;
  if ( v7 )
  {
    while ( 1 )
    {
      v9 = sub_427FA0(*(_DWORD **)(a1 + 4), v7);
      if ( *(_DWORD *)(v9 + 28) != -1 )
        break;
      v7 = *(_DWORD *)(v9 + 8);
      if ( !v7 )
      {
        v8 = v21;
        goto LABEL_5;
      }
    }
    v15 = v19;
    *a5 = nullptr;
    return sub_41F210(a1, a1, a3, *(_DWORD *)(v9 + 28), a4, v15, 1);
  }
  else
  {
LABEL_5:
    v16 = nullptr;
    v17 = 0;
    v18 = 0;
    v10 = MultiByteStr;
    v20 = 0;
    if ( a4[1] )
      v10 = (const char *)*a4;
    v11 = sub_427FA0(*(_DWORD **)(a1 + 4), v8);
    if ( *(_DWORD *)(v11 + 20) )
      v12 = *(const char **)(v11 + 16);
    else
      v12 = MultiByteStr;
    sub_402970(a2, (LPVOID *)&v16, "%s.%s", v12, v10);
    v14 = MultiByteStr;
    if ( v17 )
      v14 = v16;
    sub_45CB10(0, v14);
    sub_45CC20(1538);
    sub_41FBD0((LPVOID *)a1, a1);
    v20 = 1;
    if ( v16 )
    {
      v17 = 0;
      sub_453A20(v16);
    }
    return 0;
  }
}
