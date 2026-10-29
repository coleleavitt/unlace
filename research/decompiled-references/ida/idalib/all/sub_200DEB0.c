__int64 __fastcall sub_200DEB0(unsigned int *a1, __int64 a2, char *a3, __int64 a4)
{
  size_t v4; // rax
  unsigned int v5; // r13d
  char v6; // al
  __int64 v7; // rdx
  unsigned int v9; // r13d
  __int64 v10; // rbx
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  size_t v17; // rax
  char *v18; // [rsp+0h] [rbp-48h] BYREF
  __int64 v19; // [rsp+8h] [rbp-40h]
  _QWORD v20[6]; // [rsp+18h] [rbp-30h] BYREF

  v18 = a3;
  v19 = a4;
  if ( !(unsigned __int8)sub_2246340(&v18, "x", 1) )
  {
    if ( v19 && *v18 == 78 )
    {
      ++v18;
      --v19;
    }
    else
    {
      v4 = j__strlen("n");
      if ( !(unsigned __int8)sub_11899B0((const void **)&v18, "n", v4) )
      {
        v13 = j__strlen("D");
        if ( !(unsigned __int8)sub_11899B0((const void **)&v18, "D", v13) )
        {
          v14 = j__strlen("d");
          sub_11899B0((const void **)&v18, "d", v14);
        }
        v5 = 0;
        goto LABEL_5;
      }
    }
    v5 = 1;
LABEL_5:
    v6 = sub_2247880(&v18, 10, v20);
    v7 = 0;
    if ( !v6 )
      v7 = v20[0];
    return sub_2232830(a2, *a1, v7, v5);
  }
  v9 = 1;
  if ( !(unsigned __int8)sub_11899B0((const void **)&v18, "x-", 2u) )
  {
    v9 = 0;
    v11 = j__strlen("X-");
    if ( !(unsigned __int8)sub_11899B0((const void **)&v18, "X-", v11) )
    {
      v12 = j__strlen("x+");
      if ( (unsigned __int8)sub_11899B0((const void **)&v18, "x+", v12)
        || (v15 = j__strlen("x"), (unsigned __int8)sub_11899B0((const void **)&v18, "x", v15)) )
      {
        v9 = 3;
      }
      else
      {
        v16 = j__strlen("X+");
        if ( !(unsigned __int8)sub_11899B0((const void **)&v18, "X+", v16) )
        {
          v17 = j__strlen("X");
          sub_11899B0((const void **)&v18, "X", v17);
        }
        v9 = 2;
      }
    }
  }
  v10 = 0;
  if ( !(unsigned __int8)sub_2247880(&v18, 10, v20) )
    v10 = v20[0];
  if ( (unsigned __int8)sub_2233400(v9) )
    v10 += 2;
  return sub_2232DC0(a2, *a1, v9, v10, 1);
}
