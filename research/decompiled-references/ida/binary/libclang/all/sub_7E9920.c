__int64 __fastcall sub_7E9920(__int64 *a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 *v7; // rax
  __int64 *v8; // r12
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  __int64 result; // rax
  __int64 *v12; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v13; // [rsp+8h] [rbp-40h]
  __int64 v14; // [rsp+10h] [rbp-38h]

  if ( !a2 )
    return 1;
  v7 = *(__int64 **)(a2 + 16);
  v8 = *(__int64 **)(a2 + 24);
  if ( v8 == v7 )
  {
    v8 = nullptr;
    v7 = nullptr;
  }
  v12 = v7;
  v9 = 0;
  v13 = 0;
  v14 = 0;
LABEL_5:
  if ( v8 == v7 )
  {
LABEL_11:
    if ( !v9 )
      return 1;
  }
  v10 = v9 & 3;
  if ( (_DWORD)v10 )
    v7 = (__int64 *)sub_ACE280(&v12, a2, v10, a4, a5, a6);
  while ( 1 )
  {
    a2 = *v7;
    result = sub_7E3C00(a1, *v7, a3);
    if ( !(_BYTE)result )
      return result;
    v9 = v13;
    if ( (v13 & 3) != 0 )
    {
      if ( v13 <= 3 )
      {
        a2 = 1;
        sub_ACE0F0(&v12, 1);
      }
      else
      {
        sub_ACE150(&v12);
      }
      v7 = v12;
      v9 = v13;
      goto LABEL_5;
    }
    v7 = v12 + 1;
    v12 = v7;
    if ( v8 == v7 )
      goto LABEL_11;
  }
}

