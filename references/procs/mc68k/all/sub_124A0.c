unsigned __int64 __fastcall sub_124A0(__int64 a1)
{
  char *v1; // rdx
  unsigned __int64 *v2; // rax
  char v3; // cl
  char v4; // dl
  char *v5; // rdx
  char v6; // cl
  _BYTE v8[9]; // [rsp+Eh] [rbp-1Ah] BYREF
  char v9; // [rsp+17h] [rbp-11h] BYREF
  unsigned __int64 v10; // [rsp+18h] [rbp-10h] BYREF

  v10 = __readfsqword(0x28u);
  v1 = (char *)*(&off_1BA60 + *(unsigned int *)(a1 + 252));
  v2 = (unsigned __int64 *)v8;
  while ( 1 )
  {
    v3 = *v1++;
    *(_BYTE *)v2 = v3;
    if ( !v3 )
      break;
    v2 = (unsigned __int64 *)((char *)v2 + 1);
    if ( v2 == (unsigned __int64 *)&v9 )
    {
      v9 = 0;
      break;
    }
  }
  v4 = *(_BYTE *)(a1 + 256);
  if ( (v4 >= 0 || (*(_BYTE *)(*(_QWORD *)(a1 + 632) + 4LL) & 2) != 0) && (v4 & 0x78) == 0 )
  {
    if ( v2 >= &v10 )
    {
      if ( !under_debugger )
        interr(520);
      BUG();
    }
    v5 = (char *)*(&off_1BA20 + (*(_BYTE *)(a1 + 256) & 0x7F));
    if ( v2 == (unsigned __int64 *)&v9 )
    {
LABEL_15:
      v9 = 0;
    }
    else
    {
      while ( 1 )
      {
        v6 = *v5++;
        *(_BYTE *)v2 = v6;
        if ( !v6 )
          break;
        v2 = (unsigned __int64 *)((char *)v2 + 1);
        if ( v2 == (unsigned __int64 *)&v9 )
          goto LABEL_15;
      }
    }
  }
  (*(void (__fastcall **)(__int64, __int64, _BYTE *))(*(_QWORD *)a1 + 280LL))(a1, 8, v8);
  return v10 - __readfsqword(0x28u);
}
