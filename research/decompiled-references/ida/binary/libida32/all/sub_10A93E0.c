__int64 __fastcall sub_10A93E0(__int64 a1)
{
  __int64 v2; // rax
  void *v3; // rcx
  __int64 (__fastcall ***v5)(); // rdi
  __int64 vars0; // [rsp+8h] [rbp+0h] BYREF
  char vars8; // [rsp+10h] [rbp+8h]
  char vars10; // [rsp+18h] [rbp+10h] BYREF
  __int64 (__fastcall **vars18)(); // [rsp+20h] [rbp+18h] BYREF
  int vars20; // [rsp+28h] [rbp+20h]
  __int128 vars28; // [rsp+30h] [rbp+28h]
  _BYTE *vars38; // [rsp+40h] [rbp+38h]
  char vars40; // [rsp+48h] [rbp+40h]
  int vars44; // [rsp+4Ch] [rbp+44h]
  __int64 vars48; // [rsp+50h] [rbp+48h]
  __int64 *vars68; // [rsp+70h] [rbp+68h]

  vars68 = &vars0;
  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  vars48 = a1;
  vars28 = 0;
  vars18 = &off_2BC1EC8;
  vars20 = 0;
  vars40 = 0;
  vars44 = 1;
  vars38 = nullptr;
  sub_2257B70(&vars18, 0, 0, 0);
  vars0 = 0;
  vars8 = 0;
  v2 = sub_22581D0(&vars18, &vars10, 0);
  v3 = *(void **)(v2 + 32);
  if ( *(_QWORD *)(v2 + 24) - (_QWORD)v3 > 0xBu )
  {
    qmemcpy(v3, "Clang 21.1.5", 12);
    *(_QWORD *)(v2 + 32) += 12LL;
  }
  else
  {
    sub_22581D0(v2, "Clang 21.1.5", 12);
  }
  sub_10A9120((__int64)&vars0);
  if ( vars0 )
  {
    if ( *((_BYTE **)&vars28 + 1) == vars38 )
    {
      v5 = (__int64 (__fastcall ***)())sub_22581D0(&vars18, " ", 1);
    }
    else
    {
      *vars38 = 32;
      v5 = &vars18;
      ++vars38;
    }
    sub_22581D0(v5, &vars10, vars0);
  }
  if ( &vars10 != (char *)&vars0 )
    operator delete(&vars10);
  vars18 = &off_2BC1EC8;
  sub_2257A60(&vars18);
  return a1;
}

