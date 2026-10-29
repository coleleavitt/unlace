__int64 __fastcall sub_48C50(__int64 a1, __int64 *a2, __int64 a3)
{
  unsigned int v3; // r12d
  char *v5; // rbx
  char *v6; // r14
  __int64 v7; // rax
  char *v8; // [rsp+8h] [rbp-40h] BYREF
  _QWORD v9[7]; // [rsp+10h] [rbp-38h] BYREF

  v9[1] = __readfsqword(0x28u);
  v8 = (char *)*a2;
  if ( !__CFADD__(a3, v8) )
  {
    v5 = &v8[a3];
    v3 = sub_480B0((__int64 *)(a1 + 16), (const void **)&v8, (unsigned __int64)&v8[a3]);
    if ( (_BYTE)v3 )
    {
      v6 = v8;
      v9[0] = v8;
      *(_DWORD *)(a1 + 40) = sub_93BC0(v9, v5);
      v8 = (char *)v9[0];
      if ( (unsigned __int64)v6 < v9[0] )
      {
        if ( v9[0] < (unsigned __int64)v5 )
        {
          v7 = v9[0] + 1LL;
          *(_BYTE *)(a1 + 44) = *(_BYTE *)v9[0];
          *a2 = v7;
          return v3;
        }
        *(_BYTE *)(a1 + 44) = 0;
      }
    }
  }
  return 0;
}

