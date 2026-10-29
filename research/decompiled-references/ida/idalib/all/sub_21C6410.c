__int64 __fastcall sub_21C6410(__int64 a1, unsigned __int64 a2)
{
  size_t v2; // rax
  __int64 v3; // rax
  unsigned __int64 v4; // rdi
  __int64 v5; // r12
  char *v6; // rax
  char *v7; // rax
  __int64 v9; // [rsp+0h] [rbp-48h] BYREF
  unsigned __int64 v10; // [rsp+8h] [rbp-40h]
  void *v11; // [rsp+10h] [rbp-38h] BYREF
  __int64 v12; // [rsp+18h] [rbp-30h]
  _BYTE v13[40]; // [rsp+20h] [rbp-28h] BYREF

  v9 = a1;
  v10 = a2;
  v11 = v13;
  v2 = j__strlen(".__uniq.");
  sub_21C5A90(&v11, ".__uniq.", (__int64)&aUniq[v2]);
  v3 = sub_2246AB0(&v9, v11, v12, 0);
  v4 = 0;
  if ( v3 != -1 )
    v4 = v12 + v3;
  if ( v4 >= v10
    || (v5 = v9, (v6 = (char *)memchr((const void *)(v9 + v4), 46, v10 - v4)) == nullptr)
    || (v7 = &v6[-v5], (unsigned __int64)(v7 - 1) > 0xFFFFFFFFFFFFFFFDLL) )
  {
    v5 = v9;
  }
  if ( v11 != v13 )
    operator delete(v11);
  return v5;
}
