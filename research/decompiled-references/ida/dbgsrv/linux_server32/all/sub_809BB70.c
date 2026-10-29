/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809BB70
// Address: 0x0809BB70

//----- (0809BB70) --------------------------------------------------------
int __cdecl sub_809BB70(int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  unsigned int *v5; // esi
  unsigned int *i; // edx
  unsigned int v7; // ecx
  int result; // eax
  int v9; // eax
  unsigned int v10; // ebx
  unsigned int v11; // edi
  int v12; // [esp+0h] [ebp-44h]
  int v13; // [esp+4h] [ebp-40h]
  unsigned int v14; // [esp+10h] [ebp-34h]
  char v15; // [esp+23h] [ebp-21h] BYREF
  unsigned int v16; // [esp+24h] [ebp-20h]

  v3 = a1[2];
  v16 = __readgsdword(0x14u);
  v4 = a2;
  v5 = *(unsigned int **)((char *)&off_811D0E0 + v3 - 135385076);
  for ( i = &v5[10 * *(_DWORD *)((char *)&off_811D0E4 + v3 - 135385076)]; v5 < i; v5 += 10 )
  {
    if ( a2 < *v5 )
      break;
    if ( a2 < v5[1] )
      goto LABEL_5;
  }
  if ( v5 == i )
    goto LABEL_19;
  v4 = *v5;
  if ( *v5 >= a3 )
    goto LABEL_19;
LABEL_5:
  v7 = v5[1];
  if ( a3 <= v7 )
    v7 = a3;
  v14 = v7;
  if ( (*(int (__cdecl **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v4, &v15, 1, 0) != 1 )
  {
    v13 = v14;
    v12 = v4;
    goto LABEL_21;
  }
  result = (*(int (__cdecl **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v4, v14);
LABEL_13:
  if ( result == -1 )
  {
    while ( 1 )
    {
      v9 = a1[2];
      v5 += 10;
      if ( v5 >= *(unsigned int **)((char *)&off_811D0E0 + v9 - 135385076)
               + 10 * *(_DWORD *)((char *)&off_811D0E4 + v9 - 135385076) )
        break;
      v10 = v5[1];
      if ( a3 < v10 )
        break;
      v11 = *v5;
      if ( (*(int (__cdecl **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)v9 + 144))(v9, *v5, &v15, 1, 0) == 1 )
      {
        result = (*(int (__cdecl **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v11, v10);
        goto LABEL_13;
      }
      v13 = v10;
      v12 = v11;
LABEL_21:
      sub_80A03F0(a1[2], (char *)&qword_811CFF4 - 266144, v12, v13);
    }
LABEL_19:
    result = -1;
  }
  if ( v16 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D0E0: using guessed type _UNKNOWN *off_811D0E0;
// 811D0E4: using guessed type _UNKNOWN *off_811D0E4;
