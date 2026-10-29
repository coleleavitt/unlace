/* Split from IDA decompile_many output for CodeGraph indexing. */
// Name: sub_4668B6
// Address: 0x004668B6

//----- (004668B6) --------------------------------------------------------
int __cdecl sub_4668B6(int a1, int *a2, int *a3, int *a4)
{
  int v4; // ebx
  int v5; // ecx
  int v6; // edx
  int v7; // ecx
  int *v8; // esi
  int v9; // ecx
  int v10; // eax
  int v11; // ecx
  unsigned int v12; // eax
  unsigned int v14; // [esp-4h] [ebp-34h]

  v4 = 0;
  v5 = a3[1];
  if ( v5 )
  {
    if ( *(_BYTE *)(v5 + 8) )
    {
      v6 = a3[2];
      if ( v6 || *a3 < 0 )
      {
        v7 = *a3;
        v8 = a2;
        if ( *a3 >= 0 )
          v8 = (int *)((char *)a2 + v6 + 12);
        if ( (v7 & 0x80u) != 0 && (*(_BYTE *)a4 & 0x10) != 0 && dword_4B7858 )
        {
          v9 = ((int (__thiscall *)(int))dword_4B7858)(dword_4B7858);
        }
        else
        {
          if ( (v7 & 8) == 0 )
          {
            if ( (*(_BYTE *)a4 & 1) != 0 )
            {
              if ( *(_DWORD *)(a1 + 24) && v8 )
              {
                sub_464310((unsigned int)v8, *(_DWORD *)(a1 + 24), a4[5]);
                if ( a4[5] != 4 || !*v8 )
                  return v4;
                v10 = sub_463E90(*v8, a4 + 2);
                goto LABEL_22;
              }
            }
            else
            {
              v11 = *(_DWORD *)(a1 + 24);
              if ( a4[6] )
              {
                if ( v11 && v8 )
                  return ((*(_BYTE *)a4 & 4) != 0) + 1;
              }
              else if ( v11 && v8 )
              {
                v14 = a4[5];
                v12 = sub_463E90(v11, a4 + 2);
                sub_464310((unsigned int)v8, v12, v14);
                return v4;
              }
            }
LABEL_33:
            sub_467F38(0, a4, (int)v8);
          }
          v9 = *(_DWORD *)(a1 + 24);
        }
        if ( v9 && v8 )
        {
          *v8 = v9;
          v10 = sub_463E90(v9, a4 + 2);
LABEL_22:
          *v8 = v10;
          return v4;
        }
        goto LABEL_33;
      }
    }
  }
  return 0;
}
// 4892D8: using guessed type int (__cdecl *__guard_check_icall_fptr)(_DWORD);
// 4B7858: using guessed type int dword_4B7858;
