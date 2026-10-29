__int64 __fastcall sub_3DD740(__int64 a1, _QWORD *a2)
{
  unsigned int v2; // ebx
  char *v3; // rax
  char v4; // r14
  char *v5; // rbp
  char v6; // bl
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rax
  unsigned int v11; // [rsp+Ch] [rbp-3Ch] BYREF
  unsigned int *v12[7]; // [rsp+10h] [rbp-38h] BYREF

  v12[1] = (unsigned int *)__readfsqword(0x28u);
  v2 = 0;
  if ( a2[4] )
  {
    v3 = (char *)a2[3];
    v4 = *v3;
    v5 = v3 + 1;
    if ( *v3 > 0 && (isalpha(v4) || v4 == 95) )
    {
      while ( 1 )
      {
        v6 = *v5;
        if ( !*v5 )
          break;
        ++v5;
        if ( (unsigned int)v6 > 0x7F || !isalnum(v6) && v6 != 95 )
          return 0;
      }
      v2 = 0;
      if ( *(_BYTE *)(a1 + 72) )
      {
        v8 = sub_3DD040(a1, (__int64)(a2 + 3), 0);
        v2 = v8 ? *(_DWORD *)(v8 + 24) : sub_3DD5C0((_QWORD *)a1, a2);
        v11 = v2;
        if ( v2 )
        {
          v9 = *(_QWORD *)(a1 + 16);
          v10 = a1 + 8;
          if ( !v9 )
            goto LABEL_16;
          do
          {
            if ( *(_DWORD *)(v9 + 32) >= v2 )
            {
              v10 = v9;
              v9 = *(_QWORD *)(v9 + 16);
            }
            else
            {
              v9 = *(_QWORD *)(v9 + 24);
            }
          }
          while ( v9 );
          if ( v10 == a1 + 8 || v2 < *(_DWORD *)(v10 + 32) )
          {
LABEL_16:
            v12[0] = &v11;
            v10 = sub_3DBB40((_QWORD *)a1, v10, v12);
            v2 = v11;
          }
          *(_QWORD *)(v10 + 40) = a2;
        }
      }
    }
  }
  return v2;
}
