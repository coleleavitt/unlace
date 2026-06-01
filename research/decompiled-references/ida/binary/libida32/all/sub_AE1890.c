__int64 __fastcall sub_AE1890(__int64 a1, __int64 a2, int a3)
{
  int v4; // eax
  __int64 v5; // r15
  size_t v6; // rax
  __int64 v7; // r13
  size_t v8; // rax
  __int64 (__fastcall **v10)(); // [rsp+10h] [rbp-78h] BYREF
  int v11; // [rsp+18h] [rbp-70h]
  __int128 v12; // [rsp+20h] [rbp-68h]
  __int64 v13; // [rsp+30h] [rbp-58h]
  char v14; // [rsp+38h] [rbp-50h]
  int v15; // [rsp+3Ch] [rbp-4Ch]
  __int64 v16; // [rsp+40h] [rbp-48h]

  *(_QWORD *)a1 = a1 + 16;
  *(_QWORD *)(a1 + 8) = 0;
  *(_BYTE *)(a1 + 16) = 0;
  v16 = a1;
  v12 = 0;
  v10 = &off_2BC1EC8;
  v11 = 0;
  v14 = 0;
  v15 = 1;
  v13 = 0;
  sub_2257B70(&v10, 0, 0, 0);
  sub_971800((__int64)&v10, "(");
  v4 = *(_DWORD *)(a2 + 44);
  if ( v4 == 2 )
  {
    v7 = *(_QWORD *)(a2 + 48);
    v8 = j__strlen("\n");
    sub_EE3EC0(v7, (unsigned int)&v10, 0, a3, 0, 0, (__int64)"\n", v8);
  }
  else if ( (unsigned int)(v4 - 3) <= 1 )
  {
    v5 = *(_QWORD *)(a2 + 48);
    if ( v5 )
    {
      v6 = j__strlen("\n");
      sub_EE3EC0(v5, (unsigned int)&v10, 0, a3, 0, 0, (__int64)"\n", v6);
      if ( *(_DWORD *)(a2 + 44) == 4 )
        sub_971800((__int64)&v10, ", scalable");
    }
    else if ( v4 == 4 )
    {
      sub_971800((__int64)&v10, "scalable");
    }
    else
    {
      sub_971800((__int64)&v10, "fixed");
    }
  }
  else if ( v4 )
  {
    if ( v4 == 6 )
    {
      sub_971800((__int64)&v10, "full");
    }
    else if ( v4 == 5 )
    {
      sub_971800((__int64)&v10, "assume_safety");
    }
    else
    {
      sub_971800((__int64)&v10, "disable");
    }
  }
  else
  {
    sub_971800((__int64)&v10, "enable");
  }
  sub_971800((__int64)&v10, ")");
  v10 = &off_2BC1EC8;
  sub_2257A60(&v10);
  return a1;
}

