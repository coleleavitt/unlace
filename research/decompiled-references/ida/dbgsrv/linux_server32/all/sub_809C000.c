/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_809C000
// Address: 0x0809C000

//----- (0809C000) --------------------------------------------------------
int __cdecl sub_809C000(int *a1, unsigned int a2, unsigned int a3)
{
  int v3; // eax
  unsigned int v4; // ecx
  unsigned int *v5; // esi
  unsigned int v6; // ebx
  unsigned int v7; // ecx
  int v8; // eax
  int result; // eax
  int v10; // [esp+0h] [ebp-40h]
  unsigned int v11; // [esp+8h] [ebp-38h]
  char v12; // [esp+1Fh] [ebp-21h] BYREF
  unsigned int v13; // [esp+20h] [ebp-20h]

  v3 = a1[2];
  v13 = __readgsdword(0x14u);
  v4 = *(unsigned int *)((char *)&off_811D0E0 + v3 - 135385076);
  v5 = (unsigned int *)(v4 + 40 * *(_DWORD *)((char *)&off_811D0E4 + v3 - 135385076) - 40);
  if ( (unsigned int)v5 < v4 )
    goto LABEL_21;
  while ( 1 )
  {
    v6 = *v5;
    if ( *v5 < a3 )
      break;
    v5 -= 10;
    if ( (unsigned int)v5 < v4 )
      goto LABEL_21;
  }
  v7 = v5[1];
  if ( a3 >= v7 )
  {
    if ( v7 == -1 )
    {
LABEL_21:
      result = -1;
      goto LABEL_18;
    }
  }
  else
  {
    v7 = a3;
  }
  if ( a2 >= v6 && a2 < v5[1] )
    v6 = a2;
  v11 = v7;
  if ( (*(int (__cdecl **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)v3 + 144))(v3, v6, &v12, 1, 0) != 1 )
  {
    v10 = v11;
    goto LABEL_23;
  }
LABEL_17:
  result = (*(int (__cdecl **)(int *, unsigned int, unsigned int))(*a1 + 12))(a1, v6, v11);
  if ( result == -1 )
  {
    while ( 1 )
    {
      v8 = a1[2];
      v5 -= 10;
      if ( v5 < *(unsigned int **)((char *)&off_811D0E0 + v8 - 135385076) )
        goto LABEL_21;
      v11 = v5[1];
      if ( a2 >= v11 )
        goto LABEL_21;
      v6 = *v5;
      if ( a2 >= *v5 )
        v6 = a2;
      if ( (*(int (__cdecl **)(int, unsigned int, char *, int, _DWORD))(*(_DWORD *)v8 + 144))(v8, v6, &v12, 1, 0) == 1 )
        goto LABEL_17;
      v10 = v11;
LABEL_23:
      sub_80A03F0(a1[2], (char *)&qword_811CFF4 - 266144, v6, v10);
    }
  }
LABEL_18:
  if ( v13 != __readgsdword(0x14u) )
    sub_80D7AB0();
  return result;
}
// 811CFF4: using guessed type __int64 qword_811CFF4;
// 811D0E0: using guessed type _UNKNOWN *off_811D0E0;
// 811D0E4: using guessed type _UNKNOWN *off_811D0E4;
