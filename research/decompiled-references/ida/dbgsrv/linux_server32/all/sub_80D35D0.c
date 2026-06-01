/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_80D35D0
// Address: 0x080D35D0

//----- (080D35D0) --------------------------------------------------------
const char *__usercall sub_80D35D0@<eax>(const char *a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  _BYTE *v5; // edx
  _BYTE *v6; // ebp
  char *v7; // eax
  unsigned int v8; // ecx
  const char *v9; // ebp
  char *v10; // edi
  char v11; // bl
  char *v12; // esi
  unsigned int v14; // ebp
  char *v15; // eax
  int v16; // [esp-14h] [ebp-48h]
  int v17; // [esp-14h] [ebp-48h]
  int v18; // [esp-10h] [ebp-44h]
  int v19; // [esp-Ch] [ebp-40h]
  char v21; // [esp+0h] [ebp-34h]
  unsigned int v22; // [esp+Ch] [ebp-28h]
  char *v23; // [esp+10h] [ebp-24h]
  _BYTE *v24; // [esp+14h] [ebp-20h]

  if ( a3 < 0 )
  {
    if ( !byte_811F8A1 )
      sub_80CFF40(1225, v16, v18, v19);
LABEL_36:
    BUG();
  }
  if ( strchr(a1, 37) )
  {
    v5 = a2;
    v6 = &a2[a3];
    v7 = a2;
    v23 = v6 - 1;
    v8 = (unsigned int)v6;
    v9 = a1;
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v10 = (char *)(v9 + 1);
          v11 = *v9;
          if ( (unsigned int)v7 >= v8 )
          {
LABEL_30:
            if ( !byte_811F8A1 )
              sub_80CFF40(518, v17, v18, v19);
            goto LABEL_36;
          }
          v12 = v7 + 1;
          *v7 = v11;
          if ( (unsigned int)(v7 + 1) >= v8 )
          {
            *(_BYTE *)(v8 - 1) = 0;
            v12 = v23;
          }
          if ( !v11 )
            return v5;
          if ( v11 == 37 )
            break;
          v7 = v12;
          ++v9;
        }
        if ( v9[1] != 37 )
          break;
        v9 += 2;
        if ( (unsigned int)v12 >= v8 )
          goto LABEL_30;
        v7 = v12 + 1;
        *v12 = 37;
        if ( (unsigned int)(v12 + 1) >= v8 )
          goto LABEL_12;
      }
      v24 = v5;
      v22 = v8 - 1;
      v14 = v8;
      while ( 1 )
      {
        v21 = *v10;
        if ( !strchr((const char *)&qword_811CFF4 - 179020, *v10) )
          break;
        ++v10;
        if ( (unsigned int)v12 >= v14 )
          goto LABEL_30;
        v15 = v12 + 1;
        *v12 = v21;
        if ( (unsigned int)(v12 + 1) >= v14 )
        {
          *(_BYTE *)(v14 - 1) = 0;
          v15 = (char *)v22;
        }
        v12 = v15;
      }
      v8 = v14;
      v5 = v24;
      if ( v21 == 97 )
      {
        if ( (unsigned int)v12 >= v14 )
        {
          if ( !byte_811F8A1 )
            sub_80CFF40(520, v17, v18, v19);
          goto LABEL_36;
        }
        v7 = v12 + 1;
        *v12 = 88;
        if ( (unsigned int)(v12 + 1) >= v14 )
        {
          *(_BYTE *)(v14 - 1) = 0;
          v7 = (char *)(v14 - 1);
        }
        v9 = v10 + 1;
      }
      else
      {
        v9 = v10 + 1;
        if ( (unsigned int)v12 >= v8 )
          goto LABEL_30;
        v7 = v12 + 1;
        *v12 = v21;
        if ( (unsigned int)(v12 + 1) >= v8 )
        {
LABEL_12:
          *(_BYTE *)(v8 - 1) = 0;
          v7 = (char *)(v8 - 1);
        }
      }
    }
  }
  return a1;
}
// 80D375C: variable 'v17' is possibly undefined
// 80D375C: variable 'v18' is possibly undefined
// 80D375C: variable 'v19' is possibly undefined
// 80D377C: variable 'v16' is possibly undefined
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811F8A1: using guessed type char byte_811F8A1;
