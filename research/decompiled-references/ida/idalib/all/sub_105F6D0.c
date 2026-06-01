bool __fastcall sub_105F6D0(__int64 a1, __int64 a2)
{
  __int64 v2; // rdx
  int v3; // ebp
  bool result; // al
  int v5; // ebx
  void *v6; // [rsp+0h] [rbp-48h] BYREF
  unsigned int v7; // [rsp+8h] [rbp-40h]
  char v8; // [rsp+Ch] [rbp-3Ch]
  void *v9; // [rsp+10h] [rbp-38h] BYREF
  unsigned int v10; // [rsp+18h] [rbp-30h]
  char v11; // [rsp+1Ch] [rbp-2Ch]
  void *v12; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v13; // [rsp+28h] [rbp-20h]
  char v14; // [rsp+2Ch] [rbp-1Ch]

  v2 = *(unsigned int *)(a2 + 8);
  v7 = 64;
  v6 = nullptr;
  v8 = 0;
  if ( (_DWORD)v2 == 64 )
  {
    if ( *(_BYTE *)(a2 + 12) )
      v3 = sub_2205DB0(a2, &v6);
    else
      v3 = sub_2205E20(a2, &v6);
LABEL_19:
    result = 0;
    if ( v3 < 0 )
      return result;
    goto LABEL_9;
  }
  if ( (unsigned int)v2 <= 0x40 )
  {
    if ( *(_BYTE *)(a2 + 12) )
    {
      sub_2206CD0(&v12, a2, 64);
      v11 = 1;
    }
    else
    {
      sub_2206B70(&v12, a2, 64);
      v11 = 0;
    }
    v10 = v13;
    v9 = v12;
    v3 = sub_98E2D0((__int64 *)&v9, (__int64 *)&v6);
    if ( v10 <= 0x40 )
      goto LABEL_6;
  }
  else
  {
    sub_2206B70(&v12, &v6, v2);
    v11 = 0;
    v10 = v13;
    v9 = v12;
    v3 = sub_98E2D0((__int64 *)a2, (__int64 *)&v9);
    if ( v10 <= 0x40 )
      goto LABEL_6;
  }
  if ( v9 )
    operator delete[](v9);
LABEL_6:
  if ( v7 <= 0x40 || !v6 )
    goto LABEL_19;
  operator delete[](v6);
  result = 0;
  if ( v3 < 0 )
    return result;
LABEL_9:
  v13 = 64;
  v12 = &dword_0 + 3;
  v14 = 0;
  v5 = sub_98E2D0((__int64 *)a2, (__int64 *)&v12);
  if ( v13 > 0x40 )
  {
    if ( v12 )
      operator delete[](v12);
  }
  return v5 <= 0;
}
