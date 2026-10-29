/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_78360
// Address: 0x00078360

//----- (00078360) --------------------------------------------------------
int __cdecl sub_78360(int a1, int a2, unsigned int a3)
{
  int v3; // edi
  unsigned int v4; // esi
  int result; // eax
  int v6; // ecx
  int v7; // esi
  bool v8; // zf
  int v9; // eax
  int v10; // ecx
  unsigned int v11; // esi
  unsigned int i; // esi
  int v13; // edx
  int v14; // eax
  int v15; // ebx
  int v16; // ecx
  int v17; // edx
  unsigned int v18; // esi
  unsigned __int8 v19; // bl
  unsigned __int8 v20; // al
  int v21; // edi
  _DWORD *v22; // eax
  _DWORD *v23; // esi
  int v24; // edx
  int v25; // esi
  int v26; // [esp+0h] [ebp-8Ch]
  _DWORD *v27; // [esp+24h] [ebp-68h]
  unsigned int v28; // [esp+28h] [ebp-64h]
  int v29; // [esp+2Ch] [ebp-60h]
  char v30; // [esp+30h] [ebp-5Ch]
  _DWORD *v31; // [esp+34h] [ebp-58h]
  int v32; // [esp+38h] [ebp-54h]
  int v33; // [esp+48h] [ebp-44h]
  unsigned int v34; // [esp+4Ch] [ebp-40h]
  unsigned int v35; // [esp+50h] [ebp-3Ch]
  char v36; // [esp+54h] [ebp-38h]
  int v37; // [esp+58h] [ebp-34h]
  unsigned int v38; // [esp+5Ch] [ebp-30h]
  _DWORD v39[7]; // [esp+70h] [ebp-1Ch] BYREF

  v3 = a1;
  v39[2] = __readgsdword(0x14u);
  v4 = a2 & 0xFFFFF000;
  *(_DWORD *)(a1 + 4120) = a2 & 0xFFFFF000;
  result = -1;
  if ( (a2 & 0xFFFFF000) >= a3 )
    return result;
  v28 = a2 - v4;
  v31 = (_DWORD *)(a1 + 4124);
  v6 = 0;
  while ( 1 )
  {
    v33 = v6;
    if ( (*(_BYTE *)(v3 + 16) & 2) == 0 )
    {
      callui((int)v39);
      v7 = v39[0];
      qsem_free(nullptr);
      if ( v7 )
        return -7;
      v3 = a1;
      v4 = *(_DWORD *)(a1 + 4120);
    }
    v8 = (*(int (__cdecl **)(_DWORD, unsigned int, int, int, _DWORD))(**(_DWORD **)(v3 + 8) + 144))(
           *(_DWORD *)(v3 + 8),
           v4,
           a1 + 24,
           4096,
           *(_DWORD *)(v3 + 20)) == 4096;
    v9 = *(_DWORD *)(v3 + 4120);
    if ( !v8 )
    {
      *(_DWORD *)(v3 + 4136) = v9;
      return -7;
    }
    v10 = a3 - v9;
    if ( a3 - v9 >= 0x1000 )
      v10 = 4096;
    *(_DWORD *)(v3 + 4168) = v10;
    v11 = v28;
    if ( v31 != *(_DWORD **)(v3 + 4124) )
      break;
LABEL_39:
    if ( sub_787B0(v3, v11) )
      return 1;
    if ( *(_DWORD *)(v3 + 4156) )
    {
      while ( v11 < *(_DWORD *)(v3 + 4168) )
      {
        if ( sub_78950(v3, v11) )
          return 1;
        ++v11;
      }
    }
    *(_DWORD *)(v3 + 4120) += 4096;
    v6 = v33 + 1;
    if ( (unsigned int)(v33 + 1) >= 0x3E8 )
    {
      qtime64();
      v6 = 0;
      if ( (unsigned int)(v24 - *(_DWORD *)(v3 + 4164)) >= 5 )
      {
        v25 = v24;
        sub_1C9D0(*(_DWORD *)(v3 + 8), (char *)&qword_13ACD8 - 384502);
        v6 = 0;
        *(_DWORD *)(v3 + 4164) = v25;
      }
    }
    v4 = *(_DWORD *)(v3 + 4120);
    v28 = 0;
    if ( v4 >= a3 )
      return -1;
  }
  v27 = *(_DWORD **)(v3 + 4124);
  for ( i = v10; ; i = *(_DWORD *)(v3 + 4168) )
  {
    v13 = v27[4];
    v14 = **(_DWORD **)(v3 + 12);
    v35 = i;
    v34 = *(_DWORD *)(v14 + 40 * v27[3] + 4) - v13;
    if ( v34 < i )
      i = *(_DWORD *)(v14 + 40 * v27[3] + 4) - v13;
    v32 = v27[4];
    v15 = v13 + *(_DWORD *)(v14 + 40 * v27[3] + 12);
    if ( !*(_DWORD *)(v14 + 40 * v27[3] + 16) )
      v15 = 0;
    v29 = v15;
    v38 = i;
    if ( i )
    {
      v16 = v13 + *(_DWORD *)(v14 + 40 * v27[3]);
      v17 = *(_DWORD *)(v3 + 16);
      v18 = 0;
      v37 = v16;
      v36 = v17;
      do
      {
        v19 = *(_BYTE *)(v3 + v18 + 24);
        v20 = *(_BYTE *)(v16 + v18);
        if ( (v17 & 1) != 0 )
        {
          v30 = *(_BYTE *)(v3 + v18 + 24);
          if ( !v29 )
          {
LABEL_26:
            if ( v30 != v20 )
              goto LABEL_37;
            goto LABEL_29;
          }
        }
        else
        {
          v21 = v20;
          v30 = toupper(v19);
          v26 = v21;
          v3 = a1;
          v20 = toupper(v26);
          LOBYTE(v17) = v36;
          v16 = v37;
          if ( !v29 )
            goto LABEL_26;
        }
        if ( (v17 & 0x20) != 0 )
        {
          if ( ((unsigned __int8)(v20 ^ v30) & *(_BYTE *)(v29 + v18)) != 0 )
            goto LABEL_37;
        }
        else if ( v29 == 255 )
        {
          if ( v20 != 0xFF && v30 != v20 )
            goto LABEL_37;
        }
        else if ( v30 != v20 && *(_BYTE *)(v29 + v18) )
        {
          goto LABEL_37;
        }
LABEL_29:
        ++v18;
      }
      while ( v18 < v38 );
    }
    if ( v34 <= v35 )
      break;
    if ( v35 == 4096 )
    {
      v27[4] = v32 + 4096;
      v22 = (_DWORD *)*v27;
    }
    else
    {
LABEL_37:
      v23 = (_DWORD *)*v27;
      *(_DWORD *)v27[1] = *v27;
      *(_DWORD *)(*v27 + 4) = v27[1];
      qfree(v27);
      --*(_DWORD *)(v3 + 4132);
      v22 = v23;
    }
    v11 = v28;
    if ( v31 == v22 )
      goto LABEL_39;
    v27 = v22;
  }
  **(_DWORD **)(v3 + 4) = v27[2];
  return 1;
}
// 786EB: variable 'v24' is possibly undefined
// 13ACD8: using guessed type __int64 qword_13ACD8;
// 13BC20: using guessed type int (__stdcall *callui)(int);
