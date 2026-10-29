__int64 (__fastcall **__fastcall sub_305660(_QWORD *a1, const char *a2))(std::exception *this)
{
  size_t v3; // rax
  size_t v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  size_t v7; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rdi
  unsigned int v11; // eax
  unsigned __int64 v12; // rsi
  char *v13; // rdx
  char *v14; // r13
  unsigned int v15; // eax
  unsigned int v16; // eax
  unsigned int v17; // edx
  __int64 v18; // rdi
  _QWORD *v19; // [rsp+0h] [rbp-48h]
  size_t v20; // [rsp+8h] [rbp-40h]
  _QWORD v21[7]; // [rsp+10h] [rbp-38h] BYREF

  v19 = v21;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v3 = strlen(a2);
  v4 = v3;
  if ( v3 > 0xF )
  {
    v9 = operator new(v3 + 1);
    v21[0] = v4;
    v19 = (_QWORD *)v9;
    v10 = (_QWORD *)v9;
  }
  else
  {
    if ( v3 == 1 )
    {
      LOBYTE(v21[0]) = *a2;
      goto LABEL_5;
    }
    if ( !v3 )
    {
LABEL_5:
      v5 = v21;
      goto LABEL_6;
    }
    v10 = v21;
  }
  memcpy(v10, a2, v4);
  v5 = v19;
LABEL_6:
  v20 = v4;
  v6 = a1 + 3;
  *((_BYTE *)v5 + v4) = 0;
  a1[1] = a1 + 3;
  v7 = v20;
  *a1 = off_1C63128;
  if ( v19 == v21 )
  {
    v11 = v7 + 1;
    if ( (unsigned int)(v7 + 1) >= 8 )
    {
      a1[3] = v21[0];
      *(_QWORD *)((char *)v6 + v11 - 8) = *(_QWORD *)((char *)&v21[-1] + v11);
      v12 = (unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFF8LL;
      v13 = (char *)v6 - v12;
      v14 = (char *)((char *)v21 - v13);
      v15 = ((_DWORD)v13 + v11) & 0xFFFFFFF8;
      if ( v15 >= 8 )
      {
        v16 = v15 & 0xFFFFFFF8;
        v17 = 0;
        do
        {
          v18 = v17;
          v17 += 8;
          *(_QWORD *)(v12 + v18) = *(_QWORD *)&v14[v18];
        }
        while ( v17 < v16 );
      }
    }
    else if ( (v11 & 4) != 0 )
    {
      *((_DWORD *)a1 + 6) = v21[0];
      *(_DWORD *)((char *)v6 + v11 - 4) = *(_DWORD *)((char *)&v20 + v11 + 4);
    }
    else if ( (_DWORD)v7 != -1 )
    {
      *((_BYTE *)a1 + 24) = v21[0];
      if ( (v11 & 2) != 0 )
        *(_WORD *)((char *)v6 + v11 - 2) = *(_WORD *)((char *)&v20 + v11 + 6);
    }
  }
  else
  {
    a1[1] = v19;
    a1[3] = v21[0];
  }
  a1[2] = v7;
  *a1 = off_1C64218;
  a1[5] = -1;
  return off_1C64218;
}

