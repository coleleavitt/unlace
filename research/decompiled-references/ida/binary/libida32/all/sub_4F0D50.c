__int64 __fastcall sub_4F0D50(unsigned int *a1, unsigned int *a2, const char *a3, unsigned __int8 a4)
{
  unsigned int v7; // eax
  unsigned int v8; // r14d
  unsigned int v9; // r13d
  size_t v10; // rax
  const char *v11; // r15
  __int64 v12; // rdi
  __int64 v13; // r8
  unsigned int v14; // r13d
  signed __int64 v15; // rcx
  char *v16; // r14
  unsigned int v18; // [rsp+Ch] [rbp-5Ch]
  unsigned int v19; // [rsp+1Ch] [rbp-4Ch] BYREF
  _DWORD v20[2]; // [rsp+20h] [rbp-48h] BYREF
  unsigned __int64 v21; // [rsp+28h] [rbp-40h]

  v21 = __readfsqword(0x28u);
  if ( !a2 || !a3 || !*((_QWORD *)a1 + 3) )
    return 0;
  v18 = a4;
  sub_396090(0x38u, a1[8], a2, a3, a4);
  v7 = ea2node(*a2);
  v8 = v7;
  v9 = a4 == 0 ? 67 : 82;
  if ( !*a3 )
  {
    if ( netnode_supval(*a1, v7, 0, 0, v9) <= 0 )
      goto LABEL_20;
    v19 = sub_4F0CC0(*a1, v8, v9);
    if ( v19 != -1 )
      netnode_kill((int)&v19);
    if ( (unsigned __int8)netnode_supdel(*a1, v8, v9) )
      goto LABEL_20;
    return 0;
  }
  v10 = strlen(a3);
  if ( v10 > 0x3FE )
  {
    v19 = -1;
    v11 = a3;
    netnode_check(&v19, 0, 0, 1);
    v12 = *a1;
    v13 = v9;
    v14 = 0;
    v20[0] = 16909060;
    v20[1] = v19;
    netnode_supset(v12, v8, v20, 8, v13);
    while ( 1 )
    {
      v16 = strchr(v11, 10);
      if ( !v16 )
        v16 = (char *)&v11[strlen(v11)];
      v15 = v16 - v11;
      if ( v16 == v11 )
        v11 = &byte_22CD811;
      if ( !(unsigned __int8)netnode_supset(v19, v14, v11, v15, 83) )
        return 0;
      ++v14;
      if ( !*v16 )
        goto LABEL_20;
      v11 = v16 + 1;
    }
  }
  if ( !(unsigned __int8)netnode_supset(*a1, v8, a3, v10 + 1, v9) )
    return 0;
LABEL_20:
  sub_396090(0x39u, a1[8], a2, a3, v18);
  return 1;
}

