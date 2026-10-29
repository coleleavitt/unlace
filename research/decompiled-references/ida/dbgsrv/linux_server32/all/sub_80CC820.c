/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80CC820
// Address: 0x080CC820

//----- (080CC820) --------------------------------------------------------
size_t __cdecl sub_80CC820(size_t *a1, char *a2, char a3)
{
  size_t v3; // eax
  int *v4; // ecx
  unsigned int v5; // ebx
  int v6; // edx
  char *v7; // eax
  char *v8; // eax
  char *v9; // eax
  size_t result; // eax
  char *v11; // eax
  char *v12; // eax
  size_t v13; // [esp+1Ch] [ebp-1040h]
  int v14; // [esp+28h] [ebp-1034h]
  int *v15; // [esp+2Ch] [ebp-1030h]
  char *v16; // [esp+30h] [ebp-102Ch] BYREF
  int v17; // [esp+34h] [ebp-1028h]
  int v18; // [esp+38h] [ebp-1024h]
  unsigned int v19; // [esp+103Ch] [ebp-20h]

  v3 = a1[1];
  v19 = __readgsdword(0x14u);
  v14 = 0;
  v13 = v3;
  if ( (a3 & 1) != 0 )
    v14 = sub_80C3650();
  if ( (a3 & 2) == 0 )
  {
    v4 = sub_80CC640();
    if ( v4[1] )
    {
LABEL_5:
      v15 = v4;
      v5 = 0;
      do
      {
        v6 = *v15 + 12 * v5;
        v7 = (char *)&dword_80DDFD8;
        if ( *(_DWORD *)(v6 + 4) )
          v7 = *(char **)v6;
        ++v5;
        sub_80CBA50(a1, a3, v7, a2, v14, 0);
      }
      while ( v5 < v15[1] );
      if ( !a2 )
        goto LABEL_18;
      goto LABEL_10;
    }
    if ( !a2 )
    {
LABEL_29:
      v12 = sub_80CBDE0(a2);
      sub_80CBA50(a1, a3, v12, v14, 0);
      goto LABEL_19;
    }
LABEL_10:
    if ( !strcmp(a2, (const char *)&qword_811CFF4 - 271605) )
    {
      v16 = nullptr;
      v17 = 0;
      v18 = 0;
      v8 = "IDASGN";
    }
    else if ( !strcmp(a2, (const char *)&qword_811CFF4 - 271601) )
    {
      v16 = nullptr;
      v8 = (char *)&qword_811CFF4 - 271626;
      v17 = 0;
      v18 = 0;
    }
    else if ( !strcmp(a2, (const char *)&qword_811CFF4 - 279087) )
    {
      v16 = nullptr;
      v17 = 0;
      v18 = 0;
      v8 = "IDAIDC";
    }
    else
    {
      if ( strcmp(a2, (const char *)&qword_811CFF4 - 271597) )
        goto LABEL_18;
      v16 = nullptr;
      v8 = (char *)&qword_811CFF4 - 271619;
      v17 = 0;
      v18 = 0;
    }
    if ( (unsigned __int8)sub_80D2000(v8, (void **)&v16) )
    {
      v9 = (char *)&dword_80DDFD8;
      if ( v17 )
        v9 = v16;
      sub_80CBA50(a1, a3, v9, v14, 0);
    }
    if ( v16 )
    {
      v17 = 0;
      sub_80CF780(v16);
    }
LABEL_18:
    if ( (a3 & 2) != 0 )
      goto LABEL_19;
    goto LABEL_29;
  }
  v11 = sub_80CBDE0(a2);
  sub_80CBA50(a1, a3, v11, v14, 0);
  v4 = sub_80CC640();
  if ( v4[1] )
    goto LABEL_5;
  if ( a2 )
    goto LABEL_10;
LABEL_19:
  result = a1[1] - v13;
  if ( v19 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 80DDFD8: using guessed type int dword_80DDFD8;
// 811CFF4: using guessed type __int64 qword_811CFF4;
