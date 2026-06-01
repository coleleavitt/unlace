__int64 __fastcall sub_872850(__int64 a1, char a2, int a3, int a4, unsigned __int8 a5, int a6)
{
  __int64 result; // rax
  unsigned int *v11; // r14
  unsigned int *v12; // rdi
  int v13; // eax
  __int64 v14; // r10
  __int64 v15; // rcx
  __int64 v16; // r9
  int v17; // r8d
  int v18; // edx
  unsigned int *v19; // rdi

  result = (unsigned int)a3;
  v11 = *(unsigned int **)a1;
  if ( a3 >= 0 )
  {
    result = sub_86D900(*(unsigned int **)a1, 0x42u, 12, 0, 142, a4, 0x7Fu, 8LL * (a3 + (a5 & 1u | (a2 != 122)) + 1));
    if ( !a6 )
    {
      if ( a2 != 123 )
        return result;
      v16 = 0;
      v17 = 140;
      v15 = 0;
      v18 = 4;
      return sub_86B8E0(v11, 32, v18, v15, v17, v16);
    }
    sub_86B8E0(v11, 32, 1, 0, 140, -8);
    if ( a2 == 123 )
      sub_86B8E0(v11, 32, 4, 0, 140, 0);
    goto LABEL_14;
  }
  if ( a3 == -1 )
  {
    result = sub_86B8E0(*(unsigned int **)a1, 32, 12, 0, 142, a4);
LABEL_20:
    if ( a6 )
    {
      if ( a2 == 122 && (a5 & 1) == 0 )
      {
LABEL_23:
        sub_86B8E0(v11, 32, 1, 0, 140, -8);
LABEL_14:
        v15 = *(int *)(a1 + 108);
        v16 = 0;
        v17 = 1;
LABEL_15:
        v18 = 142;
        return sub_86B8E0(v11, 32, v18, v15, v17, v16);
      }
LABEL_25:
      sub_86B8E0(v11, 32, 1, 0, 140, -16);
      if ( a2 == 123 )
      {
        sub_86B8E0(v11, 32, 4, 0, 140, -8);
      }
      else if ( a2 == 124 )
      {
        sub_86B8E0(v11, 32, 142, a4, 140, -8);
      }
      goto LABEL_14;
    }
    goto LABEL_28;
  }
  if ( a2 == 122 && (a5 & 1) == 0 )
  {
    if ( !a6 )
      return result;
    if ( *v11 )
      goto LABEL_23;
    v12 = *(unsigned int **)a1;
    v11[36] = 0;
    v13 = sub_86C5C0(v12, 12, 0, 12, 0, 127, 8);
    v14 = 8;
    if ( v13 != 4 )
      goto LABEL_23;
LABEL_19:
    result = sub_86D220(v11, 0x5030100u, 12, 0, 12, 0, 127, v14);
    goto LABEL_20;
  }
  result = *v11;
  if ( !(_DWORD)result )
  {
    v19 = *(unsigned int **)a1;
    v11[36] = 0;
    result = sub_86C5C0(v19, 12, 0, 12, 0, 127, 8 * (1 - ((a6 == 0) - 1)));
    v14 = 8 * (1 - ((a6 == 0) - 1));
    if ( (_DWORD)result != 4 )
      goto LABEL_20;
    goto LABEL_19;
  }
  if ( a6 )
    goto LABEL_25;
LABEL_28:
  if ( a2 == 123 )
  {
    v16 = -8;
    v17 = 140;
    v15 = 0;
    v18 = 4;
    return sub_86B8E0(v11, 32, v18, v15, v17, v16);
  }
  if ( a2 == 124 )
  {
    v15 = a4;
    v16 = -8;
    v17 = 140;
    goto LABEL_15;
  }
  return result;
}
