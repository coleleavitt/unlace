__int64 __fastcall sub_410A70(__int64 a1, __int64 a2, int a3, __int64 a4)
{
  __int64 v4; // rdx
  __int64 v6; // rax
  __int64 v7; // [rsp+0h] [rbp-18h] BYREF
  __int64 v8; // [rsp+8h] [rbp-10h]

  v4 = (unsigned int)(a3 - 1);
  if ( (_DWORD)v4 )
  {
    sub_458930(a2, 1, a4, 0);
    return 1;
  }
  else
  {
    sub_4AD150(&v7, a2, v4);
    v6 = sub_47CDC0(v8 / 1000 + 1000 * v7, a2, v8 / 1000);
    sub_48AFD0(a2, v6);
    return 0;
  }
}

