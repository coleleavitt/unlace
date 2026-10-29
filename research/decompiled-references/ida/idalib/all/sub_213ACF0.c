__int64 __fastcall sub_213ACF0(__int64 a1, void **a2, unsigned __int64 a3, __int64 a4, __int64 a5, __int64 a6)
{
  __int64 v6; // rax
  int v7; // eax
  __int64 v9; // rbp
  const char *v10; // r12
  __int64 v11; // rax
  __int64 v12; // rdx
  _QWORD v13[4]; // [rsp+10h] [rbp-48h] BYREF
  __int16 v14; // [rsp+30h] [rbp-28h]

  v6 = *(_QWORD *)(a1 + 320);
  if ( *(_QWORD *)(a1 + 312) != v6 && *(_BYTE *)(v6 - 3) )
  {
    sub_21319B0(a1, a2, a3, a4, a5, a6);
    return 0;
  }
  else
  {
    if ( (_BYTE)a3 )
    {
      v7 = **(_DWORD **)(a1 + 48);
      if ( v7 == 9 )
      {
        v9 = 39;
        v10 = ".error directive invoked in source file";
      }
      else
      {
        if ( v7 != 3 )
        {
          v14 = 259;
          v13[0] = ".error argument must be a string";
          return sub_21543E0(a1, v13, 0, 0);
        }
        v11 = sub_2153C00(a1);
        v10 = (const char *)sub_212C8F0(v11);
        v9 = v12;
        sub_2132C70(a1, (__m128 *)a2);
      }
      v13[0] = v10;
      v14 = 261;
      v13[1] = v9;
    }
    else
    {
      v13[0] = ".err encountered";
      v14 = 259;
    }
    return sub_2153E90(a1, a2, v13, 0, 0);
  }
}
