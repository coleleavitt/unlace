/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_97180
// Address: 0x00097180

//----- (00097180) --------------------------------------------------------
int __cdecl sub_97180(int *a1, signed int a2)
{
  int *v2; // edi
  int v3; // esi
  signed int v4; // esi
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  unsigned int v8; // edi
  __suseconds_t v9; // eax
  unsigned int v10; // edx
  unsigned __int64 v11; // rax
  unsigned int v12; // esi
  bool v13; // zf
  __suseconds_t v14; // eax
  unsigned int v15; // edx
  unsigned __int64 v16; // kr00_8
  unsigned __int64 v17; // rax
  int v18; // edi
  int v19; // eax
  int v20; // ecx
  int *v21; // eax
  unsigned __int64 v22; // rax
  int *v23; // edi
  unsigned int v25; // [esp+Ch] [ebp-30h]
  unsigned int v26; // [esp+10h] [ebp-2Ch]
  unsigned int v27; // [esp+14h] [ebp-28h]
  unsigned int v28; // [esp+18h] [ebp-24h]
  char v29; // [esp+1Ch] [ebp-20h]
  struct pollfd fds; // [esp+20h] [ebp-1Ch] BYREF
  unsigned int v31; // [esp+28h] [ebp-14h]

  v2 = a1;
  v31 = __readgsdword(0x14u);
  if ( (*(unsigned __int8 (__cdecl **)(int *))(*a1 + 76))(a1) )
  {
LABEL_2:
    v2[11] = (int)"select";
    return -1;
  }
  v4 = a2;
  while ( 2 )
  {
    v5 = v2[5];
    if ( v5 )
    {
      v6 = v2[4];
      v7 = 5 * v5;
      v8 = *(_DWORD *)(v6 + 4 * v7 - 12);
      v25 = *(_DWORD *)(v6 + 4 * v7 - 8);
      if ( v4 < 0 )
        goto LABEL_14;
    }
    else
    {
      v8 = 0;
      v25 = 0;
      if ( v4 < 0 )
        goto LABEL_14;
    }
    v9 = qtime64();
    LODWORD(v11) = sub_94A20(v9, v10, v4);
    if ( v11 )
    {
      v12 = v25;
      v13 = __PAIR64__(v25, v8) < v11 && (v25 | v8) != 0;
      v27 = HIDWORD(v11);
      if ( __PAIR64__(v25, v8) >= v11 || (v25 | v8) == 0 )
        v12 = HIDWORD(v11);
      v25 = v12;
      v28 = v11;
      if ( !v13 )
        v8 = v11;
      v26 = v8;
      v29 = 0;
      goto LABEL_16;
    }
LABEL_14:
    if ( v25 | v8 )
    {
      v29 = 1;
      v28 = 0;
      v27 = 0;
      v26 = v8;
LABEL_16:
      v14 = qtime64();
      v16 = (unsigned int)v14 + (unsigned int)dword_F4240 * (unsigned __int64)v15;
      v17 = v26 + (unsigned int)dword_F4240 * (unsigned __int64)v25;
      if ( v16 >= v17 )
        v17 = v16;
      v18 = (v17 - v16) / 0x3E8;
      goto LABEL_20;
    }
    v29 = 1;
    v28 = 0;
    v18 = -1;
    v27 = 0;
LABEL_20:
    fds.fd = a1[7];
    fds.events = 1;
    while ( 1 )
    {
      v19 = poll(&fds, 1u, v18);
      v3 = v19;
      if ( v19 != -1 )
        break;
      v21 = (int *)__errno(v20);
      if ( *v21 != 4 )
      {
        v23 = a1;
        a1[11] = (int)"poll";
LABEL_29:
        v23[12] = *v21;
        return v3;
      }
    }
    if ( !v19 )
    {
      v2 = a1;
      if ( !v29 )
      {
        LODWORD(v22) = qtime64();
        if ( v22 >= __PAIR64__(v27, v28) )
        {
          a1[11] = (int)"poll";
          v3 = -1;
          a1[12] = 62;
          return v3;
        }
      }
      v4 = a2;
      if ( !(*(unsigned __int8 (__cdecl **)(int *))(*a1 + 76))(a1) )
        continue;
      goto LABEL_2;
    }
    break;
  }
  v23 = a1;
  if ( v19 < 0 )
  {
    a1[11] = (int)"poll";
    v21 = (int *)__errno(v20);
    goto LABEL_29;
  }
  return v3;
}
// 97209: variable 'v10' is possibly undefined
// 97215: variable 'v11' is possibly undefined
// 97296: variable 'v15' is possibly undefined
// 9732A: variable 'v20' is possibly undefined
// 9735B: variable 'v22' is possibly undefined
// 17A90: using guessed type int __fastcall __errno(_DWORD);
// F4240: using guessed type int dword_F4240[37];
