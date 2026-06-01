void __fastcall sub_FED090(__int64 a1, char a2)
{
  void **v2; // rdi
  __int64 v3; // rax
  __int64 v4; // rdx
  _QWORD *v5; // rdx
  __int64 *v6; // r14
  __int64 *v7; // rbx
  __int64 v8; // r13
  void *ptr; // [rsp+0h] [rbp+0h] BYREF
  unsigned int vars8; // [rsp+8h] [rbp+8h]
  unsigned int varsC; // [rsp+Ch] [rbp+Ch]
  _QWORD vars10[9]; // [rsp+10h] [rbp+10h] BYREF

  vars10[0] = a1;
  varsC = 2;
  v2 = (void **)vars10;
  ptr = vars10;
  LODWORD(v3) = 1;
  do
  {
    while ( 1 )
    {
      v4 = (unsigned int)v3;
      v3 = (unsigned int)(v3 - 1);
      v5 = v2[v4 - 1];
      vars8 = v3;
      if ( (v5[113] & 4) != 0 || (v5[113] & 1) == 0 && a2 )
      {
        v6 = (__int64 *)v5[33];
        v7 = (__int64 *)v5[32];
        *((_BYTE *)v5 + 904) = (*((_BYTE *)v5 + 904) | a2) & 1 | v5[113] & 0xFA;
        if ( v6 != v7 )
          break;
      }
      if ( !(_DWORD)v3 )
        goto LABEL_16;
    }
    do
    {
      while ( 1 )
      {
        v8 = *v7;
        if ( (*(_BYTE *)(*v7 + 904) & 4) != 0 || (*(_BYTE *)(*v7 + 904) & 1) == 0 && a2 )
          break;
        if ( v6 == ++v7 )
          goto LABEL_15;
      }
      if ( v3 + 1 > (unsigned __int64)varsC )
      {
        sub_2237220(&ptr, vars10, v3 + 1, 8);
        v3 = vars8;
      }
      ++v7;
      *((_QWORD *)ptr + v3) = v8;
      v3 = ++vars8;
    }
    while ( v6 != v7 );
LABEL_15:
    v2 = (void **)ptr;
  }
  while ( (_DWORD)v3 );
LABEL_16:
  if ( v2 != &ptr )
    free(v2);
}
