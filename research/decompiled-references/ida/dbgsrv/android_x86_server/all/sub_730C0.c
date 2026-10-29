/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_730C0
// Address: 0x000730C0

//----- (000730C0) --------------------------------------------------------
unsigned int __cdecl sub_730C0(int a1, int a2, char a3)
{
  int v3; // eax
  _BOOL4 v4; // edx
  int v5; // eax
  _BOOL4 v6; // edx
  char v8[4]; // [esp+8h] [ebp-34h] BYREF
  __int64 v9; // [esp+Ch] [ebp-30h]
  char v10[4]; // [esp+18h] [ebp-24h] BYREF
  __int64 v11; // [esp+1Ch] [ebp-20h]
  unsigned int v12; // [esp+28h] [ebp-14h]

  v12 = __readgsdword(0x14u);
  sub_71D00(a1, a2, a3);
  while ( 1 )
  {
    v10[0] = 1;
    v11 = 0;
    v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
    if ( v3 != 8509 )
      break;
    sub_71D00(a1, (int)v10, 1);
    v4 = v11 != *(_QWORD *)(a2 + 4);
LABEL_2:
    *(_DWORD *)(a2 + 4) = v4;
    *(_DWORD *)(a2 + 8) = 0;
    *(_BYTE *)a2 = 0;
  }
  v3 = (unsigned __int16)v3;
  if ( (unsigned __int16)v3 == 15677 )
  {
    sub_71D00(a1, (int)v10, 1);
    v4 = v11 == *(_QWORD *)(a2 + 4);
    goto LABEL_2;
  }
LABEL_8:
  if ( v3 == 38 )
  {
    v8[0] = 1;
    v9 = 0;
    sub_71D00(a1, (int)v8, 1);
    while ( 1 )
    {
      v10[0] = 1;
      v11 = 0;
      v5 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
      if ( v5 == 8509 )
      {
        sub_71D00(a1, (int)v10, 1);
        v6 = v11 != v9;
      }
      else
      {
        if ( (unsigned __int16)v5 != 15677 )
        {
          *(_QWORD *)(a2 + 4) &= v9;
          v3 = *(unsigned __int16 *)(*(_DWORD *)(a1 + 228) + 12);
          goto LABEL_8;
        }
        sub_71D00(a1, (int)v10, 1);
        v6 = v11 == v9;
      }
      v9 = v6;
      v8[0] = 0;
    }
  }
  return __readgsdword(0x14u);
}
