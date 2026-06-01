/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_71930
// Address: 0x00071930

//----- (00071930) --------------------------------------------------------
unsigned int __cdecl sub_71930(int a1, int a2, char a3)
{
  int v3; // eax
  int v4; // eax
  unsigned __int64 v5; // rax
  int v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // esi
  int v10; // edx
  bool v11; // zf
  char v13[4]; // [esp+8h] [ebp-34h] BYREF
  __int64 v14; // [esp+Ch] [ebp-30h]
  char v15[4]; // [esp+18h] [ebp-24h] BYREF
  __int64 v16; // [esp+1Ch] [ebp-20h]
  unsigned int v17; // [esp+28h] [ebp-14h]

  v17 = __readgsdword(0x14u);
  sub_71530(a1, a2, a3);
  while ( 1 )
  {
    while ( 1 )
    {
      v15[0] = 1;
      v16 = 0;
      v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
      if ( v3 != 45 )
        break;
      sub_71530(a1, (int)v15, 1);
      *(_QWORD *)(a2 + 4) -= v16;
    }
    if ( (unsigned __int16)v3 != 43 )
      break;
    sub_71530(a1, (int)v15, 1);
    *(_QWORD *)(a2 + 4) += v16;
  }
  while ( 1 )
  {
    v13[0] = 1;
    v14 = 0;
    if ( (unsigned __int16)v3 != 15420 )
      break;
    sub_71530(a1, (int)v13, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v15[0] = 1;
        v16 = 0;
        v8 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v8 != 45 )
          break;
        sub_71530(a1, (int)v15, 1);
        v14 -= v16;
      }
      if ( (unsigned __int16)v8 != 43 )
        break;
      sub_71530(a1, (int)v15, 1);
      v14 += v16;
    }
    v9 = *(_DWORD *)(a2 + 4) << v14;
    v10 = *(_QWORD *)(a2 + 4) << v14 >> 32;
    v11 = (v14 & 0x20) == 0;
    if ( (v14 & 0x20) != 0 )
      v10 = *(_DWORD *)(a2 + 4) << v14;
    *(_DWORD *)(a2 + 8) = v10;
    if ( !v11 )
      v9 = 0;
    *(_DWORD *)(a2 + 4) = v9;
LABEL_7:
    LOWORD(v3) = *(_WORD *)(*(_DWORD *)(a1 + 228) + 12);
  }
  if ( (unsigned __int16)v3 == 15934 )
  {
    sub_71530(a1, (int)v13, 1);
    while ( 1 )
    {
      while ( 1 )
      {
        v15[0] = 1;
        v16 = 0;
        v4 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
        if ( v4 != 45 )
          break;
        sub_71530(a1, (int)v15, 1);
        v14 -= v16;
      }
      if ( (unsigned __int16)v4 != 43 )
        break;
      sub_71530(a1, (int)v15, 1);
      v14 += v16;
    }
    v5 = *(_QWORD *)(a2 + 4) >> (v14 & 0x1F);
    v6 = *(int *)(a2 + 8) >> 31;
    v7 = v5;
    if ( (v14 & 0x20) != 0 )
    {
      v7 = *(int *)(a2 + 8) >> v14;
      LODWORD(v5) = HIDWORD(v5);
    }
    else
    {
      v6 = *(int *)(a2 + 8) >> v14;
    }
    if ( (v14 & 0x20) != 0 )
      HIDWORD(v5) = 0;
    if ( !*(_BYTE *)a2 )
      v5 = __PAIR64__(v6, v7);
    *(_QWORD *)(a2 + 4) = v5;
    goto LABEL_7;
  }
  return __readgsdword(0x14u);
}
