__int64 __fastcall sub_14C580(unsigned int *a1)
{
  unsigned __int64 v1; // rbp
  unsigned int v2; // eax
  char v3; // r13
  unsigned int v4; // r12d
  __int64 v6; // r14
  int v7; // r15d
  __int64 v8; // rax
  __int64 v9; // r14
  unsigned int v10; // eax
  unsigned __int64 v11; // rax
  int tinfo_property; // [rsp+10h] [rbp-78h]
  __int64 v13; // [rsp+28h] [rbp-60h] BYREF
  char v14[24]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v15; // [rsp+48h] [rbp-40h]

  v1 = *a1;
  v15 = __readfsqword(0x28u);
  if ( (unsigned int)(v1 - 32) <= 9 )
  {
    v3 = 0;
    if ( *((_BYTE *)a1 + 32) != 4 )
      return 0;
  }
  else
  {
    v2 = v1 - 43;
    v3 = 1;
    v1 = (unsigned int)(v1 - 11);
    if ( v2 > 9 || *((_BYTE *)a1 + 32) != 4 )
      return 0;
  }
  v6 = *((_QWORD *)a1 + 5);
  if ( *(_DWORD *)v6 != 56 )
  {
    if ( *(_DWORD *)v6 != 8 )
      return 0;
    if ( *(_BYTE *)(v6 + 32) != 4 )
      return 0;
    v6 = *(_QWORD *)(v6 + 40);
    if ( *(_DWORD *)v6 != 56 )
      return 0;
  }
  if ( *(_BYTE *)(v6 + 32) != 11 )
    return 0;
  if ( *(_BYTE *)(v6 + 64) != 8 )
    return 0;
  v7 = *(_DWORD *)(*(_QWORD *)(v6 + 72) + 284LL);
  if ( (unsigned int)(v7 - 32) > 1 )
    return 0;
  v4 = sub_11D940((char *)a1 + 48, &v13, 1u);
  if ( !(_BYTE)v4 )
    return 0;
  v8 = v13;
  if ( v7 == 33 )
    v8 = --v13;
  if ( (unsigned __int64)(v8 - 2) <= 0xFFFFFFFFFFFFFFFCLL )
    return 0;
  if ( (_DWORD)v1 == (unsigned int)sub_32B690((unsigned int)v1) )
  {
    if ( v13 )
    {
      if ( v13 == -1 )
      {
        if ( (_DWORD)v1 == 33 )
        {
          LODWORD(v1) = 35;
          goto LABEL_21;
        }
        v11 = 0xFFFFFFF6FFFFFFFFLL;
        if ( !_bittest64((const __int64 *)&v11, v1) )
        {
          LODWORD(v1) = 34;
          goto LABEL_21;
        }
      }
    }
    else if ( v7 != 32 || (_DWORD)v1 == 32 || (_DWORD)v1 == 33 )
    {
      goto LABEL_21;
    }
    return 0;
  }
  if ( v13 == -1 )
  {
    if ( (_DWORD)v1 == 38 )
    {
      LODWORD(v1) = 39;
      goto LABEL_21;
    }
    return 0;
  }
  if ( v13 == 1 )
  {
    if ( (_DWORD)v1 == 40 )
    {
      LODWORD(v1) = 41;
      goto LABEL_21;
    }
    return 0;
  }
LABEL_21:
  v9 = *(_QWORD *)(v6 + 72);
  tinfo_property = get_tinfo_property();
  if ( (get_tinfo_property() & 0xF) == 9 )
    a1[1] |= 0x10u;
  sub_11A5D0((char *)a1 + 48, (char *)(*(_QWORD *)(v9 + 24) + 80LL));
  sub_121540((__int64)v14, *(unsigned __int8 **)(v9 + 24));
  sub_11A5D0((char *)a1 + 32, v14);
  if ( v3 )
    LODWORD(v1) = v1 + 11;
  if ( tinfo_property == 1 )
    v10 = sub_32B5C0((unsigned int)v1);
  else
    v10 = sub_32B690((unsigned int)v1);
  *a1 = v10;
  sub_11A960((__int64)v14);
  return v4;
}
