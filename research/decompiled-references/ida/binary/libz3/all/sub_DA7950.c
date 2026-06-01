__int64 (__fastcall **__fastcall sub_DA7950(_QWORD *a1, const char *a2))(std::exception *this)
{
  size_t v3; // rax
  size_t v4; // rbp
  _QWORD *v5; // rax
  _QWORD *v6; // rdx
  size_t v7; // rcx
  _QWORD *v8; // rax
  __int64 v10; // rax
  _QWORD *v11; // rdi
  unsigned int v12; // eax
  unsigned __int64 v13; // rsi
  char *v14; // rdx
  char *v15; // r13
  unsigned int v16; // eax
  unsigned int v17; // eax
  unsigned int v18; // edx
  __int64 v19; // rdi
  _QWORD *v20; // [rsp+0h] [rbp-48h]
  size_t v21; // [rsp+8h] [rbp-40h]
  _QWORD v22[7]; // [rsp+10h] [rbp-38h] BYREF

  v20 = v22;
  if ( !a2 )
    std::__throw_logic_error("basic_string: construction from null is not valid");
  v3 = strlen(a2);
  v4 = v3;
  if ( v3 > 0xF )
  {
    v10 = operator new(v3 + 1);
    v22[0] = v4;
    v20 = (_QWORD *)v10;
    v11 = (_QWORD *)v10;
  }
  else
  {
    if ( v3 == 1 )
    {
      LOBYTE(v22[0]) = *a2;
      goto LABEL_5;
    }
    if ( !v3 )
    {
LABEL_5:
      v5 = v22;
      goto LABEL_6;
    }
    v11 = v22;
  }
  memcpy(v11, a2, v4);
  v5 = v20;
LABEL_6:
  v21 = v4;
  v6 = a1 + 3;
  *((_BYTE *)v5 + v4) = 0;
  v7 = v21;
  *a1 = off_1C63670;
  v8 = v20;
  a1[1] = a1 + 3;
  if ( v8 == v22 )
  {
    v12 = v7 + 1;
    if ( (unsigned int)(v7 + 1) >= 8 )
    {
      a1[3] = v22[0];
      *(_QWORD *)((char *)v6 + v12 - 8) = *(_QWORD *)((char *)&v22[-1] + v12);
      v13 = (unsigned __int64)(a1 + 4) & 0xFFFFFFFFFFFFFFF8LL;
      v14 = (char *)v6 - v13;
      v15 = (char *)((char *)v22 - v14);
      v16 = ((_DWORD)v14 + v12) & 0xFFFFFFF8;
      if ( v16 >= 8 )
      {
        v17 = v16 & 0xFFFFFFF8;
        v18 = 0;
        do
        {
          v19 = v18;
          v18 += 8;
          *(_QWORD *)(v13 + v19) = *(_QWORD *)&v15[v19];
        }
        while ( v18 < v17 );
      }
    }
    else if ( (v12 & 4) != 0 )
    {
      *((_DWORD *)a1 + 6) = v22[0];
      *(_DWORD *)((char *)v6 + v12 - 4) = *(_DWORD *)((char *)&v21 + v12 + 4);
    }
    else if ( (_DWORD)v7 != -1 )
    {
      *((_BYTE *)a1 + 24) = v22[0];
      if ( (v12 & 2) != 0 )
        *(_WORD *)((char *)v6 + v12 - 2) = *(_WORD *)((char *)&v21 + v12 + 6);
    }
  }
  else
  {
    a1[1] = v8;
    a1[3] = v22[0];
  }
  a1[2] = v7;
  *a1 = off_1C75188;
  return off_1C75188;
}

