__int64 __fastcall sub_8CC910(__int64 a1)
{
  unsigned int v1; // eax
  void *v2; // rdi
  unsigned int v3; // ebx
  void *v5; // [rsp+0h] [rbp-28h] BYREF
  unsigned int v6; // [rsp+8h] [rbp-20h]
  void *v7; // [rsp+10h] [rbp-18h] BYREF
  unsigned int v8; // [rsp+18h] [rbp-10h]

  v1 = *(_DWORD *)(a1 + 8);
  v6 = v1;
  if ( v1 > 0x40 )
  {
    sub_2585B30(&v5);
    v1 = v6;
  }
  else
  {
    v5 = *(void **)a1;
  }
  if ( v1 <= 8 )
  {
    sub_2587BE0(&v7, &v5, 8);
    v2 = v7;
    if ( v8 > 0x40 )
    {
      v3 = *(unsigned __int8 *)v7;
      if ( !v7 )
        goto LABEL_10;
      goto LABEL_9;
    }
LABEL_14:
    v3 = (unsigned int)v2;
    goto LABEL_10;
  }
  sub_25877E0(&v7, &v5, 8);
  v2 = v7;
  if ( v8 <= 0x40 )
    goto LABEL_14;
  v3 = *(unsigned __int8 *)v7;
LABEL_9:
  operator delete[](v2);
LABEL_10:
  if ( v6 > 0x40 && v5 )
    operator delete[](v5);
  return v3;
}

