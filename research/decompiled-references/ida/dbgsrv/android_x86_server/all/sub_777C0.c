/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_777C0
// Address: 0x000777C0

//----- (000777C0) --------------------------------------------------------
int __cdecl sub_777C0(int a1, unsigned int a2, int a3)
{
  unsigned int v3; // esi
  int v4; // edi
  int result; // eax
  int v6; // edx
  int v7; // esi
  bool v8; // zf
  unsigned int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // eax
  unsigned int v14; // edx
  unsigned int v15; // edi
  int v16; // ebx
  int v17; // ecx
  int v18; // edi
  unsigned __int8 v19; // al
  char v20; // si
  _DWORD *v21; // esi
  int v22; // eax
  int v23; // esi
  int v24; // edx
  int v25; // esi
  unsigned int v26; // eax
  _DWORD *v27; // [esp+1Ch] [ebp-70h]
  unsigned int v28; // [esp+20h] [ebp-6Ch]
  int v29; // [esp+24h] [ebp-68h]
  _DWORD *v30; // [esp+28h] [ebp-64h]
  unsigned int v31; // [esp+2Ch] [ebp-60h]
  int v32; // [esp+38h] [ebp-54h]
  int v33; // [esp+40h] [ebp-4Ch]
  unsigned int v34; // [esp+44h] [ebp-48h]
  unsigned int v35; // [esp+48h] [ebp-44h]
  unsigned int v36; // [esp+4Ch] [ebp-40h]
  char v37; // [esp+50h] [ebp-3Ch]
  int v38; // [esp+54h] [ebp-38h]
  int v39; // [esp+58h] [ebp-34h]
  int v40; // [esp+5Ch] [ebp-30h]
  _DWORD v41[7]; // [esp+70h] [ebp-1Ch] BYREF

  v41[2] = __readgsdword(0x14u);
  v3 = (a3 - 1) & 0xFFFFF000;
  v4 = a1;
  *(_DWORD *)(a1 + 4120) = v3;
  result = -1;
  if ( v3 + 4096 > a2 )
  {
    v28 = a3 - v3;
    v30 = (_DWORD *)(a1 + 4124);
    v6 = 0;
    while ( 1 )
    {
      v32 = v6;
      if ( (*(_BYTE *)(v4 + 16) & 2) == 0 )
      {
        callui((int)v41);
        v7 = v41[0];
        qsem_free(nullptr);
        if ( v7 )
          return -7;
        v4 = a1;
        v3 = *(_DWORD *)(a1 + 4120);
      }
      v8 = (*(int (__cdecl **)(_DWORD, unsigned int, int, int, _DWORD))(**(_DWORD **)(v4 + 8) + 144))(
             *(_DWORD *)(v4 + 8),
             v3,
             a1 + 24,
             4096,
             *(_DWORD *)(v4 + 20)) == 4096;
      v9 = *(_DWORD *)(v4 + 4120);
      if ( !v8 )
      {
        *(_DWORD *)(v4 + 4136) = v9;
        return -7;
      }
      v10 = *(_DWORD *)(v4 + 4120);
      if ( v9 < a2 )
        v10 = a2;
      v11 = v10 - v9;
      *(_DWORD *)(v4 + 4168) = v11;
      v27 = *(_DWORD **)(v4 + 4124);
      v12 = v28;
      if ( v30 != v27 )
      {
        while ( 1 )
        {
          v13 = **(_DWORD **)(v4 + 12);
          v33 = v27[4];
          v14 = *(_DWORD *)(v13 + 40 * v27[3] + 4) - v33;
          v34 = v11;
          v15 = 4096 - v11;
          v35 = 4096 - v11;
          if ( v14 < 4096 - v11 )
            v15 = *(_DWORD *)(v13 + 40 * v27[3] + 4) - v33;
          v36 = *(_DWORD *)(v13 + 40 * v27[3] + 4) - v33;
          v16 = v14 - v15 + *(_DWORD *)(v13 + 40 * v27[3] + 12);
          if ( !*(_DWORD *)(v13 + 40 * v27[3] + 16) )
            v16 = 0;
          v31 = v15;
          if ( v15 )
            break;
LABEL_32:
          if ( v36 <= v35 )
          {
            **(_DWORD **)(a1 + 4) = v27[2];
            return 1;
          }
          if ( v34 )
          {
LABEL_34:
            v21 = (_DWORD *)*v27;
            *(_DWORD *)v27[1] = *v27;
            *(_DWORD *)(*v27 + 4) = v27[1];
            qfree(v27);
            v4 = a1;
            --*(_DWORD *)(a1 + 4132);
            v27 = v21;
          }
          else
          {
            v27[4] = v33 + 4096;
            v27 = (_DWORD *)*v27;
            v4 = a1;
          }
          v12 = v28;
          if ( v30 == v27 )
            goto LABEL_37;
          v11 = *(_DWORD *)(v4 + 4168);
        }
        v29 = *(_DWORD *)(v13 + 40 * v27[3]) + v14 - v15;
        v17 = *(_DWORD *)(a1 + 16);
        v40 = a1 + 4121 - v15 - 1;
        v18 = 0;
        v38 = v16;
        v37 = v17;
        while ( 2 )
        {
          v19 = *(_BYTE *)(v29 + v18);
          if ( (v17 & 1) != 0 )
          {
            v20 = *(_BYTE *)(v40 + v18);
            if ( !v16 )
              goto LABEL_30;
LABEL_20:
            if ( (v17 & 0x20) != 0 )
            {
              if ( ((unsigned __int8)(v19 ^ v20) & *(_BYTE *)(v16 + v18)) != 0 )
                goto LABEL_34;
            }
            else if ( v16 == 255 )
            {
              if ( v19 != 0xFF )
                goto LABEL_30;
            }
            else if ( v20 != v19 && *(_BYTE *)(v16 + v18) )
            {
              goto LABEL_34;
            }
          }
          else
          {
            v39 = v19;
            v20 = toupper(*(unsigned __int8 *)(v40 + v18));
            v19 = toupper(v39);
            LOBYTE(v17) = v37;
            v16 = v38;
            if ( v38 )
              goto LABEL_20;
LABEL_30:
            if ( v20 != v19 )
              goto LABEL_34;
          }
          if ( ++v18 >= v31 )
            goto LABEL_32;
          continue;
        }
      }
LABEL_37:
      if ( sub_77C50(v4, v12) )
        return 1;
      v22 = v28;
      if ( *(_DWORD *)(v4 + 4156) )
      {
        if ( *(_DWORD *)(v4 + 4168) < v28 )
          break;
      }
LABEL_42:
      *(_DWORD *)(v4 + 4120) -= 4096;
      v6 = v32 + 1;
      if ( (unsigned int)(v32 + 1) >= 0x3E8 )
      {
        qtime64();
        v25 = v24;
        v26 = v24 - *(_DWORD *)(v4 + 4164);
        v6 = 0;
        if ( v26 >= 5 )
        {
          sub_1C9D0(*(_DWORD *)(v4 + 8), &byte_DCEE2);
          v6 = 0;
          *(_DWORD *)(v4 + 4164) = v25;
        }
      }
      v3 = *(_DWORD *)(v4 + 4120);
      v28 = 4096;
      if ( v3 + 4096 <= a2 )
        return -1;
    }
    while ( 1 )
    {
      v23 = v22;
      if ( sub_77E10(v4, v22) )
        return 1;
      v22 = v23 - 1;
      if ( *(_DWORD *)(v4 + 4168) >= (unsigned int)(v23 - 1) )
        goto LABEL_42;
    }
  }
  return result;
}
// 77B7F: variable 'v24' is possibly undefined
// DCEE2: using guessed type char byte_DCEE2;
// 13BC20: using guessed type int (__stdcall *callui)(int);
