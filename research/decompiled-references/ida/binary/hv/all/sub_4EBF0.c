__int64 __fastcall sub_4EBF0(__int64 a1, char **a2, __int64 a3)
{
  unsigned int v3; // r12d
  char *v5; // rbx
  unsigned int v6; // eax
  char *v7; // r14
  int v8; // eax
  char *v9; // rdx
  char *v10; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v11[7]; // [rsp+10h] [rbp-38h] BYREF

  v11[1] = __readfsqword(0x28u);
  v10 = *a2;
  if ( __CFADD__(a3, v10) )
    return 0;
  v5 = &v10[a3];
  LOBYTE(v6) = sub_4EAC0(a1 + 16, &v10, a3);
  v3 = v6;
  if ( !(_BYTE)v6 )
    return 0;
  v7 = v10;
  v11[0] = v10;
  v8 = sub_93BC0(v11, v5);
  v9 = (char *)v11[0];
  if ( (unsigned __int64)v7 >= v11[0] )
  {
    return 0;
  }
  else
  {
    *(_BYTE *)(a1 + 152) = v8 != 0;
    *a2 = v9;
  }
  return v3;
}

